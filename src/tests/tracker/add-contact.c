/* add-contact.c generated by valac 0.35.3.10-6b27, the Vala compiler
 * generated from add-contact.vala, do not modify */

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


#define TYPE_ADD_CONTACT_TESTS (add_contact_tests_get_type ())
#define ADD_CONTACT_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ADD_CONTACT_TESTS, AddContactTests))
#define ADD_CONTACT_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ADD_CONTACT_TESTS, AddContactTestsClass))
#define IS_ADD_CONTACT_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ADD_CONTACT_TESTS))
#define IS_ADD_CONTACT_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ADD_CONTACT_TESTS))
#define ADD_CONTACT_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ADD_CONTACT_TESTS, AddContactTestsClass))

typedef struct _AddContactTests AddContactTests;
typedef struct _AddContactTestsClass AddContactTestsClass;
typedef struct _AddContactTestsPrivate AddContactTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define _tracker_test_backend_unref0(var) ((var == NULL) ? NULL : (var = (tracker_test_backend_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _AddContactTestsTestAddContactAsyncData AddContactTestsTestAddContactAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _AddContactTests {
	TrackerTestTestCase parent_instance;
	AddContactTestsPrivate * priv;
};

struct _AddContactTestsClass {
	TrackerTestTestCaseClass parent_class;
};

struct _AddContactTestsPrivate {
	gboolean _contact_added;
	FolksIndividualAggregator* _aggregator;
	gchar* _persona_fullname;
	GMainLoop* _main_loop;
};

struct _AddContactTestsTestAddContactAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	AddContactTests* self;
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


static gpointer add_contact_tests_parent_class = NULL;

GType add_contact_tests_get_type (void) G_GNUC_CONST;
#define ADD_CONTACT_TESTS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_ADD_CONTACT_TESTS, AddContactTestsPrivate))
enum  {
	ADD_CONTACT_TESTS_DUMMY_PROPERTY
};
AddContactTests* add_contact_tests_new (void);
AddContactTests* add_contact_tests_construct (GType object_type);
void add_contact_tests_test_add_contact (AddContactTests* self);
static void _add_contact_tests_test_add_contact_folks_test_case_test_method (gpointer self);
static void _add_contact_tests_test_add_contact_async (AddContactTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void _add_contact_tests_test_add_contact_finish (AddContactTests* self, GAsyncResult* _res_);
static void _add_contact_tests_test_add_contact_async_data_free (gpointer _data);
static gboolean _add_contact_tests_test_add_contact_async_co (AddContactTestsTestAddContactAsyncData* _data_);
static void _add_contact_tests_test_add_contact_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _add_contact_tests_individuals_changed_cb (AddContactTests* self, GeeMultiMap* changes);
static void __add_contact_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self);
static void _add_contact_tests_notify_full_name_cb (AddContactTests* self);
static void __add_contact_tests_notify_full_name_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void add_contact_tests_finalize (GObject * obj);
gint _vala_main (gchar** args, int args_length1);


static void _add_contact_tests_test_add_contact_folks_test_case_test_method (gpointer self) {
#line 37 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	add_contact_tests_test_add_contact ((AddContactTests*) self);
#line 119 "add-contact.c"
}


AddContactTests* add_contact_tests_construct (GType object_type) {
	AddContactTests * self = NULL;
#line 35 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	self = (AddContactTests*) tracker_test_test_case_construct (object_type, "AddContactTests");
#line 37 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "test adding contacts ", _add_contact_tests_test_add_contact_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 33 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return self;
#line 131 "add-contact.c"
}


AddContactTests* add_contact_tests_new (void) {
#line 33 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return add_contact_tests_construct (TYPE_ADD_CONTACT_TESTS);
#line 138 "add-contact.c"
}


static gpointer _tracker_test_backend_ref0 (gpointer self) {
#line 48 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return self ? tracker_test_backend_ref (self) : NULL;
#line 145 "add-contact.c"
}


void add_contact_tests_test_add_contact (AddContactTests* self) {
	GMainLoop* _tmp0_;
	gchar* _tmp1_;
	GeeHashMap* c1;
	GeeHashMap* _tmp2_;
	const gchar* _tmp3_;
	TrackerTestBackend* tracker_backend;
	TrackerTestBackend* _tmp4_;
	TrackerTestBackend* _tmp5_;
	GMainLoop* _tmp6_;
	gboolean _tmp7_;
#line 40 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_return_if_fail (self != NULL);
#line 42 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp0_ = g_main_loop_new (NULL, FALSE);
#line 42 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 42 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	self->priv->_main_loop = _tmp0_;
#line 43 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp1_ = g_strdup ("persona #1");
#line 43 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_free0 (self->priv->_persona_fullname);
#line 43 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	self->priv->_persona_fullname = _tmp1_;
#line 44 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	self->priv->_contact_added = FALSE;
#line 46 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp2_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 46 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	c1 = _tmp2_;
#line 47 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp3_ = self->priv->_persona_fullname;
#line 47 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, TRF_ONTOLOGY_DEFS_NCO_FULLNAME, _tmp3_);
#line 48 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp4_ = ((TrackerTestTestCase*) self)->tracker_backend;
#line 48 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp5_ = _tracker_test_backend_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp4_, TRACKER_TEST_TYPE_BACKEND, TrackerTestBackend));
#line 48 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	tracker_backend = _tmp5_;
#line 49 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	tracker_test_backend_add_contact (tracker_backend, c1);
#line 50 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	tracker_test_backend_set_up (tracker_backend);
#line 52 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_add_contact_tests_test_add_contact_async (self, NULL, NULL);
#line 54 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp6_ = self->priv->_main_loop;
#line 54 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	folks_test_utils_loop_run_with_timeout (_tmp6_, 5);
#line 55 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp7_ = self->priv->_contact_added;
#line 55 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_vala_assert (_tmp7_ == TRUE, "this._contact_added == true");
#line 40 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tracker_test_backend_unref0 (tracker_backend);
#line 40 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (c1);
#line 208 "add-contact.c"
}


static void _add_contact_tests_test_add_contact_async_data_free (gpointer _data) {
	AddContactTestsTestAddContactAsyncData* _data_;
	_data_ = _data;
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (_data_->self);
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_slice_free (AddContactTestsTestAddContactAsyncData, _data_);
#line 219 "add-contact.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return self ? g_object_ref (self) : NULL;
#line 226 "add-contact.c"
}


static void _add_contact_tests_test_add_contact_async (AddContactTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	AddContactTestsTestAddContactAsyncData* _data_;
	AddContactTests* _tmp0_;
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_ = g_slice_new0 (AddContactTestsTestAddContactAsyncData);
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, _add_contact_tests_test_add_contact_async);
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, _add_contact_tests_test_add_contact_async_data_free);
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->self = _tmp0_;
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_add_contact_tests_test_add_contact_async_co (_data_);
#line 245 "add-contact.c"
}


static void _add_contact_tests_test_add_contact_finish (AddContactTests* self, GAsyncResult* _res_) {
	AddContactTestsTestAddContactAsyncData* _data_;
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 253 "add-contact.c"
}


static void _add_contact_tests_test_add_contact_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	AddContactTestsTestAddContactAsyncData* _data_;
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_ = _user_data_;
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->_source_object_ = source_object;
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->_res_ = _res_;
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_add_contact_tests_test_add_contact_async_co (_data_);
#line 267 "add-contact.c"
}


