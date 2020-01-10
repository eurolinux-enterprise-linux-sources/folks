/* kf-test.h generated by valac 0.35.3.10-6b27, the Vala compiler, do not modify */


#ifndef __KF_TEST_H__
#define __KF_TEST_H__

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <folks-test.h>

G_BEGIN_DECLS


#define KF_TEST_TYPE_BACKEND (kf_test_backend_get_type ())
#define KF_TEST_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KF_TEST_TYPE_BACKEND, KfTestBackend))
#define KF_TEST_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KF_TEST_TYPE_BACKEND, KfTestBackendClass))
#define KF_TEST_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KF_TEST_TYPE_BACKEND))
#define KF_TEST_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KF_TEST_TYPE_BACKEND))
#define KF_TEST_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KF_TEST_TYPE_BACKEND, KfTestBackendClass))

typedef struct _KfTestBackend KfTestBackend;
typedef struct _KfTestBackendClass KfTestBackendClass;
typedef struct _KfTestBackendPrivate KfTestBackendPrivate;

#define KF_TEST_TYPE_TEST_CASE (kf_test_test_case_get_type ())
#define KF_TEST_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), KF_TEST_TYPE_TEST_CASE, KfTestTestCase))
#define KF_TEST_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), KF_TEST_TYPE_TEST_CASE, KfTestTestCaseClass))
#define KF_TEST_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), KF_TEST_TYPE_TEST_CASE))
#define KF_TEST_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), KF_TEST_TYPE_TEST_CASE))
#define KF_TEST_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), KF_TEST_TYPE_TEST_CASE, KfTestTestCaseClass))

typedef struct _KfTestTestCase KfTestTestCase;
typedef struct _KfTestTestCaseClass KfTestTestCaseClass;
typedef struct _KfTestTestCasePrivate KfTestTestCasePrivate;

struct _KfTestBackend {
	GTypeInstance parent_instance;
	volatile int ref_count;
	KfTestBackendPrivate * priv;
};

struct _KfTestBackendClass {
	GTypeClass parent_class;
	void (*finalize) (KfTestBackend *self);
};

struct _KfTestTestCase {
	FolksTestCase parent_instance;
	KfTestTestCasePrivate * priv;
	KfTestBackend* kf_backend;
};

struct _KfTestTestCaseClass {
	FolksTestCaseClass parent_class;
};


gpointer kf_test_backend_ref (gpointer instance);
void kf_test_backend_unref (gpointer instance);
GParamSpec* kf_test_param_spec_backend (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void kf_test_value_set_backend (GValue* value, gpointer v_object);
void kf_test_value_take_backend (GValue* value, gpointer v_object);
gpointer kf_test_value_get_backend (const GValue* value);
GType kf_test_backend_get_type (void) G_GNUC_CONST;
void kf_test_backend_set_up (KfTestBackend* self, const gchar* key_file_contents);
void kf_test_backend_tear_down (KfTestBackend* self);
KfTestBackend* kf_test_backend_new (void);
KfTestBackend* kf_test_backend_construct (GType object_type);
GType kf_test_test_case_get_type (void) G_GNUC_CONST;
KfTestTestCase* kf_test_test_case_new (const gchar* name);
KfTestTestCase* kf_test_test_case_construct (GType object_type, const gchar* name);


G_END_DECLS

#endif
