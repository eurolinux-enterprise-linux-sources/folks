/* command-backends.c generated by valac 0.34.0.3-63fa6, the Vala compiler
 * generated from command-backends.vala, do not modify */

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
 *       Philip Withnall <philip.withnall@collabora.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <folks/folks.h>
#include <stdio.h>
#include <readline/readline.h>


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

#define FOLKS_INSPECT_COMMANDS_TYPE_BACKENDS (folks_inspect_commands_backends_get_type ())
#define FOLKS_INSPECT_COMMANDS_BACKENDS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_INSPECT_COMMANDS_TYPE_BACKENDS, FolksInspectCommandsBackends))
#define FOLKS_INSPECT_COMMANDS_BACKENDS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_INSPECT_COMMANDS_TYPE_BACKENDS, FolksInspectCommandsBackendsClass))
#define FOLKS_INSPECT_COMMANDS_IS_BACKENDS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_INSPECT_COMMANDS_TYPE_BACKENDS))
#define FOLKS_INSPECT_COMMANDS_IS_BACKENDS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_INSPECT_COMMANDS_TYPE_BACKENDS))
#define FOLKS_INSPECT_COMMANDS_BACKENDS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_INSPECT_COMMANDS_TYPE_BACKENDS, FolksInspectCommandsBackendsClass))

