/* extended-info.c generated by valac 0.36.1.697-2b74, the Vala compiler
 * generated from extended-info.vala, do not modify */

/*
 * Copyright (C) 2013, 2015 Collabora Ltd.
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
 *       Rodrigo Moya <rodrigo@gnome.org>
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

#define FOLKS_TYPE_EXTENDED_FIELD_DETAILS (folks_extended_field_details_get_type ())
#define FOLKS_EXTENDED_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_EXTENDED_FIELD_DETAILS, FolksExtendedFieldDetails))
#define FOLKS_EXTENDED_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_EXTENDED_FIELD_DETAILS, FolksExtendedFieldDetailsClass))
#define FOLKS_IS_EXTENDED_FIELD_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_EXTENDED_FIELD_DETAILS))
#define FOLKS_IS_EXTENDED_FIELD_DETAILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_EXTENDED_FIELD_DETAILS))
#define FOLKS_EXTENDED_FIELD_DETAILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_EXTENDED_FIELD_DETAILS, FolksExtendedFieldDetailsClass))

typedef struct _FolksExtendedFieldDetails FolksExtendedFieldDetails;
typedef struct _FolksExtendedFieldDetailsClass FolksExtendedFieldDetailsClass;
typedef struct _FolksExtendedFieldDetailsPrivate FolksExtendedFieldDetailsPrivate;
enum  {
	FOLKS_EXTENDED_FIELD_DETAILS_DUMMY_PROPERTY,
	FOLKS_EXTENDED_FIELD_DETAILS_LAST_PROPERTY
};
static GParamSpec* folks_extended_field_details_properties[FOLKS_EXTENDED_FIELD_DETAILS_LAST_PROPERTY];

#define FOLKS_TYPE_EXTENDED_INFO (folks_extended_info_get_type ())
#define FOLKS_EXTENDED_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_EXTENDED_INFO, FolksExtendedInfo))
#define FOLKS_IS_EXTENDED_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_EXTENDED_INFO))
#define FOLKS_EXTENDED_INFO_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_EXTENDED_INFO, FolksExtendedInfoIface))

typedef struct _FolksExtendedInfo FolksExtendedInfo;
typedef struct _FolksExtendedInfoIface FolksExtendedInfoIface;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksExtendedInfoChangeExtendedFieldData FolksExtendedInfoChangeExtendedFieldData;
typedef struct _FolksExtendedInfoRemoveExtendedFieldData FolksExtendedInfoRemoveExtendedFieldData;

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

struct _FolksExtendedFieldDetails {
	FolksAbstractFieldDetails parent_instance;
	FolksExtendedFieldDetailsPrivate * priv;
};

struct _FolksExtendedFieldDetailsClass {
	FolksAbstractFieldDetailsClass parent_class;
};

typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
struct _FolksExtendedInfoIface {
	GTypeInterface parent_iface;
	FolksExtendedFieldDetails* (*get_extended_field) (FolksExtendedInfo* self, const gchar* name);
	void (*change_extended_field) (FolksExtendedInfo* self, const gchar* name, FolksExtendedFieldDetails* value, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*change_extended_field_finish) (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error);
	void (*remove_extended_field) (FolksExtendedInfo* self, const gchar* name, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*remove_extended_field_finish) (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error);
};

struct _FolksExtendedInfoChangeExtendedFieldData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksExtendedInfo* self;
	gchar* name;
	FolksExtendedFieldDetails* value;
	GError* _tmp0_;
	GError * _inner_error_;
};

struct _FolksExtendedInfoRemoveExtendedFieldData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksExtendedInfo* self;
	gchar* name;
	GError* _tmp0_;
	GError * _inner_error_;
};


static gpointer folks_extended_field_details_parent_class = NULL;

GType folks_abstract_field_details_get_type (void) G_GNUC_CONST;
GType folks_extended_field_details_get_type (void) G_GNUC_CONST;
FolksExtendedFieldDetails* folks_extended_field_details_new (const gchar* value, GeeMultiMap* parameters);
FolksExtendedFieldDetails* folks_extended_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters);
FolksAbstractFieldDetails* folks_abstract_field_details_construct (GType object_type, GType t_type, GBoxedCopyFunc t_dup_func, GDestroyNotify t_destroy_func);
void folks_abstract_field_details_set_value (FolksAbstractFieldDetails* self, gconstpointer value);
void folks_abstract_field_details_set_parameters (FolksAbstractFieldDetails* self, GeeMultiMap* value);
static gboolean folks_extended_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that);
gboolean folks_abstract_field_details_equal (FolksAbstractFieldDetails* self, FolksAbstractFieldDetails* that);
static guint folks_extended_field_details_real_hash (FolksAbstractFieldDetails* base);
guint folks_abstract_field_details_hash (FolksAbstractFieldDetails* self);
GQuark folks_property_error_quark (void);
GType folks_extended_info_get_type (void) G_GNUC_CONST;
FolksExtendedFieldDetails* folks_extended_info_get_extended_field (FolksExtendedInfo* self, const gchar* name);
static void folks_extended_info_real_change_extended_field_data_free (gpointer _data);
static void folks_extended_info_real_change_extended_field_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
static void folks_extended_info_real_change_extended_field (FolksExtendedInfo* self, const gchar* name, FolksExtendedFieldDetails* value, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_extended_info_change_extended_field (FolksExtendedInfo* self, const gchar* name, FolksExtendedFieldDetails* value, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_extended_info_change_extended_field_finish (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error);
static gboolean folks_extended_info_real_change_extended_field_co (FolksExtendedInfoChangeExtendedFieldData* _data_);
static void folks_extended_info_real_remove_extended_field_data_free (gpointer _data);
static void folks_extended_info_real_remove_extended_field_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
static void folks_extended_info_real_remove_extended_field (FolksExtendedInfo* self, const gchar* name, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_extended_info_remove_extended_field (FolksExtendedInfo* self, const gchar* name, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_extended_info_remove_extended_field_finish (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error);
static gboolean folks_extended_info_real_remove_extended_field_co (FolksExtendedInfoRemoveExtendedFieldData* _data_);


/**
   * Create a new ExtendedFieldDetails.
   *
   * @param value the value of the field, which may be the empty string
   * @param parameters initial parameters. See
   * {@link AbstractFieldDetails.parameters}. A ``null`` value is equivalent to
   * an empty map of parameters.
   *
   * @return a new ExtendedFieldDetails
   *
   * @since 0.11.0
   */