static void __add_contact_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self) {
#line 63 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_add_contact_tests_individuals_changed_cb ((AddContactTests*) self, changes);
#line 274 "add-contact.c"
}


static gboolean _add_contact_tests_test_add_contact_async_co (AddContactTestsTestAddContactAsyncData* _data_) {
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	switch (_data_->_state_) {
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		case 0:
#line 283 "add-contact.c"
		goto _state_0;
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		case 1:
#line 287 "add-contact.c"
		goto _state_1;
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		case 2:
#line 291 "add-contact.c"
		goto _state_2;
		default:
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		g_assert_not_reached ();
#line 296 "add-contact.c"
	}
	_state_0:
#line 60 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->_tmp0_ = folks_backend_store_dup ();
#line 60 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->store = _data_->_tmp0_;
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->_state_ = 1;
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	folks_backend_store_prepare (_data_->store, _add_contact_tests_test_add_contact_async_ready, _data_);
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return FALSE;
#line 309 "add-contact.c"
	_state_1:
#line 61 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	folks_backend_store_prepare_finish (_data_->store, _data_->_res_);
#line 62 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->_tmp1_ = folks_individual_aggregator_dup ();
#line 62 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (_data_->self->priv->_aggregator);
#line 62 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->self->priv->_aggregator = _data_->_tmp1_;
#line 63 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_data_->_tmp2_ = _data_->self->priv->_aggregator;
#line 63 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_signal_connect_object (_data_->_tmp2_, "individuals-changed-detailed", (GCallback) __add_contact_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed, _data_->self, 0);
#line 323 "add-contact.c"
	{
#line 68 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_data_->_tmp3_ = _data_->self->priv->_aggregator;
#line 68 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_data_->_state_ = 2;
#line 68 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		folks_individual_aggregator_prepare (_data_->_tmp3_, _add_contact_tests_test_add_contact_async_ready, _data_);
#line 68 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		return FALSE;
#line 333 "add-contact.c"
		_state_2:
#line 68 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		folks_individual_aggregator_prepare_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
#line 68 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 339 "add-contact.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_data_->e = _data_->_inner_error_;
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_data_->_inner_error_ = NULL;
#line 72 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_data_->_tmp4_ = _data_->e;
#line 72 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_data_->_tmp5_ = _data_->_tmp4_->message;
#line 72 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		g_warning ("add-contact.vala:72: Error when calling prepare: %s\n", _data_->_tmp5_);
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_g_error_free0 (_data_->e);
#line 358 "add-contact.c"
	}
	__finally0:
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_g_object_unref0 (_data_->store);
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		g_clear_error (&_data_->_inner_error_);
#line 66 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		return FALSE;
#line 371 "add-contact.c"
	}
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (_data_->store);
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	if (_data_->_state_ == 0) {
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 379 "add-contact.c"
	} else {
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 383 "add-contact.c"
	}
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_object_unref (_data_->_async_result);
#line 58 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return FALSE;
#line 389 "add-contact.c"
}