typedef struct _FolksInspectCommandsBackends FolksInspectCommandsBackends;
typedef struct _FolksInspectCommandsBackendsClass FolksInspectCommandsBackendsClass;
typedef struct _FolksInspectCommandsBackendsPrivate FolksInspectCommandsBackendsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _folks_inspect_command_unref0(var) ((var == NULL) ? NULL : (var = (folks_inspect_command_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksInspectCommandsBackendsRunData FolksInspectCommandsBackendsRunData;

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

struct _FolksInspectCommandsBackends {
	FolksInspectCommand parent_instance;
	FolksInspectCommandsBackendsPrivate * priv;
};

struct _FolksInspectCommandsBackendsClass {
	FolksInspectCommandClass parent_class;
};

struct _FolksInspectCommandsBackendsRunData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksInspectCommandsBackends* self;
	gchar* command_string;
	gint result;
	const gchar* _tmp0_;
	GeeCollection* backends;
	FolksInspectClient* _tmp1_;
	FolksBackendStore* _tmp2_;
	FolksBackendStore* _tmp3_;
	GeeCollection* _tmp4_;
	GeeCollection* _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	GeeIterator* _backend_it;
	GeeCollection* _tmp8_;
	GeeIterator* _tmp9_;
	GeeIterator* _tmp10_;
	gboolean _tmp11_;
	FolksBackend* backend;
	GeeIterator* _tmp12_;
	gpointer _tmp13_;
	FolksBackend* _tmp14_;
	const gchar* _tmp15_;
	const gchar* _tmp16_;
	FolksBackend* _vala1_backend;
	FolksInspectClient* _tmp17_;
	FolksBackendStore* _tmp18_;
	FolksBackendStore* _tmp19_;
	const gchar* _tmp20_;
	FolksBackend* _tmp21_;
	FolksBackend* _tmp22_;
	const gchar* _tmp23_;
	FolksBackend* _tmp24_;
	const gchar* _tmp25_;
	const gchar* _tmp26_;
	FolksBackend* _tmp27_;
	GeeMap* _tmp28_;
	GeeMap* _tmp29_;
	gint _tmp30_;
	gint _tmp31_;
	GeeIterator* _store_it;
	FolksBackend* _tmp32_;
	GeeMap* _tmp33_;
	GeeMap* _tmp34_;
	GeeCollection* _tmp35_;
	GeeCollection* _tmp36_;
	GeeCollection* _tmp37_;
	GeeIterator* _tmp38_;
	GeeIterator* _tmp39_;
	GeeIterator* _tmp40_;
	gboolean _tmp41_;
	FolksPersonaStore* store;
	GeeIterator* _tmp42_;
	gpointer _tmp43_;
	FolksPersonaStore* _tmp44_;
	const gchar* _tmp45_;
	const gchar* _tmp46_;
	FolksPersonaStore* _tmp47_;
	const gchar* _tmp48_;
	const gchar* _tmp49_;
	FolksPersonaStore* _tmp50_;
	const gchar* _tmp51_;
	const gchar* _tmp52_;
};


static gpointer folks_inspect_commands_backends_parent_class = NULL;

gpointer folks_inspect_command_ref (gpointer instance);
void folks_inspect_command_unref (gpointer instance);
GParamSpec* folks_inspect_param_spec_command (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void folks_inspect_value_set_command (GValue* value, gpointer v_object);
void folks_inspect_value_take_command (GValue* value, gpointer v_object);
gpointer folks_inspect_value_get_command (const GValue* value);
GType folks_inspect_command_get_type (void) G_GNUC_CONST;
GType folks_inspect_client_get_type (void) G_GNUC_CONST;
GType folks_inspect_commands_backends_get_type (void) G_GNUC_CONST;
enum  {
	FOLKS_INSPECT_COMMANDS_BACKENDS_DUMMY_PROPERTY
};
FolksInspectCommandsBackends* folks_inspect_commands_backends_new (FolksInspectClient* client);
FolksInspectCommandsBackends* folks_inspect_commands_backends_construct (GType object_type, FolksInspectClient* client);
FolksInspectCommand* folks_inspect_command_construct (GType object_type, FolksInspectClient* client);
static void folks_inspect_commands_backends_real_run_data_free (gpointer _data);
static void folks_inspect_commands_backends_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_inspect_commands_backends_real_run_co (FolksInspectCommandsBackendsRunData* _data_);
FolksBackendStore* folks_inspect_client_get_backend_store (FolksInspectClient* self);
void folks_inspect_utils_print_line (const gchar* format, ...);
void folks_inspect_utils_indent (void);
void folks_inspect_utils_unindent (void);
static gchar** folks_inspect_commands_backends_real_complete_subcommand (FolksInspectCommand* base, const gchar* subcommand, int* result_length1);
gchar* folks_inspect_utils_backend_name_completion_cb (const gchar* word, gint state);
static gchar* _folks_inspect_utils_backend_name_completion_cb_rl_compentry_func_t (const gchar* str, gint a);
static gchar** _vala_array_dup1 (gchar** self, int length);
static gint _vala_array_length (gpointer array);


FolksInspectCommandsBackends* folks_inspect_commands_backends_construct (GType object_type, FolksInspectClient* client) {
	FolksInspectCommandsBackends* self = NULL;
	FolksInspectClient* _tmp0_ = NULL;
	g_return_val_if_fail (client != NULL, NULL);
	_tmp0_ = client;
	self = (FolksInspectCommandsBackends*) folks_inspect_command_construct (object_type, _tmp0_);
	return self;
}


FolksInspectCommandsBackends* folks_inspect_commands_backends_new (FolksInspectClient* client) {
	return folks_inspect_commands_backends_construct (FOLKS_INSPECT_COMMANDS_TYPE_BACKENDS, client);
}


static void folks_inspect_commands_backends_real_run_data_free (gpointer _data) {
	FolksInspectCommandsBackendsRunData* _data_;
	_data_ = _data;
	_g_free0 (_data_->command_string);
	_folks_inspect_command_unref0 (_data_->self);
	g_slice_free (FolksInspectCommandsBackendsRunData, _data_);
}


static gpointer _folks_inspect_command_ref0 (gpointer self) {
	return self ? folks_inspect_command_ref (self) : NULL;
}


static void folks_inspect_commands_backends_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksInspectCommandsBackends * self;
	FolksInspectCommandsBackendsRunData* _data_;
	FolksInspectCommandsBackends* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	self = (FolksInspectCommandsBackends*) base;
	_data_ = g_slice_new0 (FolksInspectCommandsBackendsRunData);
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, folks_inspect_commands_backends_real_run);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_inspect_commands_backends_real_run_data_free);
	_tmp0_ = _folks_inspect_command_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = command_string;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->command_string);
	_data_->command_string = _tmp2_;
	folks_inspect_commands_backends_real_run_co (_data_);
}


static gint folks_inspect_commands_backends_real_run_finish (FolksInspectCommand* base, GAsyncResult* _res_) {
	gint result;
	FolksInspectCommandsBackendsRunData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	return result;
}


