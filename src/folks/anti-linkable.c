/* anti-linkable.c generated by valac 0.36.1.697-2b74, the Vala compiler
 * generated from anti-linkable.vala, do not modify */

/*
 * Copyright (C) 2011, 2012 Philip Withnall
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
 *       Philip Withnall <philip@tecnocode.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <folks/small-set.h>


#define FOLKS_TYPE_PERSONA (folks_persona_get_type ())
#define FOLKS_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_PERSONA, FolksPersona))
#define FOLKS_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_TYPE_PERSONA, FolksPersonaClass))
#define FOLKS_IS_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_PERSONA))
#define FOLKS_IS_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_TYPE_PERSONA))
#define FOLKS_PERSONA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_TYPE_PERSONA, FolksPersonaClass))

typedef struct _FolksPersona FolksPersona;
typedef struct _FolksPersonaClass FolksPersonaClass;

#define FOLKS_TYPE_ANTI_LINKABLE (folks_anti_linkable_get_type ())
#define FOLKS_ANTI_LINKABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_TYPE_ANTI_LINKABLE, FolksAntiLinkable))
#define FOLKS_IS_ANTI_LINKABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_TYPE_ANTI_LINKABLE))
#define FOLKS_ANTI_LINKABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), FOLKS_TYPE_ANTI_LINKABLE, FolksAntiLinkableIface))

typedef struct _FolksAntiLinkable FolksAntiLinkable;
typedef struct _FolksAntiLinkableIface FolksAntiLinkableIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksAntiLinkableChangeAntiLinksData FolksAntiLinkableChangeAntiLinksData;
typedef struct _FolksAntiLinkableAddAntiLinksData FolksAntiLinkableAddAntiLinksData;
typedef struct _FolksAntiLinkableRemoveAntiLinksData FolksAntiLinkableRemoveAntiLinksData;
typedef struct _FolksAntiLinkableAddGlobalAntiLinkData FolksAntiLinkableAddGlobalAntiLinkData;
typedef struct _FolksAntiLinkableRemoveGlobalAntiLinkData FolksAntiLinkableRemoveGlobalAntiLinkData;

typedef enum  {
	FOLKS_PROPERTY_ERROR_NOT_WRITEABLE,
	FOLKS_PROPERTY_ERROR_INVALID_VALUE,
	FOLKS_PROPERTY_ERROR_UNKNOWN_ERROR,
	FOLKS_PROPERTY_ERROR_UNAVAILABLE
} FolksPropertyError;
#define FOLKS_PROPERTY_ERROR folks_property_error_quark ()
struct _FolksAntiLinkableIface {
	GTypeInterface parent_iface;
	void (*change_anti_links) (FolksAntiLinkable* self, GeeSet* anti_links, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*change_anti_links_finish) (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error);
	GeeSet* (*get_anti_links) (FolksAntiLinkable* self);
	void (*set_anti_links) (FolksAntiLinkable* self, GeeSet* value);
};

struct _FolksAntiLinkableChangeAntiLinksData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksAntiLinkable* self;
	GeeSet* anti_links;
	GError* _tmp0_;
	GError * _inner_error_;
};

struct _FolksAntiLinkableAddAntiLinksData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksAntiLinkable* self;
	GeeSet* other_personas;
	FolksSmallSet* new_anti_links;
	GeeSet* _tmp0_;
	GeeSet* _tmp1_;
	FolksSmallSet* _tmp2_;
	GeeIterator* _p_it;
	GeeSet* _tmp3_;
	GeeIterator* _tmp4_;
	GeeIterator* _tmp5_;
	gboolean _tmp6_;
	FolksPersona* p;
	GeeIterator* _tmp7_;
	gpointer _tmp8_;
	FolksPersona* _tmp9_;
	FolksSmallSet* _tmp10_;
	FolksPersona* _tmp11_;
	const gchar* _tmp12_;
	const gchar* _tmp13_;
	FolksSmallSet* _tmp14_;
	GError * _inner_error_;
};

struct _FolksAntiLinkableRemoveAntiLinksData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksAntiLinkable* self;
	GeeSet* other_personas;
	FolksSmallSet* new_anti_links;
	GeeSet* _tmp0_;
	GeeSet* _tmp1_;
	FolksSmallSet* _tmp2_;
	GeeIterator* _p_it;
	GeeSet* _tmp3_;
	GeeIterator* _tmp4_;
	GeeIterator* _tmp5_;
	gboolean _tmp6_;
	FolksPersona* p;
	GeeIterator* _tmp7_;
	gpointer _tmp8_;
	FolksSmallSet* _tmp9_;
	FolksPersona* _tmp10_;
	const gchar* _tmp11_;
	const gchar* _tmp12_;
	FolksSmallSet* _tmp13_;
	GError * _inner_error_;
};

struct _FolksAntiLinkableAddGlobalAntiLinkData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksAntiLinkable* self;
	gboolean _tmp0_;
	FolksSmallSet* new_anti_links;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	FolksSmallSet* _tmp3_;
	FolksSmallSet* _tmp4_;
	FolksSmallSet* _tmp5_;
	GError * _inner_error_;
};

struct _FolksAntiLinkableRemoveGlobalAntiLinkData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GAsyncReadyCallback _callback_;
	gboolean _task_complete_;
	FolksAntiLinkable* self;
	gboolean _tmp0_;
	FolksSmallSet* new_anti_links;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	FolksSmallSet* _tmp3_;
	FolksSmallSet* _tmp4_;
	FolksSmallSet* _tmp5_;
	GError * _inner_error_;
};



GType folks_persona_get_type (void) G_GNUC_CONST;
GQuark folks_property_error_quark (void);
GType folks_anti_linkable_get_type (void) G_GNUC_CONST;
static void folks_anti_linkable_real_change_anti_links_data_free (gpointer _data);
static void folks_anti_linkable_real_change_anti_links_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
static void folks_anti_linkable_real_change_anti_links (FolksAntiLinkable* self, GeeSet* anti_links, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_anti_linkable_change_anti_links (FolksAntiLinkable* self, GeeSet* anti_links, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_anti_linkable_change_anti_links_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error);
static gboolean folks_anti_linkable_real_change_anti_links_co (FolksAntiLinkableChangeAntiLinksData* _data_);
gboolean folks_anti_linkable_has_anti_link_with_persona (FolksAntiLinkable* self, FolksPersona* other_persona);
gboolean folks_anti_linkable_has_global_anti_link (FolksAntiLinkable* self);
GeeSet* folks_anti_linkable_get_anti_links (FolksAntiLinkable* self);
const gchar* folks_persona_get_uid (FolksPersona* self);
static void folks_anti_linkable_add_anti_links_data_free (gpointer _data);
static void folks_anti_linkable_add_anti_links_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
void folks_anti_linkable_add_anti_links (FolksAntiLinkable* self, GeeSet* other_personas, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_anti_linkable_add_anti_links_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error);
static gboolean folks_anti_linkable_add_anti_links_co (FolksAntiLinkableAddAntiLinksData* _data_);
static void folks_anti_linkable_add_anti_links_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void folks_anti_linkable_remove_anti_links_data_free (gpointer _data);
static void folks_anti_linkable_remove_anti_links_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
void folks_anti_linkable_remove_anti_links (FolksAntiLinkable* self, GeeSet* other_personas, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_anti_linkable_remove_anti_links_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error);
static gboolean folks_anti_linkable_remove_anti_links_co (FolksAntiLinkableRemoveAntiLinksData* _data_);
static void folks_anti_linkable_remove_anti_links_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void folks_anti_linkable_add_global_anti_link_data_free (gpointer _data);
static void folks_anti_linkable_add_global_anti_link_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
void folks_anti_linkable_add_global_anti_link (FolksAntiLinkable* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_anti_linkable_add_global_anti_link_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error);
static gboolean folks_anti_linkable_add_global_anti_link_co (FolksAntiLinkableAddGlobalAntiLinkData* _data_);
static void folks_anti_linkable_add_global_anti_link_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void folks_anti_linkable_remove_global_anti_link_data_free (gpointer _data);
static void folks_anti_linkable_remove_global_anti_link_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data);
void folks_anti_linkable_remove_global_anti_link (FolksAntiLinkable* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_anti_linkable_remove_global_anti_link_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error);
static gboolean folks_anti_linkable_remove_global_anti_link_co (FolksAntiLinkableRemoveGlobalAntiLinkData* _data_);
static void folks_anti_linkable_remove_global_anti_link_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
void folks_anti_linkable_set_anti_links (FolksAntiLinkable* self, GeeSet* value);


static void folks_anti_linkable_real_change_anti_links_data_free (gpointer _data) {
	FolksAntiLinkableChangeAntiLinksData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->anti_links);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksAntiLinkableChangeAntiLinksData, _data_);
}


static void folks_anti_linkable_real_change_anti_links_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksAntiLinkableChangeAntiLinksData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void folks_anti_linkable_real_change_anti_links (FolksAntiLinkable* self, GeeSet* anti_links, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksAntiLinkableChangeAntiLinksData* _data_;
	FolksAntiLinkable* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	_data_ = g_slice_new0 (FolksAntiLinkableChangeAntiLinksData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_anti_linkable_real_change_anti_links_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_anti_linkable_real_change_anti_links_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = anti_links;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->anti_links);
	_data_->anti_links = _tmp2_;
	folks_anti_linkable_real_change_anti_links_co (_data_);
}


static void folks_anti_linkable_real_change_anti_links_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error) {
	FolksAntiLinkableChangeAntiLinksData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Change the {@link Persona}'s set of anti-links.
   *
   * It's preferred to call this rather than setting
   * {@link AntiLinkable.anti_links} directly, as this method gives error
   * notification and will only return once the anti-links have been written
   * to the relevant backing store (or the operation's failed).
   *
   * It should be noted that {@link IndividualAggregator.link_personas} and
   * {@link IndividualAggregator.unlink_individual} will modify the anti-links
   * sets of the personas they touch, in order to remove and add anti-links,
   * respectively. It is expected that these {@link IndividualAggregator}
   * methods will be used to modify anti-links indirectly, rather than calling
   * {@link AntiLinkable.change_anti_links} directly.
   *
   * @param anti_links the new set of anti-links from this persona
   * @throws PropertyError if setting the anti-links failed
   * @since 0.7.3
   */
