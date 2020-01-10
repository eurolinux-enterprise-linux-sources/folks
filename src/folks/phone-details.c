/* phone-details.c generated by valac 0.34.0.3-63fa6, the Vala compiler
 * generated from phone-details.vala, do not modify */

/*
 * Copyright (C) 2011 Collabora Ltd.
 * Copyright (C) 2011, 2013 Philip Withnall
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
 * Authors:
 *       Marco Barisione <marco.barisione@collabora.co.uk>
 *       Raul Gutierrez Segales <raul.gutierrez.segales@collabora.co.uk>
 *       Philip Withnall <philip@tecnocode.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>


#define FOLKS_TYPE_ABSTRACT_FIELD_DETAILS (folks_abstract_field_details_get_type ())
#define FOLKS_ABSTRACT_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails))
#define FOLKS_ABSTRACT_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetailsClass))
#define FOLKS_IS_ABSTRACT_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_ABSTRACT_FIELD_DETAILS))
#define FOLKS_IS_ABSTRACT_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_ABSTRACT_FIELD_DETAILS))
#define FOLKS_ABSTRACT_FIELD_DETAILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetailsClass))

typedef struct _FolksAbstractFieldDetails FolksAbstractFieldDetails;
typedef struct _FolksAbstractFieldDetailsClass FolksAbstractFieldDetailsClass;
typedef struct _FolksAbstractFieldDetailsPrivate FolksAbstractFieldDetailsPrivate;

#define FOLKS_TYPE_PHONE_FIELD_DETAILS (folks_phone_field_details_get_type ())
#define FOLKS_PHONE_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetails))
#define FOLKS_PHONE_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetailsClass))
#define FOLKS_IS_PHONE_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_PHONE_FIELD_DETAILS))
#define FOLKS_IS_PHONE_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_PHONE_FIELD_DETAILS))
#define FOLKS_PHONE_FIELD_DETAILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetailsClass))

typedef struct _FolksPhoneFieldDetails FolksPhoneFieldDetails;
typedef struct _FolksPhoneFieldDetailsClass FolksPhoneFieldDetailsClass;
typedef struct _FolksPhoneFieldDetailsPrivate FolksPhoneFieldDetailsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

#define FOLKS_TYPE_PHONE_DETAILS (folks_phone_details_get_type ())
#define FOLKS_PHONE_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_PHONE_DETAILS, FolksPhoneDetails))
#define FOLKS_IS_PHONE_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_PHONE_DETAILS))
#define FOLKS_PHONE_DETAILS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_PHONE_DETAILS, FolksPhoneDetailsIface))

typedef struct _FolksPhoneDetails FolksPhoneDetails;
typedef struct _FolksPhoneDetailsIface FolksPhoneDetailsIface;
typedef struct _FolksPhoneDetailsChangePhoneNumbersData FolksPhoneDetailsChangePhoneNumbersData;

struct _FolksAbstractFieldDetails {
	GObject parent_instance;
	FolksAbstractFieldDetailsPrivate * priv;
};

struct _FolksAbstractFieldDetailsClass {
	GObjectClass parent_class;
	gboolean (*equal) (FolksAbstractFieldDetails* self, FolksAbstractFieldDetails* that);
	gboolean (*parameters_equal) (FolksAbstractFieldDetails* self, FolksAbstractFieldDetails* that);
	gboolean (*values_equal) (FolksAbstractFieldDetails* self, FolksAbstractFieldDetails* that);
	guint (*hash) (FolksAbstractFieldDetails* self);
	gconstpointer (*get_value) (FolksAbstractFieldDetails* self);
	void (*set_value) (FolksAbstractFieldDetails* self, gconstpointer value);
	const gchar* (*get_id) (FolksAbstractFieldDetails* self);
	void (*set_id) (FolksAbstractFieldDetails* self, const gchar* value);
	GeeMultiMap* (*get_parameters) (FolksAbstractFieldDetails* self);
	void (*set_parameters) (FolksAbstractFieldDetails* self, GeeMultiMap* value);
};

struct _FolksPhoneFieldDetails {
	FolksAbstractFieldDetails parent_instance;
	FolksPhoneFieldDetailsPrivate * priv;
};

struct _FolksPhoneFieldDetailsClass {
	FolksAbstractFieldDetailsClass parent_class;
};

struct _FolksPhoneFieldDetailsPrivate {
	gchar* _id;
};

typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
struct _FolksPhoneDetailsIface {
	GTypeInterface parent_iface;
	void (*change_phone_numbers) (FolksPhoneDetails* self, GeeSet* phone_numbers, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*change_phone_numbers_finish) (FolksPhoneDetails* self, GAsyncResult* _res_, GError** error);
	GeeSet* (*get_phone_numbers) (FolksPhoneDetails* self);
	void (*set_phone_numbers) (FolksPhoneDetails* self, GeeSet* value);
};

struct _FolksPhoneDetailsChangePhoneNumbersData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksPhoneDetails* self;
	GeeSet* phone_numbers;
	const gchar* _tmp0_;
	GError* _tmp1_;
	GError * _inner_error_;
};


static gpointer folks_phone_field_details_parent_class = NULL;

GType folks_abstract_field_details_get_type (void) G_GNUC_CONST;
GType folks_phone_field_details_get_type (void) G_GNUC_CONST;
#define FOLKS_PHONE_FIELD_DETAILS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetailsPrivate))
enum  {
	FOLKS_PHONE_FIELD_DETAILS_DUMMY_PROPERTY,
	FOLKS_PHONE_FIELD_DETAILS_ID
};
FolksPhoneFieldDetails* folks_phone_field_details_new (const gchar* value, GeeMultiMap* parameters);
FolksPhoneFieldDetails* folks_phone_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters);
static gboolean folks_phone_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that);
gboolean folks_abstract_field_details_equal (FolksAbstractFieldDetails* self, FolksAbstractFieldDetails* that);
static gboolean folks_phone_field_details_real_values_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that);
gchar* _folks_phone_field_details_drop_extension (const gchar* number);
gchar* folks_phone_field_details_get_normalised (FolksPhoneFieldDetails* self);
static guint folks_phone_field_details_real_hash (FolksAbstractFieldDetails* base);
guint folks_abstract_field_details_hash (FolksAbstractFieldDetails* self);
gconstpointer folks_abstract_field_details_get_value (FolksAbstractFieldDetails* self);
static gboolean _vala_char_array_contains (gchar* stack, int stack_length, gchar needle);
static void folks_phone_field_details_finalize (GObject* obj);
const gchar* folks_abstract_field_details_get_id (FolksAbstractFieldDetails* self);
static void _vala_folks_phone_field_details_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
void folks_abstract_field_details_set_id (FolksAbstractFieldDetails* self, const gchar* value);
static void _vala_folks_phone_field_details_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
GQuark folks_property_error_quark (void);
GType folks_phone_details_get_type (void) G_GNUC_CONST;
static void folks_phone_details_real_change_phone_numbers_data_free (gpointer _data);
static void folks_phone_details_real_change_phone_numbers (FolksPhoneDetails* self, GeeSet* phone_numbers, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_phone_details_change_phone_numbers (FolksPhoneDetails* self, GeeSet* phone_numbers, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_phone_details_change_phone_numbers_finish (FolksPhoneDetails* self, GAsyncResult* _res_, GError** error);
static gboolean folks_phone_details_real_change_phone_numbers_co (FolksPhoneDetailsChangePhoneNumbersData* _data_);
GeeSet* folks_phone_details_get_phone_numbers (FolksPhoneDetails* self);
void folks_phone_details_set_phone_numbers (FolksPhoneDetails* self, GeeSet* value);

static const gchar FOLKS_PHONE_FIELD_DETAILS__extension_chars[6] = {'p', 'P', 'w', 'W', 'x', 'X'};
static const gchar FOLKS_PHONE_FIELD_DETAILS__common_delimiters[8] = {',', '.', '(', ')', '-', ' ', '\t', '/'};
static const gchar FOLKS_PHONE_FIELD_DETAILS__valid_digits[12] = {'#', '*', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

/**
   * Create a new PhoneFieldDetails.
   *
   * @param value the value of the field, which should be a non-empty phone
   * number (no particular format is mandated)
   * @param parameters initial parameters. See
   * {@link AbstractFieldDetails.parameters}. A ``null`` value is equivalent to
   * an empty map of parameters.
   *
   * @return a new PhoneFieldDetails
   *
   * @since 0.6.0
   */
