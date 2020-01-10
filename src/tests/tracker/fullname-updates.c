/* fullname-updates.c generated by valac 0.20.1.30-1b1d, the Vala compiler
 * generated from fullname-updates.vala, do not modify */

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


#define TYPE_FULLNAME_UPDATES_TESTS (fullname_updates_tests_get_type ())
#define FULLNAME_UPDATES_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_FULLNAME_UPDATES_TESTS, FullnameUpdatesTests))
#define FULLNAME_UPDATES_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_FULLNAME_UPDATES_TESTS, FullnameUpdatesTestsClass))
#define IS_FULLNAME_UPDATES_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_FULLNAME_UPDATES_TESTS))
#define IS_FULLNAME_UPDATES_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_FULLNAME_UPDATES_TESTS))
#define FULLNAME_UPDATES_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_FULLNAME_UPDATES_TESTS, FullnameUpdatesTestsClass))

typedef struct _FullnameUpdatesTests FullnameUpdatesTests;
typedef struct _FullnameUpdatesTestsClass FullnameUpdatesTestsClass;
typedef struct _FullnameUpdatesTestsPrivate FullnameUpdatesTestsPrivate;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _FullnameUpdatesTestsTestFullnameUpdatesAsyncData FullnameUpdatesTestsTestFullnameUpdatesAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _FullnameUpdatesTests {
	TrackerTestTestCase parent_instance;
	FullnameUpdatesTestsPrivate * priv;
};

struct _FullnameUpdatesTestsClass {
	TrackerTestTestCaseClass parent_class;
};

struct _FullnameUpdatesTestsPrivate {
	GMainLoop* _main_loop;
	FolksIndividualAggregator* _aggregator;
	gboolean _updated_name_found;
	gboolean _deleted_name_found;
	gchar* _updated_fullname;
	gchar* _individual_id;
	gchar* _initial_fullname;
	gchar* _contact_urn;
	gboolean _initial_name_found;
};

struct _FullnameUpdatesTestsTestFullnameUpdatesAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FullnameUpdatesTests* self;
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


static gpointer fullname_updates_tests_parent_class = NULL;

GType fullname_updates_tests_get_type (void) G_GNUC_CONST;
#define FULLNAME_UPDATES_TESTS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_FULLNAME_UPDATES_TESTS, FullnameUpdatesTestsPrivate))
enum  {
	FULLNAME_UPDATES_TESTS_DUMMY_PROPERTY
};
FullnameUpdatesTests* fullname_updates_tests_new (void);
FullnameUpdatesTests* fullname_updates_tests_construct (GType object_type);
void fullname_updates_tests_test_fullname_updates (FullnameUpdatesTests* self);
static void _fullname_updates_tests_test_fullname_updates_folks_test_case_test_method (gpointer self);
static void _fullname_updates_tests_test_fullname_updates_async (FullnameUpdatesTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void _fullname_updates_tests_test_fullname_updates_finish (FullnameUpdatesTests* self, GAsyncResult* _res_);
static void _fullname_updates_tests_test_fullname_updates_async_data_free (gpointer _data);
static gboolean _fullname_updates_tests_test_fullname_updates_async_co (FullnameUpdatesTestsTestFullnameUpdatesAsyncData* _data_);
static void _fullname_updates_tests_test_fullname_updates_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _fullname_updates_tests_individuals_changed_cb (FullnameUpdatesTests* self, GeeMultiMap* changes);
static void __fullname_updates_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self);
static void _fullname_updates_tests_notify_full_name_cb (FullnameUpdatesTests* self, GObject* individual_obj, GParamSpec* ps);
static void __fullname_updates_tests_notify_full_name_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void fullname_updates_tests_finalize (GObject* obj);
gint _vala_main (gchar** args, int args_length1);


static void _fullname_updates_tests_test_fullname_updates_folks_test_case_test_method (gpointer self) {
#line 44 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	fullname_updates_tests_test_fullname_updates (self);
#line 120 "fullname-updates.c"
}


FullnameUpdatesTests* fullname_updates_tests_construct (GType object_type) {
	FullnameUpdatesTests * self = NULL;
	TrackerTestBackend* _tmp0_;
#line 40 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self = (FullnameUpdatesTests*) tracker_test_test_case_construct (object_type, "FullnameUpdates");
#line 42 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp0_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 42 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	tracker_test_backend_set_debug (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), FALSE);
#line 44 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "fullname updates", _fullname_updates_tests_test_fullname_updates_folks_test_case_test_method, self);
#line 38 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	return self;
#line 137 "fullname-updates.c"
}


