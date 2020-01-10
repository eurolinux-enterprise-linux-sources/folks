/* libsocialweb-test.h generated by valac 0.27.1.3-6129, the Vala compiler, do not modify */


#ifndef __LIBSOCIALWEB_TEST_H__
#define __LIBSOCIALWEB_TEST_H__

#include <glib.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <glib-object.h>
#include <gee.h>
#include <folks-test.h>

G_BEGIN_DECLS


#define LIBSOCIALWEB_TEST_TYPE_CONTACT_VIEW (libsocialweb_test_contact_view_get_type ())
#define LIBSOCIALWEB_TEST_CONTACT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_CONTACT_VIEW, LibsocialwebTestContactView))
#define LIBSOCIALWEB_TEST_IS_CONTACT_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_CONTACT_VIEW))
#define LIBSOCIALWEB_TEST_CONTACT_VIEW_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), LIBSOCIALWEB_TEST_TYPE_CONTACT_VIEW, LibsocialwebTestContactViewIface))

typedef struct _LibsocialwebTestContactView LibsocialwebTestContactView;
typedef struct _LibsocialwebTestContactViewIface LibsocialwebTestContactViewIface;

#define LIBSOCIALWEB_TEST_TYPE_CONTACT_VIEW_PROXY (libsocialweb_test_contact_view_proxy_get_type ())

#define LIBSOCIALWEB_TEST_CONTACT_VIEW_TYPE_CONTACTS_ADDED_ELEMENT (libsocialweb_test_contact_view_contacts_added_element_get_type ())
typedef struct _LibsocialwebTestContactViewContactsAddedElement LibsocialwebTestContactViewContactsAddedElement;

#define LIBSOCIALWEB_TEST_CONTACT_VIEW_TYPE_CONTACTS_REMOVED_ELEMENT (libsocialweb_test_contact_view_contacts_removed_element_get_type ())
typedef struct _LibsocialwebTestContactViewContactsRemovedElement LibsocialwebTestContactViewContactsRemovedElement;

#define LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_CONTACT_VIEW_TEST (libsocialweb_test_libsocialweb_contact_view_test_get_type ())
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_CONTACT_VIEW_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_CONTACT_VIEW_TEST, LibsocialwebTestLibsocialwebContactViewTest))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_CONTACT_VIEW_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_CONTACT_VIEW_TEST, LibsocialwebTestLibsocialwebContactViewTestClass))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_CONTACT_VIEW_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_CONTACT_VIEW_TEST))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_CONTACT_VIEW_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_CONTACT_VIEW_TEST))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_CONTACT_VIEW_TEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_CONTACT_VIEW_TEST, LibsocialwebTestLibsocialwebContactViewTestClass))

typedef struct _LibsocialwebTestLibsocialwebContactViewTest LibsocialwebTestLibsocialwebContactViewTest;
typedef struct _LibsocialwebTestLibsocialwebContactViewTestClass LibsocialwebTestLibsocialwebContactViewTestClass;
typedef struct _LibsocialwebTestLibsocialwebContactViewTestPrivate LibsocialwebTestLibsocialwebContactViewTestPrivate;

#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_CONTACT_VIEW_TEST_TYPE_CONTACTS_ADDED_ELEMENT (libsocialweb_test_libsocialweb_contact_view_test_contacts_added_element_get_type ())
typedef struct _LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement;

#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_CONTACT_VIEW_TEST_TYPE_CONTACTS_REMOVED_ELEMENT (libsocialweb_test_libsocialweb_contact_view_test_contacts_removed_element_get_type ())
typedef struct _LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement;

#define LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST (libsocialweb_test_libsocialweb_service_capabilities_test_get_type ())
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST, LibsocialwebTestLibsocialwebServiceCapabilitiesTest))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST, LibsocialwebTestLibsocialwebServiceCapabilitiesTestIface))

typedef struct _LibsocialwebTestLibsocialwebServiceCapabilitiesTest LibsocialwebTestLibsocialwebServiceCapabilitiesTest;
typedef struct _LibsocialwebTestLibsocialwebServiceCapabilitiesTestIface LibsocialwebTestLibsocialwebServiceCapabilitiesTestIface;

#define LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_CAPABILITIES_TEST_PROXY (libsocialweb_test_libsocialweb_service_capabilities_test_proxy_get_type ())

