/* url-details-interface.c generated by valac 0.35.3.10-6b27, the Vala compiler
 * generated from url-details-interface.vala, do not modify */

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


#define TYPE_URL_DETAILS_INTERFACE_TESTS (url_details_interface_tests_get_type ())
#define URL_DETAILS_INTERFACE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_URL_DETAILS_INTERFACE_TESTS, UrlDetailsInterfaceTests))
#define URL_DETAILS_INTERFACE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_URL_DETAILS_INTERFACE_TESTS, UrlDetailsInterfaceTestsClass))
#define IS_URL_DETAILS_INTERFACE_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_URL_DETAILS_INTERFACE_TESTS))
#define IS_URL_DETAILS_INTERFACE_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_URL_DETAILS_INTERFACE_TESTS))
#define URL_DETAILS_INTERFACE_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_URL_DETAILS_INTERFACE_TESTS, UrlDetailsInterfaceTestsClass))

typedef struct _UrlDetailsInterfaceTests UrlDetailsInterfaceTests;
typedef struct _UrlDetailsInterfaceTestsClass UrlDetailsInterfaceTestsClass;
typedef struct _UrlDetailsInterfaceTestsPrivate UrlDetailsInterfaceTestsPrivate;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _UrlDetailsInterfaceTests {
	TrackerTestTestCase parent_instance;
	UrlDetailsInterfaceTestsPrivate * priv;
};

struct _UrlDetailsInterfaceTestsClass {
	TrackerTestTestCaseClass parent_class;
};

struct _UrlDetailsInterfaceTestsPrivate {
	GMainLoop* _main_loop;
	FolksIndividualAggregator* _aggregator;
	gchar* _blog_url;
	gchar* _website_url;
	gchar* _urls;
	gboolean _found_blog;
	gboolean _found_website;
};

struct _UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	UrlDetailsInterfaceTests* self;
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


static gpointer url_details_interface_tests_parent_class = NULL;

GType url_details_interface_tests_get_type (void) G_GNUC_CONST;
#define URL_DETAILS_INTERFACE_TESTS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_URL_DETAILS_INTERFACE_TESTS, UrlDetailsInterfaceTestsPrivate))
enum  {
	URL_DETAILS_INTERFACE_TESTS_DUMMY_PROPERTY
};
UrlDetailsInterfaceTests* url_details_interface_tests_new (void);
UrlDetailsInterfaceTests* url_details_interface_tests_construct (GType object_type);
void url_details_interface_tests_test_url_details_interface (UrlDetailsInterfaceTests* self);
static void _url_details_interface_tests_test_url_details_interface_folks_test_case_test_method (gpointer self);
static void _url_details_interface_tests_test_url_details_interface_async (UrlDetailsInterfaceTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void _url_details_interface_tests_test_url_details_interface_finish (UrlDetailsInterfaceTests* self, GAsyncResult* _res_);
static void _url_details_interface_tests_test_url_details_interface_async_data_free (gpointer _data);
static gboolean _url_details_interface_tests_test_url_details_interface_async_co (UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData* _data_);
static void _url_details_interface_tests_test_url_details_interface_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _url_details_interface_tests_individuals_changed_cb (UrlDetailsInterfaceTests* self, GeeMultiMap* changes);
static void __url_details_interface_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self);
static void url_details_interface_tests_finalize (GObject * obj);
gint _vala_main (gchar** args, int args_length1);


static void _url_details_interface_tests_test_url_details_interface_folks_test_case_test_method (gpointer self) {
#line 40 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	url_details_interface_tests_test_url_details_interface ((UrlDetailsInterfaceTests*) self);
#line 119 "url-details-interface.c"
}


UrlDetailsInterfaceTests* url_details_interface_tests_construct (GType object_type) {
	UrlDetailsInterfaceTests * self = NULL;
#line 38 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self = (UrlDetailsInterfaceTests*) tracker_test_test_case_construct (object_type, "UrlDetailsInterfaceTests");
#line 40 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "test url details interface", _url_details_interface_tests_test_url_details_interface_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 36 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	return self;
#line 131 "url-details-interface.c"
}


UrlDetailsInterfaceTests* url_details_interface_tests_new (void) {
#line 36 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	return url_details_interface_tests_construct (TYPE_URL_DETAILS_INTERFACE_TESTS);
#line 138 "url-details-interface.c"
}


