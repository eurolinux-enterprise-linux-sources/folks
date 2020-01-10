/* gender-details.c generated by valac 0.34.0.3-63fa6, the Vala compiler
 * generated from gender-details.vala, do not modify */

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
 *       Travis Reitter <travis.reitter@collabora.co.uk>
 *       Philip Withnall <philip@tecnocode.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>


#define FOLKS_TYPE_GENDER (folks_gender_get_type ())

#define FOLKS_TYPE_GENDER_DETAILS (folks_gender_details_get_type ())
#define FOLKS_GENDER_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_GENDER_DETAILS, FolksGenderDetails))
#define FOLKS_IS_GENDER_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_GENDER_DETAILS))
#define FOLKS_GENDER_DETAILS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_GENDER_DETAILS, FolksGenderDetailsIface))

typedef struct _FolksGenderDetails FolksGenderDetails;
typedef struct _FolksGenderDetailsIface FolksGenderDetailsIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksGenderDetailsChangeGenderData FolksGenderDetailsChangeGenderData;

typedef enum  {
	FOLKS_GENDER_UNSPECIFIED,
	FOLKS_GENDER_MALE,
	FOLKS_GENDER_FEMALE
} FolksGender;

typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
struct _FolksGenderDetailsIface {
	GTypeInterface parent_iface;
	void (*change_gender) (FolksGenderDetails* self, FolksGender gender, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*change_gender_finish) (FolksGenderDetails* self, GAsyncResult* _res_, GError** error);
	FolksGender (*get_gender) (FolksGenderDetails* self);
	void (*set_gender) (FolksGenderDetails* self, FolksGender value);
};

struct _FolksGenderDetailsChangeGenderData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksGenderDetails* self;
	FolksGender gender;
	const gchar* _tmp0_;
	GError* _tmp1_;
	GError * _inner_error_;
};



GType folks_gender_get_type (void) G_GNUC_CONST;
GQuark folks_property_error_quark (void);
GType folks_gender_details_get_type (void) G_GNUC_CONST;
static void folks_gender_details_real_change_gender_data_free (gpointer _data);
static void folks_gender_details_real_change_gender (FolksGenderDetails* self, FolksGender gender, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_gender_details_change_gender (FolksGenderDetails* self, FolksGender gender, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_gender_details_change_gender_finish (FolksGenderDetails* self, GAsyncResult* _res_, GError** error);
static gboolean folks_gender_details_real_change_gender_co (FolksGenderDetailsChangeGenderData* _data_);
FolksGender folks_gender_details_get_gender (FolksGenderDetails* self);
void folks_gender_details_set_gender (FolksGenderDetails* self, FolksGender value);


/**
 * The gender of a contact
 *
 * @since 0.3.5
 */
GType folks_gender_get_type (void) {
	static volatile gsize folks_gender_type_id__volatile = 0;
	if (g_once_init_enter (&folks_gender_type_id__volatile)) {
		static const GEnumValue values[] = {{FOLKS_GENDER_UNSPECIFIED, "FOLKS_GENDER_UNSPECIFIED", "unspecified"}, {FOLKS_GENDER_MALE, "FOLKS_GENDER_MALE", "male"}, {FOLKS_GENDER_FEMALE, "FOLKS_GENDER_FEMALE", "female"}, {0, NULL, NULL}};
		GType folks_gender_type_id;
		folks_gender_type_id = g_enum_register_static ("FolksGender", values);
		g_once_init_leave (&folks_gender_type_id__volatile, folks_gender_type_id);
	}
	return folks_gender_type_id__volatile;
}


static void folks_gender_details_real_change_gender_data_free (gpointer _data) {
	FolksGenderDetailsChangeGenderData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksGenderDetailsChangeGenderData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void folks_gender_details_real_change_gender (FolksGenderDetails* self, FolksGender gender, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksGenderDetailsChangeGenderData* _data_;
	FolksGenderDetails* _tmp0_ = NULL;
	FolksGender _tmp1_ = 0;
	_data_ = g_slice_new0 (FolksGenderDetailsChangeGenderData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_gender_details_real_change_gender);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_gender_details_real_change_gender_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = gender;
	_data_->gender = _tmp1_;
	folks_gender_details_real_change_gender_co (_data_);
}


static void folks_gender_details_real_change_gender_finish (FolksGenderDetails* self, GAsyncResult* _res_, GError** error) {
	FolksGenderDetailsChangeGenderData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * Change the contact's gender.
   *
   * It's preferred to call this rather than setting
   * {@link GenderDetails.gender} directly, as this method gives error
   * notification and will only return once the gender has been written to the
   * relevant backing store (or the operation's failed).
   *
   * @param gender the contact's gender
   * @throws PropertyError if setting the gender failed
   * @since 0.6.2
   */
static gboolean folks_gender_details_real_change_gender_co (FolksGenderDetailsChangeGenderData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _ ("Gender is not writeable on this contact.");
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


void folks_gender_details_change_gender (FolksGenderDetails* self, FolksGender gender, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_GENDER_DETAILS_GET_INTERFACE (self)->change_gender (self, gender, _callback_, _user_data_);
}


void folks_gender_details_change_gender_finish (FolksGenderDetails* self, GAsyncResult* _res_, GError** error) {
	FOLKS_GENDER_DETAILS_GET_INTERFACE (self)->change_gender_finish (self, _res_, error);
}


FolksGender folks_gender_details_get_gender (FolksGenderDetails* self) {
	g_return_val_if_fail (self != NULL, 0);
	return FOLKS_GENDER_DETAILS_GET_INTERFACE (self)->get_gender (self);
}


void folks_gender_details_set_gender (FolksGenderDetails* self, FolksGender value) {
	g_return_if_fail (self != NULL);
	FOLKS_GENDER_DETAILS_GET_INTERFACE (self)->set_gender (self, value);
}


static void folks_gender_details_base_init (FolksGenderDetailsIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		   * The gender of the contact.
		   *
		   * @since 0.3.5
		   */
		g_object_interface_install_property (iface, g_param_spec_enum ("gender", "gender", "gender", FOLKS_TYPE_GENDER, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		iface->change_gender = folks_gender_details_real_change_gender;
		iface->change_gender_finish = folks_gender_details_real_change_gender_finish;
	}
}


/**
 * Gender of a contact.
 *
 * This allows representation of the gender of a contact.
 *
 * @since 0.3.5
 */
GType folks_gender_details_get_type (void) {
	static volatile gsize folks_gender_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_gender_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksGenderDetailsIface), (GBaseInitFunc) folks_gender_details_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_gender_details_type_id;
		folks_gender_details_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksGenderDetails", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_gender_details_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&folks_gender_details_type_id__volatile, folks_gender_details_type_id);
	}
	return folks_gender_details_type_id__volatile;
}