static gboolean folks_anti_linkable_real_change_anti_links_co (FolksAntiLinkableChangeAntiLinksData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = g_error_new_literal (FOLKS_PROPERTY_ERROR, FOLKS_PROPERTY_ERROR_NOT_WRITEABLE, _ ("Anti-links are not writeable on this contact."));
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


void folks_anti_linkable_change_anti_links (FolksAntiLinkable* self, GeeSet* anti_links, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FOLKS_ANTI_LINKABLE_GET_INTERFACE (self)->change_anti_links (self, anti_links, _callback_, _user_data_);
}


void folks_anti_linkable_change_anti_links_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error) {
	FOLKS_ANTI_LINKABLE_GET_INTERFACE (self)->change_anti_links_finish (self, _res_, error);
}


/**
   * Check for an anti-link with another persona.
   *
   * This will return ``true`` if ``other_persona``'s UID is listed in this
   * persona's anti-links set. Note that this check is not symmetric.
   *
   * @param other_persona the persona to check is anti-linked
   * @return ``true`` if an anti-link exists, ``false`` otherwise
   * @since 0.7.3
   */
gboolean folks_anti_linkable_has_anti_link_with_persona (FolksAntiLinkable* self, FolksPersona* other_persona) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_;
	g_return_val_if_fail (other_persona != NULL, FALSE);
	_tmp1_ = folks_anti_linkable_has_global_anti_link (self);
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		GeeSet* _tmp2_;
		GeeSet* _tmp3_;
		FolksPersona* _tmp4_;
		const gchar* _tmp5_;
		const gchar* _tmp6_;
		gboolean _tmp7_;
		_tmp2_ = folks_anti_linkable_get_anti_links (self);
		_tmp3_ = _tmp2_;
		_tmp4_ = other_persona;
		_tmp5_ = folks_persona_get_uid (_tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = gee_collection_contains ((GeeCollection*) _tmp3_, _tmp6_);
		_tmp0_ = _tmp7_;
	}
	result = _tmp0_;
	return result;
}


