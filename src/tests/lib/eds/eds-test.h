/* eds-test.h generated by valac 0.29.3.10-b87a, the Vala compiler, do not modify */


#ifndef __EDS_TEST_H__
#define __EDS_TEST_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <gio/gio.h>
#include <folks-test.h>

G_BEGIN_DECLS


#define EDS_TEST_TYPE_BACKEND (eds_test_backend_get_type ())
#define EDS_TEST_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), EDS_TEST_TYPE_BACKEND, EdsTestBackend))
#define EDS_TEST_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), EDS_TEST_TYPE_BACKEND, EdsTestBackendClass))
#define EDS_TEST_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EDS_TEST_TYPE_BACKEND))
#define EDS_TEST_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), EDS_TEST_TYPE_BACKEND))
#define EDS_TEST_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), EDS_TEST_TYPE_BACKEND, EdsTestBackendClass))

typedef struct _EdsTestBackend EdsTestBackend;
typedef struct _EdsTestBackendClass EdsTestBackendClass;
typedef struct _EdsTestBackendPrivate EdsTestBackendPrivate;

#define EDS_TEST_TYPE_TEST_CASE (eds_test_test_case_get_type ())
#define EDS_TEST_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), EDS_TEST_TYPE_TEST_CASE, EdsTestTestCase))
#define EDS_TEST_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), EDS_TEST_TYPE_TEST_CASE, EdsTestTestCaseClass))
#define EDS_TEST_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EDS_TEST_TYPE_TEST_CASE))
#define EDS_TEST_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), EDS_TEST_TYPE_TEST_CASE))
#define EDS_TEST_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), EDS_TEST_TYPE_TEST_CASE, EdsTestTestCaseClass))

typedef struct _EdsTestTestCase EdsTestTestCase;
typedef struct _EdsTestTestCaseClass EdsTestTestCaseClass;
typedef struct _EdsTestTestCasePrivate EdsTestTestCasePrivate;

struct _EdsTestBackend {
	GTypeInstance parent_instance;
	volatile int ref_count;
	EdsTestBackendPrivate * priv;
};

struct _EdsTestBackendClass {
	GTypeClass parent_class;
	void (*finalize) (EdsTestBackend *self);
};

struct _EdsTestTestCase {
	FolksTestCase parent_instance;
	EdsTestTestCasePrivate * priv;
	EdsTestBackend* eds_backend;
};

struct _EdsTestTestCaseClass {
	FolksTestCaseClass parent_class;
	void (*create_backend) (EdsTestTestCase* self);
	void (*configure_primary_store) (EdsTestTestCase* self);
};


gpointer eds_test_backend_ref (gpointer instance);
void eds_test_backend_unref (gpointer instance);
GParamSpec* eds_test_param_spec_backend (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void eds_test_value_set_backend (GValue* value, gpointer v_object);
void eds_test_value_take_backend (GValue* value, gpointer v_object);
gpointer eds_test_value_get_backend (const GValue* value);
GType eds_test_backend_get_type (void) G_GNUC_CONST;
EdsTestBackend* eds_test_backend_new (const gchar* name);
EdsTestBackend* eds_test_backend_construct (GType object_type, const gchar* name);
void eds_test_backend_add_contact (EdsTestBackend* self, GeeHashMap* c);
void eds_test_backend_update_contact (EdsTestBackend* self, gint contact_pos, GeeHashMap* updated_data, GAsyncReadyCallback _callback_, gpointer _user_data_);
void eds_test_backend_update_contact_finish (EdsTestBackend* self, GAsyncResult* _res_);
void eds_test_backend_remove_contact (EdsTestBackend* self, gint contact_pos, GAsyncReadyCallback _callback_, gpointer _user_data_);
void eds_test_backend_remove_contact_finish (EdsTestBackend* self, GAsyncResult* _res_);
void eds_test_backend_reset (EdsTestBackend* self);
void eds_test_backend_set_up (EdsTestBackend* self, gboolean source_is_default);
void eds_test_backend_set_as_default (EdsTestBackend* self);
void eds_test_backend_commit_contacts_to_addressbook (EdsTestBackend* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void eds_test_backend_commit_contacts_to_addressbook_finish (EdsTestBackend* self, GAsyncResult* _res_);
void eds_test_backend_commit_contacts_to_addressbook_sync (EdsTestBackend* self);
void eds_test_backend_tear_down (EdsTestBackend* self);
const gchar* eds_test_backend_get_address_book_uid (EdsTestBackend* self);
GType eds_test_test_case_get_type (void) G_GNUC_CONST;
EdsTestTestCase* eds_test_test_case_new (const gchar* name);
EdsTestTestCase* eds_test_test_case_construct (GType object_type, const gchar* name);
void eds_test_test_case_create_backend (EdsTestTestCase* self);
void eds_test_test_case_configure_primary_store (EdsTestTestCase* self);


G_END_DECLS

#endif
