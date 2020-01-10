/* im-details.c generated by valac 0.34.0.3-63fa6, the Vala compiler
 * generated from im-details.vala, do not modify */

/*
 * Copyright (C) 2010 Collabora Ltd.
 * Copyright (C) 2011 Philip Withnall
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
 *       Philip Withnall <philip.withnall@collabora.co.uk>
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

#define FOLKS_TYPE_IM_FIELD_DETAILS (folks_im_field_details_get_type ())
#define FOLKS_IM_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_IM_FIELD_DETAILS, FolksImFieldDetails))
#define FOLKS_IM_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_IM_FIELD_DETAILS, FolksImFieldDetailsClass))
#define FOLKS_IS_IM_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_IM_FIELD_DETAILS))
#define FOLKS_IS_IM_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_IM_FIELD_DETAILS))
#define FOLKS_IM_FIELD_DETAILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_IM_FIELD_DETAILS, FolksImFieldDetailsClass))

typedef struct _FolksImFieldDetails FolksImFieldDetails;
typedef struct _FolksImFieldDetailsClass FolksImFieldDetailsClass;
typedef struct _FolksImFieldDetailsPrivate FolksImFieldDetailsPrivate;

#define FOLKS_TYPE_IM_DETAILS (folks_im_details_get_type ())
#define FOLKS_IM_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_IM_DETAILS, FolksImDetails))
#define FOLKS_IS_IM_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_IM_DETAILS))
#define FOLKS_IM_DETAILS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_IM_DETAILS, FolksImDetailsIface))

typedef struct _FolksImDetails FolksImDetails;
typedef struct _FolksImDetailsIface FolksImDetailsIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksImDetailsChangeImAddressesData FolksImDetailsChangeImAddressesData;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

/**
 * Errors related to IM addresses and IM address handling.
 */
typedef enum  {
	FOLKS_IM_DETAILS_ERROR_INVALID_IM_ADDRESS
} FolksImDetailsError;
#define FOLKS_IM_DETAILS_ERROR folks_im_details_error_quark ()
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

struct _FolksImFieldDetails {
	FolksAbstractFieldDetails parent_instance;
	FolksImFieldDetailsPrivate * priv;
};

struct _FolksImFieldDetailsClass {
	FolksAbstractFieldDetailsClass parent_class;
};

typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
struct _FolksImDetailsIface {
	GTypeInterface parent_iface;
	void (*change_im_addresses) (FolksImDetails* self, GeeMultiMap* im_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*change_im_addresses_finish) (FolksImDetails* self, GAsyncResult* _res_, GError** error);
	GeeMultiMap* (*get_im_addresses) (FolksImDetails* self);
	void (*set_im_addresses) (FolksImDetails* self, GeeMultiMap* value);
};

struct _FolksImDetailsChangeImAddressesData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksImDetails* self;
	GeeMultiMap* im_addresses;
	const gchar* _tmp0_;
	GError* _tmp1_;
	GError * _inner_error_;
};


static gpointer folks_im_field_details_parent_class = NULL;

