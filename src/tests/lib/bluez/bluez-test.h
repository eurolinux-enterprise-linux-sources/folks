/* bluez-test.h generated by valac 0.27.1.3-6129, the Vala compiler, do not modify */


#ifndef __BLUEZ_TEST_H__
#define __BLUEZ_TEST_H__

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <folks-test.h>

G_BEGIN_DECLS


#define ORG_BLUEZ_TYPE_MOCK (org_bluez_mock_get_type ())
#define ORG_BLUEZ_MOCK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ORG_BLUEZ_TYPE_MOCK, orgbluezMock))
#define ORG_BLUEZ_IS_MOCK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ORG_BLUEZ_TYPE_MOCK))
#define ORG_BLUEZ_MOCK_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ORG_BLUEZ_TYPE_MOCK, orgbluezMockIface))

typedef struct _orgbluezMock orgbluezMock;
typedef struct _orgbluezMockIface orgbluezMockIface;

#define ORG_BLUEZ_TYPE_MOCK_PROXY (org_bluez_mock_proxy_get_type ())

#define ORG_BLUEZ_OBEX_TYPE_MOCK (org_bluez_obex_mock_get_type ())
#define ORG_BLUEZ_OBEX_MOCK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ORG_BLUEZ_OBEX_TYPE_MOCK, orgbluezobexMock))
#define ORG_BLUEZ_OBEX_IS_MOCK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ORG_BLUEZ_OBEX_TYPE_MOCK))
#define ORG_BLUEZ_OBEX_MOCK_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ORG_BLUEZ_OBEX_TYPE_MOCK, orgbluezobexMockIface))

typedef struct _orgbluezobexMock orgbluezobexMock;
typedef struct _orgbluezobexMockIface orgbluezobexMockIface;

#define ORG_BLUEZ_OBEX_TYPE_MOCK_PROXY (org_bluez_obex_mock_proxy_get_type ())

#define ORG_BLUEZ_OBEX_TRANSFER1_TYPE_MOCK (org_bluez_obex_transfer1_mock_get_type ())
#define ORG_BLUEZ_OBEX_TRANSFER1_MOCK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), ORG_BLUEZ_OBEX_TRANSFER1_TYPE_MOCK, orgbluezobextransfer1Mock))
#define ORG_BLUEZ_OBEX_TRANSFER1_IS_MOCK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ORG_BLUEZ_OBEX_TRANSFER1_TYPE_MOCK))
#define ORG_BLUEZ_OBEX_TRANSFER1_MOCK_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), ORG_BLUEZ_OBEX_TRANSFER1_TYPE_MOCK, orgbluezobextransfer1MockIface))

typedef struct _orgbluezobextransfer1Mock orgbluezobextransfer1Mock;
typedef struct _orgbluezobextransfer1MockIface orgbluezobextransfer1MockIface;

#define ORG_BLUEZ_OBEX_TRANSFER1_TYPE_MOCK_PROXY (org_bluez_obex_transfer1_mock_proxy_get_type ())

#define BLUEZ_TEST_TYPE_BACKEND (bluez_test_backend_get_type ())
#define BLUEZ_TEST_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BLUEZ_TEST_TYPE_BACKEND, BluezTestBackend))
#define BLUEZ_TEST_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BLUEZ_TEST_TYPE_BACKEND, BluezTestBackendClass))
#define BLUEZ_TEST_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BLUEZ_TEST_TYPE_BACKEND))
#define BLUEZ_TEST_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BLUEZ_TEST_TYPE_BACKEND))
#define BLUEZ_TEST_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BLUEZ_TEST_TYPE_BACKEND, BluezTestBackendClass))

typedef struct _BluezTestBackend BluezTestBackend;
typedef struct _BluezTestBackendClass BluezTestBackendClass;
typedef struct _BluezTestBackendPrivate BluezTestBackendPrivate;

#define BLUEZ_TEST_TYPE_TEST_CASE (bluez_test_test_case_get_type ())
#define BLUEZ_TEST_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BLUEZ_TEST_TYPE_TEST_CASE, BluezTestTestCase))
#define BLUEZ_TEST_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BLUEZ_TEST_TYPE_TEST_CASE, BluezTestTestCaseClass))
#define BLUEZ_TEST_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BLUEZ_TEST_TYPE_TEST_CASE))
#define BLUEZ_TEST_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BLUEZ_TEST_TYPE_TEST_CASE))
#define BLUEZ_TEST_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BLUEZ_TEST_TYPE_TEST_CASE, BluezTestTestCaseClass))

