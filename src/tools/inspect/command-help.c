/* command-help.c generated by valac 0.34.0.3-63fa6, the Vala compiler
 * generated from command-help.vala, do not modify */

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

#define FOLKS_INSPECT_COMMANDS_TYPE_HELP (folks_inspect_commands_help_get_type ())
#define FOLKS_INSPECT_COMMANDS_HELP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_INSPECT_COMMANDS_TYPE_HELP, FolksInspectCommandsHelp))
#define FOLKS_INSPECT_COMMANDS_HELP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_INSPECT_COMMANDS_TYPE_HELP, FolksInspectCommandsHelpClass))
#define FOLKS_INSPECT_COMMANDS_IS_HELP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_INSPECT_COMMANDS_TYPE_HELP))
#define FOLKS_INSPECT_COMMANDS_IS_HELP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_INSPECT_COMMANDS_TYPE_HELP))
#define FOLKS_INSPECT_COMMANDS_HELP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_INSPECT_COMMANDS_TYPE_HELP, FolksInspectCommandsHelpClass))

typedef struct _FolksInspectCommandsHelp FolksInspectCommandsHelp;
typedef struct _FolksInspectCommandsHelpClass FolksInspectCommandsHelpClass;
typedef struct _FolksInspectCommandsHelpPrivate FolksInspectCommandsHelpPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _folks_inspect_command_unref0(var) ((var == NULL) ? NULL : (var = (folks_inspect_command_unref (var), NULL)))
typedef struct _FolksInspectClientPrivate FolksInspectClientPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksInspectCommandsHelpRunData FolksInspectCommandsHelpRunData;

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

struct _FolksInspectCommandsHelp {
	FolksInspectCommand parent_instance;
	FolksInspectCommandsHelpPrivate * priv;
};

struct _FolksInspectCommandsHelpClass {
	FolksInspectCommandClass parent_class;
};

struct _FolksInspectClient {
	GObject parent_instance;
	FolksInspectClientPrivate * priv;
	GeeHashMap* commands;
};

struct _FolksInspectClientClass {
	GObjectClass parent_class;
};

struct _FolksInspectCommandsHelpRunData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksInspectCommandsHelp* self;
	gchar* command_string;
	gint result;
	const gchar* _tmp0_;
	GeeMapIterator* iter;
	FolksInspectClient* _tmp1_;
	GeeHashMap* _tmp2_;
	GeeMapIterator* _tmp3_;
	GeeMapIterator* _tmp4_;
	gboolean _tmp5_;
	GeeMapIterator* _tmp6_;
	gpointer _tmp7_;
	gchar* _tmp8_;
	GeeMapIterator* _tmp9_;
	gpointer _tmp10_;
	FolksInspectCommand* _tmp11_;
	const gchar* _tmp12_;
	const gchar* _tmp13_;
	FolksInspectCommand* command;
	FolksInspectClient* _tmp14_;
	GeeHashMap* _tmp15_;
	const gchar* _tmp16_;
	gpointer _tmp17_;
	FolksInspectCommand* _tmp18_;
	const gchar* _tmp19_;
	FolksInspectCommand* _tmp20_;
	const gchar* _tmp21_;
	const gchar* _tmp22_;
};


static gpointer folks_inspect_commands_help_parent_class = NULL;

