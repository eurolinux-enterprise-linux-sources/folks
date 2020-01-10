/* test-case.c generated by valac 0.29.3.10-b87a, the Vala compiler
 * generated from test-case.vala, do not modify */

/*
 * Copyright © 2013 Collabora Ltd.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 *      Philip Withnall <philip.withnall@collabora.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <folks-test.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define BLUEZ_TEST_TYPE_TEST_CASE (bluez_test_test_case_get_type ())
#define BLUEZ_TEST_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BLUEZ_TEST_TYPE_TEST_CASE, BluezTestTestCase))
#define BLUEZ_TEST_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BLUEZ_TEST_TYPE_TEST_CASE, BluezTestTestCaseClass))
#define BLUEZ_TEST_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BLUEZ_TEST_TYPE_TEST_CASE))
#define BLUEZ_TEST_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BLUEZ_TEST_TYPE_TEST_CASE))
#define BLUEZ_TEST_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BLUEZ_TEST_TYPE_TEST_CASE, BluezTestTestCaseClass))

typedef struct _BluezTestTestCase BluezTestTestCase;
typedef struct _BluezTestTestCaseClass BluezTestTestCaseClass;
typedef struct _BluezTestTestCasePrivate BluezTestTestCasePrivate;

#define BLUEZ_TEST_TYPE_BACKEND (bluez_test_backend_get_type ())
#define BLUEZ_TEST_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BLUEZ_TEST_TYPE_BACKEND, BluezTestBackend))
#define BLUEZ_TEST_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BLUEZ_TEST_TYPE_BACKEND, BluezTestBackendClass))
#define BLUEZ_TEST_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BLUEZ_TEST_TYPE_BACKEND))
#define BLUEZ_TEST_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BLUEZ_TEST_TYPE_BACKEND))
#define BLUEZ_TEST_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BLUEZ_TEST_TYPE_BACKEND, BluezTestBackendClass))

typedef struct _BluezTestBackend BluezTestBackend;
typedef struct _BluezTestBackendClass BluezTestBackendClass;
#define _bluez_test_backend_unref0(var) ((var == NULL) ? NULL : (var = (bluez_test_backend_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_main_context_unref0(var) ((var == NULL) ? NULL : (var = (g_main_context_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _BluezTestTestCase {
	FolksTestCase parent_instance;
	BluezTestTestCasePrivate * priv;
	BluezTestBackend* bluez_backend;
};

struct _BluezTestTestCaseClass {
	FolksTestCaseClass parent_class;
	void (*create_backend) (BluezTestTestCase* self);
	void (*configure_primary_store) (BluezTestTestCase* self);
};


static gpointer bluez_test_test_case_parent_class = NULL;

GType bluez_test_test_case_get_type (void) G_GNUC_CONST;
gpointer bluez_test_backend_ref (gpointer instance);
void bluez_test_backend_unref (gpointer instance);
GParamSpec* bluez_test_param_spec_backend (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bluez_test_value_set_backend (GValue* value, gpointer v_object);
void bluez_test_value_take_backend (GValue* value, gpointer v_object);
gpointer bluez_test_value_get_backend (const GValue* value);
GType bluez_test_backend_get_type (void) G_GNUC_CONST;
enum  {
	BLUEZ_TEST_TEST_CASE_DUMMY_PROPERTY
};
BluezTestTestCase* bluez_test_test_case_new (const gchar* name);
BluezTestTestCase* bluez_test_test_case_construct (GType object_type, const gchar* name);
BluezTestBackend* bluez_test_backend_new (void);
BluezTestBackend* bluez_test_backend_construct (GType object_type);
static void bluez_test_test_case_real_set_up (FolksTestCase* base);
void bluez_test_test_case_create_backend (BluezTestTestCase* self);
void bluez_test_test_case_configure_primary_store (BluezTestTestCase* self);
static void bluez_test_test_case_real_private_bus_up (FolksTestCase* base);
static void bluez_test_test_case_real_create_backend (BluezTestTestCase* self);
void bluez_test_backend_set_up (BluezTestBackend* self);
static void bluez_test_test_case_real_configure_primary_store (BluezTestTestCase* self);
const gchar* bluez_test_backend_get_primary_device_address (BluezTestBackend* self);
static void bluez_test_test_case_real_tear_down (FolksTestCase* base);
void bluez_test_backend_tear_down (BluezTestBackend* self);
static void bluez_test_test_case_finalize (GObject* obj);


BluezTestTestCase* bluez_test_test_case_construct (GType object_type, const gchar* name) {
	BluezTestTestCase * self = NULL;
	const gchar* _tmp0_ = NULL;
	BluezTestBackend* _tmp1_ = NULL;
#line 39 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_return_val_if_fail (name != NULL, NULL);
#line 41 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp0_ = name;
#line 41 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self = (BluezTestTestCase*) folks_test_case_construct (object_type, _tmp0_);
#line 43 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp1_ = bluez_test_backend_new ();
#line 43 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_bluez_test_backend_unref0 (self->bluez_backend);
#line 43 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self->bluez_backend = _tmp1_;
#line 45 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_setenv ("FOLKS_BACKENDS_ALLOWED", "bluez", TRUE);
#line 46 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_setenv ("FOLKS_PRIMARY_STORE", "bluez", TRUE);
#line 47 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_setenv ("FOLKS_BLUEZ_TIMEOUT_DIVISOR", "100", TRUE);
#line 39 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	return self;
#line 129 "test-case.c"
}


BluezTestTestCase* bluez_test_test_case_new (const gchar* name) {
#line 39 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	return bluez_test_test_case_construct (BLUEZ_TEST_TYPE_TEST_CASE, name);
#line 136 "test-case.c"
}


/**
   * {@inheritDoc}
   *
   * @since 0.9.7
   */
