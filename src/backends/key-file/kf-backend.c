/* kf-backend.c generated by valac 0.20.1.30-1b1d, the Vala compiler
 * generated from kf-backend.vala, do not modify */

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
 *       Philip Withnall <philip.withnall@collabora.co.uk>
 */

#include <glib.h>
#include <glib-object.h>
#include <folks/folks.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <folks-internal.h>


#define FOLKS_BACKENDS_KF_TYPE_BACKEND (folks_backends_kf_backend_get_type ())
#define FOLKS_BACKENDS_KF_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_BACKENDS_KF_TYPE_BACKEND, FolksBackendsKfBackend))
#define FOLKS_BACKENDS_KF_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_BACKENDS_KF_TYPE_BACKEND, FolksBackendsKfBackendClass))
#define FOLKS_BACKENDS_KF_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_BACKENDS_KF_TYPE_BACKEND))
#define FOLKS_BACKENDS_KF_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_BACKENDS_KF_TYPE_BACKEND))
#define FOLKS_BACKENDS_KF_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_BACKENDS_KF_TYPE_BACKEND, FolksBackendsKfBackendClass))

typedef struct _FolksBackendsKfBackend FolksBackendsKfBackend;
typedef struct _FolksBackendsKfBackendClass FolksBackendsKfBackendClass;
typedef struct _FolksBackendsKfBackendPrivate FolksBackendsKfBackendPrivate;

#define FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE (folks_backends_kf_persona_store_get_type ())
#define FOLKS_BACKENDS_KF_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE, FolksBackendsKfPersonaStore))
#define FOLKS_BACKENDS_KF_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE, FolksBackendsKfPersonaStoreClass))
#define FOLKS_BACKENDS_KF_IS_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE))
#define FOLKS_BACKENDS_KF_IS_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE))
#define FOLKS_BACKENDS_KF_PERSONA_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE, FolksBackendsKfPersonaStoreClass))

typedef struct _FolksBackendsKfPersonaStore FolksBackendsKfPersonaStore;
typedef struct _FolksBackendsKfPersonaStoreClass FolksBackendsKfPersonaStoreClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _FolksBackendsKfBackendPrepareData FolksBackendsKfBackendPrepareData;
typedef struct _FolksBackendsKfBackendUnprepareData FolksBackendsKfBackendUnprepareData;

struct _FolksBackendsKfBackend {
	FolksBackend parent_instance;
	FolksBackendsKfBackendPrivate * priv;
};

struct _FolksBackendsKfBackendClass {
	FolksBackendClass parent_class;
};

struct _FolksBackendsKfBackendPrivate {
	gboolean _is_prepared;
	gboolean _prepare_pending;
	gboolean _is_quiescent;
	GeeHashMap* _persona_stores;
	GeeMap* _persona_stores_ro;
};

struct _FolksBackendsKfBackendPrepareData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksBackendsKfBackend* self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	GFile* file;
	const gchar* path;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	GFile* _tmp6_;
	GFile* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	const gchar* _tmp10_;
	GFile* _tmp11_;
	const gchar* _tmp12_;
	FolksBackendsKfPersonaStore* store;
	GFile* _tmp13_;
	FolksBackendsKfPersonaStore* _tmp14_;
	FolksBackendsKfPersonaStore* _tmp15_;
	GError * _inner_error_;
};

struct _FolksBackendsKfBackendUnprepareData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksBackendsKfBackend* self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	GeeIterator* _persona_store_it;
	GeeHashMap* _tmp4_;
	GeeCollection* _tmp5_;
	GeeCollection* _tmp6_;
	GeeCollection* _tmp7_;
	GeeIterator* _tmp8_;
	GeeIterator* _tmp9_;
	GeeIterator* _tmp10_;
	gboolean _tmp11_;
	FolksBackendsKfPersonaStore* persona_store;
	GeeIterator* _tmp12_;
	gpointer _tmp13_;
	FolksBackendsKfPersonaStore* _tmp14_;
	GeeHashMap* _tmp15_;
	GError * _inner_error_;
};


static gpointer folks_backends_kf_backend_parent_class = NULL;

