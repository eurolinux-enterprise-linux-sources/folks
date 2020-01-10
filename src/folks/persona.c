/* persona.c generated by valac 0.20.1.30-1b1d, the Vala compiler
 * generated from persona.vala, do not modify */

/*
 * Copyright (C) 2010 Collabora Ltd.
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
#include <gee.h>


#define FOLKS_TYPE_PERSONA (folks_persona_get_type ())
#define FOLKS_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_PERSONA, FolksPersona))
#define FOLKS_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_PERSONA, FolksPersonaClass))
#define FOLKS_IS_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_PERSONA))
#define FOLKS_IS_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_PERSONA))
#define FOLKS_PERSONA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_PERSONA, FolksPersonaClass))

typedef struct _FolksPersona FolksPersona;
typedef struct _FolksPersonaClass FolksPersonaClass;
typedef struct _FolksPersonaPrivate FolksPersonaPrivate;

#define FOLKS_TYPE_PERSONA_STORE (folks_persona_store_get_type ())
#define FOLKS_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_PERSONA_STORE, FolksPersonaStore))
#define FOLKS_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_PERSONA_STORE, FolksPersonaStoreClass))
#define FOLKS_IS_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_PERSONA_STORE))
#define FOLKS_IS_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_PERSONA_STORE))
#define FOLKS_PERSONA_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_PERSONA_STORE, FolksPersonaStoreClass))

typedef struct _FolksPersonaStore FolksPersonaStore;
typedef struct _FolksPersonaStoreClass FolksPersonaStoreClass;

#define FOLKS_TYPE_INDIVIDUAL (folks_individual_get_type ())
#define FOLKS_INDIVIDUAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_INDIVIDUAL, FolksIndividual))
#define FOLKS_INDIVIDUAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_INDIVIDUAL, FolksIndividualClass))
#define FOLKS_IS_INDIVIDUAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_INDIVIDUAL))
#define FOLKS_IS_INDIVIDUAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_INDIVIDUAL))
#define FOLKS_INDIVIDUAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_INDIVIDUAL, FolksIndividualClass))

typedef struct _FolksIndividual FolksIndividual;
typedef struct _FolksIndividualClass FolksIndividualClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

/**
 * Errors which can be thrown when asynchronously setting a property of a
 * {@link Persona} using a setter method defined on an interface such as
 * {@link AliasDetails}.
 *
 * @since 0.6.2
 */
typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
typedef void (*FolksPersonaLinkablePropertyCallback) (const gchar* link, void* user_data);
struct _FolksPersona {
	GObject parent_instance;
	FolksPersonaPrivate * priv;
};

struct _FolksPersonaClass {
	GObjectClass parent_class;
	void (*linkable_property_to_links) (FolksPersona* self, const gchar* prop_name, FolksPersonaLinkablePropertyCallback callback, void* callback_target);
	gchar** (*get_linkable_properties) (FolksPersona* self, int* result_length1);
	gchar** (*get_writeable_properties) (FolksPersona* self, int* result_length1);
};

struct _FolksPersonaPrivate {
	gchar* _iid;
	gchar* _uid;
	gchar* _display_id;
	gboolean _is_user;
	FolksPersonaStore* _store;
	FolksIndividual* _individual;
};


static gpointer folks_persona_parent_class = NULL;

