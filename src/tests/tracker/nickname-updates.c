/* nickname-updates.c generated by valac 0.26.2.1-1f25, the Vala compiler
 * generated from nickname-updates.vala, do not modify */

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


#define TYPE_NICKNAME_UPDATES_TESTS (nickname_updates_tests_get_type ())
#define NICKNAME_UPDATES_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_NICKNAME_UPDATES_TESTS, NicknameUpdatesTests))
#define NICKNAME_UPDATES_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_NICKNAME_UPDATES_TESTS, NicknameUpdatesTestsClass))
#define IS_NICKNAME_UPDATES_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_NICKNAME_UPDATES_TESTS))
#define IS_NICKNAME_UPDATES_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_NICKNAME_UPDATES_TESTS))
#define NICKNAME_UPDATES_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_NICKNAME_UPDATES_TESTS, NicknameUpdatesTestsClass))

typedef struct _NicknameUpdatesTests NicknameUpdatesTests;
typedef struct _NicknameUpdatesTestsClass NicknameUpdatesTestsClass;
typedef struct _NicknameUpdatesTestsPrivate NicknameUpdatesTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _NicknameUpdatesTestsTestNicknameUpdatesAsyncData NicknameUpdatesTestsTestNicknameUpdatesAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _NicknameUpdatesTests {
	TrackerTestTestCase parent_instance;
	NicknameUpdatesTestsPrivate * priv;
};

struct _NicknameUpdatesTestsClass {
	TrackerTestTestCaseClass parent_class;
};

struct _NicknameUpdatesTestsPrivate {
	FolksIndividualAggregator* _aggregator;
	gboolean _updated_nickname_found;
	gchar* _updated_nickname;
	gchar* _individual_id;
	GMainLoop* _main_loop;
	gchar* _initial_fullname;
	gchar* _contact_urn;
};

struct _NicknameUpdatesTestsTestNicknameUpdatesAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	NicknameUpdatesTests* self;
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


static gpointer nickname_updates_tests_parent_class = NULL;

GType nickname_updates_tests_get_type (void) G_GNUC_CONST;
#define NICKNAME_UPDATES_TESTS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_NICKNAME_UPDATES_TESTS, NicknameUpdatesTestsPrivate))
enum  {
	NICKNAME_UPDATES_TESTS_DUMMY_PROPERTY
};
NicknameUpdatesTests* nickname_updates_tests_new (void);
NicknameUpdatesTests* nickname_updates_tests_construct (GType object_type);
void nickname_updates_tests_test_nickname_updates (NicknameUpdatesTests* self);
static void _nickname_updates_tests_test_nickname_updates_folks_test_case_test_method (gpointer self);
static void _nickname_updates_tests_test_nickname_updates_async (NicknameUpdatesTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void _nickname_updates_tests_test_nickname_updates_finish (NicknameUpdatesTests* self, GAsyncResult* _res_);
static void _nickname_updates_tests_test_nickname_updates_async_data_free (gpointer _data);
static gboolean _nickname_updates_tests_test_nickname_updates_async_co (NicknameUpdatesTestsTestNicknameUpdatesAsyncData* _data_);
static void _nickname_updates_tests_test_nickname_updates_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _nickname_updates_tests_individuals_changed_cb (NicknameUpdatesTests* self, GeeMultiMap* changes);
static void __nickname_updates_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self);
static void _nickname_updates_tests_notify_nickname_cb (NicknameUpdatesTests* self, GObject* individual_obj, GParamSpec* ps);
static void __nickname_updates_tests_notify_nickname_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void nickname_updates_tests_finalize (GObject* obj);
gint _vala_main (gchar** args, int args_length1);


static void _nickname_updates_tests_test_nickname_updates_folks_test_case_test_method (gpointer self) {
#line 40 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	nickname_updates_tests_test_nickname_updates ((NicknameUpdatesTests*) self);
#line 118 "nickname-updates.c"
}


