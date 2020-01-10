/* presence-details.c generated by valac 0.36.1.697-2b74, the Vala compiler
 * generated from presence-details.vala, do not modify */

/*
 * Copyright (C) 2010-2011 Collabora Ltd.
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
 *       Travis Reitter <travis.reitter@collabora.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define FOLKS_TYPE_PRESENCE_TYPE (folks_presence_type_get_type ())

#define FOLKS_TYPE_PRESENCE_DETAILS (folks_presence_details_get_type ())
#define FOLKS_PRESENCE_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_PRESENCE_DETAILS, FolksPresenceDetails))
#define FOLKS_IS_PRESENCE_DETAILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_PRESENCE_DETAILS))
#define FOLKS_PRESENCE_DETAILS_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_PRESENCE_DETAILS, FolksPresenceDetailsIface))

typedef struct _FolksPresenceDetails FolksPresenceDetails;
typedef struct _FolksPresenceDetailsIface FolksPresenceDetailsIface;

typedef enum  {
	FOLKS_PRESENCE_TYPE_UNSET,
	FOLKS_PRESENCE_TYPE_OFFLINE,
	FOLKS_PRESENCE_TYPE_AVAILABLE,
	FOLKS_PRESENCE_TYPE_AWAY,
	FOLKS_PRESENCE_TYPE_EXTENDED_AWAY,
	FOLKS_PRESENCE_TYPE_HIDDEN,
	FOLKS_PRESENCE_TYPE_BUSY,
	FOLKS_PRESENCE_TYPE_UNKNOWN,
	FOLKS_PRESENCE_TYPE_ERROR
} FolksPresenceType;

struct _FolksPresenceDetailsIface {
	GTypeInterface parent_iface;
	FolksPresenceType (*get_presence_type) (FolksPresenceDetails* self);
	void (*set_presence_type) (FolksPresenceDetails* self, FolksPresenceType value);
	const gchar* (*get_presence_message) (FolksPresenceDetails* self);
	void (*set_presence_message) (FolksPresenceDetails* self, const gchar* value);
	gchar** (*get_client_types) (FolksPresenceDetails* self, int* result_length1);
	void (*set_client_types) (FolksPresenceDetails* self, gchar** value, int value_length1);
	const gchar* (*get_presence_status) (FolksPresenceDetails* self);
	void (*set_presence_status) (FolksPresenceDetails* self, const gchar* value);
};



GType folks_presence_type_get_type (void) G_GNUC_CONST;
GType folks_presence_details_get_type (void) G_GNUC_CONST;
static gint _folks_presence_details_type_availability (FolksPresenceType type);
const gchar* folks_presence_details_get_default_message_from_type (FolksPresenceType type);
gint folks_presence_details_typecmp (FolksPresenceType type_a, FolksPresenceType type_b);
gboolean folks_presence_details_is_online (FolksPresenceDetails* self);
FolksPresenceType folks_presence_details_get_presence_type (FolksPresenceDetails* self);
void folks_presence_details_set_presence_type (FolksPresenceDetails* self, FolksPresenceType value);
const gchar* folks_presence_details_get_presence_message (FolksPresenceDetails* self);
void folks_presence_details_set_presence_message (FolksPresenceDetails* self, const gchar* value);
gchar** folks_presence_details_get_client_types (FolksPresenceDetails* self, int* result_length1);
void folks_presence_details_set_client_types (FolksPresenceDetails* self, gchar** value, int value_length1);
const gchar* folks_presence_details_get_presence_status (FolksPresenceDetails* self);
void folks_presence_details_set_presence_status (FolksPresenceDetails* self, const gchar* value);


/**
 * The possible presence states an object implementing {@link PresenceDetails}
 * could be in.
 *
 * These closely follow the
 * [[http://telepathy.freedesktop.org/spec/Connection_Interface_Simple_Presence.html#Connection_Presence_Type|SimplePresence]]
 * interface in the Telepathy specification.
 */