GType folks_backends_kf_backend_get_type (void) G_GNUC_CONST;
GType folks_backends_kf_persona_store_get_type (void) G_GNUC_CONST;
#define FOLKS_BACKENDS_KF_BACKEND_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FOLKS_BACKENDS_KF_TYPE_BACKEND, FolksBackendsKfBackendPrivate))
enum  {
	FOLKS_BACKENDS_KF_BACKEND_DUMMY_PROPERTY,
	FOLKS_BACKENDS_KF_BACKEND_IS_PREPARED,
	FOLKS_BACKENDS_KF_BACKEND_IS_QUIESCENT,
	FOLKS_BACKENDS_KF_BACKEND_NAME,
	FOLKS_BACKENDS_KF_BACKEND_PERSONA_STORES
};
static void folks_backends_kf_backend_real_enable_persona_store (FolksBackend* base, FolksPersonaStore* store);
static void _folks_backends_kf_backend_add_store (FolksBackendsKfBackend* self, FolksBackendsKfPersonaStore* store, gboolean notify);
static void folks_backends_kf_backend_real_disable_persona_store (FolksBackend* base, FolksPersonaStore* store);
static void _folks_backends_kf_backend_store_removed_cb (FolksBackendsKfBackend* self, FolksPersonaStore* store);
static GFile* _folks_backends_kf_backend_get_default_file (FolksBackendsKfBackend* self, const gchar* basename);
static void folks_backends_kf_backend_real_set_persona_stores (FolksBackend* base, GeeSet* storeids);
FolksBackendsKfPersonaStore* folks_backends_kf_persona_store_new (GFile* key_file);
FolksBackendsKfPersonaStore* folks_backends_kf_persona_store_construct (GType object_type, GFile* key_file);
static void _vala_array_add1 (FolksBackendsKfPersonaStore*** array, int* length, int* size, FolksBackendsKfPersonaStore* value);
static void _folks_backends_kf_backend_remove_store (FolksBackendsKfBackend* self, FolksBackendsKfPersonaStore* store, gboolean notify);
FolksBackendsKfBackend* folks_backends_kf_backend_new (void);
FolksBackendsKfBackend* folks_backends_kf_backend_construct (GType object_type);
static void folks_backends_kf_backend_real_prepare_data_free (gpointer _data);
static void folks_backends_kf_backend_real_prepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_backends_kf_backend_real_prepare_co (FolksBackendsKfBackendPrepareData* _data_);
static void __folks_backends_kf_backend_store_removed_cb_folks_persona_store_removed (FolksPersonaStore* _sender, gpointer self);
static void folks_backends_kf_backend_real_unprepare_data_free (gpointer _data);
static void folks_backends_kf_backend_real_unprepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_backends_kf_backend_real_unprepare_co (FolksBackendsKfBackendUnprepareData* _data_);
static GObject * folks_backends_kf_backend_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void folks_backends_kf_backend_finalize (GObject* obj);
static void _vala_folks_backends_kf_backend_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
   * {@inheritDoc}
   */
static void folks_backends_kf_backend_real_enable_persona_store (FolksBackend* base, FolksPersonaStore* store) {
	FolksBackendsKfBackend * self;
	GeeHashMap* _tmp0_;
	FolksPersonaStore* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gboolean _tmp4_ = FALSE;
	self = (FolksBackendsKfBackend*) base;
	g_return_if_fail (store != NULL);
	_tmp0_ = self->priv->_persona_stores;
	_tmp1_ = store;
	_tmp2_ = folks_persona_store_get_id (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp0_, _tmp3_);
	if (_tmp4_ == FALSE) {
		FolksPersonaStore* _tmp5_;
		_tmp5_ = store;
		_folks_backends_kf_backend_add_store (self, G_TYPE_CHECK_INSTANCE_CAST (_tmp5_, FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE, FolksBackendsKfPersonaStore), TRUE);
	}
}


/**
   * {@inheritDoc}
   */
static void folks_backends_kf_backend_real_disable_persona_store (FolksBackend* base, FolksPersonaStore* store) {
	FolksBackendsKfBackend * self;
	GeeHashMap* _tmp0_;
	FolksPersonaStore* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gboolean _tmp4_ = FALSE;
	self = (FolksBackendsKfBackend*) base;
	g_return_if_fail (store != NULL);
	_tmp0_ = self->priv->_persona_stores;
	_tmp1_ = store;
	_tmp2_ = folks_persona_store_get_id (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp0_, _tmp3_);
	if (_tmp4_) {
		FolksPersonaStore* _tmp5_;
		_tmp5_ = store;
		_folks_backends_kf_backend_store_removed_cb (self, _tmp5_);
	}
}


static GFile* _folks_backends_kf_backend_get_default_file (FolksBackendsKfBackend* self, const gchar* basename) {
	GFile* result = NULL;
	gchar* filename = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	GFile* file = NULL;
	const gchar* _tmp2_ = NULL;
	GFile* _tmp3_ = NULL;
	GFile* _tmp4_;
	GFile* _tmp5_ = NULL;
	GFile* _tmp6_;
	GFile* _tmp7_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (basename != NULL, NULL);
	_tmp0_ = basename;
	_tmp1_ = g_strconcat (_tmp0_, ".ini", NULL);
	filename = _tmp1_;
	_tmp2_ = g_get_user_data_dir ();
	_tmp3_ = g_file_new_for_path (_tmp2_);
	file = _tmp3_;
	_tmp4_ = file;
	_tmp5_ = g_file_get_child (_tmp4_, "folks");
	_g_object_unref0 (file);
	file = _tmp5_;
	_tmp6_ = file;
	_tmp7_ = g_file_get_child (_tmp6_, filename);
	_g_object_unref0 (file);
	file = _tmp7_;
	result = file;
	_g_free0 (filename);
	return result;
}


