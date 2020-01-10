/* location-details.c generated by valac 0.36.1.697-2b74, the Vala compiler
 * generated from location-details.vala, do not modify */

/*
 * Copyright (C) 2013 Intel Corp
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
 *       Patrick Ohly <patrick.ohly@intel.com>
 */

#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>


#define FOLKS_TYPE_LOCATION (folks_location_get_type ())
#define FOLKS_LOCATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_LOCATION, FolksLocation))
#define FOLKS_LOCATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_LOCATION, FolksLocationClass))
#define FOLKS_IS_LOCATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_LOCATION))
#define FOLKS_IS_LOCATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_LOCATION))
#define FOLKS_LOCATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_LOCATION, FolksLocationClass))

typedef struct _FolksLocation FolksLocation;
typedef struct _FolksLocationClass FolksLocationClass;
typedef struct _FolksLocationPrivate FolksLocationPrivate;
enum  {
	FOLKS_LOCATION_DUMMY_PROPERTY,
	FOLKS_LOCATION_LAST_PROPERTY
};
static GParamSpec* folks_location_properties[FOLKS_LOCATION_LAST_PROPERTY];

#define FOLKS_TYPE_LOCATION_DETAILS (folks_location_details_get_type ())
#define FOLKS_LOCATION_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_LOCATION_DETAILS, FolksLocationDetails))
#define FOLKS_IS_LOCATION_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_LOCATION_DETAILS))
#define FOLKS_LOCATION_DETAILS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_LOCATION_DETAILS, FolksLocationDetailsIface))

typedef struct _FolksLocationDetails FolksLocationDetails;
typedef struct _FolksLocationDetailsIface FolksLocationDetailsIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksLocationDetailsChangeLocationData FolksLocationDetailsChangeLocationData;

struct _FolksLocation {
	GObject parent_instance;
	FolksLocationPrivate * priv;
	gdouble latitude;
	gdouble longitude;
};

struct _FolksLocationClass {
	GObjectClass parent_class;
};

typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
struct _FolksLocationDetailsIface {
	GTypeInterface parent_iface;
	void (*change_location) (FolksLocationDetails* self, FolksLocation* location, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*change_location_finish) (FolksLocationDetails* self, GAsyncResult* _res_, GError** error);
	FolksLocation* (*get_location) (FolksLocationDetails* self);
	void (*set_location) (FolksLocationDetails* self, FolksLocation* value);
};

struct _FolksLocationDetailsChangeLocationData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksLocationDetails* self;
	FolksLocation* location;
	GError* _tmp0_;
	GError * _inner_error_;
};


static gpointer folks_location_parent_class = NULL;