gpointer folks_inspect_command_ref (gpointer instance);
void folks_inspect_command_unref (gpointer instance);
GParamSpec* folks_inspect_param_spec_command (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void folks_inspect_value_set_command (GValue* value, gpointer v_object);
void folks_inspect_value_take_command (GValue* value, gpointer v_object);
gpointer folks_inspect_value_get_command (const GValue* value);
GType folks_inspect_command_get_type (void) G_GNUC_CONST;
GType folks_inspect_client_get_type (void) G_GNUC_CONST;
GType folks_inspect_commands_help_get_type (void) G_GNUC_CONST;
enum  {
	FOLKS_INSPECT_COMMANDS_HELP_DUMMY_PROPERTY
};
FolksInspectCommandsHelp* folks_inspect_commands_help_new (FolksInspectClient* client);
FolksInspectCommandsHelp* folks_inspect_commands_help_construct (GType object_type, FolksInspectClient* client);
FolksInspectCommand* folks_inspect_command_construct (GType object_type, FolksInspectClient* client);
static void folks_inspect_commands_help_real_run_data_free (gpointer _data);
static void folks_inspect_commands_help_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_inspect_commands_help_real_run_co (FolksInspectCommandsHelpRunData* _data_);
void folks_inspect_utils_print_line (const gchar* format, ...);
void folks_inspect_utils_indent (void);
const gchar* folks_inspect_command_get_description (FolksInspectCommand* self);
void folks_inspect_utils_unindent (void);
const gchar* folks_inspect_command_get_help (FolksInspectCommand* self);
static gchar** folks_inspect_commands_help_real_complete_subcommand (FolksInspectCommand* base, const gchar* subcommand, int* result_length1);
gchar* folks_inspect_utils_command_name_completion_cb (const gchar* word, gint state);
static gchar* _folks_inspect_utils_command_name_completion_cb_rl_compentry_func_t (const gchar* str, gint a);
static gchar** _vala_array_dup2 (gchar** self, int length);
static gint _vala_array_length (gpointer array);


FolksInspectCommandsHelp* folks_inspect_commands_help_construct (GType object_type, FolksInspectClient* client) {
	FolksInspectCommandsHelp* self = NULL;
	FolksInspectClient* _tmp0_ = NULL;
	g_return_val_if_fail (client != NULL, NULL);
	_tmp0_ = client;
	self = (FolksInspectCommandsHelp*) folks_inspect_command_construct (object_type, _tmp0_);
	return self;
}


FolksInspectCommandsHelp* folks_inspect_commands_help_new (FolksInspectClient* client) {
	return folks_inspect_commands_help_construct (FOLKS_INSPECT_COMMANDS_TYPE_HELP, client);
}


static void folks_inspect_commands_help_real_run_data_free (gpointer _data) {
	FolksInspectCommandsHelpRunData* _data_;
	_data_ = _data;
	_g_free0 (_data_->command_string);
	_folks_inspect_command_unref0 (_data_->self);
	g_slice_free (FolksInspectCommandsHelpRunData, _data_);
}


static gpointer _folks_inspect_command_ref0 (gpointer self) {
	return self ? folks_inspect_command_ref (self) : NULL;
}


static void folks_inspect_commands_help_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksInspectCommandsHelp * self;
	FolksInspectCommandsHelpRunData* _data_;
	FolksInspectCommandsHelp* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	self = (FolksInspectCommandsHelp*) base;
	_data_ = g_slice_new0 (FolksInspectCommandsHelpRunData);
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, folks_inspect_commands_help_real_run);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_inspect_commands_help_real_run_data_free);
	_tmp0_ = _folks_inspect_command_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = command_string;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->command_string);
	_data_->command_string = _tmp2_;
	folks_inspect_commands_help_real_run_co (_data_);
}


static gint folks_inspect_commands_help_real_run_finish (FolksInspectCommand* base, GAsyncResult* _res_) {
	gint result;
	FolksInspectCommandsHelpRunData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	return result;
}