NicknameUpdatesTests* nickname_updates_tests_construct (GType object_type) {
	NicknameUpdatesTests * self = NULL;
#line 38 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self = (NicknameUpdatesTests*) tracker_test_test_case_construct (object_type, "NicknameUpdates");
#line 40 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "nickname updates", _nickname_updates_tests_test_nickname_updates_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 36 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	return self;
#line 130 "nickname-updates.c"
}


NicknameUpdatesTests* nickname_updates_tests_new (void) {
#line 36 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	return nickname_updates_tests_construct (TYPE_NICKNAME_UPDATES_TESTS);
#line 137 "nickname-updates.c"
}


void nickname_updates_tests_test_nickname_updates (NicknameUpdatesTests* self) {
	GMainLoop* _tmp0_ = NULL;
	GeeHashMap* c1 = NULL;
	GeeHashMap* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	TrackerTestBackend* _tmp7_ = NULL;
	TrackerTestBackend* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	GMainLoop* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
#line 43 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_return_if_fail (self != NULL);
#line 45 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp0_ = g_main_loop_new (NULL, FALSE);
#line 45 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 45 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self->priv->_main_loop = _tmp0_;
#line 46 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp1_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 46 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	c1 = _tmp1_;
#line 47 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp2_ = g_strdup ("persona #1");
#line 47 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_initial_fullname);
#line 47 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self->priv->_initial_fullname = _tmp2_;
#line 48 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp3_ = g_strdup ("updated nickname #1");
#line 48 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_updated_nickname);
#line 48 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self->priv->_updated_nickname = _tmp3_;
#line 49 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp4_ = g_strdup ("<urn:contact001>");
#line 49 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_contact_urn);
#line 49 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self->priv->_contact_urn = _tmp4_;
#line 51 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp5_ = self->priv->_contact_urn;
#line 51 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRACKER_TEST_BACKEND_URN, _tmp5_);
#line 52 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp6_ = self->priv->_initial_fullname;
#line 52 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRF_ONTOLOGY_DEFS_NCO_FULLNAME, _tmp6_);
#line 53 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp7_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 53 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	tracker_test_backend_add_contact (G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), c1);
#line 55 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp8_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 55 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	tracker_test_backend_set_up (G_TYPE_CHECK_INSTANCE_CAST (_tmp8_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend));
#line 57 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self->priv->_updated_nickname_found = FALSE;
#line 58 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp9_ = g_strdup ("");
#line 58 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_individual_id);
#line 58 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self->priv->_individual_id = _tmp9_;
#line 60 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_nickname_updates_tests_test_nickname_updates_async (self, NULL, NULL);
#line 62 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp10_ = self->priv->_main_loop;
#line 62 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	folks_test_utils_loop_run_with_timeout (_tmp10_, 5);
#line 64 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp11_ = self->priv->_updated_nickname_found;
#line 64 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_vala_assert (_tmp11_ == TRUE, "this._updated_nickname_found == true");
#line 43 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (c1);
#line 221 "nickname-updates.c"
}


static void _nickname_updates_tests_test_nickname_updates_async_data_free (gpointer _data) {
	NicknameUpdatesTestsTestNicknameUpdatesAsyncData* _data_;
	_data_ = _data;
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (_data_->self);
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_slice_free (NicknameUpdatesTestsTestNicknameUpdatesAsyncData, _data_);
#line 232 "nickname-updates.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	return self ? g_object_ref (self) : NULL;
#line 239 "nickname-updates.c"
}


static void _nickname_updates_tests_test_nickname_updates_async (NicknameUpdatesTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	NicknameUpdatesTestsTestNicknameUpdatesAsyncData* _data_;
	NicknameUpdatesTests* _tmp0_ = NULL;
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_ = g_slice_new0 (NicknameUpdatesTestsTestNicknameUpdatesAsyncData);
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, _nickname_updates_tests_test_nickname_updates_async);
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, _nickname_updates_tests_test_nickname_updates_async_data_free);
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->self = _tmp0_;
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_nickname_updates_tests_test_nickname_updates_async_co (_data_);
#line 258 "nickname-updates.c"
}