GQuark folks_im_details_error_quark (void);
GType folks_abstract_field_details_get_type (void) G_GNUC_CONST;
GType folks_im_field_details_get_type (void) G_GNUC_CONST;
enum  {
	FOLKS_IM_FIELD_DETAILS_DUMMY_PROPERTY
};
FolksImFieldDetails* folks_im_field_details_new (const gchar* value, GeeMultiMap* parameters);
FolksImFieldDetails* folks_im_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters);
FolksAbstractFieldDetails* folks_abstract_field_details_construct (GType object_type, GType t_type, GBoxedCopyFunc t_dup_func, GDestroyNotify t_destroy_func);
void folks_abstract_field_details_set_value (FolksAbstractFieldDetails* self, gconstpointer value);
void folks_abstract_field_details_set_parameters (FolksAbstractFieldDetails* self, GeeMultiMap* value);
static gboolean folks_im_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that);
gboolean folks_abstract_field_details_equal (FolksAbstractFieldDetails* self, FolksAbstractFieldDetails* that);
static guint folks_im_field_details_real_hash (FolksAbstractFieldDetails* base);
guint folks_abstract_field_details_hash (FolksAbstractFieldDetails* self);
GQuark folks_property_error_quark (void);
GType folks_im_details_get_type (void) G_GNUC_CONST;
static void folks_im_details_real_change_im_addresses_data_free (gpointer _data);
static void folks_im_details_real_change_im_addresses (FolksImDetails* self, GeeMultiMap* im_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_im_details_change_im_addresses (FolksImDetails* self, GeeMultiMap* im_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_im_details_change_im_addresses_finish (FolksImDetails* self, GAsyncResult* _res_, GError** error);
static gboolean folks_im_details_real_change_im_addresses_co (FolksImDetailsChangeImAddressesData* _data_);
gchar* folks_im_details_normalise_im_address (const gchar* im_address, const gchar* protocol, GError** error);
GeeMultiMap* folks_im_details_get_im_addresses (FolksImDetails* self);
void folks_im_details_set_im_addresses (FolksImDetails* self, GeeMultiMap* value);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


GQuark folks_im_details_error_quark (void) {
	return g_quark_from_static_string ("folks_im_details_error-quark");
}


/**
   * Create a new ImFieldDetails.
   *
   * @param value the value of the field, which should be a valid, non-empty
   * IM address
   * @param parameters initial parameters. See
   * {@link AbstractFieldDetails.parameters}. A ``null`` value is equivalent to
   * an empty map of parameters.
   *
   * @return a new ImFieldDetails
   *
   * @since 0.6.0
   */
FolksImFieldDetails* folks_im_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters) {
	FolksImFieldDetails * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	g_return_val_if_fail (value != NULL, NULL);
	self = (FolksImFieldDetails*) folks_abstract_field_details_construct (object_type, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free);
	_tmp0_ = value;
	if (g_strcmp0 (_tmp0_, "") == 0) {
		g_warning ("im-details.vala:64: Empty IM address passed to ImFieldDetails.");
	}
	_tmp1_ = value;
	folks_abstract_field_details_set_value ((FolksAbstractFieldDetails*) self, _tmp1_);
	_tmp2_ = parameters;
	if (_tmp2_ != NULL) {
		GeeMultiMap* _tmp3_ = NULL;
		_tmp3_ = parameters;
		folks_abstract_field_details_set_parameters ((FolksAbstractFieldDetails*) self, G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, GEE_TYPE_MULTI_MAP, GeeMultiMap));
	}
	return self;
}


FolksImFieldDetails* folks_im_field_details_new (const gchar* value, GeeMultiMap* parameters) {
	return folks_im_field_details_construct (FOLKS_TYPE_IM_FIELD_DETAILS, value, parameters);
}


/**
   * {@inheritDoc}
   *
   * @since 0.6.0
   */
static gboolean folks_im_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that) {
	FolksImFieldDetails * self;
	gboolean result = FALSE;
	FolksAbstractFieldDetails* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	self = (FolksImFieldDetails*) base;
	g_return_val_if_fail (that != NULL, FALSE);
	_tmp0_ = that;
	_tmp1_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_im_field_details_parent_class)->equal (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails), _tmp0_);
	result = _tmp1_;
	return result;
}


/**
   * {@inheritDoc}
   *
   * @since 0.6.0
   */
static guint folks_im_field_details_real_hash (FolksAbstractFieldDetails* base) {
	FolksImFieldDetails * self;
	guint result = 0U;
	guint _tmp0_ = 0U;
	self = (FolksImFieldDetails*) base;
	_tmp0_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_im_field_details_parent_class)->hash (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails));
	result = _tmp0_;
	return result;
}


static void folks_im_field_details_class_init (FolksImFieldDetailsClass * klass) {
	folks_im_field_details_parent_class = g_type_class_peek_parent (klass);
	((FolksAbstractFieldDetailsClass *) klass)->equal = folks_im_field_details_real_equal;
	((FolksAbstractFieldDetailsClass *) klass)->hash = folks_im_field_details_real_hash;
}


static void folks_im_field_details_instance_init (FolksImFieldDetails * self) {
}


/**
 * Object representing an IM address value that can have some parameters
 * associated with it.
 *
 * See {@link Folks.AbstractFieldDetails}.
 *
 * @since 0.6.0
 */
