/* email-details.c generated by valac 0.27.1.3-6129, the Vala compiler
 * generated from email-details.vala, do not modify */

/*
 * Copyright (C) 2011 Collabora Ltd.
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
 *       Marco Barisione <marco.barisione@collabora.co.uk>
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

#define FOLKS_TYPE_EMAIL_FIELD_DETAILS (folks_email_field_details_get_type ())
#define FOLKS_EMAIL_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_EMAIL_FIELD_DETAILS, FolksEmailFieldDetails))
#define FOLKS_EMAIL_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_EMAIL_FIELD_DETAILS, FolksEmailFieldDetailsClass))
#define FOLKS_IS_EMAIL_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_EMAIL_FIELD_DETAILS))
#define FOLKS_IS_EMAIL_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_EMAIL_FIELD_DETAILS))
#define FOLKS_EMAIL_FIELD_DETAILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_EMAIL_FIELD_DETAILS, FolksEmailFieldDetailsClass))

typedef struct _FolksEmailFieldDetails FolksEmailFieldDetails;
typedef struct _FolksEmailFieldDetailsClass FolksEmailFieldDetailsClass;
typedef struct _FolksEmailFieldDetailsPrivate FolksEmailFieldDetailsPrivate;

#define FOLKS_TYPE_EMAIL_DETAILS (folks_email_details_get_type ())
#define FOLKS_EMAIL_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_EMAIL_DETAILS, FolksEmailDetails))
#define FOLKS_IS_EMAIL_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_EMAIL_DETAILS))
#define FOLKS_EMAIL_DETAILS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_EMAIL_DETAILS, FolksEmailDetailsIface))

typedef struct _FolksEmailDetails FolksEmailDetails;
typedef struct _FolksEmailDetailsIface FolksEmailDetailsIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksEmailDetailsChangeEmailAddressesData FolksEmailDetailsChangeEmailAddressesData;

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

struct _FolksEmailFieldDetails {
	FolksAbstractFieldDetails parent_instance;
	FolksEmailFieldDetailsPrivate * priv;
};

struct _FolksEmailFieldDetailsClass {
	FolksAbstractFieldDetailsClass parent_class;
};

typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
struct _FolksEmailDetailsIface {
	GTypeInterface parent_iface;
	void (*change_email_addresses) (FolksEmailDetails* self, GeeSet* email_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*change_email_addresses_finish) (FolksEmailDetails* self, GAsyncResult* _res_, GError** error);
	GeeSet* (*get_email_addresses) (FolksEmailDetails* self);
	void (*set_email_addresses) (FolksEmailDetails* self, GeeSet* value);
};

struct _FolksEmailDetailsChangeEmailAddressesData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksEmailDetails* self;
	GeeSet* email_addresses;
	const gchar* _tmp0_;
	GError* _tmp1_;
	GError * _inner_error_;
};


static gpointer folks_email_field_details_parent_class = NULL;

GType folks_abstract_field_details_get_type (void) G_GNUC_CONST;
GType folks_email_field_details_get_type (void) G_GNUC_CONST;
enum  {
	FOLKS_EMAIL_FIELD_DETAILS_DUMMY_PROPERTY
};
FolksEmailFieldDetails* folks_email_field_details_new (const gchar* value, GeeMultiMap* parameters);
FolksEmailFieldDetails* folks_email_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters);
FolksAbstractFieldDetails* folks_abstract_field_details_construct (GType object_type, GType t_type, GBoxedCopyFunc t_dup_func, GDestroyNotify t_destroy_func);
void folks_abstract_field_details_set_value (FolksAbstractFieldDetails* self, gconstpointer value);
void folks_abstract_field_details_set_parameters (FolksAbstractFieldDetails* self, GeeMultiMap* value);
static gboolean folks_email_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that);
gboolean folks_abstract_field_details_equal (FolksAbstractFieldDetails* self, FolksAbstractFieldDetails* that);
static guint folks_email_field_details_real_hash (FolksAbstractFieldDetails* base);
guint folks_abstract_field_details_hash (FolksAbstractFieldDetails* self);
GQuark folks_property_error_quark (void);
GType folks_email_details_get_type (void) G_GNUC_CONST;
static void folks_email_details_real_change_email_addresses_data_free (gpointer _data);
static void folks_email_details_real_change_email_addresses (FolksEmailDetails* self, GeeSet* email_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_email_details_change_email_addresses (FolksEmailDetails* self, GeeSet* email_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_email_details_change_email_addresses_finish (FolksEmailDetails* self, GAsyncResult* _res_, GError** error);
static gboolean folks_email_details_real_change_email_addresses_co (FolksEmailDetailsChangeEmailAddressesData* _data_);
GeeSet* folks_email_details_get_email_addresses (FolksEmailDetails* self);
void folks_email_details_set_email_addresses (FolksEmailDetails* self, GeeSet* value);


/**
   * Create a new EmailFieldDetails.
   *
   * @param value the value of the field, which should be a valid, non-empty
   * e-mail address
   * @param parameters initial parameters. See
   * {@link AbstractFieldDetails.parameters}. A ``null`` value is equivalent to
   * an empty map of parameters.
   *
   * @return a new EmailFieldDetails
   *
   * @since 0.6.0
   */