static void folks_anti_linkable_add_anti_links_data_free (gpointer _data) {
	FolksAntiLinkableAddAntiLinksData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->other_personas);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksAntiLinkableAddAntiLinksData, _data_);
}


static void folks_anti_linkable_add_anti_links_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksAntiLinkableAddAntiLinksData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


void folks_anti_linkable_add_anti_links (FolksAntiLinkable* self, GeeSet* other_personas, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksAntiLinkableAddAntiLinksData* _data_;
	FolksAntiLinkable* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	_data_ = g_slice_new0 (FolksAntiLinkableAddAntiLinksData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_anti_linkable_add_anti_links_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_anti_linkable_add_anti_links_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = other_personas;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->other_personas);
	_data_->other_personas = _tmp2_;
	folks_anti_linkable_add_anti_links_co (_data_);
}


void folks_anti_linkable_add_anti_links_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error) {
	FolksAntiLinkableAddAntiLinksData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Add anti-links to other personas.
   *
   * The UIDs of all personas in ``other_personas`` will be added to this
   * persona's anti-links set and the changes propagated to backends.
   *
   * Any attempt to anti-link a persona with itself is not an error, but is
   * ignored.
   *
   * This method is safe to call multiple times concurrently (e.g. begin one
   * asynchronous call, then begin another before the first has finished).
   *
   * @param other_personas the personas to anti-link to this one
   * @throws PropertyError if setting the anti-links failed
   * @since 0.7.3
   */
static void folks_anti_linkable_add_anti_links_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	FolksAntiLinkableAddAntiLinksData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	_data_->_task_complete_ = TRUE;
	folks_anti_linkable_add_anti_links_co (_data_);
}


