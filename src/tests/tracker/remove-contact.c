/* remove-contact.c generated by valac 0.26.2.1-1f25, the Vala compiler
 * generated from remove-contact.vala, do not modify */

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


#define TYPE_REMOVE_CONTACT_TESTS (remove_contact_tests_get_type ())
#define REMOVE_CONTACT_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REMOVE_CONTACT_TESTS, RemoveContactTests))
#define REMOVE_CONTACT_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_REMOVE_CONTACT_TESTS, RemoveContactTestsClass))
#define IS_REMOVE_CONTACT_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REMOVE_CONTACT_TESTS))
#define IS_REMOVE_CONTACT_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_REMOVE_CONTACT_TESTS))
#define REMOVE_CONTACT_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REMOVE_CONTACT_TESTS, RemoveContactTestsClass))

typedef struct _RemoveContactTests RemoveContactTests;
typedef struct _RemoveContactTestsClass RemoveContactTestsClass;
typedef struct _RemoveContactTestsPrivate RemoveContactTestsPrivate;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _RemoveContactTestsTestRemoveContactAsyncData RemoveContactTestsTestRemoveContactAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _RemoveContactTests {
	TrackerTestTestCase parent_instance;
	RemoveContactTestsPrivate * priv;
};

struct _RemoveContactTestsClass {
	TrackerTestTestCaseClass parent_class;
};

struct _RemoveContactTestsPrivate {
	GMainLoop* _main_loop;
	FolksIndividualAggregator* _aggregator;
	gboolean _contact_added;
	gboolean _contact_removed;
	gchar* _individual_id;
	gchar* _persona_fullname;
};

struct _RemoveContactTestsTestRemoveContactAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RemoveContactTests* self;
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


static gpointer remove_contact_tests_parent_class = NULL;

GType remove_contact_tests_get_type (void) G_GNUC_CONST;
#define REMOVE_CONTACT_TESTS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_REMOVE_CONTACT_TESTS, RemoveContactTestsPrivate))
enum  {
	REMOVE_CONTACT_TESTS_DUMMY_PROPERTY
};
RemoveContactTests* remove_contact_tests_new (void);
RemoveContactTests* remove_contact_tests_construct (GType object_type);
void remove_contact_tests_test_remove_contact (RemoveContactTests* self);
static void _remove_contact_tests_test_remove_contact_folks_test_case_test_method (gpointer self);
static void _remove_contact_tests_test_remove_contact_async (RemoveContactTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void _remove_contact_tests_test_remove_contact_finish (RemoveContactTests* self, GAsyncResult* _res_);
static void _remove_contact_tests_test_remove_contact_async_data_free (gpointer _data);
static gboolean _remove_contact_tests_test_remove_contact_async_co (RemoveContactTestsTestRemoveContactAsyncData* _data_);
static void _remove_contact_tests_test_remove_contact_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _remove_contact_tests_individuals_changed_cb (RemoveContactTests* self, GeeMultiMap* changes);
static void __remove_contact_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self);
static void remove_contact_tests_finalize (GObject* obj);
gint _vala_main (gchar** args, int args_length1);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


static void _remove_contact_tests_test_remove_contact_folks_test_case_test_method (gpointer self) {
#line 39 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	remove_contact_tests_test_remove_contact ((RemoveContactTests*) self);
#line 118 "remove-contact.c"
}


RemoveContactTests* remove_contact_tests_construct (GType object_type) {
	RemoveContactTests * self = NULL;
#line 37 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self = (RemoveContactTests*) tracker_test_test_case_construct (object_type, "RemoveContactTests");
#line 39 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "test removing contacts ", _remove_contact_tests_test_remove_contact_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 35 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	return self;
#line 130 "remove-contact.c"
}


RemoveContactTests* remove_contact_tests_new (void) {
#line 35 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	return remove_contact_tests_construct (TYPE_REMOVE_CONTACT_TESTS);
#line 137 "remove-contact.c"
}