FolksPhoneFieldDetails* folks_phone_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters) {
	FolksPhoneFieldDetails * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	g_return_val_if_fail (value != NULL, NULL);
	_tmp0_ = value;
	if (g_strcmp0 (_tmp0_, "") == 0) {
		g_warning ("phone-details.vala:72: Empty phone number passed to PhoneFieldDetails.");
	}
	_tmp1_ = value;
	_tmp2_ = parameters;
	self = (FolksPhoneFieldDetails*) g_object_new (object_type, "t_type", G_TYPE_STRING, "t_dup_func", (GBoxedCopyFunc) g_strdup, "t_destroy_func", g_free, "value", _tmp1_, "parameters", _tmp2_, NULL);
	return self;
}


FolksPhoneFieldDetails* folks_phone_field_details_new (const gchar* value, GeeMultiMap* parameters) {
	return folks_phone_field_details_construct (FOLKS_TYPE_PHONE_FIELD_DETAILS, value, parameters);
}


/**
   * {@inheritDoc}
   *
   * @since 0.6.0
   */
static gboolean folks_phone_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that) {
	FolksPhoneFieldDetails * self;
	gboolean result = FALSE;
	FolksAbstractFieldDetails* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	self = (FolksPhoneFieldDetails*) base;
	g_return_val_if_fail (that != NULL, FALSE);
	_tmp0_ = that;
	_tmp1_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_phone_field_details_parent_class)->equal (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails), _tmp0_);
	result = _tmp1_;
	return result;
}


