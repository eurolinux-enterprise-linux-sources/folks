/* removing-contacts.c generated by valac 0.26.2.1-1f25, the Vala compiler
 * generated from removing-contacts.vala, do not modify */

/*
 * Copyright (C) 2011, 2015 Collabora Ltd.
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
 *          Philip Withnall <philip.withnall@collabora.co.uk>
 *
 */

#include <glib.h>
#include <glib-object.h>
#include <eds-test.h>
#include <folks/folks.h>
#include <folks-test.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define TYPE_REMOVING_CONTACTS_TESTS (removing_contacts_tests_get_type ())
#define REMOVING_CONTACTS_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_REMOVING_CONTACTS_TESTS, RemovingContactsTests))
#define REMOVING_CONTACTS_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_REMOVING_CONTACTS_TESTS, RemovingContactsTestsClass))
#define IS_REMOVING_CONTACTS_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_REMOVING_CONTACTS_TESTS))
#define IS_REMOVING_CONTACTS_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_REMOVING_CONTACTS_TESTS))
#define REMOVING_CONTACTS_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_REMOVING_CONTACTS_TESTS, RemovingContactsTestsClass))

typedef struct _RemovingContactsTests RemovingContactsTests;
typedef struct _RemovingContactsTestsClass RemovingContactsTestsClass;
typedef struct _RemovingContactsTestsPrivate RemovingContactsTestsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))
#define __vala_GValue_free0(var) ((var == NULL) ? NULL : (var = (_vala_GValue_free (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _RemovingContactsTestsTestRemovalAsyncData RemovingContactsTestsTestRemovalAsyncData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _RemovingContactsTests {
	EdsTestTestCase parent_instance;
	RemovingContactsTestsPrivate * priv;
};

struct _RemovingContactsTestsClass {
	EdsTestTestCaseClass parent_class;
};

struct _RemovingContactsTestsPrivate {
	FolksIndividualAggregator* _aggregator;
	GMainLoop* _main_loop;
	gboolean _removed;
	gboolean _added;
};

struct _RemovingContactsTestsTestRemovalAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RemovingContactsTests* self;
	EdsTestBackend* _tmp0_;
	FolksBackendStore* store;
	FolksBackendStore* _tmp1_;
	FolksIndividualAggregator* _tmp2_;
	FolksIndividualAggregator* _tmp3_;
	FolksIndividualAggregator* _tmp4_;
	GError* e;
	GError* _tmp5_;
	const gchar* _tmp6_;
	GError * _inner_error_;
};


static gpointer removing_contacts_tests_parent_class = NULL;

GType removing_contacts_tests_get_type (void) G_GNUC_CONST;
#define REMOVING_CONTACTS_TESTS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_REMOVING_CONTACTS_TESTS, RemovingContactsTestsPrivate))
enum  {
	REMOVING_CONTACTS_TESTS_DUMMY_PROPERTY
};
RemovingContactsTests* removing_contacts_tests_new (void);
RemovingContactsTests* removing_contacts_tests_construct (GType object_type);
static void removing_contacts_tests_test_removal (RemovingContactsTests* self);
static void _removing_contacts_tests_test_removal_folks_test_case_test_method (gpointer self);
static GValue* _g_value_dup (GValue* self);
static void _vala_GValue_free (GValue* self);
static void _removing_contacts_tests_test_removal_async (RemovingContactsTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void _removing_contacts_tests_test_removal_finish (RemovingContactsTests* self, GAsyncResult* _res_);
static void _removing_contacts_tests_test_removal_async_data_free (gpointer _data);
static gboolean _removing_contacts_tests_test_removal_async_co (RemovingContactsTestsTestRemovalAsyncData* _data_);
static void _removing_contacts_tests_test_removal_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _removing_contacts_tests_individuals_changed_cb (RemovingContactsTests* self, GeeMultiMap* changes);
static void __removing_contacts_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self);
static void removing_contacts_tests_finalize (GObject* obj);
gint _vala_main (gchar** args, int args_length1);


static void _removing_contacts_tests_test_removal_folks_test_case_test_method (gpointer self) {
#line 37 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	removing_contacts_tests_test_removal ((RemovingContactsTests*) self);
#line 116 "removing-contacts.c"
}


RemovingContactsTests* removing_contacts_tests_construct (GType object_type) {
	RemovingContactsTests * self = NULL;
#line 35 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	self = (RemovingContactsTests*) eds_test_test_case_construct (object_type, "IndividualRetrieval");
#line 37 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "removing contact", _removing_contacts_tests_test_removal_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 33 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return self;
#line 128 "removing-contacts.c"
}


