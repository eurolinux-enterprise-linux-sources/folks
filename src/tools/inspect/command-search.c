/* command-search.c generated by valac 0.35.3.10-6b27, the Vala compiler
 * generated from command-search.vala, do not modify */

/*
 * Copyright (C) 2010 Collabora Ltd.
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *       Alvaro Soliverez <alvaro.soliverez@collabora.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <folks/folks.h>
#include <gee.h>


#define FOLKS_INSPECT_TYPE_COMMAND (folks_inspect_command_get_type ())
#define FOLKS_INSPECT_COMMAND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_INSPECT_TYPE_COMMAND, FolksInspectCommand))
#define FOLKS_INSPECT_COMMAND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_INSPECT_TYPE_COMMAND, FolksInspectCommandClass))
#define FOLKS_INSPECT_IS_COMMAND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_INSPECT_TYPE_COMMAND))
#define FOLKS_INSPECT_IS_COMMAND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_INSPECT_TYPE_COMMAND))
#define FOLKS_INSPECT_COMMAND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_INSPECT_TYPE_COMMAND, FolksInspectCommandClass))

typedef struct _FolksInspectCommand FolksInspectCommand;
typedef struct _FolksInspectCommandClass FolksInspectCommandClass;
typedef struct _FolksInspectCommandPrivate FolksInspectCommandPrivate;

#define FOLKS_INSPECT_TYPE_CLIENT (folks_inspect_client_get_type ())
#define FOLKS_INSPECT_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_INSPECT_TYPE_CLIENT, FolksInspectClient))
#define FOLKS_INSPECT_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_INSPECT_TYPE_CLIENT, FolksInspectClientClass))
#define FOLKS_INSPECT_IS_CLIENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_INSPECT_TYPE_CLIENT))
#define FOLKS_INSPECT_IS_CLIENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_INSPECT_TYPE_CLIENT))
#define FOLKS_INSPECT_CLIENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_INSPECT_TYPE_CLIENT, FolksInspectClientClass))

typedef struct _FolksInspectClient FolksInspectClient;
typedef struct _FolksInspectClientClass FolksInspectClientClass;

#define FOLKS_INSPECT_COMMANDS_TYPE_SEARCH (folks_inspect_commands_search_get_type ())
#define FOLKS_INSPECT_COMMANDS_SEARCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_INSPECT_COMMANDS_TYPE_SEARCH, FolksInspectCommandsSearch))
#define FOLKS_INSPECT_COMMANDS_SEARCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_INSPECT_COMMANDS_TYPE_SEARCH, FolksInspectCommandsSearchClass))
#define FOLKS_INSPECT_COMMANDS_IS_SEARCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_INSPECT_COMMANDS_TYPE_SEARCH))
#define FOLKS_INSPECT_COMMANDS_IS_SEARCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_INSPECT_COMMANDS_TYPE_SEARCH))
#define FOLKS_INSPECT_COMMANDS_SEARCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_INSPECT_COMMANDS_TYPE_SEARCH, FolksInspectCommandsSearchClass))

typedef struct _FolksInspectCommandsSearch FolksInspectCommandsSearch;
typedef struct _FolksInspectCommandsSearchClass FolksInspectCommandsSearchClass;
typedef struct _FolksInspectCommandsSearchPrivate FolksInspectCommandsSearchPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _folks_inspect_command_unref0(var) ((var == NULL) ? NULL : (var = (folks_inspect_command_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksInspectCommandsSearchRunData FolksInspectCommandsSearchRunData;

struct _FolksInspectCommand {
	GTypeInstance parent_instance;
	volatile int ref_count;
	FolksInspectCommandPrivate * priv;
	FolksInspectClient* client;
};

struct _FolksInspectCommandClass {
	GTypeClass parent_class;
	void (*finalize) (FolksInspectCommand *self);
	void (*run) (FolksInspectCommand* self, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_);
	gint (*run_finish) (FolksInspectCommand* self, GAsyncResult* _res_);
	gchar** (*complete_subcommand) (FolksInspectCommand* self, const gchar* subcommand, int* result_length1);
	const gchar* (*get_name) (FolksInspectCommand* self);
	const gchar* (*get_description) (FolksInspectCommand* self);
	const gchar* (*get_help) (FolksInspectCommand* self);
};

struct _FolksInspectCommandsSearch {
	FolksInspectCommand parent_instance;
	FolksInspectCommandsSearchPrivate * priv;
};

struct _FolksInspectCommandsSearchClass {
	FolksInspectCommandClass parent_class;
};

struct _FolksInspectCommandsSearchRunData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksInspectCommandsSearch* self;
	gchar* command_string;
	gint result;
	const gchar* _tmp0_;
	FolksSimpleQuery* query;
	const gchar* _tmp1_;
	FolksSimpleQuery* _tmp2_;
	FolksSearchView* search_view;
	FolksInspectClient* _tmp3_;
	FolksIndividualAggregator* _tmp4_;
	FolksIndividualAggregator* _tmp5_;
	FolksSimpleQuery* _tmp6_;
	FolksSearchView* _tmp7_;
	FolksSearchView* _tmp8_;
	GError* e;
	GError* _tmp9_;
	const gchar* _tmp10_;
	GeeIterator* _individual_it;
	FolksSearchView* _tmp11_;
	GeeSortedSet* _tmp12_;
	GeeSortedSet* _tmp13_;
	GeeIterator* _tmp14_;
	GeeIterator* _tmp15_;
	gboolean _tmp16_;
	FolksIndividual* individual;
	GeeIterator* _tmp17_;
	gpointer _tmp18_;
	FolksIndividual* _tmp19_;
	const gchar* _tmp20_;
	const gchar* _tmp21_;
	FolksIndividual* _tmp22_;
	const gchar* _tmp23_;
	const gchar* _tmp24_;
	GError * _inner_error_;
};


static gpointer folks_inspect_commands_search_parent_class = NULL;

gpointer folks_inspect_command_ref (gpointer instance);
void folks_inspect_command_unref (gpointer instance);
GParamSpec* folks_inspect_param_spec_command (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void folks_inspect_value_set_command (GValue* value, gpointer v_object);
void folks_inspect_value_take_command (GValue* value, gpointer v_object);
gpointer folks_inspect_value_get_command (const GValue* value);
GType folks_inspect_command_get_type (void) G_GNUC_CONST;
GType folks_inspect_client_get_type (void) G_GNUC_CONST;
GType folks_inspect_commands_search_get_type (void) G_GNUC_CONST;
enum  {
	FOLKS_INSPECT_COMMANDS_SEARCH_DUMMY_PROPERTY
};
FolksInspectCommandsSearch* folks_inspect_commands_search_new (FolksInspectClient* client);
FolksInspectCommandsSearch* folks_inspect_commands_search_construct (GType object_type, FolksInspectClient* client);
FolksInspectCommand* folks_inspect_command_construct (GType object_type, FolksInspectClient* client);
static void folks_inspect_commands_search_real_run_data_free (gpointer _data);
static void folks_inspect_commands_search_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_inspect_commands_search_real_run_co (FolksInspectCommandsSearchRunData* _data_);
void folks_inspect_utils_print_line (const gchar* format, ...) G_GNUC_PRINTF(1,2);
FolksIndividualAggregator* folks_inspect_client_get_aggregator (FolksInspectClient* self);
static void folks_inspect_commands_search_run_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);


FolksInspectCommandsSearch* folks_inspect_commands_search_construct (GType object_type, FolksInspectClient* client) {
	FolksInspectCommandsSearch* self = NULL;
	FolksInspectClient* _tmp0_;
	g_return_val_if_fail (client != NULL, NULL);
	_tmp0_ = client;
	self = (FolksInspectCommandsSearch*) folks_inspect_command_construct (object_type, _tmp0_);
	return self;
}


FolksInspectCommandsSearch* folks_inspect_commands_search_new (FolksInspectClient* client) {
	return folks_inspect_commands_search_construct (FOLKS_INSPECT_COMMANDS_TYPE_SEARCH, client);
}


static void folks_inspect_commands_search_real_run_data_free (gpointer _data) {
	FolksInspectCommandsSearchRunData* _data_;
	_data_ = _data;
	_g_free0 (_data_->command_string);
	_folks_inspect_command_unref0 (_data_->self);
	g_slice_free (FolksInspectCommandsSearchRunData, _data_);
}


static gpointer _folks_inspect_command_ref0 (gpointer self) {
	return self ? folks_inspect_command_ref (self) : NULL;
}


static void folks_inspect_commands_search_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksInspectCommandsSearch * self;
	FolksInspectCommandsSearchRunData* _data_;
	FolksInspectCommandsSearch* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	self = (FolksInspectCommandsSearch*) base;
	_data_ = g_slice_new0 (FolksInspectCommandsSearchRunData);
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, folks_inspect_commands_search_real_run);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_inspect_commands_search_real_run_data_free);
	_tmp0_ = _folks_inspect_command_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = command_string;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->command_string);
	_data_->command_string = _tmp2_;
	folks_inspect_commands_search_real_run_co (_data_);
}


static gint folks_inspect_commands_search_real_run_finish (FolksInspectCommand* base, GAsyncResult* _res_) {
	gint result;
	FolksInspectCommandsSearchRunData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	return result;
}


static void folks_inspect_commands_search_run_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	FolksInspectCommandsSearchRunData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	folks_inspect_commands_search_real_run_co (_data_);
}


static gboolean folks_inspect_commands_search_real_run_co (FolksInspectCommandsSearchRunData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = _data_->command_string;
	if (_data_->_tmp0_ == NULL) {
		folks_inspect_utils_print_line ("Please enter a search string");
	} else {
		_data_->_tmp1_ = _data_->command_string;
		_data_->_tmp2_ = folks_simple_query_new (_data_->_tmp1_, FOLKS_QUERY_MATCH_FIELDS_NAMES, G_N_ELEMENTS (FOLKS_QUERY_MATCH_FIELDS_NAMES));
		_data_->query = _data_->_tmp2_;
		_data_->_tmp3_ = ((FolksInspectCommand*) _data_->self)->client;
		_data_->_tmp4_ = folks_inspect_client_get_aggregator (_data_->_tmp3_);
		_data_->_tmp5_ = _data_->_tmp4_;
		_data_->_tmp6_ = _data_->query;
		_data_->_tmp7_ = folks_search_view_new (_data_->_tmp5_, (FolksQuery*) _data_->_tmp6_);
		_data_->search_view = _data_->_tmp7_;
		{
			_data_->_tmp8_ = _data_->search_view;
			_data_->_state_ = 1;
			folks_search_view_prepare (_data_->_tmp8_, folks_inspect_commands_search_run_ready, _data_);
			return FALSE;
			_state_1:
			folks_search_view_prepare_finish (_data_->_tmp8_, _data_->_res_, &_data_->_inner_error_);
			if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
				goto __catch2_g_error;
			}
		}
		goto __finally2;
		__catch2_g_error:
		{
			_data_->e = _data_->_inner_error_;
			_data_->_inner_error_ = NULL;
			_data_->_tmp9_ = _data_->e;
			_data_->_tmp10_ = _data_->_tmp9_->message;
			g_warning ("command-search.vala:73: Error when calling prepare: %s", _data_->_tmp10_);
			_g_error_free0 (_data_->e);
		}
		__finally2:
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
			_g_object_unref0 (_data_->search_view);
			_g_object_unref0 (_data_->query);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
			g_clear_error (&_data_->_inner_error_);
			return FALSE;
		}
		{
			_data_->_tmp11_ = _data_->search_view;
			_data_->_tmp12_ = folks_search_view_get_individuals (_data_->_tmp11_);
			_data_->_tmp13_ = _data_->_tmp12_;
			_data_->_tmp14_ = gee_iterable_iterator ((GeeIterable*) _data_->_tmp13_);
			_data_->_individual_it = _data_->_tmp14_;
			while (TRUE) {
				_data_->_tmp15_ = _data_->_individual_it;
				_data_->_tmp16_ = gee_iterator_next (_data_->_tmp15_);
				if (!_data_->_tmp16_) {
					break;
				}
				_data_->_tmp17_ = _data_->_individual_it;
				_data_->_tmp18_ = gee_iterator_get (_data_->_tmp17_);
				_data_->individual = (FolksIndividual*) _data_->_tmp18_;
				_data_->_tmp19_ = _data_->individual;
				_data_->_tmp20_ = folks_individual_get_id (_data_->_tmp19_);
				_data_->_tmp21_ = _data_->_tmp20_;
				_data_->_tmp22_ = _data_->individual;
				_data_->_tmp23_ = folks_individual_get_display_name (_data_->_tmp22_);
				_data_->_tmp24_ = _data_->_tmp23_;
				folks_inspect_utils_print_line ("%s  %s", _data_->_tmp21_, _data_->_tmp24_);
				_g_object_unref0 (_data_->individual);
			}
			_g_object_unref0 (_data_->_individual_it);
		}
		_g_object_unref0 (_data_->search_view);
		_g_object_unref0 (_data_->query);
	}
	_data_->result = 0;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static const gchar* folks_inspect_commands_search_real_get_name (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsSearch* self;
	self = (FolksInspectCommandsSearch*) base;
	result = "search";
	return result;
}


static const gchar* folks_inspect_commands_search_real_get_description (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsSearch* self;
	self = (FolksInspectCommandsSearch*) base;
	result = "Search the individuals currently present in the aggregator";
	return result;
}


static const gchar* folks_inspect_commands_search_real_get_help (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsSearch* self;
	self = (FolksInspectCommandsSearch*) base;
	result = "search [string]             Search the name fields of " "the known individuals for the given string";
	return result;
}


static void folks_inspect_commands_search_class_init (FolksInspectCommandsSearchClass * klass) {
	folks_inspect_commands_search_parent_class = g_type_class_peek_parent (klass);
	((FolksInspectCommandClass *) klass)->run = folks_inspect_commands_search_real_run;
	((FolksInspectCommandClass *) klass)->run_finish = folks_inspect_commands_search_real_run_finish;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_name = folks_inspect_commands_search_real_get_name;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_description = folks_inspect_commands_search_real_get_description;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_help = folks_inspect_commands_search_real_get_help;
}


static void folks_inspect_commands_search_instance_init (FolksInspectCommandsSearch * self) {
}


GType folks_inspect_commands_search_get_type (void) {
	static volatile gsize folks_inspect_commands_search_type_id__volatile = 0;
	if (g_once_init_enter (&folks_inspect_commands_search_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksInspectCommandsSearchClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_inspect_commands_search_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksInspectCommandsSearch), 0, (GInstanceInitFunc) folks_inspect_commands_search_instance_init, NULL };
		GType folks_inspect_commands_search_type_id;
		folks_inspect_commands_search_type_id = g_type_register_static (FOLKS_INSPECT_TYPE_COMMAND, "FolksInspectCommandsSearch", &g_define_type_info, 0);
		g_once_init_leave (&folks_inspect_commands_search_type_id__volatile, folks_inspect_commands_search_type_id);
	}
	return folks_inspect_commands_search_type_id__volatile;
}