GType folks_presence_type_get_type (void) {
	static volatile gsize folks_presence_type_type_id__volatile = 0;
	if (g_once_init_enter (&folks_presence_type_type_id__volatile)) {
		static const GEnumValue values[] = {{FOLKS_PRESENCE_TYPE_UNSET, "FOLKS_PRESENCE_TYPE_UNSET", "unset"}, {FOLKS_PRESENCE_TYPE_OFFLINE, "FOLKS_PRESENCE_TYPE_OFFLINE", "offline"}, {FOLKS_PRESENCE_TYPE_AVAILABLE, "FOLKS_PRESENCE_TYPE_AVAILABLE", "available"}, {FOLKS_PRESENCE_TYPE_AWAY, "FOLKS_PRESENCE_TYPE_AWAY", "away"}, {FOLKS_PRESENCE_TYPE_EXTENDED_AWAY, "FOLKS_PRESENCE_TYPE_EXTENDED_AWAY", "extended-away"}, {FOLKS_PRESENCE_TYPE_HIDDEN, "FOLKS_PRESENCE_TYPE_HIDDEN", "hidden"}, {FOLKS_PRESENCE_TYPE_BUSY, "FOLKS_PRESENCE_TYPE_BUSY", "busy"}, {FOLKS_PRESENCE_TYPE_UNKNOWN, "FOLKS_PRESENCE_TYPE_UNKNOWN", "unknown"}, {FOLKS_PRESENCE_TYPE_ERROR, "FOLKS_PRESENCE_TYPE_ERROR", "error"}, {0, NULL, NULL}};
		GType folks_presence_type_type_id;
		folks_presence_type_type_id = g_enum_register_static ("FolksPresenceType", values);
		g_once_init_leave (&folks_presence_type_type_id__volatile, folks_presence_type_type_id);
	}
	return folks_presence_type_type_id__volatile;
}