/**
   * {@inheritDoc}
   */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gchar* string_slice (const gchar* self, glong start, glong end) {
	gchar* result = NULL;
	glong string_length = 0L;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	glong _tmp2_ = 0L;
	glong _tmp5_ = 0L;
	gboolean _tmp8_ = FALSE;
	glong _tmp9_ = 0L;
	gboolean _tmp12_ = FALSE;
	glong _tmp13_ = 0L;
	glong _tmp16_ = 0L;
	glong _tmp17_ = 0L;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	gchar* _tmp21_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = strlen (self);
	_tmp1_ = _tmp0_;
	string_length = (glong) _tmp1_;
	_tmp2_ = start;
	if (_tmp2_ < ((glong) 0)) {
		glong _tmp3_ = 0L;
		glong _tmp4_ = 0L;
		_tmp3_ = string_length;
		_tmp4_ = start;
		start = _tmp3_ + _tmp4_;
	}
	_tmp5_ = end;
	if (_tmp5_ < ((glong) 0)) {
		glong _tmp6_ = 0L;
		glong _tmp7_ = 0L;
		_tmp6_ = string_length;
		_tmp7_ = end;
		end = _tmp6_ + _tmp7_;
	}
	_tmp9_ = start;
	if (_tmp9_ >= ((glong) 0)) {
		glong _tmp10_ = 0L;
		glong _tmp11_ = 0L;
		_tmp10_ = start;
		_tmp11_ = string_length;
		_tmp8_ = _tmp10_ <= _tmp11_;
	} else {
		_tmp8_ = FALSE;
	}
	g_return_val_if_fail (_tmp8_, NULL);
	_tmp13_ = end;
	if (_tmp13_ >= ((glong) 0)) {
		glong _tmp14_ = 0L;
		glong _tmp15_ = 0L;
		_tmp14_ = end;
		_tmp15_ = string_length;
		_tmp12_ = _tmp14_ <= _tmp15_;
	} else {
		_tmp12_ = FALSE;
	}
	g_return_val_if_fail (_tmp12_, NULL);
	_tmp16_ = start;
	_tmp17_ = end;
	g_return_val_if_fail (_tmp16_ <= _tmp17_, NULL);
	_tmp18_ = start;
	_tmp19_ = end;
	_tmp20_ = start;
	_tmp21_ = g_strndup (((gchar*) self) + _tmp18_, (gsize) (_tmp19_ - _tmp20_));
	result = _tmp21_;
	return result;
}