static void __add_contact_tests_notify_full_name_cb_g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 87 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_add_contact_tests_notify_full_name_cb ((AddContactTests*) self);
#line 396 "add-contact.c"
}


static void _add_contact_tests_individuals_changed_cb (AddContactTests* self, GeeMultiMap* changes) {
	GeeCollection* added;
	GeeMultiMap* _tmp0_;
	GeeCollection* _tmp1_;
	GeeSet* removed;
	GeeMultiMap* _tmp2_;
	GeeSet* _tmp3_;
	GeeSet* _tmp20_;
	gint _tmp21_;
	gint _tmp22_;
#line 76 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_return_if_fail (self != NULL);
#line 76 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_return_if_fail (changes != NULL);
#line 79 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp0_ = changes;
#line 79 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp1_ = gee_multi_map_get_values (_tmp0_);
#line 79 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	added = _tmp1_;
#line 80 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp2_ = changes;
#line 80 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp3_ = gee_multi_map_get_keys (_tmp2_);
#line 80 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	removed = _tmp3_;
#line 426 "add-contact.c"
	{
		GeeIterator* _i_it;
		GeeCollection* _tmp4_;
		GeeIterator* _tmp5_;
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_tmp4_ = added;
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_i_it = _tmp5_;
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		while (TRUE) {
#line 439 "add-contact.c"
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
			FolksIndividual* _tmp15_;
			const gchar* _tmp16_;
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp6_ = _i_it;
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			if (!_tmp7_) {
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				break;
#line 461 "add-contact.c"
			}
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp8_ = _i_it;
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			i = (FolksIndividual*) _tmp9_;
#line 84 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp10_ = i;
#line 84 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_vala_assert (_tmp10_ != NULL, "i != null");
#line 86 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp11_ = i;
#line 86 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp12_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp11_);
#line 86 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp13_ = _tmp12_;
#line 86 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp14_ = g_strdup (_tmp13_);
#line 86 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			full_name = _tmp14_;
#line 87 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp15_ = i;
#line 87 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			g_signal_connect_object ((GObject*) _tmp15_, "notify::full-name", (GCallback) __add_contact_tests_notify_full_name_cb_g_object_notify, self, 0);
#line 88 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp16_ = full_name;
#line 88 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			if (_tmp16_ != NULL) {
#line 491 "add-contact.c"
				const gchar* _tmp17_;
				const gchar* _tmp18_;
#line 90 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				_tmp17_ = full_name;
#line 90 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				_tmp18_ = self->priv->_persona_fullname;
#line 90 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				if (g_strcmp0 (_tmp17_, _tmp18_) == 0) {
#line 500 "add-contact.c"
					GMainLoop* _tmp19_;
#line 92 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
					self->priv->_contact_added = TRUE;
#line 93 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
					_tmp19_ = self->priv->_main_loop;
#line 93 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
					g_main_loop_quit (_tmp19_);
#line 508 "add-contact.c"
				}
			}
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_g_free0 (full_name);
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_g_object_unref0 (i);
#line 515 "add-contact.c"
		}