void remove_contact_tests_test_remove_contact (RemoveContactTests* self) {
	GMainLoop* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	GeeHashMap* c1 = NULL;
	GeeHashMap* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	TrackerTestBackend* _tmp4_ = NULL;
	TrackerTestBackend* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	GMainLoop* _tmp7_ = NULL;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp9_ = FALSE;
#line 42 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_return_if_fail (self != NULL);
#line 44 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp0_ = g_main_loop_new (NULL, FALSE);
#line 44 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 44 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self->priv->_main_loop = _tmp0_;
#line 45 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp1_ = g_strdup ("persona #1");
#line 45 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_free0 (self->priv->_persona_fullname);
#line 45 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self->priv->_persona_fullname = _tmp1_;
#line 46 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp2_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 46 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	c1 = _tmp2_;
#line 48 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp3_ = self->priv->_persona_fullname;
#line 48 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRF_ONTOLOGY_DEFS_NCO_FULLNAME, _tmp3_);
#line 49 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp4_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 49 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	tracker_test_backend_add_contact (G_TYPE_CHECK_INSTANCE_CAST (_tmp4_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), c1);
#line 50 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp5_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 50 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	tracker_test_backend_set_up (G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend));
#line 52 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self->priv->_contact_added = FALSE;
#line 53 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self->priv->_contact_removed = FALSE;
#line 54 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp6_ = g_strdup ("");
#line 54 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_free0 (self->priv->_individual_id);
#line 54 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self->priv->_individual_id = _tmp6_;
#line 56 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_remove_contact_tests_test_remove_contact_async (self, NULL, NULL);
#line 58 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp7_ = self->priv->_main_loop;
#line 58 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	folks_test_utils_loop_run_with_timeout (_tmp7_, 5);
#line 60 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp8_ = self->priv->_contact_added;
#line 60 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_vala_assert (_tmp8_ == TRUE, "this._contact_added == true");
#line 61 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp9_ = self->priv->_contact_removed;
#line 61 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_vala_assert (_tmp9_ == TRUE, "this._contact_removed == true");
#line 42 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (c1);
#line 209 "remove-contact.c"
}


static void _remove_contact_tests_test_remove_contact_async_data_free (gpointer _data) {
	RemoveContactTestsTestRemoveContactAsyncData* _data_;
	_data_ = _data;
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (_data_->self);
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_slice_free (RemoveContactTestsTestRemoveContactAsyncData, _data_);
#line 220 "remove-contact.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	return self ? g_object_ref (self) : NULL;
#line 227 "remove-contact.c"
}


static void _remove_contact_tests_test_remove_contact_async (RemoveContactTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RemoveContactTestsTestRemoveContactAsyncData* _data_;
	RemoveContactTests* _tmp0_ = NULL;
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_ = g_slice_new0 (RemoveContactTestsTestRemoveContactAsyncData);
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, _remove_contact_tests_test_remove_contact_async);
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, _remove_contact_tests_test_remove_contact_async_data_free);
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->self = _tmp0_;
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_remove_contact_tests_test_remove_contact_async_co (_data_);
#line 246 "remove-contact.c"
}


static void _remove_contact_tests_test_remove_contact_finish (RemoveContactTests* self, GAsyncResult* _res_) {
	RemoveContactTestsTestRemoveContactAsyncData* _data_;
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 254 "remove-contact.c"
}


static void _remove_contact_tests_test_remove_contact_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RemoveContactTestsTestRemoveContactAsyncData* _data_;
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_ = _user_data_;
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_source_object_ = source_object;
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_res_ = _res_;
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_remove_contact_tests_test_remove_contact_async_co (_data_);
#line 268 "remove-contact.c"
}


static void __remove_contact_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self) {
#line 69 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_remove_contact_tests_individuals_changed_cb ((RemoveContactTests*) self, changes);
#line 275 "remove-contact.c"
}


