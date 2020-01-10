/* fake-tp-backend.c generated by valac 0.35.3.10-6b27, the Vala compiler
 * generated from fake-tp-backend.vala, do not modify */

/*
 * Copyright (C) 2012 Philip Withnall
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
 * Authors: Philip Withnall <philip@tecnocode.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <folks/folks.h>
#include <tp-test-contactlist.h>
#include <gio/gio.h>

typedef struct _Block1Data Block1Data;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))

struct _Block1Data {
	int _ref_count_;
	FolksIndividualAggregator* aggregator;
};



gint _vala_main (gchar** args, int args_length1);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static gboolean __lambda4_ (Block1Data* _data1_);
static void __lambda5_ (Block1Data* _data1_, GObject* s, GAsyncResult* r);
static void ___lambda5__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self);
static gboolean ___lambda4__gsource_func (gpointer self);


static Block1Data* block1_data_ref (Block1Data* _data1_) {
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	return _data1_;
#line 58 "fake-tp-backend.c"
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		_g_object_unref0 (_data1_->aggregator);
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		g_slice_free (Block1Data, _data1_);
#line 71 "fake-tp-backend.c"
	}
}


static void __lambda5_ (Block1Data* _data1_, GObject* s, GAsyncResult* r) {
	GError * _inner_error_ = NULL;
#line 42 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	g_return_if_fail (r != NULL);
#line 80 "fake-tp-backend.c"
	{
		FolksIndividualAggregator* _tmp0_;
		GAsyncResult* _tmp1_;
#line 46 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		_tmp0_ = _data1_->aggregator;
#line 46 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		_tmp1_ = r;
#line 46 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		folks_individual_aggregator_prepare_finish (_tmp0_, _tmp1_, &_inner_error_);
#line 46 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 92 "fake-tp-backend.c"
			goto __catch0_g_error;
		}
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e1 = NULL;
		const gchar* _tmp2_;
#line 44 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		e1 = _inner_error_;
#line 44 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		_inner_error_ = NULL;
#line 50 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		_tmp2_ = e1->message;
#line 50 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		g_critical ("fake-tp-backend.vala:50: Failed to prepare aggregator: %s", _tmp2_);
#line 51 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		g_assert_not_reached ();
#line 44 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		_g_error_free0 (e1);
#line 113 "fake-tp-backend.c"
	}
	__finally0:
#line 44 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 44 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 44 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		g_clear_error (&_inner_error_);
#line 44 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
		return;
#line 124 "fake-tp-backend.c"
	}
}


static void ___lambda5__gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self) {
#line 42 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	__lambda5_ (self, source_object, res);
#line 42 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	block1_data_unref (self);
#line 134 "fake-tp-backend.c"
}


static gboolean __lambda4_ (Block1Data* _data1_) {
	gboolean result = FALSE;
	FolksIndividualAggregator* _tmp0_;
#line 42 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_tmp0_ = _data1_->aggregator;
#line 42 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	folks_individual_aggregator_prepare (_tmp0_, ___lambda5__gasync_ready_callback, block1_data_ref (_data1_));
#line 55 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	result = FALSE;
#line 55 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	return result;
#line 149 "fake-tp-backend.c"
}


static gboolean ___lambda4__gsource_func (gpointer self) {
	gboolean result;
	result = __lambda4_ (self);
#line 40 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	return result;
#line 158 "fake-tp-backend.c"
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	Block1Data* _data1_;
	TpTestsBackend* tp_backend;
	TpTestsBackend* _tmp0_;
	void* account_handle;
	void* _tmp1_;
	GMainLoop* main_loop;
	GMainLoop* _tmp2_;
	FolksIndividualAggregator* _tmp3_;
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_data1_ = g_slice_new0 (Block1Data);
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_data1_->_ref_count_ = 1;
#line 29 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_tmp0_ = tp_tests_backend_new ();
#line 29 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	tp_backend = _tmp0_;
#line 31 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	tp_tests_backend_set_up (tp_backend);
#line 32 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_tmp1_ = tp_tests_backend_add_account (tp_backend, "protocol", "me@example.com", "cm", "account");
#line 32 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	account_handle = _tmp1_;
#line 35 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_tmp2_ = g_main_loop_new (NULL, FALSE);
#line 35 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	main_loop = _tmp2_;
#line 38 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_tmp3_ = folks_individual_aggregator_dup ();
#line 38 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_data1_->aggregator = _tmp3_;
#line 40 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ___lambda4__gsource_func, block1_data_ref (_data1_), block1_data_unref);
#line 59 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	g_main_loop_run (main_loop);
#line 62 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_g_object_unref0 (_data1_->aggregator);
#line 62 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_data1_->aggregator = NULL;
#line 64 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	tp_tests_backend_remove_account (tp_backend, account_handle);
#line 65 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	tp_tests_backend_tear_down (tp_backend);
#line 67 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	result = 0;
#line 67 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_g_main_loop_unref0 (main_loop);
#line 67 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_g_object_unref0 (tp_backend);
#line 67 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	block1_data_unref (_data1_);
#line 67 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	_data1_ = NULL;
#line 67 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	return result;
#line 218 "fake-tp-backend.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 27 "/opt/gnome/source/folks/tests/telepathy/fake-tp-backend.vala"
	return _vala_main (argv, argc);
#line 228 "fake-tp-backend.c"
}