#line 82 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_g_object_unref0 (_i_it);
#line 519 "add-contact.c"
	}
#line 98 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp20_ = removed;
#line 98 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp21_ = gee_collection_get_size ((GeeCollection*) _tmp20_);
#line 98 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp22_ = _tmp21_;
#line 98 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_vala_assert (_tmp22_ == 1, "removed.size == 1");
#line 529 "add-contact.c"
	{
		GeeIterator* _i_it;
		GeeSet* _tmp23_;
		GeeIterator* _tmp24_;
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_tmp23_ = removed;
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_tmp24_ = gee_iterable_iterator ((GeeIterable*) _tmp23_);
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_i_it = _tmp24_;
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		while (TRUE) {
#line 542 "add-contact.c"
			GeeIterator* _tmp25_;
			gboolean _tmp26_;
			FolksIndividual* i;
			GeeIterator* _tmp27_;
			gpointer _tmp28_;
			FolksIndividual* _tmp29_;
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp25_ = _i_it;
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp26_ = gee_iterator_next (_tmp25_);
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			if (!_tmp26_) {
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				break;
#line 557 "add-contact.c"
			}
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp27_ = _i_it;
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp28_ = gee_iterator_get (_tmp27_);
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			i = (FolksIndividual*) _tmp28_;
#line 102 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp29_ = i;
#line 102 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_vala_assert (_tmp29_ == NULL, "i == null");
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_g_object_unref0 (i);
#line 571 "add-contact.c"
		}
#line 100 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_g_object_unref0 (_i_it);
#line 575 "add-contact.c"
	}
#line 76 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (removed);
#line 76 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (added);
#line 581 "add-contact.c"
}


