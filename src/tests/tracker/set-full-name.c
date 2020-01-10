/* set-full-name.c generated by valac 0.26.2.1-1f25, the Vala compiler
 * generated from set-full-name.vala, do not modify */

/*
 * Copyright (C) 2011 Collabora Ltd.
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
 * Authors: Raul Gutierrez Segales <raul.gutierrez.segales@collabora.co.uk>
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <tracker-test.h>
#include <folks/folks.h>
#include <stdlib.h>
#include <string.h>
#include <folks-test.h>
#include <gee.h>
#include <folks/folks-tracker.h>
#include <gio/gio.h>


#define TYPE_SET_FULL_NAME_TESTS (set_full_name_tests_get_type ())
#define SET_FULL_NAME_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SET_FULL_NAME_TESTS, SetFullNameTests))
#define SET_FULL_NAME_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SET_FULL_NAME_TESTS, SetFullNameTestsClass))
#define IS_SET_FULL_NAME_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SET_FULL_NAME_TESTS))
#define IS_SET_FULL_NAME_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SET_FULL_NAME_TESTS))
#define SET_FULL_NAME_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SET_FULL_NAME_TESTS, SetFullNameTestsClass))

typedef struct _SetFullNameTests SetFullNameTests;
typedef struct _SetFullNameTestsClass SetFullNameTestsClass;
typedef struct _SetFullNameTestsPrivate SetFullNameTestsPrivate;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _SetFullNameTestsTestSetFullNameAsyncData SetFullNameTestsTestSetFullNameAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _SetFullNameTests {
	TrackerTestTestCase parent_instance;
	SetFullNameTestsPrivate * priv;
};

struct _SetFullNameTestsClass {
	TrackerTestTestCaseClass parent_class;
};

struct _SetFullNameTestsPrivate {
	GMainLoop* _main_loop;
	FolksIndividualAggregator* _aggregator;
	gchar* _persona_fullname;
	gboolean _found_changed_full_name;
	gchar* _individual_id;
	gchar* _modified_fullname;
};

struct _SetFullNameTestsTestSetFullNameAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	SetFullNameTests* self;
	FolksBackendStore* store;
	FolksBackendStore* _tmp0_;
	FolksIndividualAggregator* _tmp1_;
	FolksIndividualAggregator* _tmp2_;
	FolksIndividualAggregator* _tmp3_;
	GError* e;
	GError* _tmp4_;
	const gchar* _tmp5_;
	GError * _inner_error_;
};


static gpointer set_full_name_tests_parent_class = NULL;

GType set_full_name_tests_get_type (void) G_GNUC_CONST;
#define SET_FULL_NAME_TESTS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_SET_FULL_NAME_TESTS, SetFullNameTestsPrivate))
enum  {
	SET_FULL_NAME_TESTS_DUMMY_PROPERTY
};
SetFullNameTests* set_full_name_tests_new (void);
SetFullNameTests* set_full_name_tests_construct (GType object_type);
void set_full_name_tests_test_set_full_name (SetFullNameTests* self);
static void _set_full_name_tests_test_set_full_name_folks_test_case_test_method (gpointer self);
static void _set_full_name_tests_test_set_full_name_async (SetFullNameTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void _set_full_name_tests_test_set_full_name_finish (SetFullNameTests* self, GAsyncResult* _res_);
static void _set_full_name_tests_test_set_full_name_async_data_free (gpointer _data);
static gboolean _set_full_name_tests_test_set_full_name_async_co (SetFullNameTestsTestSetFullNameAsyncData* _data_);
static void _set_full_name_tests_test_set_full_name_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _set_full_name_tests_individuals_changed_cb (SetFullNameTests* self, GeeMultiMap* changes);
static void __set_full_name_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self);
static void _set_full_name_tests_notify_full_name_cb (SetFullNameTests* self, GObject* individual, GParamSpec* ps);
static void __set_full_name_tests_notify_full_name_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void set_full_name_tests_finalize (GObject* obj);
gint _vala_main (gchar** args, int args_length1);


static void _set_full_name_tests_test_set_full_name_folks_test_case_test_method (gpointer self) {
#line 39 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	set_full_name_tests_test_set_full_name ((SetFullNameTests*) self);
#line 117 "set-full-name.c"
}


SetFullNameTests* set_full_name_tests_construct (GType object_type) {
	SetFullNameTests * self = NULL;
#line 37 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self = (SetFullNameTests*) tracker_test_test_case_construct (object_type, "SetFullNameTests");
#line 39 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "test setting structured name ", _set_full_name_tests_test_set_full_name_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 35 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	return self;
#line 129 "set-full-name.c"
}


SetFullNameTests* set_full_name_tests_new (void) {
#line 35 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	return set_full_name_tests_construct (TYPE_SET_FULL_NAME_TESTS);
#line 136 "set-full-name.c"
}


void set_full_name_tests_test_set_full_name (SetFullNameTests* self) {
	GMainLoop* _tmp0_ = NULL;
	GeeHashMap* c1 = NULL;
	GeeHashMap* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	TrackerTestBackend* _tmp6_ = NULL;
	TrackerTestBackend* _tmp7_ = NULL;
	GMainLoop* _tmp8_ = NULL;
	gboolean _tmp9_ = FALSE;
#line 43 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_return_if_fail (self != NULL);
#line 45 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp0_ = g_main_loop_new (NULL, FALSE);
#line 45 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 45 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self->priv->_main_loop = _tmp0_;
#line 46 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp1_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 46 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	c1 = _tmp1_;
#line 47 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp2_ = g_strdup ("persona #1");
#line 47 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_free0 (self->priv->_persona_fullname);
#line 47 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self->priv->_persona_fullname = _tmp2_;
#line 48 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp3_ = g_strdup ("");
#line 48 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_free0 (self->priv->_individual_id);
#line 48 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self->priv->_individual_id = _tmp3_;
#line 49 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp4_ = g_strdup ("modified - persona #1");
#line 49 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_free0 (self->priv->_modified_fullname);
#line 49 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self->priv->_modified_fullname = _tmp4_;
#line 51 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp5_ = self->priv->_persona_fullname;
#line 51 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRF_ONTOLOGY_DEFS_NCO_FULLNAME, _tmp5_);
#line 52 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp6_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 52 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	tracker_test_backend_add_contact (G_TYPE_CHECK_INSTANCE_CAST (_tmp6_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), c1);
#line 54 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp7_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 54 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	tracker_test_backend_set_up (G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend));
#line 56 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self->priv->_found_changed_full_name = FALSE;
#line 58 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_set_full_name_tests_test_set_full_name_async (self, NULL, NULL);
#line 60 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp8_ = self->priv->_main_loop;
#line 60 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	folks_test_utils_loop_run_with_timeout (_tmp8_, 5);
#line 62 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp9_ = self->priv->_found_changed_full_name;
#line 62 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_vala_assert (_tmp9_, "this._found_changed_full_name");
#line 43 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (c1);
#line 208 "set-full-name.c"
}


static void _set_full_name_tests_test_set_full_name_async_data_free (gpointer _data) {
	SetFullNameTestsTestSetFullNameAsyncData* _data_;
	_data_ = _data;
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (_data_->self);
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_slice_free (SetFullNameTestsTestSetFullNameAsyncData, _data_);
#line 219 "set-full-name.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	return self ? g_object_ref (self) : NULL;
#line 226 "set-full-name.c"
}


static void _set_full_name_tests_test_set_full_name_async (SetFullNameTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	SetFullNameTestsTestSetFullNameAsyncData* _data_;
	SetFullNameTests* _tmp0_ = NULL;
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_ = g_slice_new0 (SetFullNameTestsTestSetFullNameAsyncData);
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, _set_full_name_tests_test_set_full_name_async);
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, _set_full_name_tests_test_set_full_name_async_data_free);
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->self = _tmp0_;
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_set_full_name_tests_test_set_full_name_async_co (_data_);
#line 245 "set-full-name.c"
}


static void _set_full_name_tests_test_set_full_name_finish (SetFullNameTests* self, GAsyncResult* _res_) {
	SetFullNameTestsTestSetFullNameAsyncData* _data_;
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 253 "set-full-name.c"
}


static void _set_full_name_tests_test_set_full_name_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	SetFullNameTestsTestSetFullNameAsyncData* _data_;
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_ = _user_data_;
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_source_object_ = source_object;
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_res_ = _res_;
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_set_full_name_tests_test_set_full_name_async_co (_data_);
#line 267 "set-full-name.c"
}


static void __set_full_name_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self) {
#line 70 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_set_full_name_tests_individuals_changed_cb ((SetFullNameTests*) self, changes);
#line 274 "set-full-name.c"
}


static gboolean _set_full_name_tests_test_set_full_name_async_co (SetFullNameTestsTestSetFullNameAsyncData* _data_) {
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	switch (_data_->_state_) {
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		case 0:
#line 283 "set-full-name.c"
		goto _state_0;
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		case 1:
#line 287 "set-full-name.c"
		goto _state_1;
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		case 2:
#line 291 "set-full-name.c"
		goto _state_2;
		default:
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		g_assert_not_reached ();
#line 296 "set-full-name.c"
	}
	_state_0:
#line 67 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_tmp0_ = NULL;
#line 67 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_tmp0_ = folks_backend_store_dup ();
#line 67 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->store = _data_->_tmp0_;
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_state_ = 1;
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	folks_backend_store_prepare (_data_->store, _set_full_name_tests_test_set_full_name_async_ready, _data_);
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	return FALSE;
#line 311 "set-full-name.c"
	_state_1:
#line 68 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	folks_backend_store_prepare_finish (_data_->store, _data_->_res_);
#line 69 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_tmp1_ = NULL;
#line 69 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_tmp1_ = folks_individual_aggregator_dup ();
#line 69 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (_data_->self->priv->_aggregator);
#line 69 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->self->priv->_aggregator = _data_->_tmp1_;
#line 70 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_tmp2_ = NULL;
#line 70 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_data_->_tmp2_ = _data_->self->priv->_aggregator;
#line 70 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_signal_connect_object (_data_->_tmp2_, "individuals-changed-detailed", (GCallback) __set_full_name_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed, _data_->self, 0);
#line 329 "set-full-name.c"
	{
#line 74 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_tmp3_ = NULL;
#line 74 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_tmp3_ = _data_->self->priv->_aggregator;
#line 74 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_state_ = 2;
#line 74 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		folks_individual_aggregator_prepare (_data_->_tmp3_, _set_full_name_tests_test_set_full_name_async_ready, _data_);
#line 74 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		return FALSE;
#line 341 "set-full-name.c"
		_state_2:
#line 74 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		folks_individual_aggregator_prepare_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
#line 74 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 347 "set-full-name.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->e = _data_->_inner_error_;
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_inner_error_ = NULL;
#line 78 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_tmp4_ = NULL;
#line 78 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_tmp4_ = _data_->e;
#line 78 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_tmp5_ = NULL;
#line 78 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_data_->_tmp5_ = _data_->_tmp4_->message;
#line 78 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		g_warning ("set-full-name.vala:78: Error when calling prepare: %s\n", _data_->_tmp5_);
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_g_error_free0 (_data_->e);
#line 370 "set-full-name.c"
	}
	__finally0:
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_g_object_unref0 (_data_->store);
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		g_clear_error (&_data_->_inner_error_);
#line 72 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		return FALSE;
#line 383 "set-full-name.c"
	}
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (_data_->store);
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	if (_data_->_state_ == 0) {
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 391 "set-full-name.c"
	} else {
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 395 "set-full-name.c"
	}
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_object_unref (_data_->_async_result);
#line 65 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	return FALSE;
#line 401 "set-full-name.c"
}


static void __set_full_name_tests_notify_full_name_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 95 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_set_full_name_tests_notify_full_name_cb ((SetFullNameTests*) self, _sender, pspec);
#line 408 "set-full-name.c"
}


static void _set_full_name_tests_individuals_changed_cb (SetFullNameTests* self, GeeMultiMap* changes) {
	GeeCollection* added = NULL;
	GeeMultiMap* _tmp0_ = NULL;
	GeeCollection* _tmp1_ = NULL;
	GeeSet* removed = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
	GeeSet* _tmp30_ = NULL;
	gint _tmp31_ = 0;
	gint _tmp32_ = 0;
#line 82 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_return_if_fail (self != NULL);
#line 82 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_return_if_fail (changes != NULL);
#line 85 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp0_ = changes;
#line 85 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp1_ = gee_multi_map_get_values (_tmp0_);
#line 85 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	added = _tmp1_;
#line 86 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp2_ = changes;
#line 86 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp3_ = gee_multi_map_get_keys (_tmp2_);
#line 86 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	removed = _tmp3_;
#line 438 "set-full-name.c"
	{
		GeeIterator* _i_it = NULL;
		GeeCollection* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp4_ = added;
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_i_it = _tmp5_;
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		while (TRUE) {
#line 451 "set-full-name.c"
			GeeIterator* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp8_ = NULL;
			gpointer _tmp9_ = NULL;
			FolksIndividual* _tmp10_ = NULL;
			FolksIndividual* _tmp11_ = NULL;
			const gchar* _tmp12_ = NULL;
			const gchar* _tmp13_ = NULL;
			const gchar* _tmp14_ = NULL;
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp6_ = _i_it;
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			if (!_tmp7_) {
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				break;
#line 470 "set-full-name.c"
			}
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp8_ = _i_it;
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			i = (FolksIndividual*) _tmp9_;
#line 90 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp10_ = i;
#line 90 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_vala_assert (_tmp10_ != NULL, "i != null");
#line 92 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp11_ = i;
#line 92 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp12_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp11_);
#line 92 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp13_ = _tmp12_;
#line 92 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp14_ = self->priv->_persona_fullname;
#line 92 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			if (g_strcmp0 (_tmp13_, _tmp14_) == 0) {
#line 492 "set-full-name.c"
				FolksIndividual* _tmp15_ = NULL;
				const gchar* _tmp16_ = NULL;
				const gchar* _tmp17_ = NULL;
				gchar* _tmp18_ = NULL;
				FolksIndividual* _tmp19_ = NULL;
#line 94 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				_tmp15_ = i;
#line 94 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				_tmp16_ = folks_individual_get_id (_tmp15_);
#line 94 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				_tmp17_ = _tmp16_;
#line 94 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				_tmp18_ = g_strdup (_tmp17_);
#line 94 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				_g_free0 (self->priv->_individual_id);
#line 94 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				self->priv->_individual_id = _tmp18_;
#line 95 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				_tmp19_ = i;
#line 95 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				g_signal_connect_object ((GObject*) _tmp19_, "notify::full-name", (GCallback) __set_full_name_tests_notify_full_name_cb_g_object_notify, self, 0);
#line 514 "set-full-name.c"
				{
					GeeIterator* _p_it = NULL;
					FolksIndividual* _tmp20_ = NULL;
					GeeSet* _tmp21_ = NULL;
					GeeSet* _tmp22_ = NULL;
					GeeIterator* _tmp23_ = NULL;
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
					_tmp20_ = i;
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
					_tmp21_ = folks_individual_get_personas (_tmp20_);
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
					_tmp22_ = _tmp21_;
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
					_tmp23_ = gee_iterable_iterator ((GeeIterable*) _tmp22_);
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
					_p_it = _tmp23_;
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
					while (TRUE) {
#line 533 "set-full-name.c"
						GeeIterator* _tmp24_ = NULL;
						gboolean _tmp25_ = FALSE;
						FolksPersona* p = NULL;
						GeeIterator* _tmp26_ = NULL;
						gpointer _tmp27_ = NULL;
						FolksPersona* _tmp28_ = NULL;
						const gchar* _tmp29_ = NULL;
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						_tmp24_ = _p_it;
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						_tmp25_ = gee_iterator_next (_tmp24_);
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						if (!_tmp25_) {
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
							break;
#line 549 "set-full-name.c"
						}
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						_tmp26_ = _p_it;
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						_tmp27_ = gee_iterator_get (_tmp26_);
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						p = (FolksPersona*) _tmp27_;
#line 99 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						_tmp28_ = p;
#line 99 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						_tmp29_ = self->priv->_modified_fullname;
#line 99 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						folks_name_details_set_full_name (G_TYPE_CHECK_INSTANCE_CAST (_tmp28_, FOLKS_TYPE_NAME_DETAILS, FolksNameDetails), _tmp29_);
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
						_g_object_unref0 (p);
#line 565 "set-full-name.c"
					}
#line 97 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
					_g_object_unref0 (_p_it);
#line 569 "set-full-name.c"
				}
			}
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_g_object_unref0 (i);
#line 574 "set-full-name.c"
		}
#line 88 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_g_object_unref0 (_i_it);
#line 578 "set-full-name.c"
	}
#line 104 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp30_ = removed;
#line 104 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp31_ = gee_collection_get_size ((GeeCollection*) _tmp30_);
#line 104 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp32_ = _tmp31_;
#line 104 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_vala_assert (_tmp32_ == 1, "removed.size == 1");
#line 588 "set-full-name.c"
	{
		GeeIterator* _i_it = NULL;
		GeeSet* _tmp33_ = NULL;
		GeeIterator* _tmp34_ = NULL;
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp33_ = removed;
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp34_ = gee_iterable_iterator ((GeeIterable*) _tmp33_);
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_i_it = _tmp34_;
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		while (TRUE) {
#line 601 "set-full-name.c"
			GeeIterator* _tmp35_ = NULL;
			gboolean _tmp36_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp37_ = NULL;
			gpointer _tmp38_ = NULL;
			FolksIndividual* _tmp39_ = NULL;
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp35_ = _i_it;
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp36_ = gee_iterator_next (_tmp35_);
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			if (!_tmp36_) {
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
				break;
#line 616 "set-full-name.c"
			}
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp37_ = _i_it;
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp38_ = gee_iterator_get (_tmp37_);
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			i = (FolksIndividual*) _tmp38_;
#line 108 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_tmp39_ = i;
#line 108 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_vala_assert (_tmp39_ == NULL, "i == null");
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
			_g_object_unref0 (i);
#line 630 "set-full-name.c"
		}
#line 106 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_g_object_unref0 (_i_it);
#line 634 "set-full-name.c"
	}
#line 82 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (removed);
#line 82 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (added);
#line 640 "set-full-name.c"
}


static void _set_full_name_tests_notify_full_name_cb (SetFullNameTests* self, GObject* individual, GParamSpec* ps) {
	FolksIndividual* i = NULL;
	GObject* _tmp0_ = NULL;
	FolksIndividual* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	FolksIndividual* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
#line 112 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_return_if_fail (self != NULL);
#line 112 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_return_if_fail (individual != NULL);
#line 112 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_return_if_fail (ps != NULL);
#line 114 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp0_ = individual;
#line 114 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, FOLKS_TYPE_INDIVIDUAL, FolksIndividual));
#line 114 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	i = _tmp1_;
#line 115 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp3_ = i;
#line 115 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp4_ = folks_individual_get_id (_tmp3_);
#line 115 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp5_ = _tmp4_;
#line 115 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp6_ = self->priv->_individual_id;
#line 115 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	if (g_strcmp0 (_tmp5_, _tmp6_) == 0) {
#line 675 "set-full-name.c"
		FolksIndividual* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		const gchar* _tmp10_ = NULL;
#line 116 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp7_ = i;
#line 116 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp8_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp7_);
#line 116 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp9_ = _tmp8_;
#line 116 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp10_ = self->priv->_modified_fullname;
#line 116 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp2_ = g_strcmp0 (_tmp9_, _tmp10_) == 0;
#line 690 "set-full-name.c"
	} else {
#line 115 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp2_ = FALSE;
#line 694 "set-full-name.c"
	}
#line 115 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	if (_tmp2_) {
#line 698 "set-full-name.c"
		GMainLoop* _tmp11_ = NULL;
#line 118 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		self->priv->_found_changed_full_name = TRUE;
#line 119 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		_tmp11_ = self->priv->_main_loop;
#line 119 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
		g_main_loop_quit (_tmp11_);
#line 706 "set-full-name.c"
	}
#line 112 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (i);
#line 710 "set-full-name.c"
}


static void set_full_name_tests_class_init (SetFullNameTestsClass * klass) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	set_full_name_tests_parent_class = g_type_class_peek_parent (klass);
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_type_class_add_private (klass, sizeof (SetFullNameTestsPrivate));
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	G_OBJECT_CLASS (klass)->finalize = set_full_name_tests_finalize;
#line 721 "set-full-name.c"
}


static void set_full_name_tests_instance_init (SetFullNameTests * self) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self->priv = SET_FULL_NAME_TESTS_GET_PRIVATE (self);
#line 728 "set-full-name.c"
}


static void set_full_name_tests_finalize (GObject* obj) {
	SetFullNameTests * self;
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_SET_FULL_NAME_TESTS, SetFullNameTests);
#line 28 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 29 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (self->priv->_aggregator);
#line 30 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_free0 (self->priv->_persona_fullname);
#line 32 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_free0 (self->priv->_individual_id);
#line 33 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_free0 (self->priv->_modified_fullname);
#line 26 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	G_OBJECT_CLASS (set_full_name_tests_parent_class)->finalize (obj);
#line 748 "set-full-name.c"
}


GType set_full_name_tests_get_type (void) {
	static volatile gsize set_full_name_tests_type_id__volatile = 0;
	if (g_once_init_enter (&set_full_name_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (SetFullNameTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) set_full_name_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (SetFullNameTests), 0, (GInstanceInitFunc) set_full_name_tests_instance_init, NULL };
		GType set_full_name_tests_type_id;
		set_full_name_tests_type_id = g_type_register_static (TRACKER_TEST_TYPE_TEST_CASE, "SetFullNameTests", &g_define_type_info, 0);
		g_once_init_leave (&set_full_name_tests_type_id__volatile, set_full_name_tests_type_id);
	}
	return set_full_name_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	SetFullNameTests* tests = NULL;
	SetFullNameTests* _tmp0_ = NULL;
#line 126 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_test_init (&args_length1, &args, NULL);
#line 128 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_tmp0_ = set_full_name_tests_new ();
#line 128 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	tests = _tmp0_;
#line 129 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 130 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	g_test_run ();
#line 131 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 133 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	result = 0;
#line 133 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	_g_object_unref0 (tests);
#line 133 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	return result;
#line 786 "set-full-name.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 124 "/opt/gnome3/source/folks/tests/tracker/set-full-name.vala"
	return _vala_main (argv, argc);
#line 796 "set-full-name.c"
}