FolksExtendedFieldDetails* folks_extended_field_details_construct (GType object_type, const gchar* value, GeeMultiMap* parameters) {
	FolksExtendedFieldDetails * self = NULL;
	const gchar* _tmp0_;
	GeeMultiMap* _tmp1_;
	g_return_val_if_fail (value != NULL, NULL);
	self = (FolksExtendedFieldDetails*) folks_abstract_field_details_construct (object_type, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free);
	_tmp0_ = value;
	folks_abstract_field_details_set_value ((FolksAbstractFieldDetails*) self, _tmp0_);
	_tmp1_ = parameters;
	if (_tmp1_ != NULL) {
		GeeMultiMap* _tmp2_;
		_tmp2_ = parameters;
		folks_abstract_field_details_set_parameters ((FolksAbstractFieldDetails*) self, G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, GEE_TYPE_MULTI_MAP, GeeMultiMap));
	}
	return self;
}


FolksExtendedFieldDetails* folks_extended_field_details_new (const gchar* value, GeeMultiMap* parameters) {
	return folks_extended_field_details_construct (FOLKS_TYPE_EXTENDED_FIELD_DETAILS, value, parameters);
}


/**
   * {@inheritDoc}
   *
   * @since 0.11.0
   */
static gboolean folks_extended_field_details_real_equal (FolksAbstractFieldDetails* base, FolksAbstractFieldDetails* that) {
	FolksExtendedFieldDetails * self;
	gboolean result = FALSE;
	FolksAbstractFieldDetails* _tmp0_;
	gboolean _tmp1_;
	self = (FolksExtendedFieldDetails*) base;
	g_return_val_if_fail (that != NULL, FALSE);
	_tmp0_ = that;
	_tmp1_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_extended_field_details_parent_class)->equal (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails), _tmp0_);
	result = _tmp1_;
	return result;
}


/**
   * {@inheritDoc}
   *
   * @since 0.11.0
   */
static guint folks_extended_field_details_real_hash (FolksAbstractFieldDetails* base) {
	FolksExtendedFieldDetails * self;
	guint result = 0U;
	guint _tmp0_;
	self = (FolksExtendedFieldDetails*) base;
	_tmp0_ = FOLKS_ABSTRACT_FIELD_DETAILS_CLASS (folks_extended_field_details_parent_class)->hash (G_TYPE_CHECK_INSTANCE_CAST (self, FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, FolksAbstractFieldDetails));
	result = _tmp0_;
	return result;
}