FolksEmailFieldDetails* folks_email_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters) {
	FolksEmailFieldDetails * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GeeMultiMap* _tmp2_ = NULL;
	g_return_val_if_fail (value != NULL, NULL);
	self = (FolksEmailFieldDetails*) folks_abstract_field_details_construct (object_type, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free);
	_tmp0_ = value;
	if (g_strcmp0 (_tmp0_, "") == 0) {
		g_warning ("email-details.vala:55: Empty e-mail address passed to EmailFieldDetail" \
"s.");
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


FolksEmailFieldDetails* folks_email_field_details_new (const gchar* value, GeeMultiMap* parameters) {
	return folks_email_field_details_construct (FOLKS_TYPE_EMAIL_FIELD_DETAILS, value, parameters);
}


/**
   * {@inheritDoc}
   *
   * @since 0.6.0
   */
static gboolean folks_email_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that) {
	FolksEmailFieldDetails * self;
	gboolean result = FALSE;
	FolksAbstractFieldDetails* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	self = (FolksEmailFieldDetails*) base;
	g_return_val_if_fail (that != NULL, FALSE);
	_tmp0_ = that;
	_tmp1_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_email_field_details_parent_class)->equal (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails), _tmp0_);
	result = _tmp1_;
	return result;
}


/**
   * {@inheritDoc}
   *
   * @since 0.6.0
   */
static guint folks_email_field_details_real_hash (FolksAbstractFieldDetails* base) {
	FolksEmailFieldDetails * self;
	guint result = 0U;
	guint _tmp0_ = 0U;
	self = (FolksEmailFieldDetails*) base;
	_tmp0_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_email_field_details_parent_class)->hash (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails));
	result = _tmp0_;
	return result;
}


static void folks_email_field_details_class_init (FolksEmailFieldDetailsClass * klass) {
	folks_email_field_details_parent_class = g_type_class_peek_parent (klass);
	((FolksAbstractFieldDetailsClass *) klass)->equal = folks_email_field_details_real_equal;
	((FolksAbstractFieldDetailsClass *) klass)->hash = folks_email_field_details_real_hash;
}


static void folks_email_field_details_instance_init (FolksEmailFieldDetails * self) {
}


/**
 * Object representing a email address that can have some parameters
 * associated with it.
 *
 * See {@link Folks.AbstractFieldDetails} for details on common parameter names
 * and values.
 *
 * @since 0.6.0
 */
GType folks_email_field_details_get_type (void) {
	static volatile gsize folks_email_field_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_email_field_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksEmailFieldDetailsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_email_field_details_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksEmailFieldDetails), 0, (GInstanceInitFunc) folks_email_field_details_instance_init, NULL };
		GType folks_email_field_details_type_id;
		folks_email_field_details_type_id = g_type_register_static (FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, "FolksEmailFieldDetails", &g_define_type_info, 0);
		g_once_init_leave (&folks_email_field_details_type_id__volatile, folks_email_field_details_type_id);
	}
	return folks_email_field_details_type_id__volatile;
}