FullnameUpdatesTests* fullname_updates_tests_new (void) {
#line 38 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	return fullname_updates_tests_construct (TYPE_FULLNAME_UPDATES_TESTS);
#line 144 "fullname-updates.c"
}


void fullname_updates_tests_test_fullname_updates (FullnameUpdatesTests* self) {
	GMainLoop* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	GeeHashMap* c1 = NULL;
	GeeHashMap* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp6_;
	TrackerTestBackend* _tmp7_;
	TrackerTestBackend* _tmp8_;
	gchar* _tmp9_;
	GMainLoop* _tmp10_;
	gboolean _tmp11_;
	gboolean _tmp12_;
#line 47 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_return_if_fail (self != NULL);
#line 49 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp0_ = g_main_loop_new (NULL, FALSE);
#line 49 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 49 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_main_loop = _tmp0_;
#line 50 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp1_ = g_strdup ("persona #1");
#line 50 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_initial_fullname);
#line 50 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_initial_fullname = _tmp1_;
#line 51 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp2_ = g_strdup ("updated persona #1");
#line 51 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_updated_fullname);
#line 51 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_updated_fullname = _tmp2_;
#line 52 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp3_ = g_strdup ("<urn:contact001>");
#line 52 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_contact_urn);
#line 52 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_contact_urn = _tmp3_;
#line 53 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp4_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 53 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	c1 = _tmp4_;
#line 55 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp5_ = self->priv->_contact_urn;
#line 55 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRACKER_TEST_BACKEND_URN, _tmp5_);
#line 56 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp6_ = self->priv->_initial_fullname;
#line 56 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRF_ONTOLOGY_DEFS_NCO_FULLNAME, _tmp6_);
#line 57 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp7_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 57 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	tracker_test_backend_add_contact (G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), c1);
#line 59 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp8_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 59 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	tracker_test_backend_set_up (G_TYPE_CHECK_INSTANCE_CAST (_tmp8_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend));
#line 61 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_initial_name_found = FALSE;
#line 62 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_updated_name_found = FALSE;
#line 63 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_deleted_name_found = FALSE;
#line 64 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp9_ = g_strdup ("");
#line 64 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_individual_id);
#line 64 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv->_individual_id = _tmp9_;
#line 66 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_fullname_updates_tests_test_fullname_updates_async (self, NULL, NULL);
#line 68 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp10_ = self->priv->_main_loop;
#line 68 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	folks_test_utils_loop_run_with_timeout (_tmp10_, 5);
#line 70 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp11_ = self->priv->_initial_name_found;
#line 70 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_vala_assert (_tmp11_ == TRUE, "this._initial_name_found == true");
#line 71 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp12_ = self->priv->_updated_name_found;
#line 71 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_vala_assert (_tmp12_ == TRUE, "this._updated_name_found == true");
#line 47 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (c1);
#line 237 "fullname-updates.c"
}


static void _fullname_updates_tests_test_fullname_updates_async_data_free (gpointer _data) {
	FullnameUpdatesTestsTestFullnameUpdatesAsyncData* _data_;
	_data_ = _data;
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (_data_->self);
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_slice_free (FullnameUpdatesTestsTestFullnameUpdatesAsyncData, _data_);
#line 248 "fullname-updates.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	return self ? g_object_ref (self) : NULL;
#line 255 "fullname-updates.c"
}


static void _fullname_updates_tests_test_fullname_updates_async (FullnameUpdatesTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FullnameUpdatesTestsTestFullnameUpdatesAsyncData* _data_;
	FullnameUpdatesTests* _tmp0_;
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_ = g_slice_new0 (FullnameUpdatesTestsTestFullnameUpdatesAsyncData);
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, _fullname_updates_tests_test_fullname_updates_async);
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, _fullname_updates_tests_test_fullname_updates_async_data_free);
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->self = _tmp0_;
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_fullname_updates_tests_test_fullname_updates_async_co (_data_);
#line 274 "fullname-updates.c"
}


static void _fullname_updates_tests_test_fullname_updates_finish (FullnameUpdatesTests* self, GAsyncResult* _res_) {
	FullnameUpdatesTestsTestFullnameUpdatesAsyncData* _data_;
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 282 "fullname-updates.c"
}


