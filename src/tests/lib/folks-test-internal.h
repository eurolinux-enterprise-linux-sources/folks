/* folks-test-internal.h generated by valac 0.36.1.697-2b74, the Vala compiler, do not modify */


#ifndef __FOLKS_TEST_INTERNAL_H__
#define __FOLKS_TEST_INTERNAL_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include "gtestdbus.h"
#include <gio/gio.h>
#include <folks/folks.h>

G_BEGIN_DECLS


#define FOLKS_TYPE_DISCONNECTION_QUEUE (folks_disconnection_queue_get_type ())
#define FOLKS_DISCONNECTION_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_DISCONNECTION_QUEUE, FolksDisconnectionQueue))
#define FOLKS_DISCONNECTION_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_DISCONNECTION_QUEUE, FolksDisconnectionQueueClass))
#define FOLKS_IS_DISCONNECTION_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_DISCONNECTION_QUEUE))
#define FOLKS_IS_DISCONNECTION_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_DISCONNECTION_QUEUE))
#define FOLKS_DISCONNECTION_QUEUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_DISCONNECTION_QUEUE, FolksDisconnectionQueueClass))

typedef struct _FolksDisconnectionQueue FolksDisconnectionQueue;
typedef struct _FolksDisconnectionQueueClass FolksDisconnectionQueueClass;
typedef struct _FolksDisconnectionQueuePrivate FolksDisconnectionQueuePrivate;

#define FOLKS_TYPE_TEST_CASE (folks_test_case_get_type ())
#define FOLKS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_TEST_CASE, FolksTestCase))
#define FOLKS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_TEST_CASE, FolksTestCaseClass))
#define FOLKS_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_TEST_CASE))
#define FOLKS_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_TEST_CASE))
#define FOLKS_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_TEST_CASE, FolksTestCaseClass))

typedef struct _FolksTestCase FolksTestCase;
typedef struct _FolksTestCaseClass FolksTestCaseClass;
typedef struct _FolksTestCasePrivate FolksTestCasePrivate;

#define FOLKS_TYPE_TEST_UTILS (folks_test_utils_get_type ())
#define FOLKS_TEST_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_TEST_UTILS, FolksTestUtils))
#define FOLKS_TEST_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_TEST_UTILS, FolksTestUtilsClass))
#define FOLKS_IS_TEST_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_TEST_UTILS))
#define FOLKS_IS_TEST_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_TEST_UTILS))
#define FOLKS_TEST_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_TEST_UTILS, FolksTestUtilsClass))

typedef struct _FolksTestUtils FolksTestUtils;
typedef struct _FolksTestUtilsClass FolksTestUtilsClass;
typedef struct _FolksTestUtilsPrivate FolksTestUtilsPrivate;

#define ORG_FREEDESKTOP_DBUS_TYPE_MOCK (org_freedesktop_dbus_mock_get_type ())
#define ORG_FREEDESKTOP_DBUS_MOCK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ORG_FREEDESKTOP_DBUS_TYPE_MOCK, orgfreedesktopDBusMock))
#define ORG_FREEDESKTOP_DBUS_IS_MOCK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ORG_FREEDESKTOP_DBUS_TYPE_MOCK))
#define ORG_FREEDESKTOP_DBUS_MOCK_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ORG_FREEDESKTOP_DBUS_TYPE_MOCK, orgfreedesktopDBusMockIface))

typedef struct _orgfreedesktopDBusMock orgfreedesktopDBusMock;
typedef struct _orgfreedesktopDBusMockIface orgfreedesktopDBusMockIface;

#define ORG_FREEDESKTOP_DBUS_TYPE_MOCK_PROXY (org_freedesktop_dbus_mock_proxy_get_type ())

#define ORG_FREEDESKTOP_DBUS_MOCK_TYPE_METHOD (org_freedesktop_dbus_mock_method_get_type ())
typedef struct _orgfreedesktopDBusMockMethod orgfreedesktopDBusMockMethod;

#define ORG_FREEDESKTOP_DBUS_MOCK_TYPE_CALL (org_freedesktop_dbus_mock_call_get_type ())
typedef struct _orgfreedesktopDBusMockCall orgfreedesktopDBusMockCall;