static void folks_extended_field_details_class_init (FolksExtendedFieldDetailsClass * klass) {
	folks_extended_field_details_parent_class = g_type_class_peek_parent (klass);
	((FolksAbstractFieldDetailsClass *) klass)->equal = (gboolean (*) (FolksAbstractFieldDetails *, FolksAbstractFieldDetails*)) folks_extended_field_details_real_equal;
	((FolksAbstractFieldDetailsClass *) klass)->hash = (guint (*) (FolksAbstractFieldDetails *)) folks_extended_field_details_real_hash;
}


static void folks_extended_field_details_instance_init (FolksExtendedFieldDetails * self) {
}


/**
 * Object representing an arbitrary field that can have some parameters
 * associated with it. This is intended to be as general-purpose as, for
 * example, a vCard property. See the documentation for
 * {@link Folks.ExtendedInfo} for information on when using this object is
 * appropriate.
 *
 * See {@link Folks.AbstractFieldDetails} for details on common parameter names
 * and values.
 *
 * @since 0.11.0
 */
GType folks_extended_field_details_get_type (void) {
	static volatile gsize folks_extended_field_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_extended_field_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksExtendedFieldDetailsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_extended_field_details_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksExtendedFieldDetails), 0, (GInstanceInitFunc) folks_extended_field_details_instance_init, NULL };
		GType folks_extended_field_details_type_id;
		folks_extended_field_details_type_id = g_type_register_static (FOLKS_TYPE_ABSTRACT_FIELD_DETAILS, "FolksExtendedFieldDetails", &g_define_type_info, 0);
		g_once_init_leave (&folks_extended_field_details_type_id__volatile, folks_extended_field_details_type_id);
	}
	return folks_extended_field_details_type_id__volatile;
}


/**
   * Retrieve the value for an arbitrary field.
   *
   * @return The value of the extended field, which may be empty, or `null` if
   *   the field is not set
   *
   * @since 0.11.0
   */
FolksExtendedFieldDetails* folks_extended_info_get_extended_field (FolksExtendedInfo* self, const gchar* name) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_EXTENDED_INFO_GET_INTERFACE (self)->get_extended_field (self, name);
}


static void folks_extended_info_real_change_extended_field_data_free (gpointer _data) {
	FolksExtendedInfoChangeExtendedFieldData* _data_;
	_data_ = _data;
	_g_free0 (_data_->name);
	_g_object_unref0 (_data_->value);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksExtendedInfoChangeExtendedFieldData, _data_);
}


static void folks_extended_info_real_change_extended_field_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksExtendedInfoChangeExtendedFieldData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void folks_extended_info_real_change_extended_field (FolksExtendedInfo* self, const gchar* name, FolksExtendedFieldDetails* value, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksExtendedInfoChangeExtendedFieldData* _data_;
	FolksExtendedInfo* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	FolksExtendedFieldDetails* _tmp3_;
	FolksExtendedFieldDetails* _tmp4_;
	_data_ = g_slice_new0 (FolksExtendedInfoChangeExtendedFieldData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_extended_info_real_change_extended_field_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_extended_info_real_change_extended_field_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = name;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->name);
	_data_->name = _tmp2_;
	_tmp3_ = value;
	_tmp4_ = _g_object_ref0 (_tmp3_);
	_g_object_unref0 (_data_->value);
	_data_->value = _tmp4_;
	folks_extended_info_real_change_extended_field_co (_data_);
}