RemovingContactsTests* removing_contacts_tests_new (void) {
#line 33 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return removing_contacts_tests_construct (TYPE_REMOVING_CONTACTS_TESTS);
#line 135 "removing-contacts.c"
}


static GValue* _g_value_dup (GValue* self) {
#line 42 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return g_boxed_copy (G_TYPE_VALUE, self);
#line 142 "removing-contacts.c"
}


static void _vala_GValue_free (GValue* self) {
#line 42 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_value_unset (self);
#line 42 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_free (self);
#line 151 "removing-contacts.c"
}


static gpointer __g_value_dup0 (gpointer self) {
#line 51 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return self ? _g_value_dup (self) : NULL;
#line 158 "removing-contacts.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 54 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return self ? g_object_ref (self) : NULL;
#line 165 "removing-contacts.c"
}


static void removing_contacts_tests_test_removal (RemovingContactsTests* self) {
	GeeHashMap* c1 = NULL;
	GeeHashMap* _tmp0_ = NULL;
	GMainLoop* _tmp1_ = NULL;
	GValue* v = NULL;
	EdsTestBackend* _tmp2_ = NULL;
	GValue _tmp3_ = {0};
	GValue _tmp4_ = {0};
	GValue* _tmp5_ = NULL;
	GValue* _tmp6_ = NULL;
	GValue* _tmp7_ = NULL;
	GValue* _tmp8_ = NULL;
	EdsTestBackend* _tmp9_ = NULL;
	GeeHashMap* _tmp10_ = NULL;
	GMainLoop* _tmp11_ = NULL;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp13_ = FALSE;
#line 40 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_return_if_fail (self != NULL);
#line 42 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_VALUE, (GBoxedCopyFunc) _g_value_dup, _vala_GValue_free, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 42 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	c1 = _tmp0_;
#line 43 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp1_ = g_main_loop_new (NULL, FALSE);
#line 43 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 43 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	self->priv->_main_loop = _tmp1_;
#line 46 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	self->priv->_added = FALSE;
#line 47 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	self->priv->_removed = FALSE;
#line 49 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp2_ = ((EdsTestTestCase*) self)->eds_backend;
#line 49 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	eds_test_backend_reset (_tmp2_);
#line 51 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_value_init (&_tmp3_, G_TYPE_STRING);
#line 51 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp4_ = _tmp3_;
#line 51 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp5_ = __g_value_dup0 (&_tmp4_);
#line 51 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	__vala_GValue_free0 (v);
#line 51 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	v = _tmp5_;
#line 51 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	G_IS_VALUE (&_tmp4_) ? (g_value_unset (&_tmp4_), NULL) : NULL;
#line 52 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp6_ = v;
#line 52 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_value_set_string (_tmp6_, "bernie h. innocenti");
#line 53 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp7_ = v;
#line 53 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	v = NULL;
#line 53 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp8_ = _tmp7_;
#line 53 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	gee_abstract_map_set ((GeeAbstractMap*) c1, "full_name", _tmp8_);
#line 53 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	__vala_GValue_free0 (_tmp8_);
#line 54 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp9_ = ((EdsTestTestCase*) self)->eds_backend;
#line 54 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp10_ = _g_object_ref0 (c1);
#line 54 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	eds_test_backend_add_contact (_tmp9_, _tmp10_);
#line 56 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_removing_contacts_tests_test_removal_async (self, NULL, NULL);
#line 58 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp11_ = self->priv->_main_loop;
#line 58 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	folks_test_utils_loop_run_with_timeout (_tmp11_, 5);
#line 60 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp12_ = self->priv->_added;
#line 60 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_vala_assert (_tmp12_ == TRUE, "this._added == true");
#line 61 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp13_ = self->priv->_removed;
#line 61 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_vala_assert (_tmp13_ == TRUE, "this._removed == true");
#line 40 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	__vala_GValue_free0 (v);
#line 40 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (c1);
#line 256 "removing-contacts.c"
}


static void _removing_contacts_tests_test_removal_async_data_free (gpointer _data) {
	RemovingContactsTestsTestRemovalAsyncData* _data_;
	_data_ = _data;
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (_data_->self);
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_slice_free (RemovingContactsTestsTestRemovalAsyncData, _data_);
#line 267 "removing-contacts.c"
}