static gboolean folks_anti_linkable_add_anti_links_co (FolksAntiLinkableAddAntiLinksData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = folks_anti_linkable_get_anti_links (_data_->self);
	_data_->_tmp1_ = _data_->_tmp0_;
	_data_->_tmp2_ = folks_small_set_copy ((GeeIterable*) _data_->_tmp1_, NULL, NULL, NULL, NULL, NULL, NULL);
	_data_->new_anti_links = _data_->_tmp2_;
	{
		_data_->_tmp3_ = _data_->other_personas;
		_data_->_tmp4_ = gee_iterable_iterator ((GeeIterable*) _data_->_tmp3_);
		_data_->_p_it = _data_->_tmp4_;
		while (TRUE) {
			_data_->_tmp5_ = _data_->_p_it;
			_data_->_tmp6_ = gee_iterator_next (_data_->_tmp5_);
			if (!_data_->_tmp6_) {
				break;
			}
			_data_->_tmp7_ = _data_->_p_it;
			_data_->_tmp8_ = gee_iterator_get (_data_->_tmp7_);
			_data_->p = (FolksPersona*) _data_->_tmp8_;
			_data_->_tmp9_ = _data_->p;
			if (_data_->_tmp9_ == _data_->self) {
				_g_object_unref0 (_data_->p);
				continue;
			}
			_data_->_tmp10_ = _data_->new_anti_links;
			_data_->_tmp11_ = _data_->p;
			_data_->_tmp12_ = folks_persona_get_uid (_data_->_tmp11_);
			_data_->_tmp13_ = _data_->_tmp12_;
			gee_abstract_collection_add ((GeeAbstractCollection*) _data_->_tmp10_, _data_->_tmp13_);
			_g_object_unref0 (_data_->p);
		}
		_g_object_unref0 (_data_->_p_it);
	}
	_data_->_tmp14_ = _data_->new_anti_links;
	_data_->_state_ = 1;
	folks_anti_linkable_change_anti_links (_data_->self, (GeeSet*) _data_->_tmp14_, folks_anti_linkable_add_anti_links_ready, _data_);
	return FALSE;
	_state_1:
	folks_anti_linkable_change_anti_links_finish (_data_->self, _data_->_res_, &_data_->_inner_error_);
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
		if (_data_->_inner_error_->domain == FOLKS_PROPERTY_ERROR) {
			g_task_return_error (_data_->_async_result, _data_->_inner_error_);
			_g_object_unref0 (_data_->new_anti_links);
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			_g_object_unref0 (_data_->new_anti_links);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
			g_clear_error (&_data_->_inner_error_);
			g_object_unref (_data_->_async_result);
			return FALSE;
		}
	}
	_g_object_unref0 (_data_->new_anti_links);
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
	if (_data_->_state_ != 0) {
		while (_data_->_task_complete_ != TRUE) {
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
		}
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void folks_anti_linkable_remove_anti_links_data_free (gpointer _data) {
	FolksAntiLinkableRemoveAntiLinksData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->other_personas);
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksAntiLinkableRemoveAntiLinksData, _data_);
}