static void _nickname_updates_tests_test_nickname_updates_finish (NicknameUpdatesTests* self, GAsyncResult* _res_) {
	NicknameUpdatesTestsTestNicknameUpdatesAsyncData* _data_;
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 266 "nickname-updates.c"
}


static void _nickname_updates_tests_test_nickname_updates_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	NicknameUpdatesTestsTestNicknameUpdatesAsyncData* _data_;
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_ = _user_data_;
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_source_object_ = source_object;
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_res_ = _res_;
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_nickname_updates_tests_test_nickname_updates_async_co (_data_);
#line 280 "nickname-updates.c"
}


static void __nickname_updates_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self) {
#line 72 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_nickname_updates_tests_individuals_changed_cb ((NicknameUpdatesTests*) self, changes);
#line 287 "nickname-updates.c"
}


static gboolean _nickname_updates_tests_test_nickname_updates_async_co (NicknameUpdatesTestsTestNicknameUpdatesAsyncData* _data_) {
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	switch (_data_->_state_) {
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		case 0:
#line 296 "nickname-updates.c"
		goto _state_0;
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		case 1:
#line 300 "nickname-updates.c"
		goto _state_1;
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		case 2:
#line 304 "nickname-updates.c"
		goto _state_2;
		default:
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		g_assert_not_reached ();
#line 309 "nickname-updates.c"
	}
	_state_0:
#line 69 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_tmp0_ = NULL;
#line 69 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_tmp0_ = folks_backend_store_dup ();
#line 69 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->store = _data_->_tmp0_;
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_state_ = 1;
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	folks_backend_store_prepare (_data_->store, _nickname_updates_tests_test_nickname_updates_async_ready, _data_);
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	return FALSE;
#line 324 "nickname-updates.c"
	_state_1:
#line 70 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	folks_backend_store_prepare_finish (_data_->store, _data_->_res_);
#line 71 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_tmp1_ = NULL;
#line 71 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_tmp1_ = folks_individual_aggregator_dup ();
#line 71 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (_data_->self->priv->_aggregator);
#line 71 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->self->priv->_aggregator = _data_->_tmp1_;
#line 72 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_tmp2_ = NULL;
#line 72 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_data_->_tmp2_ = _data_->self->priv->_aggregator;
#line 72 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_signal_connect_object (_data_->_tmp2_, "individuals-changed-detailed", (GCallback) __nickname_updates_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed, _data_->self, 0);
#line 342 "nickname-updates.c"
	{
#line 76 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_tmp3_ = NULL;
#line 76 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_tmp3_ = _data_->self->priv->_aggregator;
#line 76 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_state_ = 2;
#line 76 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		folks_individual_aggregator_prepare (_data_->_tmp3_, _nickname_updates_tests_test_nickname_updates_async_ready, _data_);
#line 76 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		return FALSE;
#line 354 "nickname-updates.c"
		_state_2:
#line 76 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		folks_individual_aggregator_prepare_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
#line 76 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 360 "nickname-updates.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->e = _data_->_inner_error_;
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_inner_error_ = NULL;
#line 80 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_tmp4_ = NULL;
#line 80 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_tmp4_ = _data_->e;
#line 80 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_tmp5_ = NULL;
#line 80 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_data_->_tmp5_ = _data_->_tmp4_->message;
#line 80 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		g_warning ("nickname-updates.vala:80: Error when calling prepare: %s\n", _data_->_tmp5_);
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_g_error_free0 (_data_->e);
#line 383 "nickname-updates.c"
	}
	__finally0:
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_g_object_unref0 (_data_->store);
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		g_clear_error (&_data_->_inner_error_);
#line 74 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		return FALSE;
#line 396 "nickname-updates.c"
	}
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (_data_->store);
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	if (_data_->_state_ == 0) {
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 404 "nickname-updates.c"
	} else {
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 408 "nickname-updates.c"
	}
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_object_unref (_data_->_async_result);
#line 67 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	return FALSE;
#line 414 "nickname-updates.c"
}