static void folks_email_details_real_change_email_addresses_data_free (gpointer _data) {
	FolksEmailDetailsChangeEmailAddressesData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->email_addresses);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksEmailDetailsChangeEmailAddressesData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void folks_email_details_real_change_email_addresses (FolksEmailDetails* self, GeeSet* email_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksEmailDetailsChangeEmailAddressesData* _data_;
	FolksEmailDetails* _tmp0_ = NULL;
	GeeSet* _tmp1_ = NULL;
	GeeSet* _tmp2_ = NULL;
	_data_ = g_slice_new0 (FolksEmailDetailsChangeEmailAddressesData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_email_details_real_change_email_addresses);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_email_details_real_change_email_addresses_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = email_addresses;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->email_addresses);
	_data_->email_addresses = _tmp2_;
	folks_email_details_real_change_email_addresses_co (_data_);
}


static void folks_email_details_real_change_email_addresses_finish (FolksEmailDetails* self, GAsyncResult* _res_, GError** error) {
	FolksEmailDetailsChangeEmailAddressesData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * Change the contact's set of e-mail addresses.
   *
   * It's preferred to call this rather than setting
   * {@link EmailDetails.email_addresses} directly, as this method gives error
   * notification and will only return once the e-mail addresses have been
   * written to the relevant backing store (or the operation's failed).
   *
   * @param email_addresses the new set of e-mail addresses
   * @throws PropertyError if setting the e-mail addresses failed
   * @since 0.6.2
   */
static gboolean folks_email_details_real_change_email_addresses_co (FolksEmailDetailsChangeEmailAddressesData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _ ("E-mail addresses are not writeable on this contact.");
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


void folks_email_details_change_email_addresses (FolksEmailDetails* self, GeeSet* email_addresses, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_EMAIL_DETAILS_GET_INTERFACE (self)->change_email_addresses (self, email_addresses, _callback_, _user_data_);
}


void folks_email_details_change_email_addresses_finish (FolksEmailDetails* self, GAsyncResult* _res_, GError** error) {
	FOLKS_EMAIL_DETAILS_GET_INTERFACE (self)->change_email_addresses_finish (self, _res_, error);
}


GeeSet* folks_email_details_get_email_addresses (FolksEmailDetails* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_EMAIL_DETAILS_GET_INTERFACE (self)->get_email_addresses (self);
}


void folks_email_details_set_email_addresses (FolksEmailDetails* self, GeeSet* value) {
	g_return_if_fail (self != NULL);
	FOLKS_EMAIL_DETAILS_GET_INTERFACE (self)->set_email_addresses (self, value);
}


static void folks_email_details_base_init (FolksEmailDetailsIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		   * The email addresses of the contact.
		   *
		   * Each of the values in this property contains just an e-mail address (e.g.
		   * “foo@bar.com”), rather than any other way of formatting an e-mail address
		   * (such as “John Smith &lt;foo@bar.com&gt;”).
		   *
		   * @since 0.6.0
		   */
		g_object_interface_install_property (iface, g_param_spec_object ("email-addresses", "email-addresses", "email-addresses", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		iface->change_email_addresses = folks_email_details_real_change_email_addresses;
		iface->change_email_addresses_finish = folks_email_details_real_change_email_addresses_finish;
	}
}


/**
 * Interface for classes that have email addresses, such as {@link Persona}
 * and {@link Individual}.
 *
 * @since 0.3.5
 */
GType folks_email_details_get_type (void) {
	static volatile gsize folks_email_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_email_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksEmailDetailsIface), (GBaseInitFunc) folks_email_details_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_email_details_type_id;
		folks_email_details_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksEmailDetails", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_email_details_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&folks_email_details_type_id__volatile, folks_email_details_type_id);
	}
	return folks_email_details_type_id__volatile;
}