static gboolean folks_phone_field_details_real_values_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that) {
	FolksPhoneFieldDetails * self;
	gboolean result = FALSE;
	FolksPhoneFieldDetails* _that_fd = NULL;
	FolksAbstractFieldDetails* _tmp0_ = NULL;
	FolksPhoneFieldDetails* _tmp1_ = NULL;
	FolksPhoneFieldDetails* _tmp2_ = NULL;
	FolksPhoneFieldDetails* that_fd = NULL;
	FolksPhoneFieldDetails* _tmp3_ = NULL;
	FolksPhoneFieldDetails* _tmp4_ = NULL;
	gchar* n1 = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* n2 = NULL;
	FolksPhoneFieldDetails* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gboolean _tmp14_ = FALSE;
	const gchar* _tmp15_ = NULL;
	gint _tmp16_ = 0;
	gint _tmp17_ = 0;
	const gchar* _tmp35_ = NULL;
	const gchar* _tmp36_ = NULL;
	self = (FolksPhoneFieldDetails*) base;
	g_return_val_if_fail (that != NULL, FALSE);
	_tmp0_ = that;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, FOLKS_TYPE_PHONE_FIELD_DETAILS) ? ((FolksPhoneFieldDetails*) _tmp0_) : NULL);
	_that_fd = _tmp1_;
	_tmp2_ = _that_fd;
	if (_tmp2_ == NULL) {
		result = FALSE;
		_g_object_unref0 (_that_fd);
		return result;
	}
	_tmp3_ = _that_fd;
	_tmp4_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetails));
	that_fd = _tmp4_;
	_tmp5_ = folks_phone_field_details_get_normalised (self);
	_tmp6_ = _tmp5_;
	_tmp7_ = _folks_phone_field_details_drop_extension (_tmp6_);
	_tmp8_ = _tmp7_;
	_g_free0 (_tmp6_);
	n1 = _tmp8_;
	_tmp9_ = that_fd;
	_tmp10_ = folks_phone_field_details_get_normalised (_tmp9_);
	_tmp11_ = _tmp10_;
	_tmp12_ = _folks_phone_field_details_drop_extension (_tmp11_);
	_tmp13_ = _tmp12_;
	_g_free0 (_tmp11_);
	n2 = _tmp13_;
	_tmp15_ = n1;
	_tmp16_ = strlen (_tmp15_);
	_tmp17_ = _tmp16_;
	if (_tmp17_ >= 7) {
		const gchar* _tmp18_ = NULL;
		gint _tmp19_ = 0;
		gint _tmp20_ = 0;
		_tmp18_ = n2;
		_tmp19_ = strlen (_tmp18_);
		_tmp20_ = _tmp19_;
		_tmp14_ = _tmp20_ >= 7;
	} else {
		_tmp14_ = FALSE;
	}
	if (_tmp14_) {
		gchar* n1_reduced = NULL;
		const gchar* _tmp21_ = NULL;
		const gchar* _tmp22_ = NULL;
		gint _tmp23_ = 0;
		gint _tmp24_ = 0;
		gchar* _tmp25_ = NULL;
		gchar* n2_reduced = NULL;
		const gchar* _tmp26_ = NULL;
		const gchar* _tmp27_ = NULL;
		gint _tmp28_ = 0;
		gint _tmp29_ = 0;
		gchar* _tmp30_ = NULL;
		const gchar* _tmp31_ = NULL;
		const gchar* _tmp32_ = NULL;
		const gchar* _tmp33_ = NULL;
		const gchar* _tmp34_ = NULL;
		_tmp21_ = n1;
		_tmp22_ = n1;
		_tmp23_ = strlen (_tmp22_);
		_tmp24_ = _tmp23_;
		_tmp25_ = string_slice (_tmp21_, (glong) -7, (glong) _tmp24_);
		n1_reduced = _tmp25_;
		_tmp26_ = n2;
		_tmp27_ = n2;
		_tmp28_ = strlen (_tmp27_);
		_tmp29_ = _tmp28_;
		_tmp30_ = string_slice (_tmp26_, (glong) -7, (glong) _tmp29_);
		n2_reduced = _tmp30_;
		_tmp31_ = n1_reduced;
		_tmp32_ = n2_reduced;
		g_debug ("phone-details.vala:108: [PhoneDetails.equal] Comparing %s with %s", _tmp31_, _tmp32_);
		_tmp33_ = n1_reduced;
		_tmp34_ = n2_reduced;
		result = g_strcmp0 (_tmp33_, _tmp34_) == 0;
		_g_free0 (n2_reduced);
		_g_free0 (n1_reduced);
		_g_free0 (n2);
		_g_free0 (n1);
		_g_object_unref0 (that_fd);
		_g_object_unref0 (_that_fd);
		return result;
	}
	_tmp35_ = n1;
	_tmp36_ = n2;
	result = g_strcmp0 (_tmp35_, _tmp36_) == 0;
	_g_free0 (n2);
	_g_free0 (n1);
	_g_object_unref0 (that_fd);
	_g_object_unref0 (_that_fd);
	return result;
}