static void _add_contact_tests_notify_full_name_cb (AddContactTests* self) {
	GeeCollection* individuals;
	FolksIndividualAggregator* _tmp0_;
	GeeMap* _tmp1_;
	GeeMap* _tmp2_;
	GeeCollection* _tmp3_;
	GeeCollection* _tmp4_;
#line 106 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_return_if_fail (self != NULL);
#line 108 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp0_ = self->priv->_aggregator;
#line 108 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp1_ = folks_individual_aggregator_get_individuals (_tmp0_);
#line 108 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp2_ = _tmp1_;
#line 108 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp3_ = gee_map_get_values (_tmp2_);
#line 108 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp4_ = _tmp3_;
#line 108 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	individuals = _tmp4_;
#line 606 "add-contact.c"
	{
		GeeIterator* _i_it;
		GeeCollection* _tmp5_;
		GeeIterator* _tmp6_;
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_tmp5_ = individuals;
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_tmp6_ = gee_iterable_iterator ((GeeIterable*) _tmp5_);
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_i_it = _tmp6_;
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		while (TRUE) {
#line 619 "add-contact.c"
			GeeIterator* _tmp7_;
			gboolean _tmp8_;
			FolksIndividual* i;
			GeeIterator* _tmp9_;
			gpointer _tmp10_;
			FolksIndividual* _tmp11_;
			const gchar* _tmp12_;
			const gchar* _tmp13_;
			const gchar* _tmp14_;
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp7_ = _i_it;
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp8_ = gee_iterator_next (_tmp7_);
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			if (!_tmp8_) {
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				break;
#line 637 "add-contact.c"
			}
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp9_ = _i_it;
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp10_ = gee_iterator_get (_tmp9_);
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			i = (FolksIndividual*) _tmp10_;
#line 111 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp11_ = i;
#line 111 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp12_ = folks_name_details_get_full_name ((FolksNameDetails*) _tmp11_);
#line 111 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp13_ = _tmp12_;
#line 111 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_tmp14_ = self->priv->_persona_fullname;
#line 111 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			if (g_strcmp0 (_tmp13_, _tmp14_) == 0) {
#line 655 "add-contact.c"
				GMainLoop* _tmp15_;
#line 113 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				self->priv->_contact_added = TRUE;
#line 114 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				_tmp15_ = self->priv->_main_loop;
#line 114 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
				g_main_loop_quit (_tmp15_);
#line 663 "add-contact.c"
			}
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
			_g_object_unref0 (i);
#line 667 "add-contact.c"
		}
#line 109 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
		_g_object_unref0 (_i_it);
#line 671 "add-contact.c"
	}
#line 106 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (individuals);
#line 675 "add-contact.c"
}


static void add_contact_tests_class_init (AddContactTestsClass * klass) {
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	add_contact_tests_parent_class = g_type_class_peek_parent (klass);
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_type_class_add_private (klass, sizeof (AddContactTestsPrivate));
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	G_OBJECT_CLASS (klass)->finalize = add_contact_tests_finalize;
#line 686 "add-contact.c"
}


static void add_contact_tests_instance_init (AddContactTests * self) {
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	self->priv = ADD_CONTACT_TESTS_GET_PRIVATE (self);
#line 693 "add-contact.c"
}


static void add_contact_tests_finalize (GObject * obj) {
	AddContactTests * self;
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_ADD_CONTACT_TESTS, AddContactTests);
#line 29 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (self->priv->_aggregator);
#line 30 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_free0 (self->priv->_persona_fullname);
#line 31 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 26 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	G_OBJECT_CLASS (add_contact_tests_parent_class)->finalize (obj);
#line 709 "add-contact.c"
}


GType add_contact_tests_get_type (void) {
	static volatile gsize add_contact_tests_type_id__volatile = 0;
	if (g_once_init_enter (&add_contact_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AddContactTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) add_contact_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AddContactTests), 0, (GInstanceInitFunc) add_contact_tests_instance_init, NULL };
		GType add_contact_tests_type_id;
		add_contact_tests_type_id = g_type_register_static (TRACKER_TEST_TYPE_TEST_CASE, "AddContactTests", &g_define_type_info, 0);
		g_once_init_leave (&add_contact_tests_type_id__volatile, add_contact_tests_type_id);
	}
	return add_contact_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	AddContactTests* tests;
	AddContactTests* _tmp0_;
#line 122 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_test_init (&args_length1, &args, NULL);
#line 124 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_tmp0_ = add_contact_tests_new ();
#line 124 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	tests = _tmp0_;
#line 125 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 126 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	g_test_run ();
#line 127 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 129 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	result = 0;
#line 129 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	_g_object_unref0 (tests);
#line 129 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return result;
#line 747 "add-contact.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 120 "/opt/gnome/source/folks/tests/tracker/add-contact.vala"
	return _vala_main (argv, argc);
#line 757 "add-contact.c"
}