static void folks_anti_linkable_remove_anti_links_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksAntiLinkableRemoveAntiLinksData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


void folks_anti_linkable_remove_anti_links (FolksAntiLinkable* self, GeeSet* other_personas, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksAntiLinkableRemoveAntiLinksData* _data_;
	FolksAntiLinkable* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	_data_ = g_slice_new0 (FolksAntiLinkableRemoveAntiLinksData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_anti_linkable_remove_anti_links_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_anti_linkable_remove_anti_links_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = other_personas;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->other_personas);
	_data_->other_personas = _tmp2_;
	folks_anti_linkable_remove_anti_links_co (_data_);
}


void folks_anti_linkable_remove_anti_links_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error) {
	FolksAntiLinkableRemoveAntiLinksData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Remove anti-links to other personas.
   *
   * The UIDs of all personas in ``other_personas`` will be removed from this
   * persona's anti-links set and the changes propagated to backends.
   *
   * If the global anti-link is set, this will not have any effect until the 
   * global anti-link is removed.
   *
   * This method is safe to call multiple times concurrently (e.g. begin one
   * asynchronous call, then begin another before the first has finished).
   *
   * @param other_personas the personas to remove anti-links from this one
   * @throws PropertyError if setting the anti-links failed
   * @since 0.7.3
   */
static void folks_anti_linkable_remove_anti_links_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	FolksAntiLinkableRemoveAntiLinksData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	_data_->_task_complete_ = TRUE;
	folks_anti_linkable_remove_anti_links_co (_data_);
}


static gboolean folks_anti_linkable_remove_anti_links_co (FolksAntiLinkableRemoveAntiLinksData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = folks_anti_linkable_get_anti_links (_data_->self);
	_data_->_tmp1_ = _data_->_tmp0_;
	_data_->_tmp2_ = folks_small_set_copy ((GeeIterable*) _data_->_tmp1_, NULL, NULL, NULL, NULL, NULL, NULL);
	_data_->new_anti_links = _data_->_tmp2_;
	{
		_data_->_tmp3_ = _data_->other_personas;
		_data_->_tmp4_ = gee_iterable_iterator ((GeeIterable*) _data_->_tmp3_);
		_data_->_p_it = _data_->_tmp4_;
		while (TRUE) {
			_data_->_tmp5_ = _data_->_p_it;
			_data_->_tmp6_ = gee_iterator_next (_data_->_tmp5_);
			if (!_data_->_tmp6_) {
				break;
			}
			_data_->_tmp7_ = _data_->_p_it;
			_data_->_tmp8_ = gee_iterator_get (_data_->_tmp7_);
			_data_->p = (FolksPersona*) _data_->_tmp8_;
			_data_->_tmp9_ = _data_->new_anti_links;
			_data_->_tmp10_ = _data_->p;
			_data_->_tmp11_ = folks_persona_get_uid (_data_->_tmp10_);
			_data_->_tmp12_ = _data_->_tmp11_;
			gee_abstract_collection_remove ((GeeAbstractCollection*) _data_->_tmp9_, _data_->_tmp12_);
			_g_object_unref0 (_data_->p);
		}
		_g_object_unref0 (_data_->_p_it);
	}
	_data_->_tmp13_ = _data_->new_anti_links;
	_data_->_state_ = 1;
	folks_anti_linkable_change_anti_links (_data_->self, (GeeSet*) _data_->_tmp13_, folks_anti_linkable_remove_anti_links_ready, _data_);
	return FALSE;
	_state_1:
	folks_anti_linkable_change_anti_links_finish (_data_->self, _data_->_res_, &_data_->_inner_error_);
	if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
		if (_data_->_inner_error_->domain == FOLKS_PROPERTY_ERROR) {
			g_task_return_error (_data_->_async_result, _data_->_inner_error_);
			_g_object_unref0 (_data_->new_anti_links);
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			_g_object_unref0 (_data_->new_anti_links);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
			g_clear_error (&_data_->_inner_error_);
			g_object_unref (_data_->_async_result);
			return FALSE;
		}
	}
	_g_object_unref0 (_data_->new_anti_links);
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
	if (_data_->_state_ != 0) {
		while (_data_->_task_complete_ != TRUE) {
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
		}
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void folks_anti_linkable_add_global_anti_link_data_free (gpointer _data) {
	FolksAntiLinkableAddGlobalAntiLinkData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksAntiLinkableAddGlobalAntiLinkData, _data_);
}