/**
   * {@inheritDoc}
   * In this implementation storeids are assumed to be base filenames for
   * ini files under user_data_dir()/folks/ like the default relationships 
   * {@link PersonaStore}.
   */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _vala_array_add1 (FolksBackendsKfPersonaStore*** array, int* length, int* size, FolksBackendsKfPersonaStore* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (FolksBackendsKfPersonaStore*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void folks_backends_kf_backend_real_set_persona_stores (FolksBackend* base, GeeSet* storeids) {
	FolksBackendsKfBackend * self;
	gboolean added_stores = FALSE;
	FolksBackendsKfPersonaStore** removed_stores = NULL;
	FolksBackendsKfPersonaStore** _tmp0_ = NULL;
	gint removed_stores_length1;
	gint _removed_stores_size_;
	gboolean _tmp41_ = FALSE;
	gboolean _tmp42_;
	gboolean _tmp44_;
	self = (FolksBackendsKfBackend*) base;
	added_stores = FALSE;
	_tmp0_ = g_new0 (FolksBackendsKfPersonaStore*, 0 + 1);
	removed_stores = _tmp0_;
	removed_stores_length1 = 0;
	_removed_stores_size_ = removed_stores_length1;
	{
		GeeIterator* _id_it = NULL;
		GeeSet* _tmp1_;
		GeeIterator* _tmp2_ = NULL;
		_tmp1_ = storeids;
		_tmp2_ = gee_iterable_iterator ((GeeIterable*) _tmp1_);
		_id_it = _tmp2_;
		while (TRUE) {
			GeeIterator* _tmp3_;
			gboolean _tmp4_ = FALSE;
			gchar* id = NULL;
			GeeIterator* _tmp5_;
			gpointer _tmp6_ = NULL;
			GeeHashMap* _tmp7_;
			const gchar* _tmp8_;
			gboolean _tmp9_ = FALSE;
			_tmp3_ = _id_it;
			_tmp4_ = gee_iterator_next (_tmp3_);
			if (!_tmp4_) {
				break;
			}
			_tmp5_ = _id_it;
			_tmp6_ = gee_iterator_get (_tmp5_);
			id = (gchar*) _tmp6_;
			_tmp7_ = self->priv->_persona_stores;
			_tmp8_ = id;
			_tmp9_ = gee_abstract_map_has_key ((GeeAbstractMap*) _tmp7_, _tmp8_);
			if (_tmp9_ == FALSE) {
				GFile* file = NULL;
				const gchar* _tmp10_;
				GFile* _tmp11_ = NULL;
				FolksBackendsKfPersonaStore* store = NULL;
				GFile* _tmp12_;
				FolksBackendsKfPersonaStore* _tmp13_;
				FolksBackendsKfPersonaStore* _tmp14_;
				_tmp10_ = id;
				_tmp11_ = _folks_backends_kf_backend_get_default_file (self, _tmp10_);
				file = _tmp11_;
				_tmp12_ = file;
				_tmp13_ = folks_backends_kf_persona_store_new (_tmp12_);
				store = _tmp13_;
				_tmp14_ = store;
				_folks_backends_kf_backend_add_store (self, _tmp14_, FALSE);
				added_stores = TRUE;
				_g_object_unref0 (store);
				_g_object_unref0 (file);
			}
			_g_free0 (id);
		}
		_g_object_unref0 (_id_it);
	}
	{
		GeeIterator* _store_it = NULL;
		GeeHashMap* _tmp15_;
		GeeCollection* _tmp16_;
		GeeCollection* _tmp17_;
		GeeCollection* _tmp18_;
		GeeIterator* _tmp19_ = NULL;
		GeeIterator* _tmp20_;
		_tmp15_ = self->priv->_persona_stores;
		_tmp16_ = gee_abstract_map_get_values ((GeeMap*) _tmp15_);
		_tmp17_ = _tmp16_;
		_tmp18_ = _tmp17_;
		_tmp19_ = gee_iterable_iterator ((GeeIterable*) _tmp18_);
		_tmp20_ = _tmp19_;
		_g_object_unref0 (_tmp18_);
		_store_it = _tmp20_;
		while (TRUE) {
			GeeIterator* _tmp21_;
			gboolean _tmp22_ = FALSE;
			FolksBackendsKfPersonaStore* store = NULL;
			GeeIterator* _tmp23_;
			gpointer _tmp24_ = NULL;
			GeeSet* _tmp25_;
			FolksBackendsKfPersonaStore* _tmp26_;
			const gchar* _tmp27_;
			const gchar* _tmp28_;
			gboolean _tmp29_ = FALSE;
			_tmp21_ = _store_it;
			_tmp22_ = gee_iterator_next (_tmp21_);
			if (!_tmp22_) {
				break;
			}
			_tmp23_ = _store_it;
			_tmp24_ = gee_iterator_get (_tmp23_);
			store = (FolksBackendsKfPersonaStore*) _tmp24_;
			_tmp25_ = storeids;
			_tmp26_ = store;
			_tmp27_ = folks_persona_store_get_id ((FolksPersonaStore*) _tmp26_);
			_tmp28_ = _tmp27_;
			_tmp29_ = gee_collection_contains ((GeeCollection*) _tmp25_, _tmp28_);
			if (!_tmp29_) {
				FolksBackendsKfPersonaStore** _tmp30_;
				gint _tmp30__length1;
				FolksBackendsKfPersonaStore* _tmp31_;
				FolksBackendsKfPersonaStore* _tmp32_;
				_tmp30_ = removed_stores;
				_tmp30__length1 = removed_stores_length1;
				_tmp31_ = store;
				_tmp32_ = _g_object_ref0 (_tmp31_);
				_vala_array_add1 (&removed_stores, &removed_stores_length1, &_removed_stores_size_, _tmp32_);
			}
			_g_object_unref0 (store);
		}
		_g_object_unref0 (_store_it);
	}
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp33_ = FALSE;
			_tmp33_ = TRUE;
			while (TRUE) {
				gboolean _tmp34_;
				gint _tmp36_;
				FolksBackendsKfPersonaStore** _tmp37_;
				gint _tmp37__length1;
				FolksBackendsKfPersonaStore** _tmp38_;
				gint _tmp38__length1;
				gint _tmp39_;
				FolksBackendsKfPersonaStore* _tmp40_;
				_tmp34_ = _tmp33_;
				if (!_tmp34_) {
					gint _tmp35_;
					_tmp35_ = i;
					i = _tmp35_ + 1;
				}
				_tmp33_ = FALSE;
				_tmp36_ = i;
				_tmp37_ = removed_stores;
				_tmp37__length1 = removed_stores_length1;
				if (!(_tmp36_ < _tmp37__length1)) {
					break;
				}
				_tmp38_ = removed_stores;
				_tmp38__length1 = removed_stores_length1;
				_tmp39_ = i;
				_tmp40_ = _tmp38_[_tmp39_];
				_folks_backends_kf_backend_remove_store (self, G_TYPE_CHECK_INSTANCE_CAST (_tmp40_, FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE, FolksBackendsKfPersonaStore), FALSE);
			}
		}
	}
	_tmp42_ = added_stores;
	if (_tmp42_) {
		_tmp41_ = TRUE;
	} else {
		FolksBackendsKfPersonaStore** _tmp43_;
		gint _tmp43__length1;
		_tmp43_ = removed_stores;
		_tmp43__length1 = removed_stores_length1;
		_tmp41_ = _tmp43__length1 > 0;
	}
	_tmp44_ = _tmp41_;
	if (_tmp44_) {
		g_object_notify ((GObject*) self, "persona-stores");
	}
	removed_stores = (_vala_array_free (removed_stores, removed_stores_length1, (GDestroyNotify) g_object_unref), NULL);
}