static gboolean _remove_contact_tests_test_remove_contact_async_co (RemoveContactTestsTestRemoveContactAsyncData* _data_) {
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	switch (_data_->_state_) {
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		case 0:
#line 284 "remove-contact.c"
		goto _state_0;
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		case 1:
#line 288 "remove-contact.c"
		goto _state_1;
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		case 2:
#line 292 "remove-contact.c"
		goto _state_2;
		default:
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		g_assert_not_reached ();
#line 297 "remove-contact.c"
	}
	_state_0:
#line 66 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_tmp0_ = NULL;
#line 66 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_tmp0_ = folks_backend_store_dup ();
#line 66 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->store = _data_->_tmp0_;
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_state_ = 1;
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	folks_backend_store_prepare (_data_->store, _remove_contact_tests_test_remove_contact_async_ready, _data_);
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	return FALSE;
#line 312 "remove-contact.c"
	_state_1:
#line 67 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	folks_backend_store_prepare_finish (_data_->store, _data_->_res_);
#line 68 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_tmp1_ = NULL;
#line 68 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_tmp1_ = folks_individual_aggregator_dup ();
#line 68 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (_data_->self->priv->_aggregator);
#line 68 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->self->priv->_aggregator = _data_->_tmp1_;
#line 69 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_tmp2_ = NULL;
#line 69 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_data_->_tmp2_ = _data_->self->priv->_aggregator;
#line 69 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_signal_connect_object (_data_->_tmp2_, "individuals-changed-detailed", (GCallback) __remove_contact_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed, _data_->self, 0);
#line 330 "remove-contact.c"
	{
#line 73 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_tmp3_ = NULL;
#line 73 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_tmp3_ = _data_->self->priv->_aggregator;
#line 73 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_state_ = 2;
#line 73 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		folks_individual_aggregator_prepare (_data_->_tmp3_, _remove_contact_tests_test_remove_contact_async_ready, _data_);
#line 73 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		return FALSE;
#line 342 "remove-contact.c"
		_state_2:
#line 73 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		folks_individual_aggregator_prepare_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
#line 73 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 348 "remove-contact.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->e = _data_->_inner_error_;
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_inner_error_ = NULL;
#line 77 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_tmp4_ = NULL;
#line 77 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_tmp4_ = _data_->e;
#line 77 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_tmp5_ = NULL;
#line 77 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_data_->_tmp5_ = _data_->_tmp4_->message;
#line 77 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		g_warning ("remove-contact.vala:77: Error when calling prepare: %s\n", _data_->_tmp5_);
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_g_error_free0 (_data_->e);
#line 371 "remove-contact.c"
	}
	__finally0:
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_g_object_unref0 (_data_->store);
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		g_clear_error (&_data_->_inner_error_);
#line 71 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		return FALSE;
#line 384 "remove-contact.c"
	}
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (_data_->store);
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	if (_data_->_state_ == 0) {
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 392 "remove-contact.c"
	} else {
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 396 "remove-contact.c"
	}
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_object_unref (_data_->_async_result);
#line 64 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	return FALSE;
#line 402 "remove-contact.c"
}