void url_details_interface_tests_test_url_details_interface (UrlDetailsInterfaceTests* self) {
	GMainLoop* _tmp0_;
	GeeHashMap* c1;
	GeeHashMap* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	gchar* _tmp6_;
	const gchar* _tmp7_;
	TrackerTestBackend* _tmp8_;
	TrackerTestBackend* _tmp9_;
	GMainLoop* _tmp10_;
	gboolean _tmp11_;
	gboolean _tmp12_;
#line 44 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_return_if_fail (self != NULL);
#line 46 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp0_ = g_main_loop_new (NULL, FALSE);
#line 46 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 46 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self->priv->_main_loop = _tmp0_;
#line 47 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp1_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 47 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	c1 = _tmp1_;
#line 48 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp2_ = g_strdup ("http://blog.example.org");
#line 48 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_free0 (self->priv->_blog_url);
#line 48 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self->priv->_blog_url = _tmp2_;
#line 49 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp3_ = g_strdup ("http://www.example.org");
#line 49 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_free0 (self->priv->_website_url);
#line 49 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self->priv->_website_url = _tmp3_;
#line 50 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp4_ = self->priv->_blog_url;
#line 50 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp5_ = self->priv->_website_url;
#line 50 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp6_ = g_strdup_printf ("%s,%s", _tmp4_, _tmp5_);
#line 50 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_free0 (self->priv->_urls);
#line 50 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self->priv->_urls = _tmp6_;
#line 52 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRF_ONTOLOGY_DEFS_NCO_FULLNAME, "persona #1");
#line 53 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp7_ = self->priv->_urls;
#line 53 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRACKER_TEST_BACKEND_URLS, _tmp7_);
#line 54 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp8_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 54 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	tracker_test_backend_add_contact (G_TYPE_CHECK_INSTANCE_CAST (_tmp8_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), c1);
#line 56 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp9_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 56 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	tracker_test_backend_set_up (G_TYPE_CHECK_INSTANCE_CAST (_tmp9_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend));
#line 58 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self->priv->_found_blog = FALSE;
#line 59 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self->priv->_found_website = FALSE;
#line 61 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_url_details_interface_tests_test_url_details_interface_async (self, NULL, NULL);
#line 63 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp10_ = self->priv->_main_loop;
#line 63 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	folks_test_utils_loop_run_with_timeout (_tmp10_, 5);
#line 65 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp11_ = self->priv->_found_blog;
#line 65 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_vala_assert (_tmp11_ == TRUE, "this._found_blog == true");
#line 66 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp12_ = self->priv->_found_website;
#line 66 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_vala_assert (_tmp12_ == TRUE, "this._found_website == true");
#line 44 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (c1);
#line 225 "url-details-interface.c"
}


static void _url_details_interface_tests_test_url_details_interface_async_data_free (gpointer _data) {
	UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData* _data_;
	_data_ = _data;
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (_data_->self);
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_slice_free (UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData, _data_);
#line 236 "url-details-interface.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	return self ? g_object_ref (self) : NULL;
#line 243 "url-details-interface.c"
}


static void _url_details_interface_tests_test_url_details_interface_async (UrlDetailsInterfaceTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData* _data_;
	UrlDetailsInterfaceTests* _tmp0_;
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_ = g_slice_new0 (UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData);
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, _url_details_interface_tests_test_url_details_interface_async);
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, _url_details_interface_tests_test_url_details_interface_async_data_free);
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->self = _tmp0_;
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_url_details_interface_tests_test_url_details_interface_async_co (_data_);
#line 262 "url-details-interface.c"
}


static void _url_details_interface_tests_test_url_details_interface_finish (UrlDetailsInterfaceTests* self, GAsyncResult* _res_) {
	UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData* _data_;
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 270 "url-details-interface.c"
}


static void _url_details_interface_tests_test_url_details_interface_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData* _data_;
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_ = _user_data_;
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->_source_object_ = source_object;
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->_res_ = _res_;
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_url_details_interface_tests_test_url_details_interface_async_co (_data_);
#line 284 "url-details-interface.c"
}


static void __url_details_interface_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self) {
#line 74 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_url_details_interface_tests_individuals_changed_cb ((UrlDetailsInterfaceTests*) self, changes);
#line 291 "url-details-interface.c"
}