#define ORG_FREEDESKTOP_DBUS_MOCK_TYPE_METHOD_CALL (org_freedesktop_dbus_mock_method_call_get_type ())
typedef struct _orgfreedesktopDBusMockMethodCall orgfreedesktopDBusMockMethodCall;

struct _FolksDisconnectionQueue {
	GObject parent_instance;
	FolksDisconnectionQueuePrivate * priv;
};

struct _FolksDisconnectionQueueClass {
	GObjectClass parent_class;
};

struct _FolksTestCase {
	GObject parent_instance;
	FolksTestCasePrivate * priv;
	FolksTestDBus* test_dbus;
	FolksTestDBus* test_system_dbus;
};

struct _FolksTestCaseClass {
	GObjectClass parent_class;
	gchar* (*create_transient_dir) (FolksTestCase* self);
	void (*private_bus_up) (FolksTestCase* self);
	void (*set_up) (FolksTestCase* self);
	void (*tear_down) (FolksTestCase* self);
	void (*final_tear_down) (FolksTestCase* self);
	gboolean (*get_uses_dbus_1) (FolksTestCase* self);
};

typedef void (*FolksTestCaseTestMethod) (void* user_data);
struct _FolksTestUtils {
	GTypeInstance parent_instance;
	volatile int ref_count;
	FolksTestUtilsPrivate * priv;
};

struct _FolksTestUtilsClass {
	GTypeClass parent_class;
	void (*finalize) (FolksTestUtils *self);
};

struct _orgfreedesktopDBusMockMethod {
	gchar* name;
	gchar* in_sig;
	gchar* out_sig;
};

struct _orgfreedesktopDBusMockCall {
	guint64 call_time;
	gchar* method_name;
	GVariant** args;
	gint args_length1;
};

struct _orgfreedesktopDBusMockMethodCall {
	guint64 call_time;
	GVariant** args;
	gint args_length1;
};

struct _orgfreedesktopDBusMockIface {
	GTypeInterface parent_iface;
	void (*add_method) (orgfreedesktopDBusMock* self, const gchar* interface_name, const gchar* name, const gchar* in_sig, const gchar* out_sig, const gchar* code, GError** error);
	void (*add_methods) (orgfreedesktopDBusMock* self, const gchar* interface_name, orgfreedesktopDBusMockMethod* methods, int methods_length1, GError** error);
	void (*add_object) (orgfreedesktopDBusMock* self, const gchar* path, const gchar* interface_name, GHashTable* properties, orgfreedesktopDBusMockMethod* methods, int methods_length1, GError** error);
	void (*add_properties) (orgfreedesktopDBusMock* self, const gchar* interface_name, GHashTable* properties, GError** error);
	void (*add_property) (orgfreedesktopDBusMock* self, const gchar* interface_name, const gchar* name, GVariant* val, GError** error);
	void (*add_template) (orgfreedesktopDBusMock* self, const gchar* template_name, GHashTable* template_params, GError** error);
	void (*clear_calls) (orgfreedesktopDBusMock* self, GError** error);
	void (*emit_signal) (orgfreedesktopDBusMock* self, const gchar* interface_name, const gchar* name, const gchar* signature, GVariant** args, int args_length1, GError** error);
	orgfreedesktopDBusMockCall* (*get_calls) (orgfreedesktopDBusMock* self, int* result_length1, GError** error);
	orgfreedesktopDBusMockMethodCall* (*get_method_calls) (orgfreedesktopDBusMock* self, const gchar* method, int* result_length1, GError** error);
	void (*remove_object) (orgfreedesktopDBusMock* self, const gchar* path, GError** error);
	void (*reset) (orgfreedesktopDBusMock* self, GError** error);
};