static gint _folks_presence_details_type_availability (FolksPresenceType type) {
	gint result = 0;
	FolksPresenceType _tmp0_;
	_tmp0_ = type;
	switch (_tmp0_) {
		case FOLKS_PRESENCE_TYPE_UNSET:
		{
			result = 0;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_UNKNOWN:
		{
			result = 1;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_ERROR:
		{
			result = 2;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_OFFLINE:
		{
			result = 3;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_HIDDEN:
		{
			result = 4;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_EXTENDED_AWAY:
		{
			result = 5;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_AWAY:
		{
			result = 6;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_BUSY:
		{
			result = 7;
			return result;
		}
		case FOLKS_PRESENCE_TYPE_AVAILABLE:
		{
			result = 8;
			return result;
		}
		default:
		{
			result = 1;
			return result;
		}
	}
}


/**
   * The default message for a presence type.
   *
   * @param type a {@link PresenceType} for which to retrieve a translated
   * display string
   * @return a default translated display string for the given
   * {@link PresenceType}
   * @since 0.7.1
   */
const gchar* folks_presence_details_get_default_message_from_type (FolksPresenceType type) {
	const gchar* result = NULL;
	FolksPresenceType _tmp0_;
	_tmp0_ = type;
	switch (_tmp0_) {
		default:
		case FOLKS_PRESENCE_TYPE_UNKNOWN:
		{
			result = _ ("Unknown status");
			return result;
		}
		case FOLKS_PRESENCE_TYPE_OFFLINE:
		{
			result = _ ("Offline");
			return result;
		}
		case FOLKS_PRESENCE_TYPE_UNSET:
		{
			result = "";
			return result;
		}
		case FOLKS_PRESENCE_TYPE_ERROR:
		{
			result = _ ("Error");
			return result;
		}
		case FOLKS_PRESENCE_TYPE_AVAILABLE:
		{
			result = _ ("Available");
			return result;
		}
		case FOLKS_PRESENCE_TYPE_AWAY:
		{
			result = _ ("Away");
			return result;
		}
		case FOLKS_PRESENCE_TYPE_EXTENDED_AWAY:
		{
			result = _ ("Extended away");
			return result;
		}
		case FOLKS_PRESENCE_TYPE_BUSY:
		{
			result = _ ("Busy");
			return result;
		}
		case FOLKS_PRESENCE_TYPE_HIDDEN:
		{
			result = _ ("Hidden");
			return result;
		}
	}
}


/**
   * Compare two {@link PresenceType}s.
   *
   * ``0`` will be returned if the types are equal, a positive number will be
   * returned if ``type_a`` is more available than ``type_b``, and a negative
   * number will be returned if the opposite is true.
   *
   * @param type_a the first {@link PresenceType} to compare
   * @param type_b the second {@link PresenceType} to compare
   * @return a number representing the similarity of the two types
   * @since 0.1.11
   */
gint folks_presence_details_typecmp (FolksPresenceType type_a, FolksPresenceType type_b) {
	gint result = 0;
	FolksPresenceType _tmp0_;
	gint _tmp1_;
	FolksPresenceType _tmp2_;
	gint _tmp3_;
	_tmp0_ = type_a;
	_tmp1_ = _folks_presence_details_type_availability (_tmp0_);
	_tmp2_ = type_b;
	_tmp3_ = _folks_presence_details_type_availability (_tmp2_);
	result = _tmp1_ - _tmp3_;
	return result;
}


/**
   * Whether the contact is online.
   *
   * This will be ``true`` if the contact's presence type is higher than
   * {@link PresenceType.OFFLINE}, as determined by
   * {@link PresenceDetails.typecmp}.
   *
   * @return ``true`` if the contact is online, ``false`` otherwise
   */
gboolean folks_presence_details_is_online (FolksPresenceDetails* self) {
	gboolean result = FALSE;
	FolksPresenceType _tmp0_;
	FolksPresenceType _tmp1_;
	gint _tmp2_;
	_tmp0_ = folks_presence_details_get_presence_type (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = folks_presence_details_typecmp (_tmp1_, FOLKS_PRESENCE_TYPE_OFFLINE);
	result = _tmp2_ > 0;
	return result;
}


FolksPresenceType folks_presence_details_get_presence_type (FolksPresenceDetails* self) {
	g_return_val_if_fail (self != NULL, 0);
	return FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->get_presence_type (self);
}


void folks_presence_details_set_presence_type (FolksPresenceDetails* self, FolksPresenceType value) {
	g_return_if_fail (self != NULL);
	FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->set_presence_type (self, value);
}


const gchar* folks_presence_details_get_presence_message (FolksPresenceDetails* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->get_presence_message (self);
}


void folks_presence_details_set_presence_message (FolksPresenceDetails* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->set_presence_message (self, value);
}


gchar** folks_presence_details_get_client_types (FolksPresenceDetails* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->get_client_types (self, result_length1);
}


void folks_presence_details_set_client_types (FolksPresenceDetails* self, gchar** value, int value_length1) {
	g_return_if_fail (self != NULL);
	FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->set_client_types (self, value, value_length1);
}


const gchar* folks_presence_details_get_presence_status (FolksPresenceDetails* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->get_presence_status (self);
}


void folks_presence_details_set_presence_status (FolksPresenceDetails* self, const gchar* value) {
	g_return_if_fail (self != NULL);
	FOLKS_PRESENCE_DETAILS_GET_INTERFACE (self)->set_presence_status (self, value);
}


static void folks_presence_details_base_init (FolksPresenceDetailsIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		   * The contact's presence type.
		   *
		   * Each contact can have one and only one presence type at any one time,
		   * representing their availability for communication. The default presence
		   * type is {@link PresenceType.UNSET}.
		   */
		g_object_interface_install_property (iface, g_param_spec_enum ("presence-type", "presence-type", "presence-type", FOLKS_TYPE_PRESENCE_TYPE, FOLKS_PRESENCE_TYPE_UNSET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		/**
		   * The contact's presence message.
		   *
		   * This is a short message written by the contact to add detail to their
		   * presence type ({@link Folks.PresenceDetails.presence_type}). If the contact
		   * hasn't set a message, it will be an empty string.
		   */
		g_object_interface_install_property (iface, g_param_spec_string ("presence-message", "presence-message", "presence-message", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		/**
		   * The contact's client types.
		   *
		   * One can connect to instant messaging networks on a huge variety of devices,
		   * from PCs, to phones to consoles.
		   * The client types are represented in strings, using the values
		   * [[http://xmpp.org/registrar/disco-categories.html#client|documented by the XMPP registrar]]
		   *
		   * @since 0.9.5
		   */
		g_object_interface_install_property (iface, g_param_spec_boxed ("client-types", "client-types", "client-types", G_TYPE_STRV, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		/**
		   * The contact's detailed presence status.
		   *
		   * This is a more detailed representation of the contact's presence than
		   * {@link PresenceDetails.presence_type}. It may be empty, or one of a
		   * well-known set of strings, as defined in the Telepathy specification:
		   * [[http://telepathy.freedesktop.org/spec/Connection_Interface_Simple_Presence.html#description|Telepathy Specification]]
		   *
		   * @since 0.6.0
		   */
		g_object_interface_install_property (iface, g_param_spec_string ("presence-status", "presence-status", "presence-status", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	}
}


/**
 * Interface exposing a {@link Persona}'s or {@link Individual}'s presence;
 * their current availability, such as for chatting.
 *
 * If the {@link Backend} providing the {@link Persona} doesn't support
 * presence, the {@link Persona}'s ``presence_type`` will be set to
 * {@link PresenceType.UNSET} and their ``presence_message`` will be an empty
 * string.
 */
GType folks_presence_details_get_type (void) {
	static volatile gsize folks_presence_details_type_id__volatile = 0;
	if (g_once_init_enter (&folks_presence_details_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksPresenceDetailsIface), (GBaseInitFunc) folks_presence_details_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_presence_details_type_id;
		folks_presence_details_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksPresenceDetails", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_presence_details_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&folks_presence_details_type_id__volatile, folks_presence_details_type_id);
	}
	return folks_presence_details_type_id__volatile;
}