static void __nickname_updates_tests_notify_nickname_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 96 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_nickname_updates_tests_notify_nickname_cb ((NicknameUpdatesTests*) self, _sender, pspec);
#line 421 "nickname-updates.c"
}


static void _nickname_updates_tests_individuals_changed_cb (NicknameUpdatesTests* self, GeeMultiMap* changes) {
	GeeCollection* added = NULL;
	GeeMultiMap* _tmp0_ = NULL;
	GeeCollection* _tmp1_ = NULL;
	GeeSet* removed = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
	GeeSet* _tmp33_ = NULL;
	gint _tmp34_ = 0;
	gint _tmp35_ = 0;
#line 84 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_return_if_fail (self != NULL);
#line 84 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_return_if_fail (changes != NULL);
#line 87 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp0_ = changes;
#line 87 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp1_ = gee_multi_map_get_values (_tmp0_);
#line 87 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	added = _tmp1_;
#line 88 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp2_ = changes;
#line 88 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp3_ = gee_multi_map_get_keys (_tmp2_);
#line 88 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	removed = _tmp3_;
#line 451 "nickname-updates.c"
	{
		GeeIterator* _i_it = NULL;
		GeeCollection* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_tmp4_ = added;
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_i_it = _tmp5_;
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		while (TRUE) {
#line 464 "nickname-updates.c"
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
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp6_ = _i_it;
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			if (!_tmp7_) {
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				break;
#line 483 "nickname-updates.c"
			}
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp8_ = _i_it;
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			i = (FolksIndividual*) _tmp9_;
#line 92 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp10_ = i;
#line 92 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_vala_assert (_tmp10_ != NULL, "i != null");
#line 94 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp11_ = i;
#line 94 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp12_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp11_);
#line 94 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp13_ = _tmp12_;
#line 94 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp14_ = self->priv->_initial_fullname;
#line 94 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			if (g_strcmp0 (_tmp13_, _tmp14_) == 0) {
#line 505 "nickname-updates.c"
				FolksIndividual* _tmp15_ = NULL;
				FolksIndividual* _tmp16_ = NULL;
				const gchar* _tmp17_ = NULL;
				const gchar* _tmp18_ = NULL;
				gchar* _tmp19_ = NULL;
				gchar* im_addr = NULL;
				gchar* _tmp20_ = NULL;
				TrackerTestBackend* _tmp21_ = NULL;
				const gchar* _tmp22_ = NULL;
				const gchar* _tmp23_ = NULL;
				gchar* affl = NULL;
				gchar* _tmp24_ = NULL;
				TrackerTestBackend* _tmp25_ = NULL;
				const gchar* _tmp26_ = NULL;
				TrackerTestBackend* _tmp27_ = NULL;
				const gchar* _tmp28_ = NULL;
				const gchar* _tmp29_ = NULL;
				TrackerTestBackend* _tmp30_ = NULL;
				const gchar* _tmp31_ = NULL;
				const gchar* _tmp32_ = NULL;
#line 96 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp15_ = i;
#line 96 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				g_signal_connect_object ((GObject*) _tmp15_, "notify::nickname", (GCallback) __nickname_updates_tests_notify_nickname_cb_g_object_notify, self, 0);
#line 97 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp16_ = i;
#line 97 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp17_ = folks_individual_get_id (_tmp16_);
#line 97 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp18_ = _tmp17_;
#line 97 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp19_ = g_strdup (_tmp18_);
#line 97 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_g_free0 (self->priv->_individual_id);
#line 97 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				self->priv->_individual_id = _tmp19_;
#line 99 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp20_ = g_strdup ("<urn:im-address>");
#line 99 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				im_addr = _tmp20_;
#line 100 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp21_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 100 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp22_ = im_addr;
#line 100 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp23_ = self->priv->_updated_nickname;
#line 100 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				tracker_test_backend_insert_triplet (G_TYPE_CHECK_INSTANCE_CAST (_tmp21_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), _tmp22_, "a", TRF_ONTOLOGY_DEFS_NCO_IMADDRESS, TRF_ONTOLOGY_DEFS_NCO_IM_NICKNAME, _tmp23_, NULL, NULL);
#line 104 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp24_ = g_strdup ("<urn:im-affl>");
#line 104 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				affl = _tmp24_;
#line 105 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp25_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 105 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp26_ = affl;
#line 105 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				tracker_test_backend_insert_triplet (G_TYPE_CHECK_INSTANCE_CAST (_tmp25_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), _tmp26_, "a", TRF_ONTOLOGY_DEFS_NCO_AFFILIATION, NULL, NULL, NULL, NULL);
#line 108 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp27_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 108 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp28_ = affl;
#line 108 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp29_ = im_addr;
#line 108 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				tracker_test_backend_insert_triplet (G_TYPE_CHECK_INSTANCE_CAST (_tmp27_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), _tmp28_, TRF_ONTOLOGY_DEFS_NCO_HAS_IMADDRESS, _tmp29_, NULL, NULL, NULL, NULL);
#line 111 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp30_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 111 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp31_ = self->priv->_contact_urn;
#line 111 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_tmp32_ = affl;
#line 111 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				tracker_test_backend_insert_triplet (G_TYPE_CHECK_INSTANCE_CAST (_tmp30_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), _tmp31_, TRF_ONTOLOGY_DEFS_NCO_HAS_AFFILIATION, _tmp32_, NULL, NULL, NULL, NULL);
#line 94 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_g_free0 (affl);
#line 94 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				_g_free0 (im_addr);
#line 584 "nickname-updates.c"
			}
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_g_object_unref0 (i);
#line 588 "nickname-updates.c"
		}
#line 90 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_g_object_unref0 (_i_it);
#line 592 "nickname-updates.c"
	}