static void folks_anti_linkable_add_global_anti_link_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksAntiLinkableAddGlobalAntiLinkData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


void folks_anti_linkable_add_global_anti_link (FolksAntiLinkable* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksAntiLinkableAddGlobalAntiLinkData* _data_;
	FolksAntiLinkable* _tmp0_;
	_data_ = g_slice_new0 (FolksAntiLinkableAddGlobalAntiLinkData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_anti_linkable_add_global_anti_link_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_anti_linkable_add_global_anti_link_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	folks_anti_linkable_add_global_anti_link_co (_data_);
}


void folks_anti_linkable_add_global_anti_link_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error) {
	FolksAntiLinkableAddGlobalAntiLinkData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Prevent persona from being linked with any other personas
   *
   * This function will add a wildcard ``*`` to the set of anti-links, which will
   * prevent the persona from being linked with any other personas.
   *
   * To make the persona linkable again you need to remove the global anti-link
   *
   * This method is safe to call multiple times concurrently (e.g. begin one
   * asynchronous call, then begin another before the first has finished).
   *
   * @throws PropertyError if setting the anti-links failed
   * @since 0.9.7
   */
static void folks_anti_linkable_add_global_anti_link_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	FolksAntiLinkableAddGlobalAntiLinkData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	_data_->_task_complete_ = TRUE;
	folks_anti_linkable_add_global_anti_link_co (_data_);
}


static gboolean folks_anti_linkable_add_global_anti_link_co (FolksAntiLinkableAddGlobalAntiLinkData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = folks_anti_linkable_has_global_anti_link (_data_->self);
	if (!_data_->_tmp0_) {
		_data_->_tmp1_ = folks_anti_linkable_get_anti_links (_data_->self);
		_data_->_tmp2_ = _data_->_tmp1_;
		_data_->_tmp3_ = folks_small_set_copy ((GeeIterable*) _data_->_tmp2_, NULL, NULL, NULL, NULL, NULL, NULL);
		_data_->new_anti_links = _data_->_tmp3_;
		_data_->_tmp4_ = _data_->new_anti_links;
		gee_abstract_collection_add ((GeeAbstractCollection*) _data_->_tmp4_, "*");
		_data_->_tmp5_ = _data_->new_anti_links;
		_data_->_state_ = 1;
		folks_anti_linkable_change_anti_links (_data_->self, (GeeSet*) _data_->_tmp5_, folks_anti_linkable_add_global_anti_link_ready, _data_);
		return FALSE;
		_state_1:
		folks_anti_linkable_change_anti_links_finish (_data_->self, _data_->_res_, &_data_->_inner_error_);
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
			if (_data_->_inner_error_->domain == FOLKS_PROPERTY_ERROR) {
				g_task_return_error (_data_->_async_result, _data_->_inner_error_);
				_g_object_unref0 (_data_->new_anti_links);
				g_object_unref (_data_->_async_result);
				return FALSE;
			} else {
				_g_object_unref0 (_data_->new_anti_links);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
				g_clear_error (&_data_->_inner_error_);
				g_object_unref (_data_->_async_result);
				return FALSE;
			}
		}
		_g_object_unref0 (_data_->new_anti_links);
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


static void folks_anti_linkable_remove_global_anti_link_data_free (gpointer _data) {
	FolksAntiLinkableRemoveGlobalAntiLinkData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksAntiLinkableRemoveGlobalAntiLinkData, _data_);
}