#define LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_QUERY_TEST (libsocialweb_test_libsocialweb_service_query_test_get_type ())
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVICE_QUERY_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_QUERY_TEST, LibsocialwebTestLibsocialwebServiceQueryTest))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_SERVICE_QUERY_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_QUERY_TEST))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVICE_QUERY_TEST_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_QUERY_TEST, LibsocialwebTestLibsocialwebServiceQueryTestIface))

typedef struct _LibsocialwebTestLibsocialwebServiceQueryTest LibsocialwebTestLibsocialwebServiceQueryTest;
typedef struct _LibsocialwebTestLibsocialwebServiceQueryTestIface LibsocialwebTestLibsocialwebServiceQueryTestIface;

#define LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_QUERY_TEST_PROXY (libsocialweb_test_libsocialweb_service_query_test_proxy_get_type ())

#define LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_TEST (libsocialweb_test_libsocialweb_service_test_get_type ())
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVICE_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_TEST, LibsocialwebTestLibsocialwebServiceTest))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVICE_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_TEST, LibsocialwebTestLibsocialwebServiceTestClass))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_SERVICE_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_TEST))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_SERVICE_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_TEST))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVICE_TEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVICE_TEST, LibsocialwebTestLibsocialwebServiceTestClass))

typedef struct _LibsocialwebTestLibsocialwebServiceTest LibsocialwebTestLibsocialwebServiceTest;
typedef struct _LibsocialwebTestLibsocialwebServiceTestClass LibsocialwebTestLibsocialwebServiceTestClass;
typedef struct _LibsocialwebTestLibsocialwebServiceTestPrivate LibsocialwebTestLibsocialwebServiceTestPrivate;

#define LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVER_TEST (libsocialweb_test_libsocialweb_server_test_get_type ())
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVER_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVER_TEST, LibsocialwebTestLibsocialwebServerTest))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVER_TEST, LibsocialwebTestLibsocialwebServerTestClass))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_SERVER_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVER_TEST))
#define LIBSOCIALWEB_TEST_IS_LIBSOCIALWEB_SERVER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVER_TEST))
#define LIBSOCIALWEB_TEST_LIBSOCIALWEB_SERVER_TEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBSOCIALWEB_TEST_TYPE_LIBSOCIALWEB_SERVER_TEST, LibsocialwebTestLibsocialwebServerTestClass))

typedef struct _LibsocialwebTestLibsocialwebServerTest LibsocialwebTestLibsocialwebServerTest;
typedef struct _LibsocialwebTestLibsocialwebServerTestClass LibsocialwebTestLibsocialwebServerTestClass;
typedef struct _LibsocialwebTestLibsocialwebServerTestPrivate LibsocialwebTestLibsocialwebServerTestPrivate;

#define LIBSOCIALWEB_TEST_TYPE_BACKEND (libsocialweb_test_backend_get_type ())
#define LIBSOCIALWEB_TEST_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_BACKEND, LibsocialwebTestBackend))
#define LIBSOCIALWEB_TEST_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBSOCIALWEB_TEST_TYPE_BACKEND, LibsocialwebTestBackendClass))
#define LIBSOCIALWEB_TEST_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_BACKEND))
#define LIBSOCIALWEB_TEST_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBSOCIALWEB_TEST_TYPE_BACKEND))
#define LIBSOCIALWEB_TEST_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBSOCIALWEB_TEST_TYPE_BACKEND, LibsocialwebTestBackendClass))

typedef struct _LibsocialwebTestBackend LibsocialwebTestBackend;
typedef struct _LibsocialwebTestBackendClass LibsocialwebTestBackendClass;
typedef struct _LibsocialwebTestBackendPrivate LibsocialwebTestBackendPrivate;

#define LIBSOCIALWEB_TEST_TYPE_TEST_CASE (libsocialweb_test_test_case_get_type ())
#define LIBSOCIALWEB_TEST_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LIBSOCIALWEB_TEST_TYPE_TEST_CASE, LibsocialwebTestTestCase))
#define LIBSOCIALWEB_TEST_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LIBSOCIALWEB_TEST_TYPE_TEST_CASE, LibsocialwebTestTestCaseClass))
#define LIBSOCIALWEB_TEST_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LIBSOCIALWEB_TEST_TYPE_TEST_CASE))
#define LIBSOCIALWEB_TEST_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LIBSOCIALWEB_TEST_TYPE_TEST_CASE))
#define LIBSOCIALWEB_TEST_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LIBSOCIALWEB_TEST_TYPE_TEST_CASE, LibsocialwebTestTestCaseClass))