static gboolean _url_details_interface_tests_test_url_details_interface_async_co (UrlDetailsInterfaceTestsTestUrlDetailsInterfaceAsyncData* _data_) {
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	switch (_data_->_state_) {
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		case 0:
#line 300 "url-details-interface.c"
		goto _state_0;
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		case 1:
#line 304 "url-details-interface.c"
		goto _state_1;
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		case 2:
#line 308 "url-details-interface.c"
		goto _state_2;
		default:
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		g_assert_not_reached ();
#line 313 "url-details-interface.c"
	}
	_state_0:
#line 71 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->_tmp0_ = folks_backend_store_dup ();
#line 71 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->store = _data_->_tmp0_;
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->_state_ = 1;
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	folks_backend_store_prepare (_data_->store, _url_details_interface_tests_test_url_details_interface_async_ready, _data_);
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	return FALSE;
#line 326 "url-details-interface.c"
	_state_1:
#line 72 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	folks_backend_store_prepare_finish (_data_->store, _data_->_res_);
#line 73 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->_tmp1_ = folks_individual_aggregator_dup ();
#line 73 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (_data_->self->priv->_aggregator);
#line 73 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->self->priv->_aggregator = _data_->_tmp1_;
#line 74 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_data_->_tmp2_ = _data_->self->priv->_aggregator;
#line 74 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_signal_connect_object (_data_->_tmp2_, "individuals-changed-detailed", (GCallback) __url_details_interface_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed, _data_->self, 0);
#line 340 "url-details-interface.c"
	{
#line 78 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_data_->_tmp3_ = _data_->self->priv->_aggregator;
#line 78 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_data_->_state_ = 2;
#line 78 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		folks_individual_aggregator_prepare (_data_->_tmp3_, _url_details_interface_tests_test_url_details_interface_async_ready, _data_);
#line 78 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		return FALSE;
#line 350 "url-details-interface.c"
		_state_2:
#line 78 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		folks_individual_aggregator_prepare_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
#line 78 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 356 "url-details-interface.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_data_->e = _data_->_inner_error_;
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_data_->_inner_error_ = NULL;
#line 82 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_data_->_tmp4_ = _data_->e;
#line 82 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_data_->_tmp5_ = _data_->_tmp4_->message;
#line 82 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		g_warning ("url-details-interface.vala:82: Error when calling prepare: %s\n", _data_->_tmp5_);
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_g_error_free0 (_data_->e);
#line 375 "url-details-interface.c"
	}
	__finally0:
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_g_object_unref0 (_data_->store);
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		g_clear_error (&_data_->_inner_error_);
#line 76 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		return FALSE;
#line 388 "url-details-interface.c"
	}
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (_data_->store);
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	if (_data_->_state_ == 0) {
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 396 "url-details-interface.c"
	} else {
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 400 "url-details-interface.c"
	}
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_object_unref (_data_->_async_result);
#line 69 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	return FALSE;
#line 406 "url-details-interface.c"
}