GQuark folks_property_error_quark (void);
GType folks_persona_get_type (void) G_GNUC_CONST;
GType folks_persona_store_get_type (void) G_GNUC_CONST;
GType folks_individual_get_type (void) G_GNUC_CONST;
#define FOLKS_PERSONA_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FOLKS_TYPE_PERSONA, FolksPersonaPrivate))
enum  {
	FOLKS_PERSONA_DUMMY_PROPERTY,
	FOLKS_PERSONA_IID,
	FOLKS_PERSONA_UID,
	FOLKS_PERSONA_DISPLAY_ID,
	FOLKS_PERSONA_IS_USER,
	FOLKS_PERSONA_STORE,
	FOLKS_PERSONA_INDIVIDUAL,
	FOLKS_PERSONA_LINKABLE_PROPERTIES,
	FOLKS_PERSONA_WRITEABLE_PROPERTIES
};
void folks_persona_set_individual (FolksPersona* self, FolksIndividual* value);
static void _folks_persona_individual_weak_notify_cb (FolksPersona* self, GObject* obj);
const gchar* folks_persona_get_iid (FolksPersona* self);
void folks_persona_linkable_property_to_links (FolksPersona* self, const gchar* prop_name, FolksPersonaLinkablePropertyCallback callback, void* callback_target);
static void folks_persona_real_linkable_property_to_links (FolksPersona* self, const gchar* prop_name, FolksPersonaLinkablePropertyCallback callback, void* callback_target);
static gchar* _folks_persona_escape_uid_component (const gchar* component);
static gchar* _folks_persona_unescape_uid_component (const gchar* component);
gchar* folks_persona_build_uid (const gchar* backend_name, const gchar* persona_store_id, const gchar* persona_id);
void folks_persona_split_uid (const gchar* uid, gchar** backend_name, gchar** persona_store_id, gchar** persona_id);
FolksPersona* folks_persona_construct (GType object_type);
static void folks_persona_set_iid (FolksPersona* self, const gchar* value);
const gchar* folks_persona_get_uid (FolksPersona* self);
static void folks_persona_set_uid (FolksPersona* self, const gchar* value);
const gchar* folks_persona_get_display_id (FolksPersona* self);
static void folks_persona_set_display_id (FolksPersona* self, const gchar* value);
gboolean folks_persona_get_is_user (FolksPersona* self);
static void folks_persona_set_is_user (FolksPersona* self, gboolean value);
FolksPersonaStore* folks_persona_get_store (FolksPersona* self);
static void folks_persona_set_store (FolksPersona* self, FolksPersonaStore* value);
FolksIndividual* folks_persona_get_individual (FolksPersona* self);
GeeSet* folks_individual_get_personas (FolksIndividual* self);
static void __folks_persona_individual_weak_notify_cb_gweak_notify (gpointer self, GObject* object);
gchar** folks_persona_get_linkable_properties (FolksPersona* self, int* result_length1);
gchar** folks_persona_get_writeable_properties (FolksPersona* self, int* result_length1);
static void folks_persona_finalize (GObject* obj);
static void _vala_folks_persona_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_folks_persona_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GQuark folks_property_error_quark (void) {
	return g_quark_from_static_string ("folks_property_error-quark");
}


static void _folks_persona_individual_weak_notify_cb (FolksPersona* self, GObject* obj) {
	GObject* _tmp0_;
	const gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (obj != NULL);
	_tmp0_ = obj;
	_tmp1_ = self->priv->_iid;
	g_debug ("persona.vala:152: Individual %p has been destroyed; resetting the Indi" \
"vidual of %s", _tmp0_, _tmp1_);
	self->priv->_individual = NULL;
	g_object_notify ((GObject*) self, "individual");
}


/**
   * Produce one or more mapping strings for the given property's value.
   *
   * This is a virtual method, to be overridden by subclasses of {@link Persona}
   * who have linkable properties. Each of their linkable properties should be
   * handled by their implementation of this function, examining the current
   * value of the property and calling ``callback`` with one or more mapping
   * strings for the property's value. Each of these mapping strings will be
   * added to the {@link IndividualAggregator}'s link map, related to the
   * {@link Individual} instance which contains this {@link Persona}.
   *
   * @param prop_name the name of the linkable property to use, which must be
   * listed in {@link Persona.linkable_properties}
   * @param callback a callback to execute for each of the mapping strings
   * generated by this property
   * @see Persona.linkable_properties
   * @since 0.1.13
   */
static void folks_persona_real_linkable_property_to_links (FolksPersona* self, const gchar* prop_name, FolksPersonaLinkablePropertyCallback callback, void* callback_target) {
	g_return_if_fail (prop_name != NULL);
	g_assert_not_reached ();
}


void folks_persona_linkable_property_to_links (FolksPersona* self, const gchar* prop_name, FolksPersonaLinkablePropertyCallback callback, void* callback_target) {
	g_return_if_fail (self != NULL);
	FOLKS_PERSONA_GET_CLASS (self)->linkable_property_to_links (self, prop_name, callback, callback_target);
}