static gboolean folks_inspect_commands_help_real_run_co (FolksInspectCommandsHelpRunData* _data_) {
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
		folks_inspect_utils_print_line ("%s", "Type 'help <command>' for more information " "about a particular command.");
		_data_->_tmp1_ = NULL;
		_data_->_tmp1_ = ((FolksInspectCommand*) _data_->self)->client;
		_data_->_tmp2_ = NULL;
		_data_->_tmp2_ = _data_->_tmp1_->commands;
		_data_->_tmp3_ = NULL;
		_data_->_tmp3_ = gee_abstract_map_map_iterator ((GeeAbstractMap*) _data_->_tmp2_);
		_data_->iter = _data_->_tmp3_;
		folks_inspect_utils_indent ();
		while (TRUE) {
			_data_->_tmp4_ = NULL;
			_data_->_tmp4_ = _data_->iter;
			_data_->_tmp5_ = FALSE;
			_data_->_tmp5_ = gee_map_iterator_next (_data_->_tmp4_);
			if (!(_data_->_tmp5_ == TRUE)) {
				break;
			}
			_data_->_tmp6_ = NULL;
			_data_->_tmp6_ = _data_->iter;
			_data_->_tmp7_ = NULL;
			_data_->_tmp7_ = gee_map_iterator_get_key (_data_->_tmp6_);
			_data_->_tmp8_ = NULL;
			_data_->_tmp8_ = (gchar*) _data_->_tmp7_;
			_data_->_tmp9_ = NULL;
			_data_->_tmp9_ = _data_->iter;
			_data_->_tmp10_ = NULL;
			_data_->_tmp10_ = gee_map_iterator_get_value (_data_->_tmp9_);
			_data_->_tmp11_ = NULL;
			_data_->_tmp11_ = (FolksInspectCommand*) _data_->_tmp10_;
			_data_->_tmp12_ = NULL;
			_data_->_tmp12_ = folks_inspect_command_get_description (_data_->_tmp11_);
			_data_->_tmp13_ = NULL;
			_data_->_tmp13_ = _data_->_tmp12_;
			folks_inspect_utils_print_line ("%-20s  %s", _data_->_tmp8_, _data_->_tmp13_);
			_folks_inspect_command_unref0 (_data_->_tmp11_);
			_g_free0 (_data_->_tmp8_);
		}
		folks_inspect_utils_unindent ();
		_g_object_unref0 (_data_->iter);
	} else {
		_data_->_tmp14_ = NULL;
		_data_->_tmp14_ = ((FolksInspectCommand*) _data_->self)->client;
		_data_->_tmp15_ = NULL;
		_data_->_tmp15_ = _data_->_tmp14_->commands;
		_data_->_tmp16_ = NULL;
		_data_->_tmp16_ = _data_->command_string;
		_data_->_tmp17_ = NULL;
		_data_->_tmp17_ = gee_abstract_map_get ((GeeAbstractMap*) _data_->_tmp15_, _data_->_tmp16_);
		_data_->command = (FolksInspectCommand*) _data_->_tmp17_;
		_data_->_tmp18_ = NULL;
		_data_->_tmp18_ = _data_->command;
		if (_data_->_tmp18_ == NULL) {
			_data_->_tmp19_ = NULL;
			_data_->_tmp19_ = _data_->command_string;
			folks_inspect_utils_print_line ("Unrecognised command '%s'.", _data_->_tmp19_);
			_data_->result = 1;
			_folks_inspect_command_unref0 (_data_->command);
			if (_data_->_state_ == 0) {
				g_simple_async_result_complete_in_idle (_data_->_async_result);
			} else {
				g_simple_async_result_complete (_data_->_async_result);
			}
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			_data_->_tmp20_ = NULL;
			_data_->_tmp20_ = _data_->command;
			_data_->_tmp21_ = NULL;
			_data_->_tmp21_ = folks_inspect_command_get_help (_data_->_tmp20_);
			_data_->_tmp22_ = NULL;
			_data_->_tmp22_ = _data_->_tmp21_;
			folks_inspect_utils_print_line ("%s", _data_->_tmp22_);
		}
		_folks_inspect_command_unref0 (_data_->command);
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


static gchar* _folks_inspect_utils_command_name_completion_cb_rl_compentry_func_t (const gchar* str, gint a) {
	gchar* result;
	result = folks_inspect_utils_command_name_completion_cb (str, a);
	return result;
}


static gchar** _vala_array_dup2 (gchar** self, int length) {
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


static gchar** folks_inspect_commands_help_real_complete_subcommand (FolksInspectCommand* base, const gchar* subcommand, int* result_length1) {
	FolksInspectCommandsHelp * self;
	gchar** result = NULL;
	const gchar* _tmp0_ = NULL;
	gchar** _tmp1_ = NULL;
	gchar** _tmp2_ = NULL;
	gchar** _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	gchar** _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
	self = (FolksInspectCommandsHelp*) base;
	g_return_val_if_fail (subcommand != NULL, NULL);
	_tmp0_ = subcommand;
	_tmp2_ = _tmp1_ = rl_completion_matches (_tmp0_, _folks_inspect_utils_command_name_completion_cb_rl_compentry_func_t);
	_tmp3_ = (_tmp2_ != NULL) ? _vala_array_dup2 (_tmp2_, _vala_array_length (_tmp1_)) : ((gpointer) _tmp2_);
	_tmp3__length1 = _vala_array_length (_tmp1_);
	_tmp4_ = _tmp3_;
	_tmp4__length1 = _tmp3__length1;
	if (result_length1) {
		*result_length1 = _tmp4__length1;
	}
	result = _tmp4_;
	return result;
}


static const gchar* folks_inspect_commands_help_real_get_name (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsHelp* self;
	self = (FolksInspectCommandsHelp*) base;
	result = "help";
	return result;
}


static const gchar* folks_inspect_commands_help_real_get_description (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsHelp* self;
	self = (FolksInspectCommandsHelp*) base;
	result = "Get help on using the program.";
	return result;
}


static const gchar* folks_inspect_commands_help_real_get_help (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsHelp* self;
	self = (FolksInspectCommandsHelp*) base;
	result = "help                   Describe all the available " "commands.\n" "help [command name]    Give more detailed help on the " "specified command.";
	return result;
}


static void folks_inspect_commands_help_class_init (FolksInspectCommandsHelpClass * klass) {
	folks_inspect_commands_help_parent_class = g_type_class_peek_parent (klass);
	((FolksInspectCommandClass *) klass)->run = folks_inspect_commands_help_real_run;
	((FolksInspectCommandClass *) klass)->run_finish = folks_inspect_commands_help_real_run_finish;
	((FolksInspectCommandClass *) klass)->complete_subcommand = folks_inspect_commands_help_real_complete_subcommand;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_name = folks_inspect_commands_help_real_get_name;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_description = folks_inspect_commands_help_real_get_description;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_help = folks_inspect_commands_help_real_get_help;
}


static void folks_inspect_commands_help_instance_init (FolksInspectCommandsHelp * self) {
}


GType folks_inspect_commands_help_get_type (void) {
	static volatile gsize folks_inspect_commands_help_type_id__volatile = 0;
	if (g_once_init_enter (&folks_inspect_commands_help_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksInspectCommandsHelpClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_inspect_commands_help_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksInspectCommandsHelp), 0, (GInstanceInitFunc) folks_inspect_commands_help_instance_init, NULL };
		GType folks_inspect_commands_help_type_id;
		folks_inspect_commands_help_type_id = g_type_register_static (FOLKS_INSPECT_TYPE_COMMAND, "FolksInspectCommandsHelp", &g_define_type_info, 0);
		g_once_init_leave (&folks_inspect_commands_help_type_id__volatile, folks_inspect_commands_help_type_id);
	}
	return folks_inspect_commands_help_type_id__volatile;
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