GType folks_im_field_details_get_type (void) {
	static volatile gsize folks_im_field_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_im_field_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksImFieldDetailsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_im_field_details_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksImFieldDetails), 0, (GInstanceInitFunc) folks_im_field_details_instance_init, NULL };
		GType folks_im_field_details_type_id;
		folks_im_field_details_type_id = g_type_register_static (FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, "FolksImFieldDetails", &g_define_type_info, 0);
		g_once_init_leave (&folks_im_field_details_type_id__volatile, folks_im_field_details_type_id);
	}
	return folks_im_field_details_type_id__volatile;
}


static void folks_im_details_real_change_im_addresses_data_free (gpointer _data) {
	FolksImDetailsChangeImAddressesData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->im_addresses);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksImDetailsChangeImAddressesData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void folks_im_details_real_change_im_addresses (FolksImDetails* self, GeeMultiMap* im_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksImDetailsChangeImAddressesData* _data_;
	FolksImDetails* _tmp0_ = NULL;
	GeeMultiMap* _tmp1_ = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	_data_ = g_slice_new0 (FolksImDetailsChangeImAddressesData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_im_details_real_change_im_addresses);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_im_details_real_change_im_addresses_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = im_addresses;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->im_addresses);
	_data_->im_addresses = _tmp2_;
	folks_im_details_real_change_im_addresses_co (_data_);
}