static gboolean folks_inspect_commands_backends_real_run_co (FolksInspectCommandsBackendsRunData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _data_->command_string;
	if (_data_->_tmp0_ == NULL) {
		_data_->_tmp1_ = NULL;
		_data_->_tmp1_ = ((FolksInspectCommand*) _data_->self)->client;
		_data_->_tmp2_ = NULL;
		_data_->_tmp2_ = folks_inspect_client_get_backend_store (_data_->_tmp1_);
		_data_->_tmp3_ = NULL;
		_data_->_tmp3_ = _data_->_tmp2_;
		_data_->_tmp4_ = NULL;
		_data_->_tmp4_ = folks_backend_store_list_backends (_data_->_tmp3_);
		_data_->backends = _data_->_tmp4_;
		_data_->_tmp5_ = NULL;
		_data_->_tmp5_ = _data_->backends;
		_data_->_tmp6_ = 0;
		_data_->_tmp6_ = gee_collection_get_size (_data_->_tmp5_);
		_data_->_tmp7_ = 0;
		_data_->_tmp7_ = _data_->_tmp6_;
		folks_inspect_utils_print_line ("%u backends:", (guint) _data_->_tmp7_);
		folks_inspect_utils_indent ();
		{
			_data_->_tmp8_ = NULL;
			_data_->_tmp8_ = _data_->backends;
			_data_->_tmp9_ = NULL;
			_data_->_tmp9_ = gee_iterable_iterator ((GeeIterable*) _data_->_tmp8_);
			_data_->_backend_it = _data_->_tmp9_;
			while (TRUE) {
				_data_->_tmp10_ = NULL;
				_data_->_tmp10_ = _data_->_backend_it;
				_data_->_tmp11_ = FALSE;
				_data_->_tmp11_ = gee_iterator_next (_data_->_tmp10_);
				if (!_data_->_tmp11_) {
					break;
				}
				_data_->_tmp12_ = NULL;
				_data_->_tmp12_ = _data_->_backend_it;
				_data_->_tmp13_ = NULL;
				_data_->_tmp13_ = gee_iterator_get (_data_->_tmp12_);
				_data_->backend = (FolksBackend*) _data_->_tmp13_;
				_data_->_tmp14_ = NULL;
				_data_->_tmp14_ = _data_->backend;
				_data_->_tmp15_ = NULL;
				_data_->_tmp15_ = folks_backend_get_name (_data_->_tmp14_);
				_data_->_tmp16_ = NULL;
				_data_->_tmp16_ = _data_->_tmp15_;
				folks_inspect_utils_print_line ("%s", _data_->_tmp16_);
				_g_object_unref0 (_data_->backend);
			}
			_g_object_unref0 (_data_->_backend_it);
		}
		folks_inspect_utils_unindent ();
		_g_object_unref0 (_data_->backends);
	} else {
		_data_->_tmp17_ = NULL;
		_data_->_tmp17_ = ((FolksInspectCommand*) _data_->self)->client;
		_data_->_tmp18_ = NULL;
		_data_->_tmp18_ = folks_inspect_client_get_backend_store (_data_->_tmp17_);
		_data_->_tmp19_ = NULL;
		_data_->_tmp19_ = _data_->_tmp18_;
		_data_->_tmp20_ = NULL;
		_data_->_tmp20_ = _data_->command_string;
		_data_->_tmp21_ = NULL;
		_data_->_tmp21_ = folks_backend_store_dup_backend_by_name (_data_->_tmp19_, _data_->_tmp20_);
		_data_->_vala1_backend = _data_->_tmp21_;
		_data_->_tmp22_ = NULL;
		_data_->_tmp22_ = _data_->_vala1_backend;
		if (_data_->_tmp22_ == NULL) {
			_data_->_tmp23_ = NULL;
			_data_->_tmp23_ = _data_->command_string;
			folks_inspect_utils_print_line ("Unrecognised backend name '%s'.", _data_->_tmp23_);
			_data_->result = 1;
			_g_object_unref0 (_data_->_vala1_backend);
			if (_data_->_state_ == 0) {
				g_simple_async_result_complete_in_idle (_data_->_async_result);
			} else {
				g_simple_async_result_complete (_data_->_async_result);
			}
			g_object_unref (_data_->_async_result);
			return FALSE;
		}
		_data_->_tmp24_ = NULL;
		_data_->_tmp24_ = _data_->_vala1_backend;
		_data_->_tmp25_ = NULL;
		_data_->_tmp25_ = folks_backend_get_name (_data_->_tmp24_);
		_data_->_tmp26_ = NULL;
		_data_->_tmp26_ = _data_->_tmp25_;
		_data_->_tmp27_ = NULL;
		_data_->_tmp27_ = _data_->_vala1_backend;
		_data_->_tmp28_ = NULL;
		_data_->_tmp28_ = folks_backend_get_persona_stores (_data_->_tmp27_);
		_data_->_tmp29_ = NULL;
		_data_->_tmp29_ = _data_->_tmp28_;
		_data_->_tmp30_ = 0;
		_data_->_tmp30_ = gee_map_get_size (_data_->_tmp29_);
		_data_->_tmp31_ = 0;
		_data_->_tmp31_ = _data_->_tmp30_;
		folks_inspect_utils_print_line ("Backend '%s' with %u persona stores " "(type ID, ID ('display name')):", _data_->_tmp26_, _data_->_tmp31_);
		folks_inspect_utils_indent ();
		{
			_data_->_tmp32_ = NULL;
			_data_->_tmp32_ = _data_->_vala1_backend;
			_data_->_tmp33_ = NULL;
			_data_->_tmp33_ = folks_backend_get_persona_stores (_data_->_tmp32_);
			_data_->_tmp34_ = NULL;
			_data_->_tmp34_ = _data_->_tmp33_;
			_data_->_tmp35_ = NULL;
			_data_->_tmp35_ = gee_map_get_values (_data_->_tmp34_);
			_data_->_tmp36_ = NULL;
			_data_->_tmp36_ = _data_->_tmp35_;
			_data_->_tmp37_ = NULL;
			_data_->_tmp37_ = _data_->_tmp36_;
			_data_->_tmp38_ = NULL;
			_data_->_tmp38_ = gee_iterable_iterator ((GeeIterable*) _data_->_tmp37_);
			_data_->_tmp39_ = NULL;
			_data_->_tmp39_ = _data_->_tmp38_;
			_g_object_unref0 (_data_->_tmp37_);
			_data_->_store_it = _data_->_tmp39_;
			while (TRUE) {
				_data_->_tmp40_ = NULL;
				_data_->_tmp40_ = _data_->_store_it;
				_data_->_tmp41_ = FALSE;
				_data_->_tmp41_ = gee_iterator_next (_data_->_tmp40_);
				if (!_data_->_tmp41_) {
					break;
				}
				_data_->_tmp42_ = NULL;
				_data_->_tmp42_ = _data_->_store_it;
				_data_->_tmp43_ = NULL;
				_data_->_tmp43_ = gee_iterator_get (_data_->_tmp42_);
				_data_->store = (FolksPersonaStore*) _data_->_tmp43_;
				_data_->_tmp44_ = NULL;
				_data_->_tmp44_ = _data_->store;
				_data_->_tmp45_ = NULL;
				_data_->_tmp45_ = folks_persona_store_get_type_id (_data_->_tmp44_);
				_data_->_tmp46_ = NULL;
				_data_->_tmp46_ = _data_->_tmp45_;
				_data_->_tmp47_ = NULL;
				_data_->_tmp47_ = _data_->store;
				_data_->_tmp48_ = NULL;
				_data_->_tmp48_ = folks_persona_store_get_id (_data_->_tmp47_);
				_data_->_tmp49_ = NULL;
				_data_->_tmp49_ = _data_->_tmp48_;
				_data_->_tmp50_ = NULL;
				_data_->_tmp50_ = _data_->store;
				_data_->_tmp51_ = NULL;
				_data_->_tmp51_ = folks_persona_store_get_display_name (_data_->_tmp50_);
				_data_->_tmp52_ = NULL;
				_data_->_tmp52_ = _data_->_tmp51_;
				folks_inspect_utils_print_line ("%s, %s ('%s')", _data_->_tmp46_, _data_->_tmp49_, _data_->_tmp52_);
				_g_object_unref0 (_data_->store);
			}
			_g_object_unref0 (_data_->_store_it);
		}
		folks_inspect_utils_unindent ();
		_g_object_unref0 (_data_->_vala1_backend);
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


static gchar* _folks_inspect_utils_backend_name_completion_cb_rl_compentry_func_t (const gchar* str, gint a) {
	gchar* result;
	result = folks_inspect_utils_backend_name_completion_cb (str, a);
	return result;
}


static gchar** _vala_array_dup1 (gchar** self, int length) {
	gchar** result;
	int i;
	result = g_new0 (gchar*, length + 1);
	for (i = 0; i < length; i++) {
		gchar* _tmp0_ = NULL;
		_tmp0_ = g_strdup (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


static gchar** folks_inspect_commands_backends_real_complete_subcommand (FolksInspectCommand* base, const gchar* subcommand, int* result_length1) {
	FolksInspectCommandsBackends * self;
	gchar** result = NULL;
	const gchar* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	gchar** _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
	self = (FolksInspectCommandsBackends*) base;
	g_return_val_if_fail (subcommand != NULL, NULL);
	_tmp0_ = subcommand;
	_tmp2_ = _tmp1_ = rl_completion_matches (_tmp0_, _folks_inspect_utils_backend_name_completion_cb_rl_compentry_func_t);
	_tmp3_ = (_tmp2_ != NULL) ? _vala_array_dup1 (_tmp2_, _vala_array_length (_tmp1_)) : ((gpointer) _tmp2_);
	_tmp3__length1 = _vala_array_length (_tmp1_);
	_tmp4_ = _tmp3_;
	_tmp4__length1 = _tmp3__length1;
	if (result_length1) {
		*result_length1 = _tmp4__length1;
	}
	result = _tmp4_;
	return result;
}


static const gchar* folks_inspect_commands_backends_real_get_name (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsBackends* self;
	self = (FolksInspectCommandsBackends*) base;
	result = "backends";
	return result;
}


static const gchar* folks_inspect_commands_backends_real_get_description (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsBackends* self;
	self = (FolksInspectCommandsBackends*) base;
	result = "Inspect the backends loaded by the aggregator.";
	return result;
}


static const gchar* folks_inspect_commands_backends_real_get_help (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsBackends* self;
	self = (FolksInspectCommandsBackends*) base;
	result = "backends                   List all known backends.\n" "backends [backend name]    Display the details of the " "specified backend and list its persona stores.";
	return result;
}


static void folks_inspect_commands_backends_class_init (FolksInspectCommandsBackendsClass * klass) {
	folks_inspect_commands_backends_parent_class = g_type_class_peek_parent (klass);
	((FolksInspectCommandClass *) klass)->run = folks_inspect_commands_backends_real_run;
	((FolksInspectCommandClass *) klass)->run_finish = folks_inspect_commands_backends_real_run_finish;
	((FolksInspectCommandClass *) klass)->complete_subcommand = folks_inspect_commands_backends_real_complete_subcommand;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_name = folks_inspect_commands_backends_real_get_name;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_description = folks_inspect_commands_backends_real_get_description;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_help = folks_inspect_commands_backends_real_get_help;
}


static void folks_inspect_commands_backends_instance_init (FolksInspectCommandsBackends * self) {
}


GType folks_inspect_commands_backends_get_type (void) {
	static volatile gsize folks_inspect_commands_backends_type_id__volatile = 0;
	if (g_once_init_enter (&folks_inspect_commands_backends_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksInspectCommandsBackendsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_inspect_commands_backends_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksInspectCommandsBackends), 0, (GInstanceInitFunc) folks_inspect_commands_backends_instance_init, NULL };
		GType folks_inspect_commands_backends_type_id;
		folks_inspect_commands_backends_type_id = g_type_register_static (FOLKS_INSPECT_TYPE_COMMAND, "FolksInspectCommandsBackends", &g_define_type_info, 0);
		g_once_init_leave (&folks_inspect_commands_backends_type_id__volatile, folks_inspect_commands_backends_type_id);
	}
	return folks_inspect_commands_backends_type_id__volatile;
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