static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	{
		GRegex* regex = NULL;
		const gchar* _tmp0_;
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_;
		GRegex* _tmp3_;
		GRegex* _tmp4_;
		gchar* _tmp5_ = NULL;
		GRegex* _tmp6_;
		const gchar* _tmp7_;
		gchar* _tmp8_ = NULL;
		_tmp0_ = old;
		_tmp1_ = g_regex_escape_string (_tmp0_, -1);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_regex_new (_tmp2_, 0, 0, &_inner_error_);
		_tmp4_ = _tmp3_;
		_g_free0 (_tmp2_);
		regex = _tmp4_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch23_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp6_ = regex;
		_tmp7_ = replacement;
		_tmp8_ = g_regex_replace_literal (_tmp6_, self, (gssize) (-1), 0, _tmp7_, 0, &_inner_error_);
		_tmp5_ = _tmp8_;
		if (_inner_error_ != NULL) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch23_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		result = _tmp5_;
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally23;
	__catch23_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally23:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static gchar* _folks_persona_escape_uid_component (const gchar* component) {
	gchar* result = NULL;
	gchar* escaped = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	g_return_val_if_fail (component != NULL, NULL);
	_tmp0_ = component;
	_tmp1_ = string_replace (_tmp0_, "\\", "\\\\");
	escaped = _tmp1_;
	_tmp2_ = string_replace (escaped, ":", "\\:");
	result = _tmp2_;
	_g_free0 (escaped);
	return result;
}


static gchar* _folks_persona_unescape_uid_component (const gchar* component) {
	gchar* result = NULL;
	gchar* unescaped = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	g_return_val_if_fail (component != NULL, NULL);
	_tmp0_ = component;
	_tmp1_ = string_replace (_tmp0_, "\\:", ":");
	unescaped = _tmp1_;
	_tmp2_ = string_replace (unescaped, "\\", "\\\\");
	result = _tmp2_;
	_g_free0 (unescaped);
	return result;
}


/**
   * Build a UID from the given components.
   *
   * Each component is escaped before the UID is built.
   *
   * @param backend_name the {@link Backend.name}
   * @param persona_store_id the {@link PersonaStore.id}
   * @param persona_id the Persona identifier (backend-specific)
   * @return a valid UID
   * @see Persona.split_uid
   * @since 0.1.13
   */
gchar* folks_persona_build_uid (const gchar* backend_name, const gchar* persona_store_id, const gchar* persona_id) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_;
	const gchar* _tmp6_;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_;
	g_return_val_if_fail (backend_name != NULL, NULL);
	g_return_val_if_fail (persona_store_id != NULL, NULL);
	g_return_val_if_fail (persona_id != NULL, NULL);
	_tmp0_ = backend_name;
	_tmp1_ = _folks_persona_escape_uid_component (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = persona_store_id;
	_tmp4_ = _folks_persona_escape_uid_component (_tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = persona_id;
	_tmp7_ = _folks_persona_escape_uid_component (_tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = g_strdup_printf ("%s:%s:%s", _tmp2_, _tmp5_, _tmp8_);
	_tmp10_ = _tmp9_;
	_g_free0 (_tmp8_);
	_g_free0 (_tmp5_);
	_g_free0 (_tmp2_);
	result = _tmp10_;
	return result;
}


/**
   * Split a UID into its component parts.
   *
   * Each component is unescaped before being returned. The UID //must// be
   * correctly formed.
   *
   * @param uid a valid UID
   * @param backend_name the {@link Backend.name}
   * @param persona_store_id the {@link PersonaStore.id}
   * @param persona_id the Persona identifier (backend-specific)
   * @see Persona.build_uid
   * @since 0.1.13
   */
static gunichar string_get_char (const gchar* self, glong index) {
	gunichar result = 0U;
	glong _tmp0_;
	gunichar _tmp1_ = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = index;
	_tmp1_ = g_utf8_get_char (((gchar*) self) + _tmp0_);
	result = _tmp1_;
	return result;
}


static glong string_strnlen (gchar* str, glong maxlen) {
	glong result = 0L;
	gchar* end = NULL;
	gchar* _tmp0_;
	glong _tmp1_;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_;
	_tmp0_ = str;
	_tmp1_ = maxlen;
	_tmp2_ = memchr (_tmp0_, 0, (gsize) _tmp1_);
	end = _tmp2_;
	_tmp3_ = end;
	if (_tmp3_ == NULL) {
		glong _tmp4_;
		_tmp4_ = maxlen;
		result = _tmp4_;
		return result;
	} else {
		gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp5_ = end;
		_tmp6_ = str;
		result = (glong) (_tmp5_ - _tmp6_);
		return result;
	}
}


static gchar* string_substring (const gchar* self, glong offset, glong len) {
	gchar* result = NULL;
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	glong _tmp1_;
	gboolean _tmp3_;
	glong _tmp9_;
	glong _tmp15_;
	glong _tmp18_;
	glong _tmp19_;
	glong _tmp20_;
	glong _tmp21_;
	glong _tmp22_;
	gchar* _tmp23_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = offset;
	if (_tmp1_ >= ((glong) 0)) {
		glong _tmp2_;
		_tmp2_ = len;
		_tmp0_ = _tmp2_ >= ((glong) 0);
	} else {
		_tmp0_ = FALSE;
	}
	_tmp3_ = _tmp0_;
	if (_tmp3_) {
		glong _tmp4_;
		glong _tmp5_;
		glong _tmp6_ = 0L;
		_tmp4_ = offset;
		_tmp5_ = len;
		_tmp6_ = string_strnlen ((gchar*) self, _tmp4_ + _tmp5_);
		string_length = _tmp6_;
	} else {
		gint _tmp7_;
		gint _tmp8_;
		_tmp7_ = strlen (self);
		_tmp8_ = _tmp7_;
		string_length = (glong) _tmp8_;
	}
	_tmp9_ = offset;
	if (_tmp9_ < ((glong) 0)) {
		glong _tmp10_;
		glong _tmp11_;
		glong _tmp12_;
		_tmp10_ = string_length;
		_tmp11_ = offset;
		offset = _tmp10_ + _tmp11_;
		_tmp12_ = offset;
		g_return_val_if_fail (_tmp12_ >= ((glong) 0), NULL);
	} else {
		glong _tmp13_;
		glong _tmp14_;
		_tmp13_ = offset;
		_tmp14_ = string_length;
		g_return_val_if_fail (_tmp13_ <= _tmp14_, NULL);
	}
	_tmp15_ = len;
	if (_tmp15_ < ((glong) 0)) {
		glong _tmp16_;
		glong _tmp17_;
		_tmp16_ = string_length;
		_tmp17_ = offset;
		len = _tmp16_ - _tmp17_;
	}
	_tmp18_ = offset;
	_tmp19_ = len;
	_tmp20_ = string_length;
	g_return_val_if_fail ((_tmp18_ + _tmp19_) <= _tmp20_, NULL);
	_tmp21_ = offset;
	_tmp22_ = len;
	_tmp23_ = g_strndup (((gchar*) self) + _tmp21_, (gsize) _tmp22_);
	result = _tmp23_;
	return result;
}


void folks_persona_split_uid (const gchar* uid, gchar** backend_name, gchar** persona_store_id, gchar** persona_id) {
	gchar* _vala_backend_name = NULL;
	gchar* _vala_persona_store_id = NULL;
	gchar* _vala_persona_id = NULL;
	const gchar* _tmp0_;
	gboolean _tmp1_ = FALSE;
	gsize backend_name_length = 0UL;
	gsize persona_store_id_length = 0UL;
	gboolean escaped = FALSE;
	gboolean _tmp23_ = FALSE;
	gsize _tmp24_;
	gboolean _tmp26_;
	const gchar* _tmp27_;
	gsize _tmp28_;
	gchar* _tmp29_ = NULL;
	gchar* _tmp30_;
	gchar* _tmp31_ = NULL;
	const gchar* _tmp32_;
	gsize _tmp33_;
	gsize _tmp34_;
	gchar* _tmp35_ = NULL;
	gchar* _tmp36_;
	gchar* _tmp37_ = NULL;
	const gchar* _tmp38_;
	gsize _tmp39_;
	gsize _tmp40_;
	gchar* _tmp41_ = NULL;
	g_return_if_fail (uid != NULL);
	_tmp0_ = uid;
	_tmp1_ = g_utf8_validate (_tmp0_, (gssize) (-1), NULL);
	_vala_assert (_tmp1_, "uid.validate ()");
	backend_name_length = (gsize) 0;
	persona_store_id_length = (gsize) 0;
	escaped = FALSE;
	{
		const gchar* i = NULL;
		const gchar* _tmp2_;
		_tmp2_ = uid;
		i = _tmp2_;
		{
			gboolean _tmp3_ = FALSE;
			_tmp3_ = TRUE;
			while (TRUE) {
				gboolean _tmp4_;
				const gchar* _tmp7_;
				gunichar _tmp8_ = 0U;
				const gchar* _tmp9_;
				gunichar _tmp10_ = 0U;
				_tmp4_ = _tmp3_;
				if (!_tmp4_) {
					const gchar* _tmp5_;
					const gchar* _tmp6_ = NULL;
					_tmp5_ = i;
					_tmp6_ = g_utf8_next_char (_tmp5_);
					i = _tmp6_;
				}
				_tmp3_ = FALSE;
				_tmp7_ = i;
				_tmp8_ = string_get_char (_tmp7_, (glong) 0);
				if (!(_tmp8_ != ((gunichar) '\0'))) {
					break;
				}
				_tmp9_ = i;
				_tmp10_ = string_get_char (_tmp9_, (glong) 0);
				if (_tmp10_ == ((gunichar) '\\')) {
					gboolean _tmp11_;
					_tmp11_ = escaped;
					escaped = !_tmp11_;
				} else {
					gboolean _tmp12_ = FALSE;
					gboolean _tmp13_;
					gboolean _tmp16_;
					_tmp13_ = escaped;
					if (_tmp13_ == FALSE) {
						const gchar* _tmp14_;
						gunichar _tmp15_ = 0U;
						_tmp14_ = i;
						_tmp15_ = string_get_char (_tmp14_, (glong) 0);
						_tmp12_ = _tmp15_ == ((gunichar) ':');
					} else {
						_tmp12_ = FALSE;
					}
					_tmp16_ = _tmp12_;
					if (_tmp16_) {
						gsize _tmp17_;
						_tmp17_ = backend_name_length;
						if (_tmp17_ == ((gsize) 0)) {
							const gchar* _tmp18_;
							const gchar* _tmp19_;
							_tmp18_ = i;
							_tmp19_ = uid;
							backend_name_length = ((gchar*) _tmp18_) - ((gchar*) _tmp19_);
						} else {
							const gchar* _tmp20_;
							const gchar* _tmp21_;
							gsize _tmp22_;
							_tmp20_ = i;
							_tmp21_ = uid;
							_tmp22_ = backend_name_length;
							persona_store_id_length = ((((gchar*) _tmp20_) - ((gchar*) _tmp21_)) - _tmp22_) - 1;
						}
					}
				}
			}
		}
	}
	_tmp24_ = backend_name_length;
	if (_tmp24_ != ((gsize) 0)) {
		gsize _tmp25_;
		_tmp25_ = persona_store_id_length;
		_tmp23_ = _tmp25_ != ((gsize) 0);
	} else {
		_tmp23_ = FALSE;
	}
	_tmp26_ = _tmp23_;
	_vala_assert (_tmp26_, "backend_name_length != 0 && persona_store_id_length != 0");
	_tmp27_ = uid;
	_tmp28_ = backend_name_length;
	_tmp29_ = string_substring (_tmp27_, (glong) 0, (glong) _tmp28_);
	_tmp30_ = _tmp29_;
	_tmp31_ = _folks_persona_unescape_uid_component (_tmp30_);
	_g_free0 (_vala_backend_name);
	_vala_backend_name = _tmp31_;
	_g_free0 (_tmp30_);
	_tmp32_ = uid;
	_tmp33_ = backend_name_length;
	_tmp34_ = persona_store_id_length;
	_tmp35_ = string_substring ((const gchar*) ((((gchar*) _tmp32_) + _tmp33_) + 1), (glong) 0, (glong) _tmp34_);
	_tmp36_ = _tmp35_;
	_tmp37_ = _folks_persona_unescape_uid_component (_tmp36_);
	_g_free0 (_vala_persona_store_id);
	_vala_persona_store_id = _tmp37_;
	_g_free0 (_tmp36_);
	_tmp38_ = uid;
	_tmp39_ = backend_name_length;
	_tmp40_ = persona_store_id_length;
	_tmp41_ = _folks_persona_unescape_uid_component ((const gchar*) (((((gchar*) _tmp38_) + _tmp39_) + _tmp40_) + 2));
	_g_free0 (_vala_persona_id);
	_vala_persona_id = _tmp41_;
	if (backend_name) {
		*backend_name = _vala_backend_name;
	} else {
		_g_free0 (_vala_backend_name);
	}
	if (persona_store_id) {
		*persona_store_id = _vala_persona_store_id;
	} else {
		_g_free0 (_vala_persona_store_id);
	}
	if (persona_id) {
		*persona_id = _vala_persona_id;
	} else {
		_g_free0 (_vala_persona_id);
	}
}


FolksPersona* folks_persona_construct (GType object_type) {
	FolksPersona * self = NULL;
	self = (FolksPersona*) g_object_new (object_type, NULL);
	return self;
}


const gchar* folks_persona_get_iid (FolksPersona* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_iid;
	result = _tmp0_;
	return result;
}


static void folks_persona_set_iid (FolksPersona* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_iid);
	self->priv->_iid = _tmp1_;
	g_object_notify ((GObject *) self, "iid");
}


const gchar* folks_persona_get_uid (FolksPersona* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_uid;
	result = _tmp0_;
	return result;
}


static void folks_persona_set_uid (FolksPersona* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_uid);
	self->priv->_uid = _tmp1_;
	g_object_notify ((GObject *) self, "uid");
}


const gchar* folks_persona_get_display_id (FolksPersona* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_display_id;
	result = _tmp0_;
	return result;
}


static void folks_persona_set_display_id (FolksPersona* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_display_id);
	self->priv->_display_id = _tmp1_;
	g_object_notify ((GObject *) self, "display-id");
}