static void folks_anti_linkable_remove_global_anti_link_async_ready_wrapper (GObject *source_object, GAsyncResult *res, void *user_data) {
	FolksAntiLinkableRemoveGlobalAntiLinkData* _task_data_;
	_task_data_ = g_task_get_task_data (G_TASK (res));
	if (_task_data_->_callback_ != NULL) {
		_task_data_->_callback_ (source_object, res, user_data);
	}
	_task_data_->_task_complete_ = TRUE;
}


void folks_anti_linkable_remove_global_anti_link (FolksAntiLinkable* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksAntiLinkableRemoveGlobalAntiLinkData* _data_;
	FolksAntiLinkable* _tmp0_;
	_data_ = g_slice_new0 (FolksAntiLinkableRemoveGlobalAntiLinkData);
	_data_->_callback_ = _callback_;
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, folks_anti_linkable_remove_global_anti_link_async_ready_wrapper, _user_data_);
	if (_callback_ == NULL) {
		_data_->_task_complete_ = TRUE;
	}
	g_task_set_task_data (_data_->_async_result, _data_, folks_anti_linkable_remove_global_anti_link_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	folks_anti_linkable_remove_global_anti_link_co (_data_);
}


void folks_anti_linkable_remove_global_anti_link_finish (FolksAntiLinkable* self, GAsyncResult* _res_, GError** error) {
	FolksAntiLinkableRemoveGlobalAntiLinkData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return;
	}
}


/**
   * Allow persona to be linked with other personas
   *
   * This function removes the wildcard ``*`` from the set of anti-links, allowing
   * the persona to be linked again.
   *
   * This method is safe to call multiple times concurrently (e.g. begin one
   * asynchronous call, then begin another before the first has finished).
   *
   * @throws PropertyError if setting the anti-links failed
   * @since 0.9.7
   */
static void folks_anti_linkable_remove_global_anti_link_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	FolksAntiLinkableRemoveGlobalAntiLinkData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	_data_->_task_complete_ = TRUE;
	folks_anti_linkable_remove_global_anti_link_co (_data_);
}