static void bluez_test_test_case_real_set_up (FolksTestCase* base) {
	BluezTestTestCase * self;
#line 55 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self = (BluezTestTestCase*) base;
#line 57 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	FOLKS_TEST_CASE_CLASS (bluez_test_test_case_parent_class)->set_up (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_TEST_CASE, FolksTestCase));
#line 58 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	bluez_test_test_case_create_backend (self);
#line 59 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	bluez_test_test_case_configure_primary_store (self);
#line 155 "test-case.c"
}


/**
   * {@inheritDoc}
   *
   * @since 0.9.7
   */
static void bluez_test_test_case_real_private_bus_up (FolksTestCase* base) {
	BluezTestTestCase * self;
#line 67 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self = (BluezTestTestCase*) base;
#line 70 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	folks_test_case_create_dbusmock_service ((FolksTestCase*) self, G_BUS_TYPE_SYSTEM, "org.bluez", "bluez5");
#line 71 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	folks_test_case_create_dbusmock_service ((FolksTestCase*) self, G_BUS_TYPE_SESSION, "org.bluez.obex", "bluez5-obex");
#line 74 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	FOLKS_TEST_CASE_CLASS (bluez_test_test_case_parent_class)->private_bus_up (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_TEST_CASE, FolksTestCase));
#line 174 "test-case.c"
}


/**
   * Virtual method to create and set up the BlueZ backend.
   *
   * Called from set_up(); may be overridden to not create the backend,
   * or to create it but not set it up.
   *
   * Subclasses may chain up, but are not required to so.
   *
   * @since 0.9.7
   */
static void bluez_test_test_case_real_create_backend (BluezTestTestCase* self) {
	BluezTestBackend* _tmp0_ = NULL;
	BluezTestBackend* _tmp1_ = NULL;
#line 89 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp0_ = bluez_test_backend_new ();
#line 89 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_bluez_test_backend_unref0 (self->bluez_backend);
#line 89 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self->bluez_backend = _tmp0_;
#line 90 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp1_ = self->bluez_backend;
#line 90 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	bluez_test_backend_set_up (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, BLUEZ_TEST_TYPE_BACKEND, BluezTestBackend));
#line 201 "test-case.c"
}


void bluez_test_test_case_create_backend (BluezTestTestCase* self) {
#line 87 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_return_if_fail (self != NULL);
#line 87 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	BLUEZ_TEST_TEST_CASE_GET_CLASS (self)->create_backend (self);
#line 210 "test-case.c"
}


/**
   * Virtual method to configure ``FOLKS_PRIMARY_STORE`` to point to
   * our //bluez_backend//.
   *
   * Subclasses may chain up, but are not required to so.
   *
   * @since 0.9.7
   */
static void bluez_test_test_case_real_configure_primary_store (BluezTestTestCase* self) {
	BluezTestBackend* _tmp0_ = NULL;
	gchar* config_val = NULL;
	BluezTestBackend* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
#line 104 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp0_ = self->bluez_backend;
#line 104 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_vala_assert (_tmp0_ != NULL, "this.bluez_backend != null");
#line 105 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp1_ = self->bluez_backend;
#line 105 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp2_ = bluez_test_backend_get_primary_device_address (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, BLUEZ_TEST_TYPE_BACKEND, BluezTestBackend));
#line 105 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp3_ = _tmp2_;
#line 105 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp4_ = g_strconcat ("bluez:", _tmp3_, NULL);
#line 105 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	config_val = _tmp4_;
#line 107 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_setenv ("FOLKS_PRIMARY_STORE", config_val, TRUE);
#line 101 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_g_free0 (config_val);
#line 247 "test-case.c"
}