/**
   * {@inheritDoc}
   *
   * @since 0.6.0
   */
static guint folks_phone_field_details_real_hash (FolksAbstractFieldDetails* base) {
	FolksPhoneFieldDetails * self;
	guint result = 0U;
	guint _tmp0_ = 0U;
	self = (FolksPhoneFieldDetails*) base;
	_tmp0_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_phone_field_details_parent_class)->hash (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails));
	result = _tmp0_;
	return result;
}


/**
   * Return this object's normalised phone number.
   *
   * Typical normalisations:
   *
   *  - ``1-800-123-4567`` → ``18001234567``
   *  - ``+1-800-123-4567`` → ``+18001234567``
   *  - ``+1-800-123-4567P123`` → ``+18001234567P123``
   *
   * @return the normalised form of ``number``
   *
   * @since 0.6.0
   */
static gchar string_get (const gchar* self, glong index) {
	gchar result = '\0';
	glong _tmp0_ = 0L;
	gchar _tmp1_ = '\0';
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = index;
	_tmp1_ = ((gchar*) self)[_tmp0_];
	result = _tmp1_;
	return result;
}


static gboolean _vala_char_array_contains (gchar* stack, int stack_length, gchar needle) {
	int i;
	for (i = 0; i < stack_length; i++) {
		if (needle == stack[i]) {
			return TRUE;
		}
	}
	return FALSE;
}


gchar* folks_phone_field_details_get_normalised (FolksPhoneFieldDetails* self) {
	gchar* result = NULL;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	GString* _tmp33_ = NULL;
	const gchar* _tmp34_ = NULL;
	gchar* _tmp35_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	{
		guint i = 0U;
		i = (guint) 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				guint _tmp3_ = 0U;
				gconstpointer _tmp4_ = NULL;
				const gchar* _tmp5_ = NULL;
				gint _tmp6_ = 0;
				gint _tmp7_ = 0;
				gchar digit = '\0';
				gconstpointer _tmp8_ = NULL;
				const gchar* _tmp9_ = NULL;
				guint _tmp10_ = 0U;
				gchar _tmp11_ = '\0';
				gchar _tmp12_ = '\0';
				GString* _tmp31_ = NULL;
				gchar _tmp32_ = '\0';
				if (!_tmp1_) {
					guint _tmp2_ = 0U;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp3_ = i;
				_tmp4_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) self);
				_tmp5_ = _tmp4_;
				_tmp6_ = strlen ((const gchar*) _tmp5_);
				_tmp7_ = _tmp6_;
				if (!(_tmp3_ < ((guint) _tmp7_))) {
					break;
				}
				_tmp8_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) self);
				_tmp9_ = _tmp8_;
				_tmp10_ = i;
				_tmp11_ = string_get ((const gchar*) _tmp9_, (glong) _tmp10_);
				digit = _tmp11_;
				_tmp12_ = digit;
				if (_vala_char_array_contains (FOLKS_PHONE_FIELD_DETAILS__extension_chars, G_N_ELEMENTS (FOLKS_PHONE_FIELD_DETAILS__extension_chars), _tmp12_)) {
					gchar _tmp13_ = '\0';
					gchar _tmp14_ = '\0';
					_tmp13_ = digit;
					_tmp14_ = g_ascii_toupper (_tmp13_);
					digit = _tmp14_;
				} else {
					gchar _tmp15_ = '\0';
					_tmp15_ = digit;
					if (_tmp15_ == '+') {
						gboolean _tmp16_ = FALSE;
						gboolean _tmp17_ = FALSE;
						GString* _tmp18_ = NULL;
						const gchar* _tmp19_ = NULL;
						_tmp18_ = builder;
						_tmp19_ = _tmp18_->str;
						if (g_strcmp0 (_tmp19_, "") != 0) {
							GString* _tmp20_ = NULL;
							const gchar* _tmp21_ = NULL;
							_tmp20_ = builder;
							_tmp21_ = _tmp20_->str;
							_tmp17_ = g_strcmp0 (_tmp21_, "*31#") != 0;
						} else {
							_tmp17_ = FALSE;
						}
						if (_tmp17_) {
							GString* _tmp22_ = NULL;
							const gchar* _tmp23_ = NULL;
							_tmp22_ = builder;
							_tmp23_ = _tmp22_->str;
							_tmp16_ = g_strcmp0 (_tmp23_, "#31#") != 0;
						} else {
							_tmp16_ = FALSE;
						}
						if (_tmp16_) {
							gconstpointer _tmp24_ = NULL;
							const gchar* _tmp25_ = NULL;
							_tmp24_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) self);
							_tmp25_ = _tmp24_;
							g_debug ("phone-details.vala:164: [PhoneDetails.get_normalised] Wrong '+' in %s", (const gchar*) _tmp25_);
							continue;
						}
					} else {
						gchar _tmp26_ = '\0';
						_tmp26_ = digit;
						if (_vala_char_array_contains (FOLKS_PHONE_FIELD_DETAILS__common_delimiters, G_N_ELEMENTS (FOLKS_PHONE_FIELD_DETAILS__common_delimiters), _tmp26_)) {
							continue;
						} else {
							gchar _tmp27_ = '\0';
							_tmp27_ = digit;
							if (_vala_char_array_contains (FOLKS_PHONE_FIELD_DETAILS__valid_digits, G_N_ELEMENTS (FOLKS_PHONE_FIELD_DETAILS__valid_digits), _tmp27_)) {
							} else {
								gchar _tmp28_ = '\0';
								gconstpointer _tmp29_ = NULL;
								const gchar* _tmp30_ = NULL;
								_tmp28_ = digit;
								_tmp29_ = folks_abstract_field_details_get_value ((FolksAbstractFieldDetails*) self);
								_tmp30_ = _tmp29_;
								g_debug ("phone-details.vala:181: [PhoneDetails.get_normalised] Unknown characte" \
"r '%c' in '%s'", (gint) _tmp28_, (const gchar*) _tmp30_);
							}
						}
					}
				}
				_tmp31_ = builder;
				_tmp32_ = digit;
				g_string_append_c (_tmp31_, _tmp32_);
			}
		}
	}
	_tmp33_ = builder;
	_tmp34_ = _tmp33_->str;
	_tmp35_ = g_strdup (_tmp34_);
	result = _tmp35_;
	_g_string_free0 (builder);
	return result;
}