static gboolean folks_anti_linkable_remove_global_anti_link_co (FolksAntiLinkableRemoveGlobalAntiLinkData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = folks_anti_linkable_has_global_anti_link (_data_->self);
	if (_data_->_tmp0_) {
		_data_->_tmp1_ = folks_anti_linkable_get_anti_links (_data_->self);
		_data_->_tmp2_ = _data_->_tmp1_;
		_data_->_tmp3_ = folks_small_set_copy ((GeeIterable*) _data_->_tmp2_, NULL, NULL, NULL, NULL, NULL, NULL);
		_data_->new_anti_links = _data_->_tmp3_;
		_data_->_tmp4_ = _data_->new_anti_links;
		gee_abstract_collection_remove ((GeeAbstractCollection*) _data_->_tmp4_, "*");
		_data_->_tmp5_ = _data_->new_anti_links;
		_data_->_state_ = 1;
		folks_anti_linkable_change_anti_links (_data_->self, (GeeSet*) _data_->_tmp5_, folks_anti_linkable_remove_global_anti_link_ready, _data_);
		return FALSE;
		_state_1:
		folks_anti_linkable_change_anti_links_finish (_data_->self, _data_->_res_, &_data_->_inner_error_);
		if (G_UNLIKELY (_data_->_inner_error_ != NULL)) {
			if (_data_->_inner_error_->domain == FOLKS_PROPERTY_ERROR) {
				g_task_return_error (_data_->_async_result, _data_->_inner_error_);
				_g_object_unref0 (_data_->new_anti_links);
				g_object_unref (_data_->_async_result);
				return FALSE;
			} else {
				_g_object_unref0 (_data_->new_anti_links);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
				g_clear_error (&_data_->_inner_error_);
				g_object_unref (_data_->_async_result);
				return FALSE;
			}
		}
		_g_object_unref0 (_data_->new_anti_links);
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


/**
   * Check if the persona has a global anti link.
   *
   * If the persona has global anti link this means that the persona can not be
   * linked with any other persona.
   *
   * @since 0.9.7
   */
gboolean folks_anti_linkable_has_global_anti_link (FolksAntiLinkable* self) {
	gboolean result = FALSE;
	GeeSet* _tmp0_;
	GeeSet* _tmp1_;
	gboolean _tmp2_;
	_tmp0_ = folks_anti_linkable_get_anti_links (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_collection_contains ((GeeCollection*) _tmp1_, "*");
	result = _tmp2_;
	return result;
}


GeeSet* folks_anti_linkable_get_anti_links (FolksAntiLinkable* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return FOLKS_ANTI_LINKABLE_GET_INTERFACE (self)->get_anti_links (self);
}


void folks_anti_linkable_set_anti_links (FolksAntiLinkable* self, GeeSet* value) {
	g_return_if_fail (self != NULL);
	FOLKS_ANTI_LINKABLE_GET_INTERFACE (self)->set_anti_links (self, value);
}


static void folks_anti_linkable_base_init (FolksAntiLinkableIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		   * UIDs of anti-linked {@link Persona}s.
		   *
		   * The {@link Persona}s identified by their UIDs in this set are guaranteed to
		   * not be linked to this {@link Persona}, even if their linkable properties
		   * match.
		   *
		   * No UIDs may be ``null``. Well-formed but non-existent UIDs (i.e. UIDs which
		   * can be successfully parsed, but which don't currently correspond to a
		   * {@link Persona} instance) are permitted, as personas may appear and
		   * disappear over time.
		   *
		   * The special UID ``*`` is used as a wildcard to mark the persona as globally
		   * anti-linked. See {@link AntiLinkable.has_global_anti_link}.
		   *
		   * It is expected, but not guaranteed, that anti-links made between personas
		   * will be reciprocal. That is, if persona A lists persona B's UID in its
		   * {@link AntiLinkable.anti_links} set, persona B will typically also list
		   * persona A in its anti-links set.
		   *
		   * @since 0.7.3
		   */
		g_object_interface_install_property (iface, g_param_spec_object ("anti-links", "anti-links", "anti-links", GEE_TYPE_SET, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
		iface->change_anti_links = folks_anti_linkable_real_change_anti_links;
		iface->change_anti_links_finish = folks_anti_linkable_real_change_anti_links_finish;
	}
}


/**
 * Interface for {@link Persona} subclasses from backends which support storage
 * of, anti-linking data.
 *
 * Anti-links are stored as a set of {@link Persona.uid}s with each
 * {@link Persona} (A), specifying that A must not be linked into an
 * {@link Individual} with any of the personas in its anti-links set.
 *
 * @since 0.7.3
 */
GType folks_anti_linkable_get_type (void) {
	static volatile gsize folks_anti_linkable_type_id__volatile = 0;
	if (g_once_init_enter (&folks_anti_linkable_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksAntiLinkableIface), (GBaseInitFunc) folks_anti_linkable_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType folks_anti_linkable_type_id;
		folks_anti_linkable_type_id = g_type_register_static (G_TYPE_INTERFACE, "FolksAntiLinkable", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (folks_anti_linkable_type_id, FOLKS_TYPE_PERSONA);
		g_once_init_leave (&folks_anti_linkable_type_id__volatile, folks_anti_linkable_type_id);
	}
	return folks_anti_linkable_type_id__volatile;
}