void bluez_test_test_case_configure_primary_store (BluezTestTestCase* self) {
#line 101 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_return_if_fail (self != NULL);
#line 101 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	BLUEZ_TEST_TEST_CASE_GET_CLASS (self)->configure_primary_store (self);
#line 256 "test-case.c"
}


/**
   * {@inheritDoc}
   *
   * @since 0.9.7
   */
static gpointer _g_main_context_ref0 (gpointer self) {
#line 131 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	return self ? g_main_context_ref (self) : NULL;
#line 268 "test-case.c"
}


static void bluez_test_test_case_real_tear_down (FolksTestCase* base) {
	BluezTestTestCase * self;
	BluezTestBackend* _tmp0_ = NULL;
	GMainContext* context = NULL;
	GMainContext* _tmp2_ = NULL;
	GMainContext* _tmp3_ = NULL;
#line 115 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self = (BluezTestTestCase*) base;
#line 117 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp0_ = self->bluez_backend;
#line 117 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	if (_tmp0_ != NULL) {
#line 284 "test-case.c"
		BluezTestBackend* _tmp1_ = NULL;
#line 119 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
		_tmp1_ = self->bluez_backend;
#line 119 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
		bluez_test_backend_tear_down (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, BLUEZ_TEST_TYPE_BACKEND, BluezTestBackend));
#line 120 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
		_bluez_test_backend_unref0 (self->bluez_backend);
#line 120 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
		self->bluez_backend = NULL;
#line 294 "test-case.c"
	}
#line 123 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	g_unsetenv ("FOLKS_PRIMARY_STORE");
#line 131 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp2_ = g_main_context_default ();
#line 131 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_tmp3_ = _g_main_context_ref0 (_tmp2_);
#line 131 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	context = _tmp3_;
#line 132 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	while (TRUE) {
#line 306 "test-case.c"
		GMainContext* _tmp4_ = NULL;
		gboolean _tmp5_ = FALSE;
#line 132 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
		_tmp4_ = context;
#line 132 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
		_tmp5_ = g_main_context_iteration (_tmp4_, FALSE);
#line 132 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
		if (!_tmp5_) {
#line 132 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
			break;
#line 317 "test-case.c"
		}
	}
#line 134 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	FOLKS_TEST_CASE_CLASS (bluez_test_test_case_parent_class)->tear_down (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_TEST_CASE, FolksTestCase));
#line 115 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_g_main_context_unref0 (context);
#line 324 "test-case.c"
}


static void bluez_test_test_case_class_init (BluezTestTestCaseClass * klass) {
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	bluez_test_test_case_parent_class = g_type_class_peek_parent (klass);
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	((FolksTestCaseClass *) klass)->set_up = bluez_test_test_case_real_set_up;
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	((FolksTestCaseClass *) klass)->private_bus_up = bluez_test_test_case_real_private_bus_up;
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	((BluezTestTestCaseClass *) klass)->create_backend = bluez_test_test_case_real_create_backend;
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	((BluezTestTestCaseClass *) klass)->configure_primary_store = bluez_test_test_case_real_configure_primary_store;
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	((FolksTestCaseClass *) klass)->tear_down = bluez_test_test_case_real_tear_down;
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	G_OBJECT_CLASS (klass)->finalize = bluez_test_test_case_finalize;
#line 343 "test-case.c"
}


static void bluez_test_test_case_instance_init (BluezTestTestCase * self) {
#line 37 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self->bluez_backend = NULL;
#line 350 "test-case.c"
}


static void bluez_test_test_case_finalize (GObject* obj) {
	BluezTestTestCase * self;
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BLUEZ_TEST_TYPE_TEST_CASE, BluezTestTestCase);
#line 37 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	_bluez_test_backend_unref0 (self->bluez_backend);
#line 28 "/opt/gnome3/source/folks/tests/lib/bluez/test-case.vala"
	G_OBJECT_CLASS (bluez_test_test_case_parent_class)->finalize (obj);
#line 362 "test-case.c"
}


/**
 * A test case for the BlueZ backend, whose private D-Bus session contains the
 * necessary python-dbusmock instance to mock up BlueZ.
 *
 * @since 0.9.7
 */
GType bluez_test_test_case_get_type (void) {
	static volatile gsize bluez_test_test_case_type_id__volatile = 0;
	if (g_once_init_enter (&bluez_test_test_case_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BluezTestTestCaseClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bluez_test_test_case_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BluezTestTestCase), 0, (GInstanceInitFunc) bluez_test_test_case_instance_init, NULL };
		GType bluez_test_test_case_type_id;
		bluez_test_test_case_type_id = g_type_register_static (FOLKS_TYPE_TEST_CASE, "BluezTestTestCase", &g_define_type_info, 0);
		g_once_init_leave (&bluez_test_test_case_type_id__volatile, bluez_test_test_case_type_id);
	}
	return bluez_test_test_case_type_id__volatile;
}