GType folks_disconnection_queue_get_type (void) G_GNUC_CONST;
FolksDisconnectionQueue* folks_disconnection_queue_new (void);
FolksDisconnectionQueue* folks_disconnection_queue_construct (GType object_type);
void folks_disconnection_queue_push (FolksDisconnectionQueue* self, GObject* obj, gulong id);
void folks_disconnection_queue_drain (FolksDisconnectionQueue* self);
GType folks_test_case_get_type (void) G_GNUC_CONST;
extern gboolean folks_test_case_in_final_tear_down;
FolksTestCase* folks_test_case_construct (GType object_type, const gchar* name);
gchar* folks_test_case_create_transient_dir (FolksTestCase* self);
void folks_test_case_create_dbusmock_service (FolksTestCase* self, GBusType bus_type, const gchar* bus_name, const gchar* dbusmock_template_name);
void folks_test_case_private_bus_up (FolksTestCase* self);
void folks_test_case_register (FolksTestCase* self);
void folks_test_case_add_test (FolksTestCase* self, const gchar* name, FolksTestCaseTestMethod test, void* test_target, GDestroyNotify test_target_destroy_notify);
GTestCase* folks_test_case_add_test_helper (FolksTestCase* self, const gchar* name, FolksTestCaseTestMethod test, void* test_target, GDestroyNotify test_target_destroy_notify);
void folks_test_case_set_up (FolksTestCase* self);
void folks_test_case_tear_down (FolksTestCase* self);
void _folks_test_case_dbus_1_set_no_exit_on_disconnect (void);
void folks_test_case_final_tear_down (FolksTestCase* self);
const gchar* folks_test_case_get_transient_dir (FolksTestCase* self);
gboolean folks_test_case_get_uses_dbus_1 (FolksTestCase* self);
gpointer folks_test_utils_ref (gpointer instance);
void folks_test_utils_unref (gpointer instance);
GParamSpec* folks_param_spec_test_utils (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void folks_value_set_test_utils (GValue* value, gpointer v_object);
void folks_value_take_test_utils (GValue* value, gpointer v_object);
gpointer folks_value_get_test_utils (const GValue* value);
GType folks_test_utils_get_type (void) G_GNUC_CONST;
gboolean haze_remove_directory (const gchar* path);
gint folks_test_utils_multiply_timeout (gint timeout);
void folks_test_utils_loop_run_with_timeout (GMainLoop* loop, gint timeout);
void folks_test_utils_loop_run_with_non_fatal_timeout (GMainLoop* loop, gint timeout) G_GNUC_DEPRECATED;
void folks_test_utils_loadable_icons_content_equal (GLoadableIcon* a, GLoadableIcon* b, gint icon_size, GAsyncReadyCallback _callback_, gpointer _user_data_);
gboolean folks_test_utils_loadable_icons_content_equal_finish (GAsyncResult* _res_);
void folks_test_utils_backend_prepare_and_wait_for_quiescence (FolksBackend* backend, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_test_utils_backend_prepare_and_wait_for_quiescence_finish (GAsyncResult* _res_, GError** error);
void folks_test_utils_aggregator_prepare_and_wait_for_quiescence (FolksIndividualAggregator* aggregator, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_test_utils_aggregator_prepare_and_wait_for_quiescence_finish (GAsyncResult* _res_, GError** error);
void folks_test_utils_aggregator_prepare_and_wait_for_individuals (FolksIndividualAggregator* aggregator, gchar** expected_persona_names, int expected_persona_names_length1, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_test_utils_aggregator_prepare_and_wait_for_individuals_finish (GAsyncResult* _res_, GError** error);
void folks_test_utils_aggregator_wait_for_individuals (FolksIndividualAggregator* aggregator, gchar** expected_added_persona_names, int expected_added_persona_names_length1, gchar** expected_removed_persona_names, int expected_removed_persona_names_length1, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_test_utils_aggregator_wait_for_individuals_finish (GAsyncResult* _res_);
void folks_test_utils_aggregator_prepare_and_wait_for_individuals_sync_with_timeout (FolksIndividualAggregator* aggregator, gchar** expected_persona_names, int expected_persona_names_length1, gint timeout);
FolksIndividual* folks_test_utils_get_individual_by_name (FolksIndividualAggregator* aggregator, const gchar* full_name);
void folks_test_utils_run_test_helper_sync (gchar** argv, int argv_length1, gchar* * capture_stdout, GError** error);
gchar* folks_test_utils_get_source_test_data (const gchar* filename);
gchar* folks_test_utils_get_built_test_data (const gchar* filename);
gboolean folks_test_utils_main_context_is_empty (GMainContext* context);
FolksTestUtils* folks_test_utils_new (void);
FolksTestUtils* folks_test_utils_construct (GType object_type);
GType org_freedesktop_dbus_mock_proxy_get_type (void) G_GNUC_CONST;
guint org_freedesktop_dbus_mock_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType org_freedesktop_dbus_mock_method_get_type (void) G_GNUC_CONST;
orgfreedesktopDBusMockMethod* org_freedesktop_dbus_mock_method_dup (const orgfreedesktopDBusMockMethod* self);
void org_freedesktop_dbus_mock_method_free (orgfreedesktopDBusMockMethod* self);
void org_freedesktop_dbus_mock_method_copy (const orgfreedesktopDBusMockMethod* self, orgfreedesktopDBusMockMethod* dest);
void org_freedesktop_dbus_mock_method_destroy (orgfreedesktopDBusMockMethod* self);
GType org_freedesktop_dbus_mock_call_get_type (void) G_GNUC_CONST;
orgfreedesktopDBusMockCall* org_freedesktop_dbus_mock_call_dup (const orgfreedesktopDBusMockCall* self);
void org_freedesktop_dbus_mock_call_free (orgfreedesktopDBusMockCall* self);
void org_freedesktop_dbus_mock_call_copy (const orgfreedesktopDBusMockCall* self, orgfreedesktopDBusMockCall* dest);
void org_freedesktop_dbus_mock_call_destroy (orgfreedesktopDBusMockCall* self);
GType org_freedesktop_dbus_mock_method_call_get_type (void) G_GNUC_CONST;
orgfreedesktopDBusMockMethodCall* org_freedesktop_dbus_mock_method_call_dup (const orgfreedesktopDBusMockMethodCall* self);
void org_freedesktop_dbus_mock_method_call_free (orgfreedesktopDBusMockMethodCall* self);
void org_freedesktop_dbus_mock_method_call_copy (const orgfreedesktopDBusMockMethodCall* self, orgfreedesktopDBusMockMethodCall* dest);
void org_freedesktop_dbus_mock_method_call_destroy (orgfreedesktopDBusMockMethodCall* self);
GType org_freedesktop_dbus_mock_get_type (void) G_GNUC_CONST;
void org_freedesktop_dbus_mock_add_method (orgfreedesktopDBusMock* self, const gchar* interface_name, const gchar* name, const gchar* in_sig, const gchar* out_sig, const gchar* code, GError** error);
void org_freedesktop_dbus_mock_add_methods (orgfreedesktopDBusMock* self, const gchar* interface_name, orgfreedesktopDBusMockMethod* methods, int methods_length1, GError** error);
void org_freedesktop_dbus_mock_add_object (orgfreedesktopDBusMock* self, const gchar* path, const gchar* interface_name, GHashTable* properties, orgfreedesktopDBusMockMethod* methods, int methods_length1, GError** error);
void org_freedesktop_dbus_mock_add_properties (orgfreedesktopDBusMock* self, const gchar* interface_name, GHashTable* properties, GError** error);
void org_freedesktop_dbus_mock_add_property (orgfreedesktopDBusMock* self, const gchar* interface_name, const gchar* name, GVariant* val, GError** error);
void org_freedesktop_dbus_mock_add_template (orgfreedesktopDBusMock* self, const gchar* template_name, GHashTable* template_params, GError** error);
void org_freedesktop_dbus_mock_clear_calls (orgfreedesktopDBusMock* self, GError** error);
void org_freedesktop_dbus_mock_emit_signal (orgfreedesktopDBusMock* self, const gchar* interface_name, const gchar* name, const gchar* signature, GVariant** args, int args_length1, GError** error);
orgfreedesktopDBusMockCall* org_freedesktop_dbus_mock_get_calls (orgfreedesktopDBusMock* self, int* result_length1, GError** error);
orgfreedesktopDBusMockMethodCall* org_freedesktop_dbus_mock_get_method_calls (orgfreedesktopDBusMock* self, const gchar* method, int* result_length1, GError** error);
void org_freedesktop_dbus_mock_remove_object (orgfreedesktopDBusMock* self, const gchar* path, GError** error);
void org_freedesktop_dbus_mock_reset (orgfreedesktopDBusMock* self, GError** error);


G_END_DECLS

#endif