GType folks_location_get_type (void) G_GNUC_CONST;
FolksLocation* folks_location_new (gdouble latitude, gdouble longitude);
FolksLocation* folks_location_construct (GType object_type, gdouble latitude, gdouble longitude);
gboolean folks_location_equal (FolksLocation* self, FolksLocation* other);
gboolean folks_location_equal_coordinates (FolksLocation* self, gdouble latitude, gdouble longitude);
static void folks_location_finalize (GObject * obj);
GQuark folks_property_error_quark (void);
GType folks_location_details_get_type (void) G_GNUC_CONST;
static void folks_location_details_real_change_location_data_free (gpointer _data);
static void folks_location_details_real_change_location_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
static void folks_location_details_real_change_location (FolksLocationDetails* self, FolksLocation* location, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_location_details_change_location (FolksLocationDetails* self, FolksLocation* location, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_location_details_change_location_finish (FolksLocationDetails* self, GAsyncResult* _res_, GError** error);
static gboolean folks_location_details_real_change_location_co (FolksLocationDetailsChangeLocationData* _data_);
FolksLocation* folks_location_details_get_location (FolksLocationDetails* self);
void folks_location_details_set_location (FolksLocationDetails* self, FolksLocation* value);


/**
   * Constructs a new instance with the given coordinates.
   * @param latitude latitude of the new instance
   * @param longitude longitude of the new instance
   * @since 0.9.2
   */
FolksLocation* folks_location_construct (GType object_type, gdouble latitude, gdouble longitude) {
	FolksLocation * self = NULL;
	gdouble _tmp0_;
	gdouble _tmp1_;
	self = (FolksLocation*) g_object_new (object_type, NULL);
	_tmp0_ = latitude;
	self->latitude = _tmp0_;
	_tmp1_ = longitude;
	self->longitude = _tmp1_;
	return self;
}


FolksLocation* folks_location_new (gdouble latitude, gdouble longitude) {
	return folks_location_construct (FOLKS_TYPE_LOCATION, latitude, longitude);
}


/**
   * Compare this location to another by geographical position.
   *
   * @param other the instance to compare against
   * @return true iff the coordinates are exactly the same
   * @since 0.9.2
   */
gboolean folks_location_equal (FolksLocation* self, FolksLocation* other) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gdouble _tmp1_;
	FolksLocation* _tmp2_;
	gdouble _tmp3_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (other != NULL, FALSE);
	_tmp1_ = self->latitude;
	_tmp2_ = other;
	_tmp3_ = _tmp2_->latitude;
	if (_tmp1_ == _tmp3_) {
		gdouble _tmp4_;
		FolksLocation* _tmp5_;
		gdouble _tmp6_;
		_tmp4_ = self->longitude;
		_tmp5_ = other;
		_tmp6_ = _tmp5_->longitude;
		_tmp0_ = _tmp4_ == _tmp6_;
	} else {
		_tmp0_ = FALSE;
	}
	result = _tmp0_;
	return result;
}


/**
   * Compare the geographical position of this location against
   * another position.
   *
   * @param latitude latitude of the other position
   * @param longitude longitude of the other position
   * @return true iff the coordinates are exactly the same
   * @since 0.9.2
   */
gboolean folks_location_equal_coordinates (FolksLocation* self, gdouble latitude, gdouble longitude) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gdouble _tmp1_;
	gdouble _tmp2_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp1_ = self->latitude;
	_tmp2_ = latitude;
	if (_tmp1_ == _tmp2_) {
		gdouble _tmp3_;
		gdouble _tmp4_;
		_tmp3_ = self->longitude;
		_tmp4_ = longitude;
		_tmp0_ = _tmp3_ == _tmp4_;
	} else {
		_tmp0_ = FALSE;
	}
	result = _tmp0_;
	return result;
}


static void folks_location_class_init (FolksLocationClass * klass) {
	folks_location_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = folks_location_finalize;
}


static void folks_location_instance_init (FolksLocation * self) {
}


static void folks_location_finalize (GObject * obj) {
	FolksLocation * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FOLKS_TYPE_LOCATION, FolksLocation);
	G_OBJECT_CLASS (folks_location_parent_class)->finalize (obj);
}


/**
 * A location. Typically latitude and longitude will
 * be based on WGS84. However, folks often has no
 * way of verifying that and just has to assume
 * it's true.
 *
 * @since 0.9.2
 */
GType folks_location_get_type (void) {
	static volatile gsize folks_location_type_id__volatile = 0;
	if (g_once_init_enter (&folks_location_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksLocationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_location_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksLocation), 0, (GInstanceInitFunc) folks_location_instance_init, NULL };
		GType folks_location_type_id;
		folks_location_type_id = g_type_register_static (G_TYPE_OBJECT, "FolksLocation", &g_define_type_info, 0);
		g_once_init_leave (&folks_location_type_id__volatile, folks_location_type_id);
	}
	return folks_location_type_id__volatile;
}


static void folks_location_details_real_change_location_data_free (gpointer _data) {
	FolksLocationDetailsChangeLocationData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->location);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksLocationDetailsChangeLocationData, _data_);
}


