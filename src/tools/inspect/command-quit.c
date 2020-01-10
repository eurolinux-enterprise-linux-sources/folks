/* command-quit.c generated by valac 0.20.1.30-1b1d, the Vala compiler
 * generated from command-quit.vala, do not modify */

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

#define FOLKS_INSPECT_COMMANDS_TYPE_QUIT (folks_inspect_commands_quit_get_type ())
#define FOLKS_INSPECT_COMMANDS_QUIT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_INSPECT_COMMANDS_TYPE_QUIT, FolksInspectCommandsQuit))
#define FOLKS_INSPECT_COMMANDS_QUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_INSPECT_COMMANDS_TYPE_QUIT, FolksInspectCommandsQuitClass))
#define FOLKS_INSPECT_COMMANDS_IS_QUIT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_INSPECT_COMMANDS_TYPE_QUIT))
#define FOLKS_INSPECT_COMMANDS_IS_QUIT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_INSPECT_COMMANDS_TYPE_QUIT))
#define FOLKS_INSPECT_COMMANDS_QUIT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_INSPECT_COMMANDS_TYPE_QUIT, FolksInspectCommandsQuitClass))

typedef struct _FolksInspectCommandsQuit FolksInspectCommandsQuit;
typedef struct _FolksInspectCommandsQuitClass FolksInspectCommandsQuitClass;
typedef struct _FolksInspectCommandsQuitPrivate FolksInspectCommandsQuitPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _folks_inspect_command_unref0(var) ((var == NULL) ? NULL : (var = (folks_inspect_command_unref (var), NULL)))
typedef struct _FolksInspectCommandsQuitRunData FolksInspectCommandsQuitRunData;

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
	void (*run_finish) (FolksInspectCommand* self, GAsyncResult* _res_);
	gchar** (*complete_subcommand) (FolksInspectCommand* self, const gchar* subcommand, int* result_length1);
	const gchar* (*get_name) (FolksInspectCommand* self);
	const gchar* (*get_description) (FolksInspectCommand* self);
	const gchar* (*get_help) (FolksInspectCommand* self);
};

struct _FolksInspectCommandsQuit {
	FolksInspectCommand parent_instance;
	FolksInspectCommandsQuitPrivate * priv;
};

struct _FolksInspectCommandsQuitClass {
	FolksInspectCommandClass parent_class;
};

struct _FolksInspectCommandsQuitRunData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksInspectCommandsQuit* self;
	gchar* command_string;
};


static gpointer folks_inspect_commands_quit_parent_class = NULL;

gpointer folks_inspect_command_ref (gpointer instance);
void folks_inspect_command_unref (gpointer instance);
GParamSpec* folks_inspect_param_spec_command (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void folks_inspect_value_set_command (GValue* value, gpointer v_object);
void folks_inspect_value_take_command (GValue* value, gpointer v_object);
gpointer folks_inspect_value_get_command (const GValue* value);
GType folks_inspect_command_get_type (void) G_GNUC_CONST;
GType folks_inspect_client_get_type (void) G_GNUC_CONST;
GType folks_inspect_commands_quit_get_type (void) G_GNUC_CONST;
enum  {
	FOLKS_INSPECT_COMMANDS_QUIT_DUMMY_PROPERTY
};
FolksInspectCommandsQuit* folks_inspect_commands_quit_new (FolksInspectClient* client);
FolksInspectCommandsQuit* folks_inspect_commands_quit_construct (GType object_type, FolksInspectClient* client);
FolksInspectCommand* folks_inspect_command_construct (GType object_type, FolksInspectClient* client);
static void folks_inspect_commands_quit_real_run_data_free (gpointer _data);
static void folks_inspect_commands_quit_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_inspect_commands_quit_real_run_co (FolksInspectCommandsQuitRunData* _data_);


FolksInspectCommandsQuit* folks_inspect_commands_quit_construct (GType object_type, FolksInspectClient* client) {
	FolksInspectCommandsQuit* self = NULL;
	FolksInspectClient* _tmp0_;
	g_return_val_if_fail (client != NULL, NULL);
	_tmp0_ = client;
	self = (FolksInspectCommandsQuit*) folks_inspect_command_construct (object_type, _tmp0_);
	return self;
}


FolksInspectCommandsQuit* folks_inspect_commands_quit_new (FolksInspectClient* client) {
	return folks_inspect_commands_quit_construct (FOLKS_INSPECT_COMMANDS_TYPE_QUIT, client);
}


static void folks_inspect_commands_quit_real_run_data_free (gpointer _data) {
	FolksInspectCommandsQuitRunData* _data_;
	_data_ = _data;
	_g_free0 (_data_->command_string);
	_folks_inspect_command_unref0 (_data_->self);
	g_slice_free (FolksInspectCommandsQuitRunData, _data_);
}


static gpointer _folks_inspect_command_ref0 (gpointer self) {
	return self ? folks_inspect_command_ref (self) : NULL;
}


static void folks_inspect_commands_quit_real_run (FolksInspectCommand* base, const gchar* command_string, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksInspectCommandsQuit * self;
	FolksInspectCommandsQuitRunData* _data_;
	FolksInspectCommandsQuit* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	self = (FolksInspectCommandsQuit*) base;
	_data_ = g_slice_new0 (FolksInspectCommandsQuitRunData);
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, folks_inspect_commands_quit_real_run);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_inspect_commands_quit_real_run_data_free);
	_tmp0_ = _folks_inspect_command_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = command_string;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->command_string);
	_data_->command_string = _tmp2_;
	folks_inspect_commands_quit_real_run_co (_data_);
}