typedef struct _LibsocialwebTestTestCase LibsocialwebTestTestCase;
typedef struct _LibsocialwebTestTestCaseClass LibsocialwebTestTestCaseClass;
typedef struct _LibsocialwebTestTestCasePrivate LibsocialwebTestTestCasePrivate;

struct _LibsocialwebTestContactViewIface {
	GTypeInterface parent_iface;
	void (*Close) (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Close_finish) (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
	void (*Refresh) (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Refresh_finish) (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
	void (*Start) (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Start_finish) (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
	void (*Stop) (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*Stop_finish) (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
};

struct _LibsocialwebTestContactViewContactsAddedElement {
	gchar* service;
	gchar* id;
	gint64 time;
	GVariant* attrs;
};

struct _LibsocialwebTestContactViewContactsRemovedElement {
	gchar* service;
	gchar* id;
};

struct _LibsocialwebTestLibsocialwebContactViewTest {
	GObject parent_instance;
	LibsocialwebTestLibsocialwebContactViewTestPrivate * priv;
	gchar* query;
	gchar* path;
};

struct _LibsocialwebTestLibsocialwebContactViewTestClass {
	GObjectClass parent_class;
};

struct _LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement {
	gchar* service;
	gchar* id;
	gint64 time;
	GVariant* attrs;
};

struct _LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement {
	gchar* service;
	gchar* id;
};

struct _LibsocialwebTestLibsocialwebServiceCapabilitiesTestIface {
	GTypeInterface parent_iface;
	gchar** (*GetStaticCapabilities) (LibsocialwebTestLibsocialwebServiceCapabilitiesTest* self, int* result_length1, GError** error);
};

struct _LibsocialwebTestLibsocialwebServiceQueryTestIface {
	GTypeInterface parent_iface;
	char* (*OpenView) (LibsocialwebTestLibsocialwebServiceQueryTest* self, const gchar* query, GHashTable* p, GError** error);
};

struct _LibsocialwebTestLibsocialwebServiceTest {
	GObject parent_instance;
	LibsocialwebTestLibsocialwebServiceTestPrivate * priv;
	GeeHashMap* contact_views;
};

struct _LibsocialwebTestLibsocialwebServiceTestClass {
	GObjectClass parent_class;
};

struct _LibsocialwebTestLibsocialwebServerTest {
	GObject parent_instance;
	LibsocialwebTestLibsocialwebServerTestPrivate * priv;
};

struct _LibsocialwebTestLibsocialwebServerTestClass {
	GObjectClass parent_class;
};

struct _LibsocialwebTestBackend {
	GTypeInstance parent_instance;
	volatile int ref_count;
	LibsocialwebTestBackendPrivate * priv;
};

struct _LibsocialwebTestBackendClass {
	GTypeClass parent_class;
	void (*finalize) (LibsocialwebTestBackend *self);
};

struct _LibsocialwebTestTestCase {
	FolksTestCase parent_instance;
	LibsocialwebTestTestCasePrivate * priv;
	LibsocialwebTestBackend* lsw_backend;
};

struct _LibsocialwebTestTestCaseClass {
	FolksTestCaseClass parent_class;
};


GType libsocialweb_test_contact_view_proxy_get_type (void) G_GNUC_CONST;
guint libsocialweb_test_contact_view_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType libsocialweb_test_contact_view_get_type (void) G_GNUC_CONST;
void libsocialweb_test_contact_view_Close (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void libsocialweb_test_contact_view_Close_finish (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
void libsocialweb_test_contact_view_Refresh (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void libsocialweb_test_contact_view_Refresh_finish (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
void libsocialweb_test_contact_view_Start (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void libsocialweb_test_contact_view_Start_finish (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
void libsocialweb_test_contact_view_Stop (LibsocialwebTestContactView* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void libsocialweb_test_contact_view_Stop_finish (LibsocialwebTestContactView* self, GAsyncResult* _res_, GError** error);
GType libsocialweb_test_contact_view_contacts_added_element_get_type (void) G_GNUC_CONST;
LibsocialwebTestContactViewContactsAddedElement* libsocialweb_test_contact_view_contacts_added_element_dup (const LibsocialwebTestContactViewContactsAddedElement* self);
void libsocialweb_test_contact_view_contacts_added_element_free (LibsocialwebTestContactViewContactsAddedElement* self);
void libsocialweb_test_contact_view_contacts_added_element_copy (const LibsocialwebTestContactViewContactsAddedElement* self, LibsocialwebTestContactViewContactsAddedElement* dest);
void libsocialweb_test_contact_view_contacts_added_element_destroy (LibsocialwebTestContactViewContactsAddedElement* self);
GType libsocialweb_test_contact_view_contacts_removed_element_get_type (void) G_GNUC_CONST;
LibsocialwebTestContactViewContactsRemovedElement* libsocialweb_test_contact_view_contacts_removed_element_dup (const LibsocialwebTestContactViewContactsRemovedElement* self);
void libsocialweb_test_contact_view_contacts_removed_element_free (LibsocialwebTestContactViewContactsRemovedElement* self);
void libsocialweb_test_contact_view_contacts_removed_element_copy (const LibsocialwebTestContactViewContactsRemovedElement* self, LibsocialwebTestContactViewContactsRemovedElement* dest);
void libsocialweb_test_contact_view_contacts_removed_element_destroy (LibsocialwebTestContactViewContactsRemovedElement* self);
GType libsocialweb_test_libsocialweb_contact_view_test_get_type (void) G_GNUC_CONST;
guint libsocialweb_test_libsocialweb_contact_view_test_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
LibsocialwebTestLibsocialwebContactViewTest* libsocialweb_test_libsocialweb_contact_view_test_new (const gchar* query, GHashTable* p, const gchar* path);
LibsocialwebTestLibsocialwebContactViewTest* libsocialweb_test_libsocialweb_contact_view_test_construct (GType object_type, const gchar* query, GHashTable* p, const gchar* path);
void libsocialweb_test_libsocialweb_contact_view_test_Close (LibsocialwebTestLibsocialwebContactViewTest* self);
void libsocialweb_test_libsocialweb_contact_view_test_Refresh (LibsocialwebTestLibsocialwebContactViewTest* self);
void libsocialweb_test_libsocialweb_contact_view_test_Start (LibsocialwebTestLibsocialwebContactViewTest* self);
void libsocialweb_test_libsocialweb_contact_view_test_Stop (LibsocialwebTestLibsocialwebContactViewTest* self);
void libsocialweb_test_libsocialweb_contact_view_test_EmitContactsAdded (LibsocialwebTestLibsocialwebContactViewTest* self, const gchar* text);
void libsocialweb_test_libsocialweb_contact_view_test_EmitContactsChanged (LibsocialwebTestLibsocialwebContactViewTest* self, const gchar* text);
void libsocialweb_test_libsocialweb_contact_view_test_EmitContactsRemoved (LibsocialwebTestLibsocialwebContactViewTest* self, const gchar* text);
GType libsocialweb_test_libsocialweb_contact_view_test_contacts_added_element_get_type (void) G_GNUC_CONST;
LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement* libsocialweb_test_libsocialweb_contact_view_test_contacts_added_element_dup (const LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement* self);
void libsocialweb_test_libsocialweb_contact_view_test_contacts_added_element_free (LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement* self);
void libsocialweb_test_libsocialweb_contact_view_test_contacts_added_element_copy (const LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement* self, LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement* dest);
void libsocialweb_test_libsocialweb_contact_view_test_contacts_added_element_destroy (LibsocialwebTestLibsocialwebContactViewTestContactsAddedElement* self);
GType libsocialweb_test_libsocialweb_contact_view_test_contacts_removed_element_get_type (void) G_GNUC_CONST;
LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement* libsocialweb_test_libsocialweb_contact_view_test_contacts_removed_element_dup (const LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement* self);
void libsocialweb_test_libsocialweb_contact_view_test_contacts_removed_element_free (LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement* self);
void libsocialweb_test_libsocialweb_contact_view_test_contacts_removed_element_copy (const LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement* self, LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement* dest);
void libsocialweb_test_libsocialweb_contact_view_test_contacts_removed_element_destroy (LibsocialwebTestLibsocialwebContactViewTestContactsRemovedElement* self);
GType libsocialweb_test_libsocialweb_service_capabilities_test_proxy_get_type (void) G_GNUC_CONST;
guint libsocialweb_test_libsocialweb_service_capabilities_test_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType libsocialweb_test_libsocialweb_service_capabilities_test_get_type (void) G_GNUC_CONST;
gchar** libsocialweb_test_libsocialweb_service_capabilities_test_GetStaticCapabilities (LibsocialwebTestLibsocialwebServiceCapabilitiesTest* self, int* result_length1, GError** error);
GType libsocialweb_test_libsocialweb_service_query_test_proxy_get_type (void) G_GNUC_CONST;
guint libsocialweb_test_libsocialweb_service_query_test_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType libsocialweb_test_libsocialweb_service_query_test_get_type (void) G_GNUC_CONST;
char* libsocialweb_test_libsocialweb_service_query_test_OpenView (LibsocialwebTestLibsocialwebServiceQueryTest* self, const gchar* query, GHashTable* p, GError** error);
GType libsocialweb_test_libsocialweb_service_test_get_type (void) G_GNUC_CONST;
guint libsocialweb_test_libsocialweb_service_test_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
LibsocialwebTestLibsocialwebServiceTest* libsocialweb_test_libsocialweb_service_test_new (const gchar* service_name);
LibsocialwebTestLibsocialwebServiceTest* libsocialweb_test_libsocialweb_service_test_construct (GType object_type, const gchar* service_name);
GType libsocialweb_test_libsocialweb_server_test_get_type (void) G_GNUC_CONST;
guint libsocialweb_test_libsocialweb_server_test_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
LibsocialwebTestLibsocialwebServerTest* libsocialweb_test_libsocialweb_server_test_new (void);
LibsocialwebTestLibsocialwebServerTest* libsocialweb_test_libsocialweb_server_test_construct (GType object_type);
gboolean libsocialweb_test_libsocialweb_server_test_is_online (LibsocialwebTestLibsocialwebServerTest* self);
gchar** libsocialweb_test_libsocialweb_server_test_get_services (LibsocialwebTestLibsocialwebServerTest* self, int* result_length1);
LibsocialwebTestLibsocialwebServiceTest* libsocialweb_test_libsocialweb_server_test_add_service (LibsocialwebTestLibsocialwebServerTest* self, const gchar* service_name);
void libsocialweb_test_libsocialweb_server_test_register (LibsocialwebTestLibsocialwebServerTest* self);
void libsocialweb_test_libsocialweb_server_test_unregister (LibsocialwebTestLibsocialwebServerTest* self);
gpointer libsocialweb_test_backend_ref (gpointer instance);
void libsocialweb_test_backend_unref (gpointer instance);
GParamSpec* libsocialweb_test_param_spec_backend (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void libsocialweb_test_value_set_backend (GValue* value, gpointer v_object);
void libsocialweb_test_value_take_backend (GValue* value, gpointer v_object);
gpointer libsocialweb_test_value_get_backend (const GValue* value);
GType libsocialweb_test_backend_get_type (void) G_GNUC_CONST;
#define LIBSOCIALWEB_TEST_BACKEND_LIBSOCIALWEB_IFACE "org.gnome.libsocialweb"
#define LIBSOCIALWEB_TEST_BACKEND_LIBSOCIALWEB_PATH "/org/gnome/libsocialweb"
#define LIBSOCIALWEB_TEST_BACKEND_LIBSOCIALWEB_BUS_NAME "org.gnome.libsocialweb"
LibsocialwebTestBackend* libsocialweb_test_backend_new (void);
LibsocialwebTestBackend* libsocialweb_test_backend_construct (GType object_type);
void libsocialweb_test_backend_set_up (LibsocialwebTestBackend* self);
LibsocialwebTestLibsocialwebServiceTest* libsocialweb_test_backend_add_service (LibsocialwebTestBackend* self, const gchar* service_name);
void libsocialweb_test_backend_tear_down (LibsocialwebTestBackend* self);
gboolean libsocialweb_test_backend_get_debug (LibsocialwebTestBackend* self);
void libsocialweb_test_backend_set_debug (LibsocialwebTestBackend* self, gboolean value);
GType libsocialweb_test_test_case_get_type (void) G_GNUC_CONST;
LibsocialwebTestTestCase* libsocialweb_test_test_case_new (const gchar* name);
LibsocialwebTestTestCase* libsocialweb_test_test_case_construct (GType object_type, const gchar* name);


G_END_DECLS

#endif