#line 116 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp33_ = removed;
#line 116 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp34_ = gee_collection_get_size ((GeeCollection*) _tmp33_);
#line 116 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp35_ = _tmp34_;
#line 116 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_vala_assert (_tmp35_ == 1, "removed.size == 1");
#line 602 "nickname-updates.c"
	{
		GeeIterator* _i_it = NULL;
		GeeSet* _tmp36_ = NULL;
		GeeIterator* _tmp37_ = NULL;
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_tmp36_ = removed;
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_tmp37_ = gee_iterable_iterator ((GeeIterable*) _tmp36_);
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_i_it = _tmp37_;
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		while (TRUE) {
#line 615 "nickname-updates.c"
			GeeIterator* _tmp38_ = NULL;
			gboolean _tmp39_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp40_ = NULL;
			gpointer _tmp41_ = NULL;
			FolksIndividual* _tmp42_ = NULL;
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp38_ = _i_it;
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp39_ = gee_iterator_next (_tmp38_);
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			if (!_tmp39_) {
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
				break;
#line 630 "nickname-updates.c"
			}
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp40_ = _i_it;
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp41_ = gee_iterator_get (_tmp40_);
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			i = (FolksIndividual*) _tmp41_;
#line 120 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_tmp42_ = i;
#line 120 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_vala_assert (_tmp42_ == NULL, "i == null");
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
			_g_object_unref0 (i);
#line 644 "nickname-updates.c"
		}
#line 118 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_g_object_unref0 (_i_it);
#line 648 "nickname-updates.c"
	}
#line 84 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (removed);
#line 84 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (added);
#line 654 "nickname-updates.c"
}