static void _removing_contacts_tests_test_removal_async (RemovingContactsTests* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RemovingContactsTestsTestRemovalAsyncData* _data_;
	RemovingContactsTests* _tmp0_ = NULL;
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_ = g_slice_new0 (RemovingContactsTestsTestRemovalAsyncData);
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, _removing_contacts_tests_test_removal_async);
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, _removing_contacts_tests_test_removal_async_data_free);
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->self = _tmp0_;
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_removing_contacts_tests_test_removal_async_co (_data_);
#line 286 "removing-contacts.c"
}


static void _removing_contacts_tests_test_removal_finish (RemovingContactsTests* self, GAsyncResult* _res_) {
	RemovingContactsTestsTestRemovalAsyncData* _data_;
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 294 "removing-contacts.c"
}


static void _removing_contacts_tests_test_removal_async_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RemovingContactsTestsTestRemovalAsyncData* _data_;
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_ = _user_data_;
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_source_object_ = source_object;
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_res_ = _res_;
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_removing_contacts_tests_test_removal_async_co (_data_);
#line 308 "removing-contacts.c"
}


static void __removing_contacts_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed (FolksIndividualAggregator* _sender, GeeMultiMap* changes, gpointer self) {
#line 71 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_removing_contacts_tests_individuals_changed_cb ((RemovingContactsTests*) self, changes);
#line 315 "removing-contacts.c"
}


static gboolean _removing_contacts_tests_test_removal_async_co (RemovingContactsTestsTestRemovalAsyncData* _data_) {
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	switch (_data_->_state_) {
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		case 0:
#line 324 "removing-contacts.c"
		goto _state_0;
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		case 1:
#line 328 "removing-contacts.c"
		goto _state_1;
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		case 2:
#line 332 "removing-contacts.c"
		goto _state_2;
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		case 3:
#line 336 "removing-contacts.c"
		goto _state_3;
		default:
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		g_assert_not_reached ();
#line 341 "removing-contacts.c"
	}
	_state_0:
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp0_ = NULL;
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp0_ = ((EdsTestTestCase*) _data_->self)->eds_backend;
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_state_ = 1;
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	eds_test_backend_commit_contacts_to_addressbook (_data_->_tmp0_, _removing_contacts_tests_test_removal_async_ready, _data_);
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return FALSE;
#line 354 "removing-contacts.c"
	_state_1:
#line 66 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	eds_test_backend_commit_contacts_to_addressbook_finish (_data_->_tmp0_, _data_->_res_);
#line 68 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp1_ = NULL;
#line 68 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp1_ = folks_backend_store_dup ();
#line 68 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->store = _data_->_tmp1_;
#line 69 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_state_ = 2;
#line 69 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	folks_backend_store_prepare (_data_->store, _removing_contacts_tests_test_removal_async_ready, _data_);
#line 69 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return FALSE;
#line 370 "removing-contacts.c"
	_state_2:
#line 69 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	folks_backend_store_prepare_finish (_data_->store, _data_->_res_);
#line 70 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp2_ = NULL;
#line 70 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp2_ = folks_individual_aggregator_dup ();
#line 70 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (_data_->self->priv->_aggregator);
#line 70 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->self->priv->_aggregator = _data_->_tmp2_;
#line 71 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp3_ = NULL;
#line 71 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_data_->_tmp3_ = _data_->self->priv->_aggregator;
#line 71 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_signal_connect_object (_data_->_tmp3_, "individuals-changed-detailed", (GCallback) __removing_contacts_tests_individuals_changed_cb_folks_individual_aggregator_individuals_changed_detailed, _data_->self, 0);
#line 388 "removing-contacts.c"
	{
#line 75 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_tmp4_ = NULL;
#line 75 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_tmp4_ = _data_->self->priv->_aggregator;
#line 75 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_state_ = 3;
#line 75 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		folks_individual_aggregator_prepare (_data_->_tmp4_, _removing_contacts_tests_test_removal_async_ready, _data_);
#line 75 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		return FALSE;
#line 400 "removing-contacts.c"
		_state_3:
#line 75 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		folks_individual_aggregator_prepare_finish (_data_->_tmp4_, _data_->_res_, &_data_->_inner_error_);
#line 75 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 406 "removing-contacts.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->e = _data_->_inner_error_;
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_inner_error_ = NULL;
#line 79 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_tmp5_ = NULL;
#line 79 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_tmp5_ = _data_->e;
#line 79 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_tmp6_ = NULL;
#line 79 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_data_->_tmp6_ = _data_->_tmp5_->message;
#line 79 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		g_warning ("removing-contacts.vala:79: Error when calling prepare: %s\n", _data_->_tmp6_);
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_g_error_free0 (_data_->e);
#line 429 "removing-contacts.c"
	}
	__finally0:
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_g_object_unref0 (_data_->store);
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		g_clear_error (&_data_->_inner_error_);
#line 73 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		return FALSE;
#line 442 "removing-contacts.c"
	}
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (_data_->store);
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	if (_data_->_state_ == 0) {
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 450 "removing-contacts.c"
	} else {
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 454 "removing-contacts.c"
	}
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_object_unref (_data_->_async_result);
#line 64 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return FALSE;
#line 460 "removing-contacts.c"
}