static void _url_details_interface_tests_individuals_changed_cb (UrlDetailsInterfaceTests* self, GeeMultiMap* changes) {
	GeeCollection* added;
	GeeMultiMap* _tmp0_;
	GeeCollection* _tmp1_;
	GeeSet* removed;
	GeeMultiMap* _tmp2_;
	GeeSet* _tmp3_;
	gboolean _tmp32_ = FALSE;
	gboolean _tmp33_;
	GeeSet* _tmp36_;
	gint _tmp37_;
	gint _tmp38_;
#line 86 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_return_if_fail (self != NULL);
#line 86 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_return_if_fail (changes != NULL);
#line 89 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp0_ = changes;
#line 89 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp1_ = gee_multi_map_get_values (_tmp0_);
#line 89 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	added = _tmp1_;
#line 90 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp2_ = changes;
#line 90 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp3_ = gee_multi_map_get_keys (_tmp2_);
#line 90 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	removed = _tmp3_;
#line 438 "url-details-interface.c"
	{
		GeeIterator* _i_it;
		GeeCollection* _tmp4_;
		GeeIterator* _tmp5_;
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp4_ = added;
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_i_it = _tmp5_;
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		while (TRUE) {
#line 451 "url-details-interface.c"
			GeeIterator* _tmp6_;
			gboolean _tmp7_;
			FolksIndividual* i;
			GeeIterator* _tmp8_;
			gpointer _tmp9_;
			FolksIndividual* _tmp10_;
			gchar* full_name;
			FolksIndividual* _tmp11_;
			const gchar* _tmp12_;
			const gchar* _tmp13_;
			gchar* _tmp14_;
			const gchar* _tmp15_;
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp6_ = _i_it;
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			if (!_tmp7_) {
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
				break;
#line 472 "url-details-interface.c"
			}
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp8_ = _i_it;
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			i = (FolksIndividual*) _tmp9_;
#line 94 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp10_ = i;
#line 94 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_vala_assert (_tmp10_ != NULL, "i != null");
#line 96 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp11_ = i;
#line 96 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp12_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp11_);
#line 96 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp13_ = _tmp12_;
#line 96 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp14_ = g_strdup (_tmp13_);
#line 96 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			full_name = _tmp14_;
#line 97 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp15_ = full_name;
#line 97 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			if (_tmp15_ != NULL) {
#line 498 "url-details-interface.c"
				{
					GeeIterator* _url_it;
					FolksIndividual* _tmp16_;
					GeeSet* _tmp17_;
					GeeSet* _tmp18_;
					GeeIterator* _tmp19_;
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
					_tmp16_ = i;
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
					_tmp17_ = folks_url_details_get_urls ((FolksUrlDetails*) _tmp16_);
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
					_tmp18_ = _tmp17_;
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
					_tmp19_ = gee_iterable_iterator ((GeeIterable*) _tmp18_);
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
					_url_it = _tmp19_;
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
					while (TRUE) {
#line 517 "url-details-interface.c"
						GeeIterator* _tmp20_;
						gboolean _tmp21_;
						FolksUrlFieldDetails* url;
						GeeIterator* _tmp22_;
						gpointer _tmp23_;
						FolksUrlFieldDetails* _tmp24_;
						gconstpointer _tmp25_;
						const gchar* _tmp26_;
						const gchar* _tmp27_;
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp20_ = _url_it;
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp21_ = gee_iterator_next (_tmp20_);
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						if (!_tmp21_) {
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
							break;
#line 535 "url-details-interface.c"
						}
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp22_ = _url_it;
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp23_ = gee_iterator_get (_tmp22_);
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						url = (FolksUrlFieldDetails*) _tmp23_;
#line 101 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp24_ = url;
#line 101 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp25_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) _tmp24_);
#line 101 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp26_ = _tmp25_;
#line 101 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_tmp27_ = self->priv->_blog_url;
#line 101 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						if (g_strcmp0 ((const gchar*) _tmp26_, _tmp27_) == 0) {
#line 103 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
							self->priv->_found_blog = TRUE;
#line 555 "url-details-interface.c"
						} else {
							FolksUrlFieldDetails* _tmp28_;
							gconstpointer _tmp29_;
							const gchar* _tmp30_;
							const gchar* _tmp31_;
#line 105 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
							_tmp28_ = url;
#line 105 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
							_tmp29_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) _tmp28_);
#line 105 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
							_tmp30_ = _tmp29_;
#line 105 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
							_tmp31_ = self->priv->_website_url;
#line 105 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
							if (g_strcmp0 ((const gchar*) _tmp30_, _tmp31_) == 0) {
#line 107 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
								self->priv->_found_website = TRUE;
#line 573 "url-details-interface.c"
							}
						}
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
						_g_object_unref0 (url);
#line 578 "url-details-interface.c"
					}
#line 99 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
					_g_object_unref0 (_url_it);
#line 582 "url-details-interface.c"
				}
			}
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_g_free0 (full_name);
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_g_object_unref0 (i);
#line 589 "url-details-interface.c"
		}
#line 92 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_g_object_unref0 (_i_it);
#line 593 "url-details-interface.c"
	}
#line 113 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp33_ = self->priv->_found_blog;
#line 113 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	if (_tmp33_) {
#line 599 "url-details-interface.c"
		gboolean _tmp34_;
#line 114 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp34_ = self->priv->_found_website;
#line 114 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp32_ = _tmp34_;
#line 605 "url-details-interface.c"
	} else {
#line 113 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp32_ = FALSE;
#line 609 "url-details-interface.c"
	}
#line 113 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	if (_tmp32_) {
#line 613 "url-details-interface.c"
		GMainLoop* _tmp35_;
#line 115 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp35_ = self->priv->_main_loop;
#line 115 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		g_main_loop_quit (_tmp35_);
#line 619 "url-details-interface.c"
	}