static void _nickname_updates_tests_notify_nickname_cb (NicknameUpdatesTests* self, GObject* individual_obj, GParamSpec* ps) {
	FolksIndividual* i = NULL;
	GObject* _tmp0_ = NULL;
	FolksIndividual* _tmp1_ = NULL;
	FolksIndividual* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
#line 124 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_return_if_fail (self != NULL);
#line 124 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_return_if_fail (individual_obj != NULL);
#line 124 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_return_if_fail (ps != NULL);
#line 126 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp0_ = individual_obj;
#line 126 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, FOLKS_TYPE_INDIVIDUAL, FolksIndividual));
#line 126 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	i = _tmp1_;
#line 127 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp2_ = i;
#line 127 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp3_ = folks_name_details_get_nickname ((FolksNameDetails*) _tmp2_);
#line 127 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp4_ = _tmp3_;
#line 127 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp5_ = self->priv->_updated_nickname;
#line 127 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	if (g_strcmp0 (_tmp4_, _tmp5_) == 0) {
#line 688 "nickname-updates.c"
		GMainLoop* _tmp6_ = NULL;
#line 129 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		self->priv->_updated_nickname_found = TRUE;
#line 130 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		_tmp6_ = self->priv->_main_loop;
#line 130 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
		g_main_loop_quit (_tmp6_);
#line 696 "nickname-updates.c"
	}
#line 124 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (i);
#line 700 "nickname-updates.c"
}


static void nickname_updates_tests_class_init (NicknameUpdatesTestsClass * klass) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	nickname_updates_tests_parent_class = g_type_class_peek_parent (klass);
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_type_class_add_private (klass, sizeof (NicknameUpdatesTestsPrivate));
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	G_OBJECT_CLASS (klass)->finalize = nickname_updates_tests_finalize;
#line 711 "nickname-updates.c"
}


static void nickname_updates_tests_instance_init (NicknameUpdatesTests * self) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self->priv = NICKNAME_UPDATES_TESTS_GET_PRIVATE (self);
#line 718 "nickname-updates.c"
}


static void nickname_updates_tests_finalize (GObject* obj) {
	NicknameUpdatesTests * self;
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_NICKNAME_UPDATES_TESTS, NicknameUpdatesTests);
#line 28 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (self->priv->_aggregator);
#line 30 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_updated_nickname);
#line 31 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_individual_id);
#line 32 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 33 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_initial_fullname);
#line 34 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_free0 (self->priv->_contact_urn);
#line 26 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	G_OBJECT_CLASS (nickname_updates_tests_parent_class)->finalize (obj);
#line 740 "nickname-updates.c"
}


GType nickname_updates_tests_get_type (void) {
	static volatile gsize nickname_updates_tests_type_id__volatile = 0;
	if (g_once_init_enter (&nickname_updates_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (NicknameUpdatesTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) nickname_updates_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (NicknameUpdatesTests), 0, (GInstanceInitFunc) nickname_updates_tests_instance_init, NULL };
		GType nickname_updates_tests_type_id;
		nickname_updates_tests_type_id = g_type_register_static (TRACKER_TEST_TYPE_TEST_CASE, "NicknameUpdatesTests", &g_define_type_info, 0);
		g_once_init_leave (&nickname_updates_tests_type_id__volatile, nickname_updates_tests_type_id);
	}
	return nickname_updates_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	NicknameUpdatesTests* tests = NULL;
	NicknameUpdatesTests* _tmp0_ = NULL;
#line 137 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_test_init (&args_length1, &args, NULL);
#line 139 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_tmp0_ = nickname_updates_tests_new ();
#line 139 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	tests = _tmp0_;
#line 140 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 141 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	g_test_run ();
#line 142 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 144 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	result = 0;
#line 144 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	_g_object_unref0 (tests);
#line 144 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	return result;
#line 778 "nickname-updates.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 135 "/opt/gnome3/source/folks/tests/tracker/nickname-updates.vala"
	return _vala_main (argv, argc);
#line 788 "nickname-updates.c"
}