static void folks_extended_info_real_change_extended_field_finish (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error) {
	FolksExtendedInfoChangeExtendedFieldData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Change the value of an arbitrary field.
   *
   * @param name name of the arbitrary field to change value
   * @param value new value for the arbitrary field
   * @throws PropertyError if setting the value failed
   *
   * @since 0.11.0
   */
static gboolean folks_extended_info_real_change_extended_field_co (FolksExtendedInfoChangeExtendedFieldData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = g_error_new_literal (FOLKS_PROPERTY_ERROR, FOLKS_PROPERTY_ERROR_NOT_WRITEABLE, _ ("Extended fields are not writeable on this contact."));
	_data_->_inner_error_ = _data_->_tmp0_;
	if (_data_->_inner_error_->domain == FOLKS_PROPERTY_ERROR) {
		g_task_return_error (_data_->_async_result, _data_->_inner_error_);
		g_object_unref (_data_->_async_result);
		return FALSE;
	} else {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
		g_clear_error (&_data_->_inner_error_);
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
	if (_data_->_state_ != 0) {
		while (_data_->_task_complete_ != TRUE) {
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
		}
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


void folks_extended_info_change_extended_field (FolksExtendedInfo* self, const gchar* name, FolksExtendedFieldDetails* value, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_EXTENDED_INFO_GET_INTERFACE (self)->change_extended_field (self, name, value, _callback_, _user_data_);
}


void folks_extended_info_change_extended_field_finish (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error) {
	FOLKS_EXTENDED_INFO_GET_INTERFACE (self)->change_extended_field_finish (self, _res_, error);
}


static void folks_extended_info_real_remove_extended_field_data_free (gpointer _data) {
	FolksExtendedInfoRemoveExtendedFieldData* _data_;
	_data_ = _data;
	_g_free0 (_data_->name);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksExtendedInfoRemoveExtendedFieldData, _data_);
}


static void folks_extended_info_real_remove_extended_field_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksExtendedInfoRemoveExtendedFieldData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


static void folks_extended_info_real_remove_extended_field (FolksExtendedInfo* self, const gchar* name, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksExtendedInfoRemoveExtendedFieldData* _data_;
	FolksExtendedInfo* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	_data_ = g_slice_new0 (FolksExtendedInfoRemoveExtendedFieldData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_extended_info_real_remove_extended_field_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_extended_info_real_remove_extended_field_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = name;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->name);
	_data_->name = _tmp2_;
	folks_extended_info_real_remove_extended_field_co (_data_);
}


static void folks_extended_info_real_remove_extended_field_finish (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error) {
	FolksExtendedInfoRemoveExtendedFieldData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Remove an arbitrary field.
   *
   * @param name name of the arbitrary field to remove
   * @throws PropertyError if removing the property failed
   *
   * @since 0.11.0
   */
static gboolean folks_extended_info_real_remove_extended_field_co (FolksExtendedInfoRemoveExtendedFieldData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = g_error_new_literal (FOLKS_PROPERTY_ERROR, FOLKS_PROPERTY_ERROR_NOT_WRITEABLE, _ ("Extended fields are not writeable on this contact."));
	_data_->_inner_error_ = _data_->_tmp0_;
	if (_data_->_inner_error_->domain == FOLKS_PROPERTY_ERROR) {
		g_task_return_error (_data_->_async_result, _data_->_inner_error_);
		g_object_unref (_data_->_async_result);
		return FALSE;
	} else {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
		g_clear_error (&_data_->_inner_error_);
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
	if (_data_->_state_ != 0) {
		while (_data_->_task_complete_ != TRUE) {
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
		}
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


void folks_extended_info_remove_extended_field (FolksExtendedInfo* self, const gchar* name, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_EXTENDED_INFO_GET_INTERFACE (self)->remove_extended_field (self, name, _callback_, _user_data_);
}


void folks_extended_info_remove_extended_field_finish (FolksExtendedInfo* self, GAsyncResult* _res_, GError** error) {
	FOLKS_EXTENDED_INFO_GET_INTERFACE (self)->remove_extended_field_finish (self, _res_, error);
}


static void folks_extended_info_base_init (FolksExtendedInfoIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		iface->change_extended_field = folks_extended_info_real_change_extended_field;
		iface->change_extended_field_finish = folks_extended_info_real_change_extended_field_finish;
		iface->remove_extended_field = folks_extended_info_real_remove_extended_field;
		iface->remove_extended_field_finish = folks_extended_info_real_remove_extended_field_finish;
	}
}


/**
 * Arbitrary field interface.
 *
 * This interface allows clients to store arbitrary fields for contacts in
 * backends that support it.
 *
 * This interface should be used for application-specific data, in which case
 * the application should use the vCard approach to prefixing non-standard
 * property names: `X-[APPLICATION NAME]-*’. Note that this is a global
 * namespace, shared between all consumers of the backend’s data, so please
 * namespace application-specific data with the application’s name.
 *
 * This interface should not be used for more general-purpose data which could
 * be better represented with a type-safe interface implemented in libfolks.
 * It must not be used for data which is already represented with a type-safe
 * interface in libfolks.
 *
 * A good example of data which could be stored on this interface is an e-mail
 * application’s setting of whether a content prefers to receive HTML or
 * plaintext e-mail.
 *
 * A good example of data which should not be stored on this interface is a
 * contact’s anniversary. That should be added in a separate interface in
 * libfolks.
 *
 * @since 0.11.0
 */
GType folks_extended_info_get_type (void) {
	static volatile gsize folks_extended_info_type_id__volatile = 0;
	if (g_once_init_enter (&folks_extended_info_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksExtendedInfoIface), (GBaseInitFunc) folks_extended_info_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_extended_info_type_id;
		folks_extended_info_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksExtendedInfo", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_extended_info_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&folks_extended_info_type_id__volatile, folks_extended_info_type_id);
	}
	return folks_extended_info_type_id__volatile;
}