static void _removing_contacts_tests_individuals_changed_cb (RemovingContactsTests* self, GeeMultiMap* changes) {
	GeeCollection* added = NULL;
	GeeMultiMap* _tmp0_ = NULL;
	GeeCollection* _tmp1_ = NULL;
	GeeSet* removed = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	GeeSet* _tmp3_ = NULL;
#line 83 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_return_if_fail (self != NULL);
#line 83 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_return_if_fail (changes != NULL);
#line 86 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp0_ = changes;
#line 86 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp1_ = gee_multi_map_get_values (_tmp0_);
#line 86 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	added = _tmp1_;
#line 87 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp2_ = changes;
#line 87 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp3_ = gee_multi_map_get_keys (_tmp2_);
#line 87 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	removed = _tmp3_;
#line 487 "removing-contacts.c"
	{
		GeeIterator* _i_it = NULL;
		GeeCollection* _tmp4_ = NULL;
		GeeIterator* _tmp5_ = NULL;
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_tmp4_ = added;
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_tmp5_ = gee_iterable_iterator ((GeeIterable*) _tmp4_);
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_i_it = _tmp5_;
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		while (TRUE) {
#line 500 "removing-contacts.c"
			GeeIterator* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp8_ = NULL;
			gpointer _tmp9_ = NULL;
			FolksIndividual* _tmp10_ = NULL;
			FolksNameDetails* name = NULL;
			FolksIndividual* _tmp11_ = NULL;
			FolksNameDetails* _tmp12_ = NULL;
			FolksNameDetails* _tmp13_ = NULL;
			const gchar* _tmp14_ = NULL;
			const gchar* _tmp15_ = NULL;
			EdsTestBackend* _tmp16_ = NULL;
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp6_ = _i_it;
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp7_ = gee_iterator_next (_tmp6_);
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			if (!_tmp7_) {
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
				break;
#line 522 "removing-contacts.c"
			}
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp8_ = _i_it;
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp9_ = gee_iterator_get (_tmp8_);
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			i = (FolksIndividual*) _tmp9_;
#line 91 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp10_ = i;
#line 91 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			if (_tmp10_ == NULL) {
#line 93 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
				_g_object_unref0 (i);
#line 93 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
				continue;
#line 538 "removing-contacts.c"
			}
#line 96 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp11_ = i;
#line 96 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp12_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp11_, FOLKS_TYPE_NAME_DETAILS, FolksNameDetails));
#line 96 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			name = _tmp12_;
#line 97 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			self->priv->_added = TRUE;
#line 98 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp13_ = name;
#line 98 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp14_ = folks_name_details_get_full_name (_tmp13_);
#line 98 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp15_ = _tmp14_;
#line 98 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_vala_assert (g_strcmp0 (_tmp15_, "bernie h. innocenti") == 0, "name.full_name == \"bernie h. innocenti\"");
#line 99 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp16_ = ((EdsTestTestCase*) self)->eds_backend;
#line 99 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			eds_test_backend_remove_contact (_tmp16_, 0, NULL, NULL);
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_g_object_unref0 (name);
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_g_object_unref0 (i);
#line 564 "removing-contacts.c"
		}
#line 89 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_g_object_unref0 (_i_it);
#line 568 "removing-contacts.c"
	}
	{
		GeeIterator* _i_it = NULL;
		GeeSet* _tmp17_ = NULL;
		GeeIterator* _tmp18_ = NULL;
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_tmp17_ = removed;
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_tmp18_ = gee_iterable_iterator ((GeeIterable*) _tmp17_);
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_i_it = _tmp18_;
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		while (TRUE) {
#line 582 "removing-contacts.c"
			GeeIterator* _tmp19_ = NULL;
			gboolean _tmp20_ = FALSE;
			FolksIndividual* i = NULL;
			GeeIterator* _tmp21_ = NULL;
			gpointer _tmp22_ = NULL;
			FolksIndividual* _tmp23_ = NULL;
			FolksNameDetails* name = NULL;
			FolksIndividual* _tmp24_ = NULL;
			FolksNameDetails* _tmp25_ = NULL;
			FolksNameDetails* _tmp26_ = NULL;
			const gchar* _tmp27_ = NULL;
			const gchar* _tmp28_ = NULL;
			GMainLoop* _tmp29_ = NULL;
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp19_ = _i_it;
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp20_ = gee_iterator_next (_tmp19_);
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			if (!_tmp20_) {
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
				break;
#line 604 "removing-contacts.c"
			}
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp21_ = _i_it;
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp22_ = gee_iterator_get (_tmp21_);
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			i = (FolksIndividual*) _tmp22_;
#line 104 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp23_ = i;
#line 104 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			if (_tmp23_ == NULL) {
#line 106 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
				_g_object_unref0 (i);
#line 106 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
				continue;
#line 620 "removing-contacts.c"
			}
#line 109 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp24_ = i;
#line 109 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp25_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp24_, FOLKS_TYPE_NAME_DETAILS, FolksNameDetails));
#line 109 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			name = _tmp25_;
#line 110 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp26_ = name;
#line 110 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp27_ = folks_name_details_get_full_name (_tmp26_);
#line 110 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp28_ = _tmp27_;
#line 110 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_vala_assert (g_strcmp0 (_tmp28_, "bernie h. innocenti") == 0, "name.full_name == \"bernie h. innocenti\"");
#line 111 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			self->priv->_removed = TRUE;
#line 114 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_tmp29_ = self->priv->_main_loop;
#line 114 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			g_main_loop_quit (_tmp29_);
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_g_object_unref0 (name);
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
			_g_object_unref0 (i);
#line 646 "removing-contacts.c"
		}
