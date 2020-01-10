/* name-details.c generated by valac 0.26.2.1-1f25, the Vala compiler
 * generated from name-details.vala, do not modify */

/*
 * Copyright (C) 2013 Philip Withnall
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
#include <folks-test.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <folks/folks.h>


#define TYPE_NAME_DETAILS_TESTS (name_details_tests_get_type ())
#define NAME_DETAILS_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_NAME_DETAILS_TESTS, NameDetailsTests))
#define NAME_DETAILS_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_NAME_DETAILS_TESTS, NameDetailsTestsClass))
#define IS_NAME_DETAILS_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_NAME_DETAILS_TESTS))
#define IS_NAME_DETAILS_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_NAME_DETAILS_TESTS))
#define NAME_DETAILS_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_NAME_DETAILS_TESTS, NameDetailsTestsClass))

typedef struct _NameDetailsTests NameDetailsTests;
typedef struct _NameDetailsTestsClass NameDetailsTestsClass;
typedef struct _NameDetailsTestsPrivate NameDetailsTestsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define NAME_DETAILS_TESTS_TYPE_FORMAT_PAIR (name_details_tests_format_pair_get_type ())
typedef struct _NameDetailsTestsFormatPair NameDetailsTestsFormatPair;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _NameDetailsTests {
	FolksTestCase parent_instance;
	NameDetailsTestsPrivate * priv;
};

struct _NameDetailsTestsClass {
	FolksTestCaseClass parent_class;
};

struct _NameDetailsTestsFormatPair {
	const gchar* format;
	const gchar* result;
};


static gpointer name_details_tests_parent_class = NULL;

GType name_details_tests_get_type (void) G_GNUC_CONST;
enum  {
	NAME_DETAILS_TESTS_DUMMY_PROPERTY
};
NameDetailsTests* name_details_tests_new (void);
NameDetailsTests* name_details_tests_construct (GType object_type);
void name_details_tests_test_structured_name_to_string (NameDetailsTests* self);
static void _name_details_tests_test_structured_name_to_string_folks_test_case_test_method (gpointer self);
void name_details_tests_test_structured_name_to_string_with_format (NameDetailsTests* self);
static void _name_details_tests_test_structured_name_to_string_with_format_folks_test_case_test_method (gpointer self);
static GType name_details_tests_format_pair_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
static NameDetailsTestsFormatPair* name_details_tests_format_pair_dup (const NameDetailsTestsFormatPair* self);
static void name_details_tests_format_pair_free (NameDetailsTestsFormatPair* self);
gint _vala_main (gchar** args, int args_length1);


static void _name_details_tests_test_structured_name_to_string_folks_test_case_test_method (gpointer self) {
#line 29 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	name_details_tests_test_structured_name_to_string ((NameDetailsTests*) self);
#line 86 "name-details.c"
}


static void _name_details_tests_test_structured_name_to_string_with_format_folks_test_case_test_method (gpointer self) {
#line 31 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	name_details_tests_test_structured_name_to_string_with_format ((NameDetailsTests*) self);
#line 93 "name-details.c"
}


NameDetailsTests* name_details_tests_construct (GType object_type) {
	NameDetailsTests * self = NULL;
#line 27 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	self = (NameDetailsTests*) folks_test_case_construct (object_type, "NameDetails");
#line 29 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "structured-name-to-string", _name_details_tests_test_structured_name_to_string_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 31 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	folks_test_case_add_test ((FolksTestCase*) self, "structured-name-to-string-with-format", _name_details_tests_test_structured_name_to_string_with_format_folks_test_case_test_method, g_object_ref (self), g_object_unref);
#line 25 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	return self;
#line 107 "name-details.c"
}


NameDetailsTests* name_details_tests_new (void) {
#line 25 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	return name_details_tests_construct (TYPE_NAME_DETAILS_TESTS);
#line 114 "name-details.c"
}


void name_details_tests_test_structured_name_to_string (NameDetailsTests* self) {
	gchar* old_locale = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	FolksStructuredName* name = NULL;
	FolksStructuredName* _tmp2_ = NULL;
	FolksStructuredName* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	FolksStructuredName* _tmp6_ = NULL;
	FolksStructuredName* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
#line 35 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	g_return_if_fail (self != NULL);
#line 40 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp0_ = setlocale (LC_ALL, NULL);
#line 40 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 40 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	old_locale = _tmp1_;
#line 41 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	setlocale (LC_ALL, "C");
#line 44 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp2_ = folks_structured_name_new ("Family", "Given", "Additional Names", "Ms.", "Esq.");
#line 44 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	name = _tmp2_;
#line 46 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp3_ = name;
#line 46 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp4_ = folks_structured_name_to_string (_tmp3_);
#line 46 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp5_ = _tmp4_;
#line 46 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_vala_assert (g_strcmp0 (_tmp5_, "Given Additional Names Family") == 0, "name.to_string () == \"Given Additional Names Family\"");
#line 46 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_g_free0 (_tmp5_);
#line 49 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp6_ = folks_structured_name_new ("Family", "Given", NULL, NULL, NULL);
#line 49 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_g_object_unref0 (name);
#line 49 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	name = _tmp6_;
#line 50 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp7_ = name;
#line 50 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp8_ = folks_structured_name_to_string (_tmp7_);
#line 50 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp9_ = _tmp8_;
#line 50 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_vala_assert (g_strcmp0 (_tmp9_, "Given Family") == 0, "name.to_string () == \"Given Family\"");
#line 50 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_g_free0 (_tmp9_);
#line 53 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	setlocale (LC_ALL, old_locale);
#line 35 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_g_object_unref0 (name);
#line 35 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_g_free0 (old_locale);
#line 177 "name-details.c"
}


void name_details_tests_test_structured_name_to_string_with_format (NameDetailsTests* self) {
	FolksStructuredName* name = NULL;
	FolksStructuredName* _tmp0_ = NULL;
#line 69 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	static const NameDetailsTestsFormatPair tests[] = {{"%f", "Wesson-Smythe"}, {"%F", "WESSON-SMYTHE"}, {"%g", "John Graham-Charlie"}, {"%G", "JGC"}, {"%l", ""}, {"%o", ""}, {"%m", "De Mimsy"}, {"%M", "DM"}, {"%p", ""}, {"%s", "Sir"}, {"%S", "Sir"}, {"%d", "Sir"}, {"%t", ""}, {"%p%t", ""}, {"%f%t", "Wesson-Smythe "}, {"%%", "%"}, {"%Rf", "Wesson-Smythe"}, {"%RF", "WESSON-SMYTHE"}, {"%Rg", "John Graham-Charlie"}, {"%RG", "JGC"}, {"%Rl", ""}, {"%Ro", ""}, {"%Rm", "De Mimsy"}, {"%RM", "DM"}, {"%Rp", ""}, {"%Rs", "Sir"}, {"%RS", "Sir"}, {"%Rd", "Sir"}, {"%Rt", ""}, {"%Rp%t", ""}, {"%Rf%t", "Wesson-Smythe "}, {"%d%t%g%t%m%t%f", "Sir John Graham-Charlie De Mimsy Wesson-Smythe"}, {"%p%t%f%t%g", "Wesson-Smythe John Graham-Charlie"}, {"%p%t%g%m%t%f", "John Graham-CharlieDe Mimsy Wesson-Smythe"}, {"%g%t%f", "John Graham-Charlie Wesson-Smythe"}, {"%d%t%s%t%f%t%g%t%m", "Sir Sir Wesson-Smythe John Graham-Charlie De Mimsy"}, {"%f%t%d", "Wesson-Smythe Sir"}};
#line 62 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	g_return_if_fail (self != NULL);
#line 66 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp0_ = folks_structured_name_new ("Wesson-Smythe", "John Graham-Charlie", "De Mimsy", "Sir", "Esq.");
#line 66 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	name = _tmp0_;
#line 192 "name-details.c"
	{
		NameDetailsTestsFormatPair* pair_collection = NULL;
		gint pair_collection_length1 = 0;
		gint _pair_collection_size_ = 0;
		gint pair_it = 0;
#line 120 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
		pair_collection = tests;
#line 120 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
		pair_collection_length1 = G_N_ELEMENTS (tests);
#line 120 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
		for (pair_it = 0; pair_it < G_N_ELEMENTS (tests); pair_it = pair_it + 1) {
#line 204 "name-details.c"
			NameDetailsTestsFormatPair pair = {0};
#line 120 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
			pair = pair_collection[pair_it];
#line 208 "name-details.c"
			{
				FolksStructuredName* _tmp1_ = NULL;
				NameDetailsTestsFormatPair _tmp2_ = {0};
				const gchar* _tmp3_ = NULL;
				gchar* _tmp4_ = NULL;
				gchar* _tmp5_ = NULL;
				NameDetailsTestsFormatPair _tmp6_ = {0};
				const gchar* _tmp7_ = NULL;
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_tmp1_ = name;
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_tmp2_ = pair;
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_tmp3_ = _tmp2_.format;
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_tmp4_ = folks_structured_name_to_string_with_format (_tmp1_, _tmp3_);
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_tmp5_ = _tmp4_;
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_tmp6_ = pair;
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_tmp7_ = _tmp6_.result;
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_vala_assert (g_strcmp0 (_tmp5_, _tmp7_) == 0, "name.to_string_with_format (pair.format) == pair.result");
#line 122 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
				_g_free0 (_tmp5_);
#line 235 "name-details.c"
			}
		}
	}
#line 62 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_g_object_unref0 (name);
#line 241 "name-details.c"
}


static NameDetailsTestsFormatPair* name_details_tests_format_pair_dup (const NameDetailsTestsFormatPair* self) {
	NameDetailsTestsFormatPair* dup;
#line 56 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	dup = g_new0 (NameDetailsTestsFormatPair, 1);
#line 56 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	memcpy (dup, self, sizeof (NameDetailsTestsFormatPair));
#line 56 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	return dup;
#line 253 "name-details.c"
}


static void name_details_tests_format_pair_free (NameDetailsTestsFormatPair* self) {
#line 56 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	g_free (self);
#line 260 "name-details.c"
}


static GType name_details_tests_format_pair_get_type (void) {
	static volatile gsize name_details_tests_format_pair_type_id__volatile = 0;
	if (g_once_init_enter (&name_details_tests_format_pair_type_id__volatile)) {
		GType name_details_tests_format_pair_type_id;
		name_details_tests_format_pair_type_id = g_boxed_type_register_static ("NameDetailsTestsFormatPair", (GBoxedCopyFunc) name_details_tests_format_pair_dup, (GBoxedFreeFunc) name_details_tests_format_pair_free);
		g_once_init_leave (&name_details_tests_format_pair_type_id__volatile, name_details_tests_format_pair_type_id);
	}
	return name_details_tests_format_pair_type_id__volatile;
}


static void name_details_tests_class_init (NameDetailsTestsClass * klass) {
#line 23 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	name_details_tests_parent_class = g_type_class_peek_parent (klass);
#line 278 "name-details.c"
}


static void name_details_tests_instance_init (NameDetailsTests * self) {
}


GType name_details_tests_get_type (void) {
	static volatile gsize name_details_tests_type_id__volatile = 0;
	if (g_once_init_enter (&name_details_tests_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (NameDetailsTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) name_details_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (NameDetailsTests), 0, (GInstanceInitFunc) name_details_tests_instance_init, NULL };
		GType name_details_tests_type_id;
		name_details_tests_type_id = g_type_register_static (FOLKS_TYPE_TEST_CASE, "NameDetailsTests", &g_define_type_info, 0);
		g_once_init_leave (&name_details_tests_type_id__volatile, name_details_tests_type_id);
	}
	return name_details_tests_type_id__volatile;
}


gint _vala_main (gchar** args, int args_length1) {
	gint result = 0;
	NameDetailsTests* tests = NULL;
	NameDetailsTests* _tmp0_ = NULL;
#line 129 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	g_test_init (&args_length1, &args, NULL);
#line 131 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_tmp0_ = name_details_tests_new ();
#line 131 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	tests = _tmp0_;
#line 132 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	folks_test_case_register ((FolksTestCase*) tests);
#line 133 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	g_test_run ();
#line 134 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	folks_test_case_final_tear_down ((FolksTestCase*) tests);
#line 136 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	result = 0;
#line 136 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	_g_object_unref0 (tests);
#line 136 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	return result;
#line 320 "name-details.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 127 "/opt/gnome3/source/folks/tests/folks/name-details.vala"
	return _vala_main (argv, argc);
#line 330 "name-details.c"
}