static void folks_inspect_commands_quit_real_run_finish (FolksInspectCommand* base, GAsyncResult* _res_) {
	FolksInspectCommandsQuitRunData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean folks_inspect_commands_quit_real_run_co (FolksInspectCommandsQuitRunData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	exit (0);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static const gchar* folks_inspect_commands_quit_real_get_name (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsQuit* self;
	self = (FolksInspectCommandsQuit*) base;
	result = "quit";
	return result;
}


static const gchar* folks_inspect_commands_quit_real_get_description (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsQuit* self;
	self = (FolksInspectCommandsQuit*) base;
	result = "Quit the program.";
	return result;
}


static const gchar* folks_inspect_commands_quit_real_get_help (FolksInspectCommand* base) {
	const gchar* result;
	FolksInspectCommandsQuit* self;
	self = (FolksInspectCommandsQuit*) base;
	result = "quit    Quit the program gracefully, like a cow lolloping " "across a green field.";
	return result;
}


static void folks_inspect_commands_quit_class_init (FolksInspectCommandsQuitClass * klass) {
	folks_inspect_commands_quit_parent_class = g_type_class_peek_parent (klass);
	FOLKS_INSPECT_COMMAND_CLASS (klass)->run = folks_inspect_commands_quit_real_run;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->run_finish = folks_inspect_commands_quit_real_run_finish;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_name = folks_inspect_commands_quit_real_get_name;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_description = folks_inspect_commands_quit_real_get_description;
	FOLKS_INSPECT_COMMAND_CLASS (klass)->get_help = folks_inspect_commands_quit_real_get_help;
}


static void folks_inspect_commands_quit_instance_init (FolksInspectCommandsQuit * self) {
}


GType folks_inspect_commands_quit_get_type (void) {
	static volatile gsize folks_inspect_commands_quit_type_id__volatile = 0;
	if (g_once_init_enter (&folks_inspect_commands_quit_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksInspectCommandsQuitClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_inspect_commands_quit_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksInspectCommandsQuit), 0, (GInstanceInitFunc) folks_inspect_commands_quit_instance_init, NULL };
		GType folks_inspect_commands_quit_type_id;
		folks_inspect_commands_quit_type_id = g_type_register_static (FOLKS_INSPECT_TYPE_COMMAND, "FolksInspectCommandsQuit", &g_define_type_info, 0);
		g_once_init_leave (&folks_inspect_commands_quit_type_id__volatile, folks_inspect_commands_quit_type_id);
	}
	return folks_inspect_commands_quit_type_id__volatile;
}