static void _fullname_updates_tests_test_fullname_updates_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	FullnameUpdatesTestsTestFullnameUpdatesAsyncData* _data_;
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_ = _user_data_;
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_source_object_ = source_object;
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_res_ = _res_;
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_fullname_updates_tests_test_fullname_updates_async_co (_data_);
#line 296 "fullname-updates.c"
}


static void __fullname_updates_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self) {
#line 79 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_fullname_updates_tests_individuals_changed_cb (self, changes);
#line 303 "fullname-updates.c"
}


static gboolean _fullname_updates_tests_test_fullname_updates_async_co (FullnameUpdatesTestsTestFullnameUpdatesAsyncData* _data_) {
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	switch (_data_->_state_) {
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		case 0:
#line 312 "fullname-updates.c"
		goto _state_0;
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		case 1:
#line 316 "fullname-updates.c"
		goto _state_1;
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		case 2:
#line 320 "fullname-updates.c"
		goto _state_2;
		default:
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		g_assert_not_reached ();
#line 325 "fullname-updates.c"
	}
	_state_0:
#line 76 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_tmp0_ = NULL;
#line 76 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_tmp0_ = folks_backend_store_dup ();
#line 76 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->store = _data_->_tmp0_;
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_state_ = 1;
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	folks_backend_store_prepare (_data_->store, _fullname_updates_tests_test_fullname_updates_async_ready, _data_);
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	return FALSE;
#line 340 "fullname-updates.c"
	_state_1:
#line 77 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	folks_backend_store_prepare_finish (_data_->store, _data_->_res_);
#line 78 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_tmp1_ = folks_individual_aggregator_new ();
#line 78 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (_data_->self->priv->_aggregator);
#line 78 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->self->priv->_aggregator = _data_->_tmp1_;
#line 79 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_data_->_tmp2_ = _data_->self->priv->_aggregator;
#line 79 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_signal_connect_object (_data_->_tmp2_, "individuals-changed-detailed", (GCallback) __fullname_updates_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed, _data_->self, 0);
#line 354 "fullname-updates.c"
	{
#line 83 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_data_->_tmp3_ = _data_->self->priv->_aggregator;
#line 83 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_data_->_state_ = 2;
#line 83 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		folks_individual_aggregator_prepare (_data_->_tmp3_, _fullname_updates_tests_test_fullname_updates_async_ready, _data_);
#line 83 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		return FALSE;
#line 364 "fullname-updates.c"
		_state_2:
#line 83 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		folks_individual_aggregator_prepare_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
#line 83 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		if (_data_->_inner_error_ != NULL) {
#line 370 "fullname-updates.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_data_->e = _data_->_inner_error_;
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_data_->_inner_error_ = NULL;
#line 87 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_data_->_tmp4_ = _data_->e;
#line 87 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_data_->_tmp5_ = _data_->_tmp4_->message;
#line 87 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		g_warning ("fullname-updates.vala:87: Error when calling prepare: %s\n", _data_->_tmp5_);
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_g_error_free0 (_data_->e);
#line 389 "fullname-updates.c"
	}
	__finally0:
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	if (_data_->_inner_error_ != NULL) {
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_g_object_unref0 (_data_->store);
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		g_clear_error (&_data_->_inner_error_);
#line 81 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		return FALSE;
#line 402 "fullname-updates.c"
	}
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (_data_->store);
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	if (_data_->_state_ == 0) {
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 410 "fullname-updates.c"
	} else {
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 414 "fullname-updates.c"
	}
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_object_unref (_data_->_async_result);
#line 74 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	return FALSE;
#line 420 "fullname-updates.c"
}


static void __fullname_updates_tests_notify_full_name_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 103 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_fullname_updates_tests_notify_full_name_cb (self, _sender, pspec);
#line 427 "fullname-updates.c"
}