static void _remove_contact_tests_individuals_changed_cb (RemoveContactTests* self, GeeMultiMap* changes) {
	GeeCollection* added = NULL;
	GeeMultiMap* _tmp0_ = NULL;
	GeeCollection* _tmp1_ = NULL;
	GeeSet* removed = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
#line 81 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_return_if_fail (self != NULL);
#line 81 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_return_if_fail (changes != NULL);
#line 84 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp0_ = changes;
#line 84 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp1_ = gee_multi_map_get_values (_tmp0_);
#line 84 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	added = _tmp1_;
#line 85 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp2_ = changes;
#line 85 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp3_ = gee_multi_map_get_keys (_tmp2_);
#line 85 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	removed = _tmp3_;
#line 429 "remove-contact.c"
	{
		GeeIterator* _i_it = NULL;
		GeeCollection* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_tmp4_ = added;
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_i_it = _tmp5_;
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		while (TRUE) {
#line 442 "remove-contact.c"
			GeeIterator* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp8_ = NULL;
			gpointer _tmp9_ = NULL;
			FolksIndividual* _tmp10_ = NULL;
			gchar* full_name = NULL;
			FolksIndividual* _tmp11_ = NULL;
			const gchar* _tmp12_ = NULL;
			const gchar* _tmp13_ = NULL;
			gchar* _tmp14_ = NULL;
			const gchar* _tmp15_ = NULL;
			const gchar* _tmp16_ = NULL;
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp6_ = _i_it;
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			if (!_tmp7_) {
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				break;
#line 464 "remove-contact.c"
			}
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp8_ = _i_it;
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			i = (FolksIndividual*) _tmp9_;
#line 89 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp10_ = i;
#line 89 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			if (_tmp10_ == NULL) {
#line 91 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_g_object_unref0 (i);
#line 91 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				continue;
#line 480 "remove-contact.c"
			}
#line 94 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp11_ = i;
#line 94 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp12_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp11_);
#line 94 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp13_ = _tmp12_;
#line 94 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp14_ = g_strdup (_tmp13_);
#line 94 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			full_name = _tmp14_;
#line 95 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp15_ = full_name;
#line 95 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp16_ = self->priv->_persona_fullname;
#line 95 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			if (g_strcmp0 (_tmp15_, _tmp16_) == 0) {
#line 498 "remove-contact.c"
				FolksIndividual* _tmp17_ = NULL;
				const gchar* _tmp18_ = NULL;
				const gchar* _tmp19_ = NULL;
				gchar* _tmp20_ = NULL;
#line 97 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				self->priv->_contact_added = TRUE;
#line 98 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_tmp17_ = i;
#line 98 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_tmp18_ = folks_individual_get_id (_tmp17_);
#line 98 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_tmp19_ = _tmp18_;
#line 98 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_tmp20_ = g_strdup (_tmp19_);
#line 98 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_g_free0 (self->priv->_individual_id);
#line 98 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				self->priv->_individual_id = _tmp20_;
#line 517 "remove-contact.c"
				{
					GeeIterator* _persona_it = NULL;
					FolksIndividual* _tmp21_ = NULL;
					GeeSet* _tmp22_ = NULL;
					GeeSet* _tmp23_ = NULL;
					GeeIterator* _tmp24_ = NULL;
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
					_tmp21_ = i;
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
					_tmp22_ = folks_individual_get_personas (_tmp21_);
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
					_tmp23_ = _tmp22_;
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
					_tmp24_ = gee_iterable_iterator ((GeeIterable*) _tmp23_);
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
					_persona_it = _tmp24_;
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
					while (TRUE) {
#line 536 "remove-contact.c"
						GeeIterator* _tmp25_ = NULL;
						gboolean _tmp26_ = FALSE;
						FolksPersona* persona = NULL;
						GeeIterator* _tmp27_ = NULL;
						gpointer _tmp28_ = NULL;
						gchar* contact_id = NULL;
						FolksPersona* _tmp29_ = NULL;
						const gchar* _tmp30_ = NULL;
						const gchar* _tmp31_ = NULL;
						gchar** _tmp32_ = NULL;
						gchar** _tmp33_ = NULL;
						gchar** _tmp34_ = NULL;
						gint _tmp34__length1 = 0;
						const gchar* _tmp35_ = NULL;
						gchar* _tmp36_ = NULL;
						gchar* _tmp37_ = NULL;
						TrackerTestBackend* _tmp38_ = NULL;
						const gchar* _tmp39_ = NULL;
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp25_ = _persona_it;
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp26_ = gee_iterator_next (_tmp25_);
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						if (!_tmp26_) {
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
							break;
#line 563 "remove-contact.c"
						}
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp27_ = _persona_it;
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp28_ = gee_iterator_get (_tmp27_);
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						persona = (FolksPersona*) _tmp28_;
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp29_ = persona;
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp30_ = folks_persona_get_iid (_tmp29_);
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp31_ = _tmp30_;
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp33_ = _tmp32_ = g_strsplit (_tmp31_, ":", 0);
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp34_ = _tmp33_;
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp34__length1 = _vala_array_length (_tmp32_);
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp35_ = _tmp34_[1];
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp36_ = g_strdup (_tmp35_);
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp37_ = _tmp36_;
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp34_ = (_vala_array_free (_tmp34_, _tmp34__length1, (GDestroyNotify) g_free), NULL);
#line 101 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						contact_id = _tmp37_;
#line 102 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp38_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 102 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_tmp39_ = contact_id;
#line 102 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						tracker_test_backend_remove_contact (G_TYPE_CHECK_INSTANCE_CAST (_tmp38_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend), _tmp39_);
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_g_free0 (contact_id);
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
						_g_object_unref0 (persona);
#line 603 "remove-contact.c"
					}
#line 99 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
					_g_object_unref0 (_persona_it);
#line 607 "remove-contact.c"
				}
			}
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_g_free0 (full_name);
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_g_object_unref0 (i);
#line 614 "remove-contact.c"
		}