static void folks_location_details_real_change_location_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksLocationDetailsChangeLocationData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void folks_location_details_real_change_location (FolksLocationDetails* self, FolksLocation* location, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksLocationDetailsChangeLocationData* _data_;
	FolksLocationDetails* _tmp0_;
	FolksLocation* _tmp1_;
	FolksLocation* _tmp2_;
	_data_ = g_slice_new0 (FolksLocationDetailsChangeLocationData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_location_details_real_change_location_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_location_details_real_change_location_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = location;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->location);
	_data_->location = _tmp2_;
	folks_location_details_real_change_location_co (_data_);
}


static void folks_location_details_real_change_location_finish (FolksLocationDetails* self, GAsyncResult* _res_, GError** error) {
	FolksLocationDetailsChangeLocationData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Set or remove the contact's currently advertised location.
   *
   * It's preferred to call this rather than setting
   * {@link LocationDetails.location} directly, as this method gives error
   * notification and will only return once the location has been written to the
   * relevant backing store (or the operation's failed).
   *
   * @param location the contact's location, null to remove the information
   * @throws PropertyError if setting the location failed
   * @since 0.9.2
   */
static gboolean folks_location_details_real_change_location_co (FolksLocationDetailsChangeLocationData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = g_error_new_literal (FOLKS_PROPERTY_ERROR, FOLKS_PROPERTY_ERROR_NOT_WRITEABLE, _ ("Location is not writeable on this contact."));
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


void folks_location_details_change_location (FolksLocationDetails* self, FolksLocation* location, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_LOCATION_DETAILS_GET_INTERFACE (self)->change_location (self, location, _callback_, _user_data_);
}


void folks_location_details_change_location_finish (FolksLocationDetails* self, GAsyncResult* _res_, GError** error) {
	FOLKS_LOCATION_DETAILS_GET_INTERFACE (self)->change_location_finish (self, _res_, error);
}


FolksLocation* folks_location_details_get_location (FolksLocationDetails* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_LOCATION_DETAILS_GET_INTERFACE (self)->get_location (self);
}


void folks_location_details_set_location (FolksLocationDetails* self, FolksLocation* value) {
	g_return_if_fail (self != NULL);
	FOLKS_LOCATION_DETAILS_GET_INTERFACE (self)->set_location (self, value);
}


static void folks_location_details_base_init (FolksLocationDetailsIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		   * The current location of the contact. Null if the contact’s
		   * current location isn’t known, or they’re keeping it private.
		   *
		   * @since 0.9.2
		   */
		g_object_interface_install_property (iface, g_param_spec_object ("location", "location", "location", FOLKS_TYPE_LOCATION, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		iface->change_location = folks_location_details_real_change_location;
		iface->change_location_finish = folks_location_details_real_change_location_finish;
	}
}


/**
 * Location of a contact. folks tries to keep track of
* the current location and thus favors live data (say,
 * as advertised by a chat service) over static data (from
 * an address book). Static addresses, such as a contact's home or work address,
 * should be presented using the {@link PostalAddressDetails} interface.
 * {@link LocationDetails} is purely for exposing the contact's current or
 * recent location.
 *
 * Backends are expected to report only relevant changes
 * in a persona's location. For storage backends like EDS,
 * all changes must have been triggered by a person (e.g.
 * editing the contact) and thus all are relevant.
 *
 * A backend pulling in live data, for example from a GPS,
 * is expected to filter the data to minimize noise.
 *
 * folks itself will then apply all changes coming
 * from backends without further filtering.
 *
 * @since 0.9.2
 */
GType folks_location_details_get_type (void) {
	static volatile gsize folks_location_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_location_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksLocationDetailsIface), (GBaseInitFunc) folks_location_details_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_location_details_type_id;
		folks_location_details_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksLocationDetails", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_location_details_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&folks_location_details_type_id__volatile, folks_location_details_type_id);
	}
	return folks_location_details_type_id__volatile;
}