#line 102 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
		_g_object_unref0 (_i_it);
#line 650 "removing-contacts.c"
	}
#line 83 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (removed);
#line 83 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (added);
#line 656 "removing-contacts.c"
}


static void removing_contacts_tests_class_init (RemovingContactsTestsClass * klass) {
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	removing_contacts_tests_parent_class = g_type_class_peek_parent (klass);
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_type_class_add_private (klass, sizeof (RemovingContactsTestsPrivate));
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	G_OBJECT_CLASS (klass)->finalize = removing_contacts_tests_finalize;
#line 667 "removing-contacts.c"
}


static void removing_contacts_tests_instance_init (RemovingContactsTests * self) {
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	self->priv = REMOVING_CONTACTS_TESTS_GET_PRIVATE (self);
#line 674 "removing-contacts.c"
}


static void removing_contacts_tests_finalize (GObject* obj) {
	RemovingContactsTests * self;
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_REMOVING_CONTACTS_TESTS, RemovingContactsTests);
#line 28 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (self->priv->_aggregator);
#line 29 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_main_loop_unref0 (self->priv->_main_loop);
#line 26 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	G_OBJECT_CLASS (removing_contacts_tests_parent_class)->finalize (obj);
#line 688 "removing-contacts.c"
}


GType removing_contacts_tests_get_type (void) {
	static volatile gsize removing_contacts_tests_type_id__volatile = 0;
	if (g_once_init_enter (&removing_contacts_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RemovingContactsTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) removing_contacts_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RemovingContactsTests), 0, (GInstanceInitFunc) removing_contacts_tests_instance_init, NULL };
		GType removing_contacts_tests_type_id;
		removing_contacts_tests_type_id = g_type_register_static (EDS_TEST_TYPE_TEST_CASE, "RemovingContactsTests", &g_define_type_info, 0);
		g_once_init_leave (&removing_contacts_tests_type_id__volatile, removing_contacts_tests_type_id);
	}
	return removing_contacts_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	RemovingContactsTests* tests = NULL;
	RemovingContactsTests* _tmp0_ = NULL;
#line 121 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_test_init (&args_length1, &args, NULL);
#line 123 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_tmp0_ = removing_contacts_tests_new ();
#line 123 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	tests = _tmp0_;
#line 124 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 125 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	g_test_run ();
#line 126 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 128 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	result = 0;
#line 128 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	_g_object_unref0 (tests);
#line 128 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return result;
#line 726 "removing-contacts.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 119 "/opt/gnome3/source/folks/tests/eds/removing-contacts.vala"
	return _vala_main (argv, argc);
#line 736 "removing-contacts.c"
}