static void _fullname_updates_tests_individuals_changed_cb (FullnameUpdatesTests* self, GeeMultiMap* changes) {
	GeeCollection* added = NULL;
	GeeMultiMap* _tmp0_;
	GeeCollection* _tmp1_ = NULL;
	GeeSet* removed = NULL;
	GeeMultiMap* _tmp2_;
	GeeSet* _tmp3_ = NULL;
	GeeSet* _tmp23_;
	gint _tmp24_;
	gint _tmp25_;
#line 91 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_return_if_fail (self != NULL);
#line 91 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_return_if_fail (changes != NULL);
#line 94 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp0_ = changes;
#line 94 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp1_ = gee_multi_map_get_values (_tmp0_);
#line 94 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	added = _tmp1_;
#line 95 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp2_ = changes;
#line 95 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp3_ = gee_multi_map_get_keys (_tmp2_);
#line 95 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	removed = _tmp3_;
#line 457 "fullname-updates.c"
	{
		GeeIterator* _i_it = NULL;
		GeeCollection* _tmp4_;
		GeeIterator* _tmp5_ = NULL;
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_tmp4_ = added;
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_i_it = _tmp5_;
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		while (TRUE) {
#line 470 "fullname-updates.c"
			GeeIterator* _tmp6_;
			gboolean _tmp7_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp8_;
			gpointer _tmp9_ = NULL;
			FolksIndividual* _tmp10_;
			FolksIndividual* _tmp11_;
			const gchar* _tmp12_;
			const gchar* _tmp13_;
			const gchar* _tmp14_;
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp6_ = _i_it;
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			if (!_tmp7_) {
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				break;
#line 489 "fullname-updates.c"
			}
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp8_ = _i_it;
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			i = (FolksIndividual*) _tmp9_;
#line 99 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp10_ = i;
#line 99 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_vala_assert (_tmp10_ != NULL, "i != null");
#line 101 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp11_ = i;
#line 101 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp12_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp11_);
#line 101 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp13_ = _tmp12_;
#line 101 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp14_ = self->priv->_initial_fullname;
#line 101 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			if (g_strcmp0 (_tmp13_, _tmp14_) == 0) {
#line 511 "fullname-updates.c"
				FolksIndividual* _tmp15_;
				FolksIndividual* _tmp16_;
				const gchar* _tmp17_;
				const gchar* _tmp18_;
				gchar* _tmp19_;
				TrackerTestBackend* _tmp20_;
				const gchar* _tmp21_;
				const gchar* _tmp22_;
#line 103 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp15_ = i;
#line 103 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				g_signal_connect_object ((GObject*) _tmp15_, "notify::full-name", (GCallback) __fullname_updates_tests_notify_full_name_cb_g_object_notify, self, 0);
#line 104 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp16_ = i;
#line 104 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp17_ = folks_individual_get_id (_tmp16_);
#line 104 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp18_ = _tmp17_;
#line 104 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp19_ = g_strdup (_tmp18_);
#line 104 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_g_free0 (self->priv->_individual_id);
#line 104 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				self->priv->_individual_id = _tmp19_;
#line 105 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				self->priv->_initial_name_found = TRUE;
#line 106 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp20_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 106 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp21_ = self->priv->_contact_urn;
#line 106 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				_tmp22_ = self->priv->_updated_fullname;
#line 106 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				tracker_test_backend_update_contact (G_TYPE_CHECK_INSTANCE_CAST (_tmp20_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), _tmp21_, TRF_ONTOLOGY_DEFS_NCO_FULLNAME, _tmp22_);
#line 546 "fullname-updates.c"
			}
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_g_object_unref0 (i);
#line 550 "fullname-updates.c"
		}
#line 97 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_g_object_unref0 (_i_it);
#line 554 "fullname-updates.c"
	}
#line 111 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp23_ = removed;
#line 111 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp24_ = gee_collection_get_size ((GeeCollection*) _tmp23_);
#line 111 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp25_ = _tmp24_;
#line 111 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_vala_assert (_tmp25_ == 1, "removed.size == 1");
#line 564 "fullname-updates.c"
	{
		GeeIterator* _i_it = NULL;
		GeeSet* _tmp26_;
		GeeIterator* _tmp27_ = NULL;
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_tmp26_ = removed;
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_tmp27_ = gee_iterable_iterator ((GeeIterable*) _tmp26_);
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_i_it = _tmp27_;
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		while (TRUE) {
#line 577 "fullname-updates.c"
			GeeIterator* _tmp28_;
			gboolean _tmp29_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp30_;
			gpointer _tmp31_ = NULL;
			FolksIndividual* _tmp32_;
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp28_ = _i_it;
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp29_ = gee_iterator_next (_tmp28_);
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			if (!_tmp29_) {
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
				break;
#line 592 "fullname-updates.c"
			}
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp30_ = _i_it;
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp31_ = gee_iterator_get (_tmp30_);
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			i = (FolksIndividual*) _tmp31_;
#line 115 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_tmp32_ = i;
#line 115 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_vala_assert (_tmp32_ == NULL, "i == null");
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
			_g_object_unref0 (i);
#line 606 "fullname-updates.c"
		}
#line 113 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_g_object_unref0 (_i_it);
#line 610 "fullname-updates.c"
	}
