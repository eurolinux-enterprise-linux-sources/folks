/* dummy-test.h generated by valac 0.35.3.10-6b27, the Vala compiler, do not modify */


#ifndef __DUMMY_TEST_H__
#define __DUMMY_TEST_H__

#include <glib.h>
#include <folks-test.h>
#include <folks/folks-dummy.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS


#define DUMMY_TEST_TYPE_TEST_CASE (dummy_test_test_case_get_type ())
#define DUMMY_TEST_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DUMMY_TEST_TYPE_TEST_CASE, DummyTestTestCase))
#define DUMMY_TEST_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DUMMY_TEST_TYPE_TEST_CASE, DummyTestTestCaseClass))
#define DUMMY_TEST_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DUMMY_TEST_TYPE_TEST_CASE))
#define DUMMY_TEST_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DUMMY_TEST_TYPE_TEST_CASE))
#define DUMMY_TEST_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DUMMY_TEST_TYPE_TEST_CASE, DummyTestTestCaseClass))

typedef struct _DummyTestTestCase DummyTestTestCase;
typedef struct _DummyTestTestCaseClass DummyTestTestCaseClass;
typedef struct _DummyTestTestCasePrivate DummyTestTestCasePrivate;

struct _DummyTestTestCase {
	FolksTestCase parent_instance;
	DummyTestTestCasePrivate * priv;
	FolksDummyBackend* dummy_backend;
	FolksDummyPersonaStore* dummy_persona_store;
};

struct _DummyTestTestCaseClass {
	FolksTestCaseClass parent_class;
	void (*configure_primary_store) (DummyTestTestCase* self);
};


GType dummy_test_test_case_get_type (void) G_GNUC_CONST;
DummyTestTestCase* dummy_test_test_case_new (const gchar* name);
DummyTestTestCase* dummy_test_test_case_construct (GType object_type, const gchar* name);
void dummy_test_test_case_configure_primary_store (DummyTestTestCase* self);


G_END_DECLS

#endif