#line 117 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp36_ = removed;
#line 117 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp37_ = gee_collection_get_size ((GeeCollection*) _tmp36_);
#line 117 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp38_ = _tmp37_;
#line 117 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_vala_assert (_tmp38_ == 1, "removed.size == 1");
#line 629 "url-details-interface.c"
	{
		GeeIterator* _i_it;
		GeeSet* _tmp39_;
		GeeIterator* _tmp40_;
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp39_ = removed;
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_tmp40_ = gee_iterable_iterator ((GeeIterable*) _tmp39_);
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_i_it = _tmp40_;
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		while (TRUE) {
#line 642 "url-details-interface.c"
			GeeIterator* _tmp41_;
			gboolean _tmp42_;
			FolksIndividual* i;
			GeeIterator* _tmp43_;
			gpointer _tmp44_;
			FolksIndividual* _tmp45_;
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp41_ = _i_it;
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp42_ = gee_iterator_next (_tmp41_);
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			if (!_tmp42_) {
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
				break;
#line 657 "url-details-interface.c"
			}
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp43_ = _i_it;
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp44_ = gee_iterator_get (_tmp43_);
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			i = (FolksIndividual*) _tmp44_;
#line 121 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_tmp45_ = i;
#line 121 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_vala_assert (_tmp45_ == NULL, "i == null");
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
			_g_object_unref0 (i);
#line 671 "url-details-interface.c"
		}
#line 119 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
		_g_object_unref0 (_i_it);
#line 675 "url-details-interface.c"
	}
#line 86 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (removed);
#line 86 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (added);
#line 681 "url-details-interface.c"
}


static void url_details_interface_tests_class_init (UrlDetailsInterfaceTestsClass * klass) {
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	url_details_interface_tests_parent_class = g_type_class_peek_parent (klass);
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_type_class_add_private (klass, sizeof (UrlDetailsInterfaceTestsPrivate));
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	G_OBJECT_CLASS (klass)->finalize = url_details_interface_tests_finalize;
#line 692 "url-details-interface.c"
}


static void url_details_interface_tests_instance_init (UrlDetailsInterfaceTests * self) {
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self->priv = URL_DETAILS_INTERFACE_TESTS_GET_PRIVATE (self);
#line 699 "url-details-interface.c"
}


static void url_details_interface_tests_finalize (GObject * obj) {
	UrlDetailsInterfaceTests * self;
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_URL_DETAILS_INTERFACE_TESTS, UrlDetailsInterfaceTests);
#line 28 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 29 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (self->priv->_aggregator);
#line 30 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_free0 (self->priv->_blog_url);
#line 31 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_free0 (self->priv->_website_url);
#line 32 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_free0 (self->priv->_urls);
#line 26 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	G_OBJECT_CLASS (url_details_interface_tests_parent_class)->finalize (obj);
#line 719 "url-details-interface.c"
}


GType url_details_interface_tests_get_type (void) {
	static volatile gsize url_details_interface_tests_type_id__volatile = 0;
	if (g_once_init_enter (&url_details_interface_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (UrlDetailsInterfaceTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) url_details_interface_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (UrlDetailsInterfaceTests), 0, (GInstanceInitFunc) url_details_interface_tests_instance_init, NULL };
		GType url_details_interface_tests_type_id;
		url_details_interface_tests_type_id = g_type_register_static (TRACKER_TEST_TYPE_TEST_CASE, "UrlDetailsInterfaceTests", &g_define_type_info, 0);
		g_once_init_leave (&url_details_interface_tests_type_id__volatile, url_details_interface_tests_type_id);
	}
	return url_details_interface_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	UrlDetailsInterfaceTests* tests;
	UrlDetailsInterfaceTests* _tmp0_;
#line 128 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_test_init (&args_length1, &args, NULL);
#line 130 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_tmp0_ = url_details_interface_tests_new ();
#line 130 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	tests = _tmp0_;
#line 131 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 132 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	g_test_run ();
#line 133 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 135 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	result = 0;
#line 135 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	_g_object_unref0 (tests);
#line 135 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	return result;
#line 757 "url-details-interface.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 126 "/opt/gnome/source/folks/tests/tracker/url-details-interface.vala"
	return _vala_main (argv, argc);
#line 767 "url-details-interface.c"
}