/**
   * Returns the given number without its extension (if any).
   *
   * @param number the phone number to process
   * @return the number without its extension; if the number didn't have an
   * extension in the first place, the number is returned unmodified
   *
   * @since 0.6.0
   */
gchar* _folks_phone_field_details_drop_extension (const gchar* number) {
	gchar* result = NULL;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	GString* _tmp13_ = NULL;
	const gchar* _tmp14_ = NULL;
	gchar* _tmp15_ = NULL;
	g_return_val_if_fail (number != NULL, NULL);
	_tmp0_ = g_string_new ("");
	builder = _tmp0_;
	{
		guint i = 0U;
		i = (guint) 0;
		{
			gboolean _tmp1_ = FALSE;
			_tmp1_ = TRUE;
			while (TRUE) {
				guint _tmp3_ = 0U;
				const gchar* _tmp4_ = NULL;
				gint _tmp5_ = 0;
				gint _tmp6_ = 0;
				gchar digit = '\0';
				const gchar* _tmp7_ = NULL;
				guint _tmp8_ = 0U;
				gchar _tmp9_ = '\0';
				gchar _tmp10_ = '\0';
				GString* _tmp11_ = NULL;
				gchar _tmp12_ = '\0';
				if (!_tmp1_) {
					guint _tmp2_ = 0U;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp1_ = FALSE;
				_tmp3_ = i;
				_tmp4_ = number;
				_tmp5_ = strlen (_tmp4_);
				_tmp6_ = _tmp5_;
				if (!(_tmp3_ < ((guint) _tmp6_))) {
					break;
				}
				_tmp7_ = number;
				_tmp8_ = i;
				_tmp9_ = string_get (_tmp7_, (glong) _tmp8_);
				digit = _tmp9_;
				_tmp10_ = digit;
				if (_vala_char_array_contains (FOLKS_PHONE_FIELD_DETAILS__extension_chars, G_N_ELEMENTS (FOLKS_PHONE_FIELD_DETAILS__extension_chars), _tmp10_)) {
					break;
				}
				_tmp11_ = builder;
				_tmp12_ = digit;
				g_string_append_c (_tmp11_, _tmp12_);
			}
		}
	}
	_tmp13_ = builder;
	_tmp14_ = _tmp13_->str;
	_tmp15_ = g_strdup (_tmp14_);
	result = _tmp15_;
	_g_string_free0 (builder);
	return result;
}


static const gchar* folks_phone_field_details_real_get_id (FolksAbstractFieldDetails* base) {
	const gchar* result;
	FolksPhoneFieldDetails* self;
	const gchar* _tmp0_ = NULL;
	self = (FolksPhoneFieldDetails*) base;
	_tmp0_ = self->priv->_id;
	result = _tmp0_;
	return result;
}


static void folks_phone_field_details_real_set_id (FolksAbstractFieldDetails* base, const gchar* value) {
	FolksPhoneFieldDetails* self;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp3_ = NULL;
	self = (FolksPhoneFieldDetails*) base;
	_tmp1_ = value;
	if (_tmp1_ != NULL) {
		const gchar* _tmp2_ = NULL;
		_tmp2_ = value;
		_tmp0_ = _tmp2_;
	} else {
		_tmp0_ = "";
	}
	_tmp3_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_id);
	self->priv->_id = _tmp3_;
	g_object_notify ((GObject *) self, "id");
}