static void folks_im_details_real_change_im_addresses_finish (FolksImDetails* self, GAsyncResult* _res_, GError** error) {
	FolksImDetailsChangeImAddressesData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * Change the contact's set of IM addresses.
   *
   * It's preferred to call this rather than setting
   * {@link ImDetails.im_addresses} directly, as this method gives error
   * notification and will only return once the IM addresses have been written
   * to the relevant backing store (or the operation's failed).
   *
   * @param im_addresses the new map of protocols to IM addresses
   * @throws PropertyError if setting the IM addresses failed
   * @since 0.6.2
   */
static gboolean folks_im_details_real_change_im_addresses_co (FolksImDetailsChangeImAddressesData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _ ("IM addresses are not writeable on this contact.");
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


void folks_im_details_change_im_addresses (FolksImDetails* self, GeeMultiMap* im_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_IM_DETAILS_GET_INTERFACE (self)->change_im_addresses (self, im_addresses, _callback_, _user_data_);
}


void folks_im_details_change_im_addresses_finish (FolksImDetails* self, GAsyncResult* _res_, GError** error) {
	FOLKS_IM_DETAILS_GET_INTERFACE (self)->change_im_addresses_finish (self, _res_, error);
}


/**
   * Normalise an IM address so that it's suitable for string comparison.
   *
   * IM addresses for various protocols can be represented in different ways,
   * only one of which is canonical. In order to allow simple string comparisons
   * of IM addresses to work, the IM addresses must be normalised beforehand.
   *
   * If the provided IM address is invalid,
   * {@link Folks.ImDetailsError.INVALID_IM_ADDRESS} will be thrown. Note that
   * this isn't guaranteed to be thrown for all invalid addresses, but if it is
   * thrown, the address is guaranteed to be invalid.
   *
   * @param im_address the address to normalise
   * @param protocol the protocol of this im_address
   *
   * @since 0.2.0
   * @throws Folks.ImDetailsError if the provided IM address was invalid
   */
static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	{
		GRegex* regex = NULL;
		const gchar* _tmp0_ = NULL;
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		GRegex* _tmp3_ = NULL;
		GRegex* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GRegex* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		_tmp0_ = old;
		_tmp1_ = g_regex_escape_string (_tmp0_, -1);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_regex_new (_tmp2_, 0, 0, &_inner_error_);
		_tmp4_ = _tmp3_;
		_g_free0 (_tmp2_);
		regex = _tmp4_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch9_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp6_ = regex;
		_tmp7_ = replacement;
		_tmp8_ = g_regex_replace_literal (_tmp6_, self, (gssize) -1, 0, _tmp7_, 0, &_inner_error_);
		_tmp5_ = _tmp8_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch9_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp9_ = _tmp5_;
		_tmp5_ = NULL;
		result = _tmp9_;
		_g_free0 (_tmp5_);
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally9;
	__catch9_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally9:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


gchar* folks_im_details_normalise_im_address (const gchar* im_address, const gchar* protocol, GError** error) {
	gchar* result = NULL;
	gboolean _tmp0_ = FALSE;
	const gchar* _tmp1_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (im_address != NULL, NULL);
	g_return_val_if_fail (protocol != NULL, NULL);
	_tmp1_ = protocol;
	if (g_strcmp0 (_tmp1_, "aim") == 0) {
		_tmp0_ = TRUE;
	} else {
		const gchar* _tmp2_ = NULL;
		_tmp2_ = protocol;
		_tmp0_ = g_strcmp0 (_tmp2_, "myspace") == 0;
	}
	if (_tmp0_) {
		const gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		_tmp3_ = im_address;
		_tmp4_ = string_replace (_tmp3_, " ", "");
		_tmp5_ = _tmp4_;
		_tmp6_ = g_utf8_strdown (_tmp5_, (gssize) -1);
		_tmp7_ = _tmp6_;
		_tmp8_ = g_utf8_normalize (_tmp7_, (gssize) -1, G_NORMALIZE_DEFAULT);
		_tmp9_ = _tmp8_;
		_g_free0 (_tmp7_);
		_g_free0 (_tmp5_);
		result = _tmp9_;
		return result;
	} else {
		gboolean _tmp10_ = FALSE;
		gboolean _tmp11_ = FALSE;
		gboolean _tmp12_ = FALSE;
		const gchar* _tmp13_ = NULL;
		_tmp13_ = protocol;
		if (g_strcmp0 (_tmp13_, "irc") == 0) {
			_tmp12_ = TRUE;
		} else {
			const gchar* _tmp14_ = NULL;
			_tmp14_ = protocol;
			_tmp12_ = g_strcmp0 (_tmp14_, "yahoo") == 0;
		}
		if (_tmp12_) {
			_tmp11_ = TRUE;
		} else {
			const gchar* _tmp15_ = NULL;
			_tmp15_ = protocol;
			_tmp11_ = g_strcmp0 (_tmp15_, "yahoojp") == 0;
		}
		if (_tmp11_) {
			_tmp10_ = TRUE;
		} else {
			const gchar* _tmp16_ = NULL;
			_tmp16_ = protocol;
			_tmp10_ = g_strcmp0 (_tmp16_, "groupwise") == 0;
		}
		if (_tmp10_) {
			const gchar* _tmp17_ = NULL;
			gchar* _tmp18_ = NULL;
			gchar* _tmp19_ = NULL;
			gchar* _tmp20_ = NULL;
			gchar* _tmp21_ = NULL;
			_tmp17_ = im_address;
			_tmp18_ = g_utf8_strdown (_tmp17_, (gssize) -1);
			_tmp19_ = _tmp18_;
			_tmp20_ = g_utf8_normalize (_tmp19_, (gssize) -1, G_NORMALIZE_DEFAULT);
			_tmp21_ = _tmp20_;
			_g_free0 (_tmp19_);
			result = _tmp21_;
			return result;
		} else {
			const gchar* _tmp22_ = NULL;
			_tmp22_ = protocol;
			if (g_strcmp0 (_tmp22_, "jabber") == 0) {
				gchar** parts = NULL;
				const gchar* _tmp23_ = NULL;
				gchar** _tmp24_ = NULL;
				gchar** _tmp25_ = NULL;
				gint parts_length1 = 0;
				gint _parts_size_ = 0;
				gchar** _tmp26_ = NULL;
				gint _tmp26__length1 = 0;
				gchar* resource = NULL;
				gchar** _tmp30_ = NULL;
				gint _tmp30__length1 = 0;
				gchar** _tmp34_ = NULL;
				gint _tmp34__length1 = 0;
				const gchar* _tmp35_ = NULL;
				gchar** _tmp36_ = NULL;
				gchar** _tmp37_ = NULL;
				gchar** _tmp38_ = NULL;
				gint _tmp38__length1 = 0;
				gchar* node = NULL;
				gchar* _domain = NULL;
				gchar** _tmp42_ = NULL;
				gint _tmp42__length1 = 0;
				gboolean _tmp52_ = FALSE;
				gboolean _tmp53_ = FALSE;
				gboolean _tmp54_ = FALSE;
				const gchar* _tmp55_ = NULL;
				gchar* domain = NULL;
				const gchar* _tmp66_ = NULL;
				gchar* _tmp67_ = NULL;
				const gchar* _tmp68_ = NULL;
				gchar* normalised = NULL;
				gboolean _tmp71_ = FALSE;
				const gchar* _tmp72_ = NULL;
				const gchar* _tmp89_ = NULL;
				gchar* _tmp90_ = NULL;
				_tmp23_ = im_address;
				_tmp25_ = _tmp24_ = g_strsplit (_tmp23_, "/", 2);
				parts = _tmp25_;
				parts_length1 = _vala_array_length (_tmp24_);
				_parts_size_ = parts_length1;
				_tmp26_ = parts;
				_tmp26__length1 = parts_length1;
				if (_tmp26__length1 < 1) {
					const gchar* _tmp27_ = NULL;
					const gchar* _tmp28_ = NULL;
					GError* _tmp29_ = NULL;
					_tmp27_ = _ ("The IM address '%s' could not be understood.");
					_tmp28_ = im_address;
					_tmp29_ = g_error_new (FOLKS_IM_DETAILS_ERROR, FOLKS_IM_DETAILS_ERROR_INVALID_IM_ADDRESS, _tmp27_, _tmp28_);
					_inner_error_ = _tmp29_;
					if (_inner_error_->domain == FOLKS_IM_DETAILS_ERROR) {
						g_propagate_error (error, _inner_error_);
						parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
						return NULL;
					} else {
						parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
				}
				resource = NULL;
				_tmp30_ = parts;
				_tmp30__length1 = parts_length1;
				if (_tmp30__length1 == 2) {
					gchar** _tmp31_ = NULL;
					gint _tmp31__length1 = 0;
					const gchar* _tmp32_ = NULL;
					gchar* _tmp33_ = NULL;
					_tmp31_ = parts;
					_tmp31__length1 = parts_length1;
					_tmp32_ = _tmp31_[1];
					_tmp33_ = g_strdup (_tmp32_);
					_g_free0 (resource);
					resource = _tmp33_;
				}
				_tmp34_ = parts;
				_tmp34__length1 = parts_length1;
				_tmp35_ = _tmp34_[0];
				_tmp37_ = _tmp36_ = g_strsplit (_tmp35_, "@", 2);
				parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
				parts = _tmp37_;
				parts_length1 = _vala_array_length (_tmp36_);
				_parts_size_ = parts_length1;
				_tmp38_ = parts;
				_tmp38__length1 = parts_length1;
				if (_tmp38__length1 < 1) {
					const gchar* _tmp39_ = NULL;
					const gchar* _tmp40_ = NULL;
					GError* _tmp41_ = NULL;
					_tmp39_ = _ ("The IM address '%s' could not be understood.");
					_tmp40_ = im_address;
					_tmp41_ = g_error_new (FOLKS_IM_DETAILS_ERROR, FOLKS_IM_DETAILS_ERROR_INVALID_IM_ADDRESS, _tmp39_, _tmp40_);
					_inner_error_ = _tmp41_;
					if (_inner_error_->domain == FOLKS_IM_DETAILS_ERROR) {
						g_propagate_error (error, _inner_error_);
						_g_free0 (resource);
						parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
						return NULL;
					} else {
						_g_free0 (resource);
						parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
				}
				_tmp42_ = parts;
				_tmp42__length1 = parts_length1;
				if (_tmp42__length1 == 2) {
					gchar** _tmp43_ = NULL;
					gint _tmp43__length1 = 0;
					const gchar* _tmp44_ = NULL;
					gchar* _tmp45_ = NULL;
					gchar** _tmp46_ = NULL;
					gint _tmp46__length1 = 0;
					const gchar* _tmp47_ = NULL;
					gchar* _tmp48_ = NULL;
					_tmp43_ = parts;
					_tmp43__length1 = parts_length1;
					_tmp44_ = _tmp43_[0];
					_tmp45_ = g_strdup (_tmp44_);
					_g_free0 (node);
					node = _tmp45_;
					_tmp46_ = parts;
					_tmp46__length1 = parts_length1;
					_tmp47_ = _tmp46_[1];
					_tmp48_ = g_strdup (_tmp47_);
					_g_free0 (_domain);
					_domain = _tmp48_;
				} else {
					gchar** _tmp49_ = NULL;
					gint _tmp49__length1 = 0;
					const gchar* _tmp50_ = NULL;
					gchar* _tmp51_ = NULL;
					_g_free0 (node);
					node = NULL;
					_tmp49_ = parts;
					_tmp49__length1 = parts_length1;
					_tmp50_ = _tmp49_[0];
					_tmp51_ = g_strdup (_tmp50_);
					_g_free0 (_domain);
					_domain = _tmp51_;
				}
				_tmp55_ = node;
				if (_tmp55_ != NULL) {
					const gchar* _tmp56_ = NULL;
					_tmp56_ = node;
					_tmp54_ = g_strcmp0 (_tmp56_, "") == 0;
				} else {
					_tmp54_ = FALSE;
				}
				if (_tmp54_) {
					_tmp53_ = TRUE;
				} else {
					gboolean _tmp57_ = FALSE;
					const gchar* _tmp58_ = NULL;
					_tmp58_ = _domain;
					if (_tmp58_ == NULL) {
						_tmp57_ = TRUE;
					} else {
						const gchar* _tmp59_ = NULL;
						_tmp59_ = _domain;
						_tmp57_ = g_strcmp0 (_tmp59_, "") == 0;
					}
					_tmp53_ = _tmp57_;
				}
				if (_tmp53_) {
					_tmp52_ = TRUE;
				} else {
					gboolean _tmp60_ = FALSE;
					const gchar* _tmp61_ = NULL;
					_tmp61_ = resource;
					if (_tmp61_ != NULL) {
						const gchar* _tmp62_ = NULL;
						_tmp62_ = resource;
						_tmp60_ = g_strcmp0 (_tmp62_, "") == 0;
					} else {
						_tmp60_ = FALSE;
					}
					_tmp52_ = _tmp60_;
				}
				if (_tmp52_) {
					const gchar* _tmp63_ = NULL;
					const gchar* _tmp64_ = NULL;
					GError* _tmp65_ = NULL;
					_tmp63_ = _ ("The IM address '%s' could not be understood.");
					_tmp64_ = im_address;
					_tmp65_ = g_error_new (FOLKS_IM_DETAILS_ERROR, FOLKS_IM_DETAILS_ERROR_INVALID_IM_ADDRESS, _tmp63_, _tmp64_);
					_inner_error_ = _tmp65_;
					if (_inner_error_->domain == FOLKS_IM_DETAILS_ERROR) {
						g_propagate_error (error, _inner_error_);
						_g_free0 (_domain);
						_g_free0 (node);
						_g_free0 (resource);
						parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
						return NULL;
					} else {
						_g_free0 (_domain);
						_g_free0 (node);
						_g_free0 (resource);
						parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
						g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
						g_clear_error (&_inner_error_);
						return NULL;
					}
				}
				_tmp66_ = _domain;
				_tmp67_ = g_utf8_strdown ((const gchar*) _tmp66_, (gssize) -1);
				domain = _tmp67_;
				_tmp68_ = node;
				if (_tmp68_ != NULL) {
					const gchar* _tmp69_ = NULL;
					gchar* _tmp70_ = NULL;
					_tmp69_ = node;
					_tmp70_ = g_utf8_strdown ((const gchar*) _tmp69_, (gssize) -1);
					_g_free0 (node);
					node = _tmp70_;
				}
				normalised = NULL;
				_tmp72_ = node;
				if (_tmp72_ != NULL) {
					const gchar* _tmp73_ = NULL;
					_tmp73_ = resource;
					_tmp71_ = _tmp73_ != NULL;
				} else {
					_tmp71_ = FALSE;
				}
				if (_tmp71_) {
					const gchar* _tmp74_ = NULL;
					const gchar* _tmp75_ = NULL;
					const gchar* _tmp76_ = NULL;
					gchar* _tmp77_ = NULL;
					_tmp74_ = node;
					_tmp75_ = domain;
					_tmp76_ = resource;
					_tmp77_ = g_strdup_printf ("%s@%s/%s", (const gchar*) _tmp74_, _tmp75_, (const gchar*) _tmp76_);
					_g_free0 (normalised);
					normalised = _tmp77_;
				} else {
					const gchar* _tmp78_ = NULL;
					_tmp78_ = node;
					if (_tmp78_ != NULL) {
						const gchar* _tmp79_ = NULL;
						const gchar* _tmp80_ = NULL;
						gchar* _tmp81_ = NULL;
						_tmp79_ = node;
						_tmp80_ = domain;
						_tmp81_ = g_strdup_printf ("%s@%s", (const gchar*) _tmp79_, _tmp80_);
						_g_free0 (normalised);
						normalised = _tmp81_;
					} else {
						const gchar* _tmp82_ = NULL;
						_tmp82_ = resource;
						if (_tmp82_ != NULL) {
							const gchar* _tmp83_ = NULL;
							const gchar* _tmp84_ = NULL;
							gchar* _tmp85_ = NULL;
							_tmp83_ = domain;
							_tmp84_ = resource;
							_tmp85_ = g_strdup_printf ("%s/%s", _tmp83_, (const gchar*) _tmp84_);
							_g_free0 (normalised);
							normalised = _tmp85_;
						} else {
							const gchar* _tmp86_ = NULL;
							const gchar* _tmp87_ = NULL;
							GError* _tmp88_ = NULL;
							_tmp86_ = _ ("The IM address '%s' could not be understood.");
							_tmp87_ = im_address;
							_tmp88_ = g_error_new (FOLKS_IM_DETAILS_ERROR, FOLKS_IM_DETAILS_ERROR_INVALID_IM_ADDRESS, _tmp86_, _tmp87_);
							_inner_error_ = _tmp88_;
							if (_inner_error_->domain == FOLKS_IM_DETAILS_ERROR) {
								g_propagate_error (error, _inner_error_);
								_g_free0 (normalised);
								_g_free0 (domain);
								_g_free0 (_domain);
								_g_free0 (node);
								_g_free0 (resource);
								parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
								return NULL;
							} else {
								_g_free0 (normalised);
								_g_free0 (domain);
								_g_free0 (_domain);
								_g_free0 (node);
								_g_free0 (resource);
								parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
								g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
								g_clear_error (&_inner_error_);
								return NULL;
							}
						}
					}
				}
				_tmp89_ = normalised;
				_tmp90_ = g_utf8_normalize ((const gchar*) _tmp89_, (gssize) -1, G_NORMALIZE_NFKC);
				result = _tmp90_;
				_g_free0 (normalised);
				_g_free0 (domain);
				_g_free0 (_domain);
				_g_free0 (node);
				_g_free0 (resource);
				parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
				return result;
			} else {
				const gchar* _tmp91_ = NULL;
				gchar* _tmp92_ = NULL;
				_tmp91_ = im_address;
				_tmp92_ = g_utf8_normalize (_tmp91_, (gssize) -1, G_NORMALIZE_DEFAULT);
				result = _tmp92_;
				return result;
			}
		}
	}
}


GeeMultiMap* folks_im_details_get_im_addresses (FolksImDetails* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_IM_DETAILS_GET_INTERFACE (self)->get_im_addresses (self);
}


void folks_im_details_set_im_addresses (FolksImDetails* self, GeeMultiMap* value) {
	g_return_if_fail (self != NULL);
	FOLKS_IM_DETAILS_GET_INTERFACE (self)->set_im_addresses (self, value);
}


static void folks_im_details_base_init (FolksImDetailsIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		   * A mapping of IM protocol to an (unordered) set of IM addresses.
		   *
		   * Each mapping is from an arbitrary protocol identifier to a set of IM
		   * addresses on that protocol for the contact, listed in no particular order.
		   *
		   * There must be no duplicate IM addresses in each set, though a given
		   * IM address may be present in the sets for different protocols.
		   *
		   * All the IM addresses must be normalised using
		   * {@link ImDetails.normalise_im_address} before being added to this property.
		   *
		   * @since 0.5.1
		   */
		g_object_interface_install_property (iface, g_param_spec_object ("im-addresses", "im-addresses", "im-addresses", GEE_TYPE_MULTI_MAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		iface->change_im_addresses = folks_im_details_real_change_im_addresses;
		iface->change_im_addresses_finish = folks_im_details_real_change_im_addresses_finish;
	}
}


/**
 * IM addresses exposed by an object implementing {@link PresenceDetails}.
 *
 * @since 0.1.13
 */
GType folks_im_details_get_type (void) {
	static volatile gsize folks_im_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_im_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksImDetailsIface), (GBaseInitFunc) folks_im_details_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_im_details_type_id;
		folks_im_details_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksImDetails", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_im_details_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&folks_im_details_type_id__volatile, folks_im_details_type_id);
	}
	return folks_im_details_type_id__volatile;
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