#line 91 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (removed);
#line 91 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (added);
#line 616 "fullname-updates.c"
}


static void _fullname_updates_tests_notify_full_name_cb (FullnameUpdatesTests* self, GObject* individual_obj, GParamSpec* ps) {
	FolksIndividual* i = NULL;
	GObject* _tmp0_;
	FolksIndividual* _tmp1_;
	FolksIndividual* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
#line 119 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_return_if_fail (self != NULL);
#line 119 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_return_if_fail (individual_obj != NULL);
#line 119 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_return_if_fail (ps != NULL);
#line 121 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp0_ = individual_obj;
#line 121 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, FOLKS_TYPE_INDIVIDUAL, FolksIndividual));
#line 121 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	i = _tmp1_;
#line 123 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp2_ = i;
#line 123 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp3_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp2_);
#line 123 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp4_ = _tmp3_;
#line 123 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp5_ = self->priv->_updated_fullname;
#line 123 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	if (g_strcmp0 (_tmp4_, _tmp5_) == 0) {
#line 650 "fullname-updates.c"
		GMainLoop* _tmp6_;
#line 125 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		self->priv->_updated_name_found = TRUE;
#line 126 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		_tmp6_ = self->priv->_main_loop;
#line 126 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
		g_main_loop_quit (_tmp6_);
#line 658 "fullname-updates.c"
	}
#line 119 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (i);
#line 662 "fullname-updates.c"
}


static void fullname_updates_tests_class_init (FullnameUpdatesTestsClass * klass) {
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	fullname_updates_tests_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_type_class_add_private (klass, sizeof (FullnameUpdatesTestsPrivate));
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	G_OBJECT_CLASS (klass)->finalize = fullname_updates_tests_finalize;
#line 673 "fullname-updates.c"
}


static void fullname_updates_tests_instance_init (FullnameUpdatesTests * self) {
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self->priv = FULLNAME_UPDATES_TESTS_GET_PRIVATE (self);
#line 680 "fullname-updates.c"
}


static void fullname_updates_tests_finalize (GObject* obj) {
	FullnameUpdatesTests * self;
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_FULLNAME_UPDATES_TESTS, FullnameUpdatesTests);
#line 28 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 29 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (self->priv->_aggregator);
#line 32 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_updated_fullname);
#line 33 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_individual_id);
#line 34 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_initial_fullname);
#line 35 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_free0 (self->priv->_contact_urn);
#line 26 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	G_OBJECT_CLASS (fullname_updates_tests_parent_class)->finalize (obj);
#line 702 "fullname-updates.c"
}


GType fullname_updates_tests_get_type (void) {
	static volatile gsize fullname_updates_tests_type_id__volatile = 0;
	if (g_once_init_enter (&fullname_updates_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FullnameUpdatesTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) fullname_updates_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FullnameUpdatesTests), 0, (GInstanceInitFunc) fullname_updates_tests_instance_init, NULL };
		GType fullname_updates_tests_type_id;
		fullname_updates_tests_type_id = g_type_register_static (TRACKER_TEST_TYPE_TEST_CASE, "FullnameUpdatesTests", &g_define_type_info, 0);
		g_once_init_leave (&fullname_updates_tests_type_id__volatile, fullname_updates_tests_type_id);
	}
	return fullname_updates_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	FullnameUpdatesTests* tests = NULL;
	FullnameUpdatesTests* _tmp0_;
#line 133 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_test_init (&args_length1, &args, NULL);
#line 135 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_tmp0_ = fullname_updates_tests_new ();
#line 135 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	tests = _tmp0_;
#line 136 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 137 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_test_run ();
#line 138 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 140 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	result = 0;
#line 140 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	_g_object_unref0 (tests);
#line 140 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	return result;
#line 740 "fullname-updates.c"
}


int main (int argc, char ** argv) {
#line 131 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	g_type_init ();
#line 131 "/home/treitter/collabora/folks/tests/tracker/fullname-updates.vala"
	return _vala_main (argv, argc);
#line 749 "fullname-updates.c"
}