static void folks_phone_field_details_class_init (FolksPhoneFieldDetailsClass * klass) {
	folks_phone_field_details_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FolksPhoneFieldDetailsPrivate));
	((FolksAbstractFieldDetailsClass *) klass)->equal = folks_phone_field_details_real_equal;
	((FolksAbstractFieldDetailsClass *) klass)->values_equal = folks_phone_field_details_real_values_equal;
	((FolksAbstractFieldDetailsClass *) klass)->hash = folks_phone_field_details_real_hash;
	FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (klass)->get_id = folks_phone_field_details_real_get_id;
	FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (klass)->set_id = folks_phone_field_details_real_set_id;
	G_OBJECT_CLASS (klass)->get_property = _vala_folks_phone_field_details_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_folks_phone_field_details_set_property;
	G_OBJECT_CLASS (klass)->finalize = folks_phone_field_details_finalize;
	/**
	   * {@inheritDoc}
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PHONE_FIELD_DETAILS_ID, g_param_spec_string ("id", "id", "id", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void folks_phone_field_details_instance_init (FolksPhoneFieldDetails * self) {
	self->priv = FOLKS_PHONE_FIELD_DETAILS_GET_PRIVATE (self);
}


static void folks_phone_field_details_finalize (GObject* obj) {
	FolksPhoneFieldDetails * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetails);
	_g_free0 (self->priv->_id);
	G_OBJECT_CLASS (folks_phone_field_details_parent_class)->finalize (obj);
}


/**
 * Object representing a phone number that can have some parameters associated
 * with it.
 *
 * See {@link Folks.AbstractFieldDetails} for details on common parameter names
 * and values.
 *
 * @since 0.6.0
 */
GType folks_phone_field_details_get_type (void) {
	static volatile gsize folks_phone_field_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_phone_field_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksPhoneFieldDetailsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_phone_field_details_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksPhoneFieldDetails), 0, (GInstanceInitFunc) folks_phone_field_details_instance_init, NULL };
		GType folks_phone_field_details_type_id;
		folks_phone_field_details_type_id = g_type_register_static (FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, "FolksPhoneFieldDetails", &g_define_type_info, 0);
		g_once_init_leave (&folks_phone_field_details_type_id__volatile, folks_phone_field_details_type_id);
	}
	return folks_phone_field_details_type_id__volatile;
}