gboolean folks_persona_get_is_user (FolksPersona* self) {
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_is_user;
	result = _tmp0_;
	return result;
}


static void folks_persona_set_is_user (FolksPersona* self, gboolean value) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_is_user = _tmp0_;
	g_object_notify ((GObject *) self, "is-user");
}


FolksPersonaStore* folks_persona_get_store (FolksPersona* self) {
	FolksPersonaStore* result;
	FolksPersonaStore* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_store;
	result = _tmp0_;
	return result;
}


static void folks_persona_set_store (FolksPersona* self, FolksPersonaStore* value) {
	FolksPersonaStore* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_store = _tmp0_;
	g_object_notify ((GObject *) self, "store");
}


FolksIndividual* folks_persona_get_individual (FolksPersona* self) {
	FolksIndividual* result;
	gboolean _tmp0_ = FALSE;
	FolksIndividual* _tmp1_;
	gboolean _tmp6_;
	FolksIndividual* _tmp7_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = self->priv->_individual;
	if (_tmp1_ == NULL) {
		_tmp0_ = TRUE;
	} else {
		FolksIndividual* _tmp2_;
		GeeSet* _tmp3_;
		GeeSet* _tmp4_;
		gboolean _tmp5_ = FALSE;
		_tmp2_ = self->priv->_individual;
		_tmp3_ = folks_individual_get_personas (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, FOLKS_TYPE_INDIVIDUAL, FolksIndividual));
		_tmp4_ = _tmp3_;
		_tmp5_ = gee_collection_contains ((GeeCollection*) _tmp4_, self);
		_tmp0_ = _tmp5_;
	}
	_tmp6_ = _tmp0_;
	_vala_assert (_tmp6_, "this._individual == null ||               ((!) this._individual).personas.contains (this)");
	_tmp7_ = self->priv->_individual;
	result = _tmp7_;
	return result;
}