#line 87 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_g_object_unref0 (_i_it);
#line 618 "remove-contact.c"
	}
	{
		GeeIterator* _i_it = NULL;
		GeeSet* _tmp40_ = NULL;
		GeeIterator* _tmp41_ = NULL;
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_tmp40_ = removed;
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_tmp41_ = gee_iterable_iterator ((GeeIterable*) _tmp40_);
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_i_it = _tmp41_;
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		while (TRUE) {
#line 632 "remove-contact.c"
			GeeIterator* _tmp42_ = NULL;
			gboolean _tmp43_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp44_ = NULL;
			gpointer _tmp45_ = NULL;
			FolksIndividual* _tmp46_ = NULL;
			FolksIndividual* _tmp47_ = NULL;
			const gchar* _tmp48_ = NULL;
			const gchar* _tmp49_ = NULL;
			const gchar* _tmp50_ = NULL;
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp42_ = _i_it;
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp43_ = gee_iterator_next (_tmp42_);
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			if (!_tmp43_) {
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				break;
#line 651 "remove-contact.c"
			}
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp44_ = _i_it;
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp45_ = gee_iterator_get (_tmp44_);
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			i = (FolksIndividual*) _tmp45_;
#line 109 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp46_ = i;
#line 109 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			if (_tmp46_ == NULL) {
#line 111 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_g_object_unref0 (i);
#line 111 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				continue;
#line 667 "remove-contact.c"
			}
#line 114 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp47_ = i;
#line 114 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp48_ = folks_individual_get_id (_tmp47_);
#line 114 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp49_ = _tmp48_;
#line 114 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_tmp50_ = self->priv->_individual_id;
#line 114 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			if (g_strcmp0 (_tmp49_, _tmp50_) == 0) {
#line 679 "remove-contact.c"
				GMainLoop* _tmp51_ = NULL;
#line 116 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				self->priv->_contact_removed = TRUE;
#line 117 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				_tmp51_ = self->priv->_main_loop;
#line 117 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
				g_main_loop_quit (_tmp51_);
#line 687 "remove-contact.c"
			}
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
			_g_object_unref0 (i);
#line 691 "remove-contact.c"
		}
#line 107 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
		_g_object_unref0 (_i_it);
#line 695 "remove-contact.c"
	}
#line 81 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (removed);
#line 81 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (added);
#line 701 "remove-contact.c"
}


static void remove_contact_tests_class_init (RemoveContactTestsClass * klass) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	remove_contact_tests_parent_class = g_type_class_peek_parent (klass);
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_type_class_add_private (klass, sizeof (RemoveContactTestsPrivate));
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	G_OBJECT_CLASS (klass)->finalize = remove_contact_tests_finalize;
#line 712 "remove-contact.c"
}


static void remove_contact_tests_instance_init (RemoveContactTests * self) {
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self->priv = REMOVE_CONTACT_TESTS_GET_PRIVATE (self);
#line 719 "remove-contact.c"
}


static void remove_contact_tests_finalize (GObject* obj) {
	RemoveContactTests * self;
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_REMOVE_CONTACT_TESTS, RemoveContactTests);
#line 28 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 29 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (self->priv->_aggregator);
#line 32 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_free0 (self->priv->_individual_id);
#line 33 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_free0 (self->priv->_persona_fullname);
#line 26 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	G_OBJECT_CLASS (remove_contact_tests_parent_class)->finalize (obj);
#line 737 "remove-contact.c"
}


GType remove_contact_tests_get_type (void) {
	static volatile gsize remove_contact_tests_type_id__volatile = 0;
	if (g_once_init_enter (&remove_contact_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RemoveContactTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) remove_contact_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RemoveContactTests), 0, (GInstanceInitFunc) remove_contact_tests_instance_init, NULL };
		GType remove_contact_tests_type_id;
		remove_contact_tests_type_id = g_type_register_static (TRACKER_TEST_TYPE_TEST_CASE, "RemoveContactTests", &g_define_type_info, 0);
		g_once_init_leave (&remove_contact_tests_type_id__volatile, remove_contact_tests_type_id);
	}
	return remove_contact_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	RemoveContactTests* tests = NULL;
	RemoveContactTests* _tmp0_ = NULL;
#line 125 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_test_init (&args_length1, &args, NULL);
#line 127 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_tmp0_ = remove_contact_tests_new ();
#line 127 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	tests = _tmp0_;
#line 128 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 129 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	g_test_run ();
#line 130 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 132 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	result = 0;
#line 132 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	_g_object_unref0 (tests);
#line 132 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	return result;
#line 775 "remove-contact.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 123 "/opt/gnome3/source/folks/tests/tracker/remove-contact.vala"
	return _vala_main (argv, argc);
#line 785 "remove-contact.c"
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