static void _vala_folks_phone_field_details_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FolksPhoneFieldDetails * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetails);
	switch (property_id) {
		case FOLKS_PHONE_FIELD_DETAILS_ID:
		g_value_set_string (value, folks_abstract_field_details_get_id ((FolksAbstractFieldDetails*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_folks_phone_field_details_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FolksPhoneFieldDetails * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FOLKS_TYPE_PHONE_FIELD_DETAILS, FolksPhoneFieldDetails);
	switch (property_id) {
		case FOLKS_PHONE_FIELD_DETAILS_ID:
		folks_abstract_field_details_set_id ((FolksAbstractFieldDetails*) self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void folks_phone_details_real_change_phone_numbers_data_free (gpointer _data) {
	FolksPhoneDetailsChangePhoneNumbersData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->phone_numbers);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksPhoneDetailsChangePhoneNumbersData, _data_);
}


static void folks_phone_details_real_change_phone_numbers (FolksPhoneDetails* self, GeeSet* phone_numbers, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksPhoneDetailsChangePhoneNumbersData* _data_;
	FolksPhoneDetails* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
	_data_ = g_slice_new0 (FolksPhoneDetailsChangePhoneNumbersData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_phone_details_real_change_phone_numbers);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_phone_details_real_change_phone_numbers_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = phone_numbers;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->phone_numbers);
	_data_->phone_numbers = _tmp2_;
	folks_phone_details_real_change_phone_numbers_co (_data_);
}


static void folks_phone_details_real_change_phone_numbers_finish (FolksPhoneDetails* self, GAsyncResult* _res_, GError** error) {
	FolksPhoneDetailsChangePhoneNumbersData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * Change the contact's phone numbers.
   *
   * It's preferred to call this rather than setting
   * {@link PhoneDetails.phone_numbers} directly, as this method gives error
   * notification and will only return once the phone numbers have been written
   * to the relevant backing store (or the operation's failed).
   *
   * @param phone_numbers the set of phone numbers
   * @throws PropertyError if setting the phone numbers failed
   * @since 0.6.2
   */
static gboolean folks_phone_details_real_change_phone_numbers_co (FolksPhoneDetailsChangePhoneNumbersData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _ ("Phone numbers are not writeable on this contact.");
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = g_error_new_literal (FOLKS_PROPERTY_ERROR, FOLKS_PROPERTY_ERROR_NOT_WRITEABLE, _data_->_tmp0_);
	_data_->_inner_error_ = _data_->_tmp1_;
	if (_data_->_inner_error_->domain == FOLKS_PROPERTY_ERROR) {
		g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
		g_error_free (_data_->_inner_error_);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	} else {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
		g_clear_error (&_data_->_inner_error_);
		return FALSE;
	}
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


void folks_phone_details_change_phone_numbers (FolksPhoneDetails* self, GeeSet* phone_numbers, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_PHONE_DETAILS_GET_INTERFACE (self)->change_phone_numbers (self, phone_numbers, _callback_, _user_data_);
}


void folks_phone_details_change_phone_numbers_finish (FolksPhoneDetails* self, GAsyncResult* _res_, GError** error) {
	FOLKS_PHONE_DETAILS_GET_INTERFACE (self)->change_phone_numbers_finish (self, _res_, error);
}


GeeSet* folks_phone_details_get_phone_numbers (FolksPhoneDetails* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_PHONE_DETAILS_GET_INTERFACE (self)->get_phone_numbers (self);
}


void folks_phone_details_set_phone_numbers (FolksPhoneDetails* self, GeeSet* value) {
	g_return_if_fail (self != NULL);
	FOLKS_PHONE_DETAILS_GET_INTERFACE (self)->set_phone_numbers (self, value);
}


static void folks_phone_details_base_init (FolksPhoneDetailsIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		   * The phone numbers of the contact.
		   *
		   * A list of phone numbers associated to the contact.
		   *
		   * @since 0.6.0
		   */
		g_object_interface_install_property (iface, g_param_spec_object ("phone-numbers", "phone-numbers", "phone-numbers", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		iface->change_phone_numbers = folks_phone_details_real_change_phone_numbers;
		iface->change_phone_numbers_finish = folks_phone_details_real_change_phone_numbers_finish;
	}
}


/**
 * Interface for classes that can provide a phone number, such as
 * {@link Persona} and {@link Individual}.
 *
 * @since 0.3.5
 */
GType folks_phone_details_get_type (void) {
	static volatile gsize folks_phone_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_phone_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksPhoneDetailsIface), (GBaseInitFunc) folks_phone_details_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_phone_details_type_id;
		folks_phone_details_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksPhoneDetails", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_phone_details_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&folks_phone_details_type_id__volatile, folks_phone_details_type_id);
	}
	return folks_phone_details_type_id__volatile;
}