static void __folks_persona_individual_weak_notify_cb_gweak_notify (gpointer self, GObject* object) {
	_folks_persona_individual_weak_notify_cb (self, object);
}


void folks_persona_set_individual (FolksPersona* self, FolksIndividual* value) {
	gboolean _tmp0_ = FALSE;
	FolksIndividual* _tmp1_;
	gboolean _tmp6_;
	FolksIndividual* _tmp7_;
	FolksIndividual* _tmp9_;
	FolksIndividual* _tmp11_;
	g_return_if_fail (self != NULL);
	_tmp1_ = value;
	if (_tmp1_ == NULL) {
		_tmp0_ = TRUE;
	} else {
		FolksIndividual* _tmp2_;
		GeeSet* _tmp3_;
		GeeSet* _tmp4_;
		gboolean _tmp5_ = FALSE;
		_tmp2_ = value;
		_tmp3_ = folks_individual_get_personas (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, FOLKS_TYPE_INDIVIDUAL, FolksIndividual));
		_tmp4_ = _tmp3_;
		_tmp5_ = gee_collection_contains ((GeeCollection*) _tmp4_, self);
		_tmp0_ = _tmp5_;
	}
	_tmp6_ = _tmp0_;
	_vala_assert (_tmp6_, "value == null || ((!) value).personas.contains (this)");
	_tmp7_ = self->priv->_individual;
	if (_tmp7_ != NULL) {
		FolksIndividual* _tmp8_;
		_tmp8_ = self->priv->_individual;
		g_object_weak_unref ((GObject*) _tmp8_, __folks_persona_individual_weak_notify_cb_gweak_notify, self);
	}
	_tmp9_ = value;
	if (_tmp9_ != NULL) {
		FolksIndividual* _tmp10_;
		_tmp10_ = value;
		g_object_weak_ref ((GObject*) _tmp10_, __folks_persona_individual_weak_notify_cb_gweak_notify, self);
	}
	_tmp11_ = value;
	self->priv->_individual = _tmp11_;
	g_object_notify ((GObject *) self, "individual");
}