typedef struct _BluezTestTestCase BluezTestTestCase;
typedef struct _BluezTestTestCaseClass BluezTestTestCaseClass;
typedef struct _BluezTestTestCasePrivate BluezTestTestCasePrivate;

struct _orgbluezMockIface {
	GTypeInterface parent_iface;
	gchar* (*add_adapter) (orgbluezMock* self, const gchar* device_name, const gchar* system_name, GError** error);
	gchar* (*add_device) (orgbluezMock* self, const gchar* adapter_device_name, const gchar* device_address, const gchar* alias, GError** error);
	void (*pair_device) (orgbluezMock* self, const gchar* adapter_device_name, const gchar* device_address, GError** error);
	void (*block_device) (orgbluezMock* self, const gchar* adapter_device_name, const gchar* device_address, GError** error);
};

struct _orgbluezobexMockIface {
	GTypeInterface parent_iface;
};

struct _orgbluezobextransfer1MockIface {
	GTypeInterface parent_iface;
	void (*update_status) (orgbluezobextransfer1Mock* self, gboolean is_complete, GError** error);
};

struct _BluezTestBackend {
	GTypeInstance parent_instance;
	volatile int ref_count;
	BluezTestBackendPrivate * priv;
};

struct _BluezTestBackendClass {
	GTypeClass parent_class;
	void (*finalize) (BluezTestBackend *self);
};

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


GType org_bluez_mock_proxy_get_type (void) G_GNUC_CONST;
guint org_bluez_mock_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType org_bluez_mock_get_type (void) G_GNUC_CONST;
gchar* org_bluez_mock_add_adapter (orgbluezMock* self, const gchar* device_name, const gchar* system_name, GError** error);
gchar* org_bluez_mock_add_device (orgbluezMock* self, const gchar* adapter_device_name, const gchar* device_address, const gchar* alias, GError** error);
void org_bluez_mock_pair_device (orgbluezMock* self, const gchar* adapter_device_name, const gchar* device_address, GError** error);
void org_bluez_mock_block_device (orgbluezMock* self, const gchar* adapter_device_name, const gchar* device_address, GError** error);
GType org_bluez_obex_mock_get_type (void) G_GNUC_CONST;
GType org_bluez_obex_mock_proxy_get_type (void) G_GNUC_CONST;
guint org_bluez_obex_mock_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType org_bluez_obex_transfer1_mock_proxy_get_type (void) G_GNUC_CONST;
guint org_bluez_obex_transfer1_mock_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType org_bluez_obex_transfer1_mock_get_type (void) G_GNUC_CONST;
void org_bluez_obex_transfer1_mock_update_status (orgbluezobextransfer1Mock* self, gboolean is_complete, GError** error);
gpointer bluez_test_backend_ref (gpointer instance);
void bluez_test_backend_unref (gpointer instance);
GParamSpec* bluez_test_param_spec_backend (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void bluez_test_value_set_backend (GValue* value, gpointer v_object);
void bluez_test_value_take_backend (GValue* value, gpointer v_object);
gpointer bluez_test_value_get_backend (const GValue* value);
GType bluez_test_backend_get_type (void) G_GNUC_CONST;
void bluez_test_backend_set_up (BluezTestBackend* self);
void bluez_test_backend_tear_down (BluezTestBackend* self);
gulong bluez_test_backend_create_simple_device_with_vcard (BluezTestBackend* self, const gchar* vcard, gchar** adapter_path, gchar** device_path);
gulong bluez_test_backend_set_simple_device_vcard (BluezTestBackend* self, const gchar* vcard);
BluezTestBackend* bluez_test_backend_new (void);
BluezTestBackend* bluez_test_backend_construct (GType object_type);
orgbluezMock* bluez_test_backend_get_mock_bluez (BluezTestBackend* self);
orgfreedesktopDBusMock* bluez_test_backend_get_mock_bluez_base (BluezTestBackend* self);
orgbluezobexMock* bluez_test_backend_get_mock_obex (BluezTestBackend* self);
orgfreedesktopDBusMock* bluez_test_backend_get_mock_obex_base (BluezTestBackend* self);
const gchar* bluez_test_backend_get_primary_device_address (BluezTestBackend* self);
GType bluez_test_test_case_get_type (void) G_GNUC_CONST;
BluezTestTestCase* bluez_test_test_case_new (const gchar* name);
BluezTestTestCase* bluez_test_test_case_construct (GType object_type, const gchar* name);
void bluez_test_test_case_create_backend (BluezTestTestCase* self);
void bluez_test_test_case_configure_primary_store (BluezTestTestCase* self);


G_END_DECLS

#endif