/**
   * {@inheritDoc}
   */
FolksBackendsKfBackend* folks_backends_kf_backend_construct (GType object_type) {
	FolksBackendsKfBackend * self = NULL;
	self = (FolksBackendsKfBackend*) g_object_new (object_type, NULL);
	return self;
}


FolksBackendsKfBackend* folks_backends_kf_backend_new (void) {
	return folks_backends_kf_backend_construct (FOLKS_BACKENDS_KF_TYPE_BACKEND);
}


static void folks_backends_kf_backend_real_prepare_data_free (gpointer _data) {
	FolksBackendsKfBackendPrepareData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksBackendsKfBackendPrepareData, _data_);
}


static void folks_backends_kf_backend_real_prepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksBackendsKfBackend * self;
	FolksBackendsKfBackendPrepareData* _data_;
	FolksBackendsKfBackend* _tmp0_;
	self = (FolksBackendsKfBackend*) base;
	_data_ = g_slice_new0 (FolksBackendsKfBackendPrepareData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_backends_kf_backend_real_prepare);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_backends_kf_backend_real_prepare_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	folks_backends_kf_backend_real_prepare_co (_data_);
}


static void folks_backends_kf_backend_real_prepare_finish (FolksBackend* base, GAsyncResult* _res_, GError** error) {
	FolksBackendsKfBackendPrepareData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * {@inheritDoc}
   */
static gboolean folks_backends_kf_backend_real_prepare_co (FolksBackendsKfBackendPrepareData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	folks_internal_profiling_start ("preparing Kf.Backend", NULL);
	_data_->_tmp1_ = _data_->self->priv->_is_prepared;
	if (_data_->_tmp1_) {
		_data_->_tmp0_ = TRUE;
	} else {
		_data_->_tmp2_ = _data_->self->priv->_prepare_pending;
		_data_->_tmp0_ = _data_->_tmp2_;
	}
	_data_->_tmp3_ = _data_->_tmp0_;
	if (_data_->_tmp3_) {
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	{
		_data_->self->priv->_prepare_pending = TRUE;
		_data_->_tmp4_ = NULL;
		_data_->_tmp4_ = g_getenv ("FOLKS_BACKEND_KEY_FILE_PATH");
		_data_->path = _data_->_tmp4_;
		_data_->_tmp5_ = _data_->path;
		if (_data_->_tmp5_ == NULL) {
			_data_->_tmp6_ = NULL;
			_data_->_tmp6_ = _folks_backends_kf_backend_get_default_file (_data_->self, "relationships");
			_g_object_unref0 (_data_->file);
			_data_->file = _data_->_tmp6_;
			_data_->_tmp7_ = _data_->file;
			_data_->_tmp8_ = NULL;
			_data_->_tmp8_ = g_file_get_path (_data_->_tmp7_);
			_data_->_tmp9_ = _data_->_tmp8_;
			g_debug ("Using built-in key file '%s' (override with " "environment variable FOLKS_BACKEND_KEY_FILE_PATH)", _data_->_tmp9_);
			_g_free0 (_data_->_tmp9_);
		} else {
			_data_->_tmp10_ = _data_->path;
			_data_->_tmp11_ = NULL;
			_data_->_tmp11_ = g_file_new_for_path (_data_->_tmp10_);
			_g_object_unref0 (_data_->file);
			_data_->file = _data_->_tmp11_;
			_data_->_tmp12_ = _data_->path;
			g_debug ("Using environment variable " "FOLKS_BACKEND_KEY_FILE_PATH = '%s' to load the key " "file.", _data_->_tmp12_);
		}
		_data_->_tmp13_ = _data_->file;
		_data_->_tmp14_ = folks_backends_kf_persona_store_new (_data_->_tmp13_);
		_data_->store = _data_->_tmp14_;
		_data_->_tmp15_ = _data_->store;
		_folks_backends_kf_backend_add_store (_data_->self, _data_->_tmp15_, TRUE);
		_data_->self->priv->_is_prepared = TRUE;
		g_object_notify ((GObject*) _data_->self, "is-prepared");
		_data_->self->priv->_is_quiescent = TRUE;
		g_object_notify ((GObject*) _data_->self, "is-quiescent");
		_g_object_unref0 (_data_->store);
		_g_object_unref0 (_data_->file);
	}
	__finally0:
	{
		_data_->self->priv->_prepare_pending = FALSE;
	}
	if (_data_->_inner_error_ != NULL) {
		g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
		g_error_free (_data_->_inner_error_);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	folks_internal_profiling_end ("preparing Kf.Backend", NULL);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


/**
   * Utility function to add a persona store.
   *
   * @param store the store to add.
   * @param notify whether or not to emit notification signals.
   */
static void __folks_backends_kf_backend_store_removed_cb_folks_persona_store_removed (FolksPersonaStore* _sender, gpointer self) {
	_folks_backends_kf_backend_store_removed_cb (self, _sender);
}


static void _folks_backends_kf_backend_add_store (FolksBackendsKfBackend* self, FolksBackendsKfPersonaStore* store, gboolean notify) {
	GeeHashMap* _tmp0_;
	FolksBackendsKfPersonaStore* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	FolksBackendsKfPersonaStore* _tmp4_;
	FolksBackendsKfPersonaStore* _tmp5_;
	FolksBackendsKfPersonaStore* _tmp6_;
	gboolean _tmp7_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (store != NULL);
	_tmp0_ = self->priv->_persona_stores;
	_tmp1_ = store;
	_tmp2_ = folks_persona_store_get_id ((FolksPersonaStore*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = store;
	gee_abstract_map_set ((GeeAbstractMap*) _tmp0_, _tmp3_, _tmp4_);
	_tmp5_ = store;
	g_signal_connect_object ((FolksPersonaStore*) _tmp5_, "removed", (GCallback) __folks_backends_kf_backend_store_removed_cb_folks_persona_store_removed, self, 0);
	_tmp6_ = store;
	g_signal_emit_by_name ((FolksBackend*) self, "persona-store-added", (FolksPersonaStore*) _tmp6_);
	_tmp7_ = notify;
	if (_tmp7_) {
		g_object_notify ((GObject*) self, "persona-stores");
	}
}


/**
   * Utility function to remove a persona store.
   *
   * @param store the store to remove.
   * @param notify whether or not to emit notification signals.
   */
static void _folks_backends_kf_backend_remove_store (FolksBackendsKfBackend* self, FolksBackendsKfPersonaStore* store, gboolean notify) {
	FolksBackendsKfPersonaStore* _tmp0_;
	guint _tmp1_ = 0U;
	GeeHashMap* _tmp2_;
	FolksBackendsKfPersonaStore* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	FolksBackendsKfPersonaStore* _tmp6_;
	gboolean _tmp7_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (store != NULL);
	_tmp0_ = store;
	g_signal_parse_name ("removed", FOLKS_TYPE_PERSONA_STORE, &_tmp1_, NULL, FALSE);
	g_signal_handlers_disconnect_matched ((FolksPersonaStore*) _tmp0_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp1_, 0, NULL, (GCallback) __folks_backends_kf_backend_store_removed_cb_folks_persona_store_removed, self);
	_tmp2_ = self->priv->_persona_stores;
	_tmp3_ = store;
	_tmp4_ = folks_persona_store_get_id ((FolksPersonaStore*) _tmp3_);
	_tmp5_ = _tmp4_;
	gee_abstract_map_unset ((GeeAbstractMap*) _tmp2_, _tmp5_, NULL);
	_tmp6_ = store;
	g_signal_emit_by_name ((FolksBackend*) self, "persona-store-removed", (FolksPersonaStore*) _tmp6_);
	_tmp7_ = notify;
	if (_tmp7_) {
		g_object_notify ((GObject*) self, "persona-stores");
	}
}


static void folks_backends_kf_backend_real_unprepare_data_free (gpointer _data) {
	FolksBackendsKfBackendUnprepareData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksBackendsKfBackendUnprepareData, _data_);
}


static void folks_backends_kf_backend_real_unprepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksBackendsKfBackend * self;
	FolksBackendsKfBackendUnprepareData* _data_;
	FolksBackendsKfBackend* _tmp0_;
	self = (FolksBackendsKfBackend*) base;
	_data_ = g_slice_new0 (FolksBackendsKfBackendUnprepareData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_backends_kf_backend_real_unprepare);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_backends_kf_backend_real_unprepare_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	folks_backends_kf_backend_real_unprepare_co (_data_);
}


static void folks_backends_kf_backend_real_unprepare_finish (FolksBackend* base, GAsyncResult* _res_, GError** error) {
	FolksBackendsKfBackendUnprepareData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * {@inheritDoc}
   */
static gboolean folks_backends_kf_backend_real_unprepare_co (FolksBackendsKfBackendUnprepareData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp1_ = _data_->self->priv->_is_prepared;
	if (!_data_->_tmp1_) {
		_data_->_tmp0_ = TRUE;
	} else {
		_data_->_tmp2_ = _data_->self->priv->_prepare_pending;
		_data_->_tmp0_ = _data_->_tmp2_ == TRUE;
	}
	_data_->_tmp3_ = _data_->_tmp0_;
	if (_data_->_tmp3_) {
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	{
		_data_->self->priv->_prepare_pending = TRUE;
		{
			_data_->_tmp4_ = _data_->self->priv->_persona_stores;
			_data_->_tmp5_ = gee_abstract_map_get_values ((GeeMap*) _data_->_tmp4_);
			_data_->_tmp6_ = _data_->_tmp5_;
			_data_->_tmp7_ = _data_->_tmp6_;
			_data_->_tmp8_ = NULL;
			_data_->_tmp8_ = gee_iterable_iterator ((GeeIterable*) _data_->_tmp7_);
			_data_->_tmp9_ = _data_->_tmp8_;
			_g_object_unref0 (_data_->_tmp7_);
			_data_->_persona_store_it = _data_->_tmp9_;
			while (TRUE) {
				_data_->_tmp10_ = _data_->_persona_store_it;
				_data_->_tmp11_ = FALSE;
				_data_->_tmp11_ = gee_iterator_next (_data_->_tmp10_);
				if (!_data_->_tmp11_) {
					break;
				}
				_data_->_tmp12_ = _data_->_persona_store_it;
				_data_->_tmp13_ = NULL;
				_data_->_tmp13_ = gee_iterator_get (_data_->_tmp12_);
				_data_->persona_store = (FolksBackendsKfPersonaStore*) _data_->_tmp13_;
				_data_->_tmp14_ = _data_->persona_store;
				g_signal_emit_by_name ((FolksBackend*) _data_->self, "persona-store-removed", (FolksPersonaStore*) _data_->_tmp14_);
				_g_object_unref0 (_data_->persona_store);
			}
			_g_object_unref0 (_data_->_persona_store_it);
		}
		_data_->_tmp15_ = _data_->self->priv->_persona_stores;
		gee_abstract_map_clear ((GeeAbstractMap*) _data_->_tmp15_);
		g_object_notify ((GObject*) _data_->self, "persona-stores");
		_data_->self->priv->_is_quiescent = FALSE;
		g_object_notify ((GObject*) _data_->self, "is-quiescent");
		_data_->self->priv->_is_prepared = FALSE;
		g_object_notify ((GObject*) _data_->self, "is-prepared");
	}
	__finally1:
	{
		_data_->self->priv->_prepare_pending = FALSE;
	}
	if (_data_->_inner_error_ != NULL) {
		g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
		g_error_free (_data_->_inner_error_);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
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


static void _folks_backends_kf_backend_store_removed_cb (FolksBackendsKfBackend* self, FolksPersonaStore* store) {
	FolksPersonaStore* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (store != NULL);
	_tmp0_ = store;
	_folks_backends_kf_backend_remove_store (self, G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE, FolksBackendsKfPersonaStore), TRUE);
}


static gboolean folks_backends_kf_backend_real_get_is_prepared (FolksBackend* base) {
	gboolean result;
	FolksBackendsKfBackend* self;
	gboolean _tmp0_;
	self = (FolksBackendsKfBackend*) base;
	_tmp0_ = self->priv->_is_prepared;
	result = _tmp0_;
	return result;
}


static gboolean folks_backends_kf_backend_real_get_is_quiescent (FolksBackend* base) {
	gboolean result;
	FolksBackendsKfBackend* self;
	gboolean _tmp0_;
	self = (FolksBackendsKfBackend*) base;
	_tmp0_ = self->priv->_is_quiescent;
	result = _tmp0_;
	return result;
}


static const gchar* folks_backends_kf_backend_real_get_name (FolksBackend* base) {
	const gchar* result;
	FolksBackendsKfBackend* self;
	self = (FolksBackendsKfBackend*) base;
	result = BACKEND_NAME;
	return result;
}


static GeeMap* folks_backends_kf_backend_real_get_persona_stores (FolksBackend* base) {
	GeeMap* result;
	FolksBackendsKfBackend* self;
	GeeMap* _tmp0_;
	self = (FolksBackendsKfBackend*) base;
	_tmp0_ = self->priv->_persona_stores_ro;
	result = _tmp0_;
	return result;
}


static GObject * folks_backends_kf_backend_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	FolksBackendsKfBackend * self;
	GeeHashMap* _tmp0_;
	GeeHashMap* _tmp1_;
	GeeMap* _tmp2_;
	GeeMap* _tmp3_;
	parent_class = G_OBJECT_CLASS (folks_backends_kf_backend_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FOLKS_BACKENDS_KF_TYPE_BACKEND, FolksBackendsKfBackend);
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, FOLKS_BACKENDS_KF_TYPE_PERSONA_STORE, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->_persona_stores);
	self->priv->_persona_stores = _tmp0_;
	_tmp1_ = self->priv->_persona_stores;
	_tmp2_ = gee_abstract_map_get_read_only_view ((GeeAbstractMap*) _tmp1_);
	_tmp3_ = _tmp2_;
	_g_object_unref0 (self->priv->_persona_stores_ro);
	self->priv->_persona_stores_ro = _tmp3_;
	return obj;
}


static void folks_backends_kf_backend_class_init (FolksBackendsKfBackendClass * klass) {
	folks_backends_kf_backend_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FolksBackendsKfBackendPrivate));
	FOLKS_BACKEND_CLASS (klass)->enable_persona_store = folks_backends_kf_backend_real_enable_persona_store;
	FOLKS_BACKEND_CLASS (klass)->disable_persona_store = folks_backends_kf_backend_real_disable_persona_store;
	FOLKS_BACKEND_CLASS (klass)->set_persona_stores = folks_backends_kf_backend_real_set_persona_stores;
	FOLKS_BACKEND_CLASS (klass)->prepare = folks_backends_kf_backend_real_prepare;
	FOLKS_BACKEND_CLASS (klass)->prepare_finish = folks_backends_kf_backend_real_prepare_finish;
	FOLKS_BACKEND_CLASS (klass)->unprepare = folks_backends_kf_backend_real_unprepare;
	FOLKS_BACKEND_CLASS (klass)->unprepare_finish = folks_backends_kf_backend_real_unprepare_finish;
	FOLKS_BACKEND_CLASS (klass)->get_is_prepared = folks_backends_kf_backend_real_get_is_prepared;
	FOLKS_BACKEND_CLASS (klass)->get_is_quiescent = folks_backends_kf_backend_real_get_is_quiescent;
	FOLKS_BACKEND_CLASS (klass)->get_name = folks_backends_kf_backend_real_get_name;
	FOLKS_BACKEND_CLASS (klass)->get_persona_stores = folks_backends_kf_backend_real_get_persona_stores;
	G_OBJECT_CLASS (klass)->get_property = _vala_folks_backends_kf_backend_get_property;
	G_OBJECT_CLASS (klass)->constructor = folks_backends_kf_backend_constructor;
	G_OBJECT_CLASS (klass)->finalize = folks_backends_kf_backend_finalize;
	/**
	   * Whether this Backend has been prepared.
	   *
	   * See {@link Folks.Backend.is_prepared}.
	   *
	   * @since 0.3.0
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_KF_BACKEND_IS_PREPARED, g_param_spec_boolean ("is-prepared", "is-prepared", "is-prepared", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	   * Whether this Backend has reached a quiescent state.
	   *
	   * See {@link Folks.Backend.is_quiescent}.
	   *
	   * @since 0.6.2
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_KF_BACKEND_IS_QUIESCENT, g_param_spec_boolean ("is-quiescent", "is-quiescent", "is-quiescent", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	   * {@inheritDoc}
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_KF_BACKEND_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	   * {@inheritDoc}
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_KF_BACKEND_PERSONA_STORES, g_param_spec_object ("persona-stores", "persona-stores", "persona-stores", GEE_TYPE_MAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void folks_backends_kf_backend_instance_init (FolksBackendsKfBackend * self) {
	self->priv = FOLKS_BACKENDS_KF_BACKEND_GET_PRIVATE (self);
	self->priv->_is_prepared = FALSE;
	self->priv->_prepare_pending = FALSE;
	self->priv->_is_quiescent = FALSE;
}


static void folks_backends_kf_backend_finalize (GObject* obj) {
	FolksBackendsKfBackend * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FOLKS_BACKENDS_KF_TYPE_BACKEND, FolksBackendsKfBackend);
	_g_object_unref0 (self->priv->_persona_stores);
	_g_object_unref0 (self->priv->_persona_stores_ro);
	G_OBJECT_CLASS (folks_backends_kf_backend_parent_class)->finalize (obj);
}


/**
 * A backend which loads {@link Persona}s from a simple key file in
 * (XDG_DATA_HOME/folks/) and presents them through a single
 * {@link PersonaStore}.
 *
 * @since 0.1.13
 */
GType folks_backends_kf_backend_get_type (void) {
	static volatile gsize folks_backends_kf_backend_type_id__volatile = 0;
	if (g_once_init_enter (&folks_backends_kf_backend_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksBackendsKfBackendClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_backends_kf_backend_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksBackendsKfBackend), 0, (GInstanceInitFunc) folks_backends_kf_backend_instance_init, NULL };
		GType folks_backends_kf_backend_type_id;
		folks_backends_kf_backend_type_id = g_type_register_static (FOLKS_TYPE_BACKEND, "FolksBackendsKfBackend", &g_define_type_info, 0);
		g_once_init_leave (&folks_backends_kf_backend_type_id__volatile, folks_backends_kf_backend_type_id);
	}
	return folks_backends_kf_backend_type_id__volatile;
}


static void _vala_folks_backends_kf_backend_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FolksBackendsKfBackend * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FOLKS_BACKENDS_KF_TYPE_BACKEND, FolksBackendsKfBackend);
	switch (property_id) {
		case FOLKS_BACKENDS_KF_BACKEND_IS_PREPARED:
		g_value_set_boolean (value, folks_backend_get_is_prepared ((FolksBackend*) self));
		break;
		case FOLKS_BACKENDS_KF_BACKEND_IS_QUIESCENT:
		g_value_set_boolean (value, folks_backend_get_is_quiescent ((FolksBackend*) self));
		break;
		case FOLKS_BACKENDS_KF_BACKEND_NAME:
		g_value_set_string (value, folks_backend_get_name ((FolksBackend*) self));
		break;
		case FOLKS_BACKENDS_KF_BACKEND_PERSONA_STORES:
		g_value_set_object (value, folks_backend_get_persona_stores ((FolksBackend*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
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