gchar** folks_persona_get_linkable_properties (FolksPersona* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_PERSONA_GET_CLASS (self)->get_linkable_properties (self, result_length1);
}


gchar** folks_persona_get_writeable_properties (FolksPersona* self, int* result_length1) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_PERSONA_GET_CLASS (self)->get_writeable_properties (self, result_length1);
}


static void folks_persona_class_init (FolksPersonaClass * klass) {
	folks_persona_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FolksPersonaPrivate));
	FOLKS_PERSONA_CLASS (klass)->linkable_property_to_links = folks_persona_real_linkable_property_to_links;
	G_OBJECT_CLASS (klass)->get_property = _vala_folks_persona_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_folks_persona_set_property;
	G_OBJECT_CLASS (klass)->finalize = folks_persona_finalize;
	/**
	   * The internal ID used to represent the Persona for linking.
	   *
	   * This is opaque, and shouldn't be parsed or considered meaningful by
	   * clients.
	   *
	   * The internal ID should be unique within a backend, but may not be unique
	   * across backends, so that links can be made between Personas with similar
	   * internal IDs.
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_IID, g_param_spec_string ("iid", "iid", "iid", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	   * The universal ID used to represent the Persona outside its {@link Backend}.
	   *
	   * This is opaque, and should only be parsed by clients using
	   * {@link Persona.split_uid}.
	   *
	   * This is the canonical way to refer to any Persona. It is guaranteed to be
	   * unique within the Persona's {@link PersonaStore}.
	   *
	   * A Persona's UID is immutable over the life of the Persona in the backing
	   * store, so a given UID is guaranteed to refer to the same Persona each time
	   * libfolks is used, until the Persona is permanently removed from its backing
	   * store.
	   *
	   * @see Persona.build_uid
	   * @see Persona.split_uid
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_UID, g_param_spec_string ("uid", "uid", "uid", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	   * The human-readable, service-specific universal ID used to represent the
	   * Persona.
	   *
	   * For example: ``foo@@xmpp.example.org``.
	   *
	   * This should be used whenever the user needs to be presented with a
	   * familiar, service-specific ID. For instance, in a prompt for the user to
	   * select a specific IM contact within an {@link Individual} to begin a chat
	   * with.
	   *
	   * This is not guaranteed to be unique outside of the Persona's
	   * {@link PersonaStore}.
	   *
	   * @since 0.1.13
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_DISPLAY_ID, g_param_spec_string ("display-id", "display-id", "display-id", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	   * Whether the Persona is the user.
	   *
	   * Iff the Persona represents the user (the person who owns the account in
	   * the respective backend) this is ``true``.
	   *
	   * @since 0.3.0
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_IS_USER, g_param_spec_boolean ("is-user", "is-user", "is-user", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	   * The {@link PersonaStore} which contains this Persona.
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_STORE, g_param_spec_object ("store", "store", "store", FOLKS_TYPE_PERSONA_STORE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	/**
	   * The {@link Individual} which contains this Persona.
	   *
	   * This may be ``null``, but should only ever be so when the Persona has just
	   * been created, when its {@link PersonaStore} is being destroyed, or when
	   * it's moving between {@link Individual}s.
	   *
	   * @since 0.6.0
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_INDIVIDUAL, g_param_spec_object ("individual", "individual", "individual", FOLKS_TYPE_INDIVIDUAL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	   * The names of the properties of this Persona which are linkable.
	   *
	   * If a property name is in this list, and the Persona is from a
	   * {@link PersonaStore} whose trust level is {@link PersonaStoreTrust.FULL},
	   * the {@link IndividualAggregator} should be able to reliably use the value
	   * of the property from a given Persona instance to link the Persona with
	   * other Personas and form {@link Individual}s.
	   *
	   * Note that {@link Persona.uid} is always implicitly a member of this list,
	   * and doesn't need to be added explicitly.
	   *
	   * This list will have no effect if the Persona's {@link PersonaStore} trust
	   * level is not {@link PersonaStoreTrust.FULL}.
	   *
	   * This property value is guaranteed to be constant for a given persona,
	   * but may vary between personas in the same store.
	   *
	   * @since 0.1.13
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_LINKABLE_PROPERTIES, g_param_spec_boxed ("linkable-properties", "linkable-properties", "linkable-properties", G_TYPE_STRV, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	   * The names of the properties of this Persona which are writeable.
	   *
	   * If a property name is in this list, setting the property should result in
	   * the updated value being stored in the backend's permanent storage (unless
	   * it gets rejected due to being invalid, or a different error occurs).
	   *
	   * It's intended that this property value will be constant for a given Persona
	   * subclass, but this isn't guaranteed; it's possible that Persona subclasses
	   * may vary the value of this property at run time.
	   *
	   * @since 0.6.0
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_PERSONA_WRITEABLE_PROPERTIES, g_param_spec_boxed ("writeable-properties", "writeable-properties", "writeable-properties", G_TYPE_STRV, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void folks_persona_instance_init (FolksPersona * self) {
	self->priv = FOLKS_PERSONA_GET_PRIVATE (self);
	self->priv->_individual = NULL;
}


static void folks_persona_finalize (GObject* obj) {
	FolksPersona * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FOLKS_TYPE_PERSONA, FolksPersona);
	folks_persona_set_individual (self, NULL);
	_g_free0 (self->priv->_iid);
	_g_free0 (self->priv->_uid);
	_g_free0 (self->priv->_display_id);
	G_OBJECT_CLASS (folks_persona_parent_class)->finalize (obj);
}


/**
 * Represents a "shard" of a person from a single source (a single
 * {@link Backend}), such as an XMPP contact from Telepathy or a vCard contact
 * from evolution-data-server.
 *
 * All the personas belonging to one physical person are aggregated to form a
 * single {@link Individual} representing that person.
 */
GType folks_persona_get_type (void) {
	static volatile gsize folks_persona_type_id__volatile = 0;
	if (g_once_init_enter (&folks_persona_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksPersonaClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_persona_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksPersona), 0, (GInstanceInitFunc) folks_persona_instance_init, NULL };
		GType folks_persona_type_id;
		folks_persona_type_id = g_type_register_static (G_TYPE_OBJECT, "FolksPersona", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&folks_persona_type_id__volatile, folks_persona_type_id);
	}
	return folks_persona_type_id__volatile;
}


static void _vala_folks_persona_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FolksPersona * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FOLKS_TYPE_PERSONA, FolksPersona);
	switch (property_id) {
		case FOLKS_PERSONA_IID:
		g_value_set_string (value, folks_persona_get_iid (self));
		break;
		case FOLKS_PERSONA_UID:
		g_value_set_string (value, folks_persona_get_uid (self));
		break;
		case FOLKS_PERSONA_DISPLAY_ID:
		g_value_set_string (value, folks_persona_get_display_id (self));
		break;
		case FOLKS_PERSONA_IS_USER:
		g_value_set_boolean (value, folks_persona_get_is_user (self));
		break;
		case FOLKS_PERSONA_STORE:
		g_value_set_object (value, folks_persona_get_store (self));
		break;
		case FOLKS_PERSONA_INDIVIDUAL:
		g_value_set_object (value, folks_persona_get_individual (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_folks_persona_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	FolksPersona * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FOLKS_TYPE_PERSONA, FolksPersona);
	switch (property_id) {
		case FOLKS_PERSONA_IID:
		folks_persona_set_iid (self, g_value_get_string (value));
		break;
		case FOLKS_PERSONA_UID:
		folks_persona_set_uid (self, g_value_get_string (value));
		break;
		case FOLKS_PERSONA_DISPLAY_ID:
		folks_persona_set_display_id (self, g_value_get_string (value));
		break;
		case FOLKS_PERSONA_IS_USER:
		folks_persona_set_is_user (self, g_value_get_boolean (value));
		break;
		case FOLKS_PERSONA_STORE:
		folks_persona_set_store (self, g_value_get_object (value));
		break;
		case FOLKS_PERSONA_INDIVIDUAL:
		folks_persona_set_individual (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



