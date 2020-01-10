/* tp-backend.c generated by valac 0.20.1.30-1b1d, the Vala compiler
 * generated from tp-backend.vala, do not modify */

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
#include <folks/folks.h>
#include <telepathy-glib/telepathy-glib.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <folks/folks-telepathy.h>
#include <gio/gio.h>
#include <folks-internal.h>


#define FOLKS_BACKENDS_TP_TYPE_BACKEND (folks_backends_tp_backend_get_type ())
#define FOLKS_BACKENDS_TP_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackend))
#define FOLKS_BACKENDS_TP_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackendClass))
#define FOLKS_BACKENDS_TP_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND))
#define FOLKS_BACKENDS_TP_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_BACKENDS_TP_TYPE_BACKEND))
#define FOLKS_BACKENDS_TP_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackendClass))

typedef struct _FolksBackendsTpBackend FolksBackendsTpBackend;
typedef struct _FolksBackendsTpBackendClass FolksBackendsTpBackendClass;
typedef struct _FolksBackendsTpBackendPrivate FolksBackendsTpBackendPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))
typedef struct _FolksBackendsTpBackendPrepareData FolksBackendsTpBackendPrepareData;
typedef struct _FolksBackendsTpBackendUnprepareData FolksBackendsTpBackendUnprepareData;

struct _FolksBackendsTpBackend {
	FolksBackend parent_instance;
	FolksBackendsTpBackendPrivate * priv;
};

struct _FolksBackendsTpBackendClass {
	FolksBackendClass parent_class;
};

struct _FolksBackendsTpBackendPrivate {
	TpAccountManager* _account_manager;
	gboolean _is_prepared;
	gboolean _prepare_pending;
	gboolean _is_quiescent;
	GeeSet* _storeids;
};

struct _FolksBackendsTpBackendPrepareData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksBackendsTpBackend* self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	TpAccountManager* _tmp4_;
	TpAccountManager* _tmp5_;
	TpAccountManager* _tmp6_;
	TpAccountManager* _tmp7_;
	GList* accounts;
	TpAccountManager* _tmp8_;
	GList* _tmp9_;
	GList* _tmp10_;
	GList* account_collection;
	GList* account_it;
	TpAccount* _tmp11_;
	TpAccount* account;
	TpAccount* _tmp12_;
	GError * _inner_error_;
};

struct _FolksBackendsTpBackendUnprepareData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	FolksBackendsTpBackend* self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	TpAccountManager* _tmp4_;
	guint _tmp5_;
	TpAccountManager* _tmp6_;
	guint _tmp7_;
	GError * _inner_error_;
};


static gpointer folks_backends_tp_backend_parent_class = NULL;

GType folks_backends_tp_backend_get_type (void) G_GNUC_CONST;
#define FOLKS_BACKENDS_TP_BACKEND_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackendPrivate))
enum  {
	FOLKS_BACKENDS_TP_BACKEND_DUMMY_PROPERTY,
	FOLKS_BACKENDS_TP_BACKEND_NAME,
	FOLKS_BACKENDS_TP_BACKEND_PERSONA_STORES,
	FOLKS_BACKENDS_TP_BACKEND_IS_PREPARED,
	FOLKS_BACKENDS_TP_BACKEND_IS_QUIESCENT
};
static void folks_backends_tp_backend_real_enable_persona_store (FolksBackend* base, FolksPersonaStore* store);
static void _folks_backends_tp_backend_add_store (FolksBackendsTpBackend* self, FolksPersonaStore* store, gboolean notify);
static void folks_backends_tp_backend_real_disable_persona_store (FolksBackend* base, FolksPersonaStore* store);
static void _folks_backends_tp_backend_remove_store (FolksBackendsTpBackend* self, FolksPersonaStore* store, gboolean notify);
static void folks_backends_tp_backend_real_set_persona_stores (FolksBackend* base, GeeSet* storeids);
static void _vala_array_add1 (FolksPersonaStore*** array, int* length, int* size, FolksPersonaStore* value);
FolksBackendsTpBackend* folks_backends_tp_backend_new (void);
FolksBackendsTpBackend* folks_backends_tp_backend_construct (GType object_type);
static void folks_backends_tp_backend_real_prepare_data_free (gpointer _data);
static void folks_backends_tp_backend_real_prepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_backends_tp_backend_real_prepare_co (FolksBackendsTpBackendPrepareData* _data_);
static void folks_backends_tp_backend_prepare_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _folks_backends_tp_backend_account_enabled_cb (FolksBackendsTpBackend* self, TpAccount* account);
static void __folks_backends_tp_backend_account_enabled_cb_tp_account_manager_account_enabled (TpAccountManager* _sender, TpAccount* account, gpointer self);
static void _folks_backends_tp_backend_account_validity_changed_cb (FolksBackendsTpBackend* self, TpAccount* account, gboolean valid);
static void __folks_backends_tp_backend_account_validity_changed_cb_tp_account_manager_account_validity_changed (TpAccountManager* _sender, TpAccount* account, gboolean valid, gpointer self);
static void folks_backends_tp_backend_real_unprepare_data_free (gpointer _data);
static void folks_backends_tp_backend_real_unprepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean folks_backends_tp_backend_real_unprepare_co (FolksBackendsTpBackendUnprepareData* _data_);
static void _folks_backends_tp_backend_store_removed_cb (FolksBackendsTpBackend* self, FolksPersonaStore* store);
static void __folks_backends_tp_backend_store_removed_cb_folks_persona_store_removed (FolksPersonaStore* _sender, gpointer self);
static void folks_backends_tp_backend_finalize (GObject* obj);
static void _vala_folks_backends_tp_backend_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
   * {@inheritDoc}
   */
static void folks_backends_tp_backend_real_enable_persona_store (FolksBackend* base, FolksPersonaStore* store) {
	FolksBackendsTpBackend * self;
	GeeMap* _tmp0_;
	GeeMap* _tmp1_;
	FolksPersonaStore* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	gboolean _tmp5_ = FALSE;
	self = (FolksBackendsTpBackend*) base;
	g_return_if_fail (store != NULL);
	_tmp0_ = folks_backend_get_persona_stores ((FolksBackend*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = store;
	_tmp3_ = folks_persona_store_get_id (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = gee_map_has_key (_tmp1_, _tmp4_);
	if (_tmp5_ == FALSE) {
		FolksPersonaStore* _tmp6_;
		_tmp6_ = store;
		_folks_backends_tp_backend_add_store (self, _tmp6_, TRUE);
	}
}


/**
   * {@inheritDoc}
   */
static void folks_backends_tp_backend_real_disable_persona_store (FolksBackend* base, FolksPersonaStore* store) {
	FolksBackendsTpBackend * self;
	GeeMap* _tmp0_;
	GeeMap* _tmp1_;
	FolksPersonaStore* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	gboolean _tmp5_ = FALSE;
	self = (FolksBackendsTpBackend*) base;
	g_return_if_fail (store != NULL);
	_tmp0_ = folks_backend_get_persona_stores ((FolksBackend*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = store;
	_tmp3_ = folks_persona_store_get_id (_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp5_ = gee_map_has_key (_tmp1_, _tmp4_);
	if (_tmp5_) {
		FolksPersonaStore* _tmp6_;
		_tmp6_ = store;
		_folks_backends_tp_backend_remove_store (self, _tmp6_, TRUE);
	}
}


/**
   * {@inheritDoc}
   */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _vala_array_add1 (FolksPersonaStore*** array, int* length, int* size, FolksPersonaStore* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (FolksPersonaStore*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void folks_backends_tp_backend_real_set_persona_stores (FolksBackend* base, GeeSet* storeids) {
	FolksBackendsTpBackend * self;
	GeeSet* _tmp0_;
	GeeSet* _tmp1_;
	gboolean added_stores = FALSE;
	FolksPersonaStore** removed_stores = NULL;
	FolksPersonaStore** _tmp2_ = NULL;
	gint removed_stores_length1;
	gint _removed_stores_size_;
	GList* accounts = NULL;
	TpAccountManager* _tmp3_;
	GList* _tmp4_ = NULL;
	GList* _tmp5_;
	FolksPersonaStore** _tmp41_;
	gint _tmp41__length1;
	gboolean _tmp44_ = FALSE;
	gboolean _tmp45_;
	gboolean _tmp47_;
	self = (FolksBackendsTpBackend*) base;
	_tmp0_ = storeids;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_storeids);
	self->priv->_storeids = _tmp1_;
	added_stores = FALSE;
	_tmp2_ = g_new0 (FolksPersonaStore*, 0 + 1);
	removed_stores = _tmp2_;
	removed_stores_length1 = 0;
	_removed_stores_size_ = removed_stores_length1;
	_tmp3_ = self->priv->_account_manager;
	_tmp4_ = tp_account_manager_get_valid_accounts (_tmp3_);
	accounts = _tmp4_;
	_tmp5_ = accounts;
	{
		GList* account_collection = NULL;
		GList* account_it = NULL;
		account_collection = _tmp5_;
		for (account_it = account_collection; account_it != NULL; account_it = account_it->next) {
			TpAccount* _tmp6_;
			TpAccount* account = NULL;
			_tmp6_ = _g_object_ref0 ((TpAccount*) account_it->data);
			account = _tmp6_;
			{
				gchar* id = NULL;
				TpAccount* _tmp7_;
				const gchar* _tmp8_ = NULL;
				gchar* _tmp9_;
				gboolean _tmp10_ = FALSE;
				GeeMap* _tmp11_;
				GeeMap* _tmp12_;
				const gchar* _tmp13_;
				gboolean _tmp14_ = FALSE;
				gboolean _tmp18_;
				_tmp7_ = account;
				_tmp8_ = tp_proxy_get_object_path ((TpProxy*) _tmp7_);
				_tmp9_ = g_strdup (_tmp8_);
				id = _tmp9_;
				_tmp11_ = folks_backend_get_persona_stores ((FolksBackend*) self);
				_tmp12_ = _tmp11_;
				_tmp13_ = id;
				_tmp14_ = gee_map_has_key (_tmp12_, _tmp13_);
				if (_tmp14_ == FALSE) {
					GeeSet* _tmp15_;
					const gchar* _tmp16_;
					gboolean _tmp17_ = FALSE;
					_tmp15_ = storeids;
					_tmp16_ = id;
					_tmp17_ = gee_collection_contains ((GeeCollection*) _tmp15_, _tmp16_);
					_tmp10_ = _tmp17_;
				} else {
					_tmp10_ = FALSE;
				}
				_tmp18_ = _tmp10_;
				if (_tmp18_) {
					TpfPersonaStore* store = NULL;
					TpAccount* _tmp19_;
					TpfPersonaStore* _tmp20_ = NULL;
					TpfPersonaStore* _tmp21_;
					_tmp19_ = account;
					_tmp20_ = tpf_persona_store_dup_for_account (_tmp19_);
					store = _tmp20_;
					_tmp21_ = store;
					_folks_backends_tp_backend_add_store (self, (FolksPersonaStore*) _tmp21_, FALSE);
					added_stores = TRUE;
					_g_object_unref0 (store);
				}
				_g_free0 (id);
				_g_object_unref0 (account);
			}
		}
	}
	{
		GeeIterator* _store_it = NULL;
		GeeMap* _tmp22_;
		GeeMap* _tmp23_;
		GeeCollection* _tmp24_;
		GeeCollection* _tmp25_;
		GeeCollection* _tmp26_;
		GeeIterator* _tmp27_ = NULL;
		GeeIterator* _tmp28_;
		_tmp22_ = folks_backend_get_persona_stores ((FolksBackend*) self);
		_tmp23_ = _tmp22_;
		_tmp24_ = gee_map_get_values (_tmp23_);
		_tmp25_ = _tmp24_;
		_tmp26_ = _tmp25_;
		_tmp27_ = gee_iterable_iterator ((GeeIterable*) _tmp26_);
		_tmp28_ = _tmp27_;
		_g_object_unref0 (_tmp26_);
		_store_it = _tmp28_;
		while (TRUE) {
			GeeIterator* _tmp29_;
			gboolean _tmp30_ = FALSE;
			FolksPersonaStore* store = NULL;
			GeeIterator* _tmp31_;
			gpointer _tmp32_ = NULL;
			GeeSet* _tmp33_;
			FolksPersonaStore* _tmp34_;
			const gchar* _tmp35_;
			const gchar* _tmp36_;
			gboolean _tmp37_ = FALSE;
			_tmp29_ = _store_it;
			_tmp30_ = gee_iterator_next (_tmp29_);
			if (!_tmp30_) {
				break;
			}
			_tmp31_ = _store_it;
			_tmp32_ = gee_iterator_get (_tmp31_);
			store = (FolksPersonaStore*) _tmp32_;
			_tmp33_ = storeids;
			_tmp34_ = store;
			_tmp35_ = folks_persona_store_get_id (_tmp34_);
			_tmp36_ = _tmp35_;
			_tmp37_ = gee_collection_contains ((GeeCollection*) _tmp33_, _tmp36_);
			if (!_tmp37_) {
				FolksPersonaStore** _tmp38_;
				gint _tmp38__length1;
				FolksPersonaStore* _tmp39_;
				FolksPersonaStore* _tmp40_;
				_tmp38_ = removed_stores;
				_tmp38__length1 = removed_stores_length1;
				_tmp39_ = store;
				_tmp40_ = _g_object_ref0 (_tmp39_);
				_vala_array_add1 (&removed_stores, &removed_stores_length1, &_removed_stores_size_, _tmp40_);
			}
			_g_object_unref0 (store);
		}
		_g_object_unref0 (_store_it);
	}
	_tmp41_ = removed_stores;
	_tmp41__length1 = removed_stores_length1;
	{
		FolksPersonaStore** store_collection = NULL;
		gint store_collection_length1 = 0;
		gint _store_collection_size_ = 0;
		gint store_it = 0;
		store_collection = _tmp41_;
		store_collection_length1 = _tmp41__length1;
		for (store_it = 0; store_it < _tmp41__length1; store_it = store_it + 1) {
			FolksPersonaStore* _tmp42_;
			FolksPersonaStore* store = NULL;
			_tmp42_ = _g_object_ref0 (store_collection[store_it]);
			store = _tmp42_;
			{
				FolksPersonaStore* _tmp43_;
				_tmp43_ = store;
				_folks_backends_tp_backend_remove_store (self, (FolksPersonaStore*) G_TYPE_CHECK_INSTANCE_CAST (_tmp43_, TPF_TYPE_PERSONA_STORE, TpfPersonaStore), FALSE);
				_g_object_unref0 (store);
			}
		}
	}
	_tmp45_ = added_stores;
	if (_tmp45_) {
		_tmp44_ = TRUE;
	} else {
		FolksPersonaStore** _tmp46_;
		gint _tmp46__length1;
		_tmp46_ = removed_stores;
		_tmp46__length1 = removed_stores_length1;
		_tmp44_ = _tmp46__length1 > 0;
	}
	_tmp47_ = _tmp44_;
	if (_tmp47_) {
		g_object_notify ((GObject*) self, "persona-stores");
	}
	_g_list_free0 (accounts);
	removed_stores = (_vala_array_free (removed_stores, removed_stores_length1, (GDestroyNotify) g_object_unref), NULL);
}


/**
   * {@inheritDoc}
   */
FolksBackendsTpBackend* folks_backends_tp_backend_construct (GType object_type) {
	FolksBackendsTpBackend * self = NULL;
	self = (FolksBackendsTpBackend*) g_object_new (object_type, NULL);
	return self;
}


FolksBackendsTpBackend* folks_backends_tp_backend_new (void) {
	return folks_backends_tp_backend_construct (FOLKS_BACKENDS_TP_TYPE_BACKEND);
}


static void folks_backends_tp_backend_real_prepare_data_free (gpointer _data) {
	FolksBackendsTpBackendPrepareData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksBackendsTpBackendPrepareData, _data_);
}


static void folks_backends_tp_backend_real_prepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksBackendsTpBackend * self;
	FolksBackendsTpBackendPrepareData* _data_;
	FolksBackendsTpBackend* _tmp0_;
	self = (FolksBackendsTpBackend*) base;
	_data_ = g_slice_new0 (FolksBackendsTpBackendPrepareData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_backends_tp_backend_real_prepare);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_backends_tp_backend_real_prepare_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	folks_backends_tp_backend_real_prepare_co (_data_);
}


static void folks_backends_tp_backend_real_prepare_finish (FolksBackend* base, GAsyncResult* _res_, GError** error) {
	FolksBackendsTpBackendPrepareData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * {@inheritDoc}
   */
static void folks_backends_tp_backend_prepare_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	FolksBackendsTpBackendPrepareData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	folks_backends_tp_backend_real_prepare_co (_data_);
}


static void __folks_backends_tp_backend_account_enabled_cb_tp_account_manager_account_enabled (TpAccountManager* _sender, TpAccount* account, gpointer self) {
	_folks_backends_tp_backend_account_enabled_cb (self, account);
}


static void __folks_backends_tp_backend_account_validity_changed_cb_tp_account_manager_account_validity_changed (TpAccountManager* _sender, TpAccount* account, gboolean valid, gpointer self) {
	_folks_backends_tp_backend_account_validity_changed_cb (self, account, valid);
}


static gboolean folks_backends_tp_backend_real_prepare_co (FolksBackendsTpBackendPrepareData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	folks_internal_profiling_start ("preparing Tp.Backend", NULL);
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
		_data_->_tmp4_ = tp_account_manager_dup ();
		_g_object_unref0 (_data_->self->priv->_account_manager);
		_data_->self->priv->_account_manager = _data_->_tmp4_;
		_data_->_tmp5_ = _data_->self->priv->_account_manager;
		_data_->_state_ = 1;
		tp_proxy_prepare_async ((TpProxy*) _data_->_tmp5_, NULL, folks_backends_tp_backend_prepare_ready, _data_);
		return FALSE;
		_state_1:
		tp_proxy_prepare_finish ((TpProxy*) _data_->_tmp5_, _data_->_res_, &_data_->_inner_error_);
		if (_data_->_inner_error_ != NULL) {
			goto __finally0;
		}
		_data_->_tmp6_ = _data_->self->priv->_account_manager;
		g_signal_connect_object (_data_->_tmp6_, "account-enabled", (GCallback) __folks_backends_tp_backend_account_enabled_cb_tp_account_manager_account_enabled, _data_->self, 0);
		_data_->_tmp7_ = _data_->self->priv->_account_manager;
		g_signal_connect_object (_data_->_tmp7_, "account-validity-changed", (GCallback) __folks_backends_tp_backend_account_validity_changed_cb_tp_account_manager_account_validity_changed, _data_->self, 0);
		_data_->_tmp8_ = _data_->self->priv->_account_manager;
		_data_->_tmp9_ = NULL;
		_data_->_tmp9_ = tp_account_manager_get_valid_accounts (_data_->_tmp8_);
		_data_->accounts = _data_->_tmp9_;
		_data_->_tmp10_ = _data_->accounts;
		{
			_data_->account_collection = _data_->_tmp10_;
			for (_data_->account_it = _data_->account_collection; _data_->account_it != NULL; _data_->account_it = _data_->account_it->next) {
				_data_->_tmp11_ = _g_object_ref0 ((TpAccount*) _data_->account_it->data);
				_data_->account = _data_->_tmp11_;
				{
					_data_->_tmp12_ = _data_->account;
					_folks_backends_tp_backend_account_enabled_cb (_data_->self, _data_->_tmp12_);
					_g_object_unref0 (_data_->account);
				}
			}
		}
		_data_->self->priv->_is_prepared = TRUE;
		g_object_notify ((GObject*) _data_->self, "is-prepared");
		_data_->self->priv->_is_quiescent = TRUE;
		g_object_notify ((GObject*) _data_->self, "is-quiescent");
		_g_list_free0 (_data_->accounts);
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
	folks_internal_profiling_end ("preparing Tp.Backend", NULL);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void folks_backends_tp_backend_real_unprepare_data_free (gpointer _data) {
	FolksBackendsTpBackendUnprepareData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (FolksBackendsTpBackendUnprepareData, _data_);
}


static void folks_backends_tp_backend_real_unprepare (FolksBackend* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	FolksBackendsTpBackend * self;
	FolksBackendsTpBackendUnprepareData* _data_;
	FolksBackendsTpBackend* _tmp0_;
	self = (FolksBackendsTpBackend*) base;
	_data_ = g_slice_new0 (FolksBackendsTpBackendUnprepareData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, folks_backends_tp_backend_real_unprepare);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, folks_backends_tp_backend_real_unprepare_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	folks_backends_tp_backend_real_unprepare_co (_data_);
}


static void folks_backends_tp_backend_real_unprepare_finish (FolksBackend* base, GAsyncResult* _res_, GError** error) {
	FolksBackendsTpBackendUnprepareData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
   * {@inheritDoc}
   */
static gboolean folks_backends_tp_backend_real_unprepare_co (FolksBackendsTpBackendUnprepareData* _data_) {
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
		_data_->_tmp4_ = _data_->self->priv->_account_manager;
		_data_->_tmp5_ = 0U;
		g_signal_parse_name ("account-enabled", tp_account_manager_get_type (), &_data_->_tmp5_, NULL, FALSE);
		g_signal_handlers_disconnect_matched (_data_->_tmp4_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _data_->_tmp5_, 0, NULL, (GCallback) __folks_backends_tp_backend_account_enabled_cb_tp_account_manager_account_enabled, _data_->self);
		_data_->_tmp6_ = _data_->self->priv->_account_manager;
		_data_->_tmp7_ = 0U;
		g_signal_parse_name ("account-validity-changed", tp_account_manager_get_type (), &_data_->_tmp7_, NULL, FALSE);
		g_signal_handlers_disconnect_matched (_data_->_tmp6_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _data_->_tmp7_, 0, NULL, (GCallback) __folks_backends_tp_backend_account_validity_changed_cb_tp_account_manager_account_validity_changed, _data_->self);
		_g_object_unref0 (_data_->self->priv->_account_manager);
		_data_->self->priv->_account_manager = NULL;
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


static void _folks_backends_tp_backend_account_validity_changed_cb (FolksBackendsTpBackend* self, TpAccount* account, gboolean valid) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (account != NULL);
	_tmp0_ = valid;
	if (_tmp0_) {
		TpAccount* _tmp1_;
		_tmp1_ = account;
		_folks_backends_tp_backend_account_enabled_cb (self, _tmp1_);
	}
}


static void _folks_backends_tp_backend_account_enabled_cb (FolksBackendsTpBackend* self, TpAccount* account) {
	TpAccount* _tmp0_;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_;
	gboolean _tmp3_ = FALSE;
	GeeSet* _tmp4_;
	gboolean _tmp9_;
	TpfPersonaStore* store = NULL;
	TpAccount* _tmp10_;
	TpfPersonaStore* _tmp11_ = NULL;
	TpfPersonaStore* _tmp12_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (account != NULL);
	_tmp0_ = account;
	g_object_get (_tmp0_, "enabled", &_tmp1_, NULL);
	_tmp2_ = _tmp1_;
	if (!_tmp2_) {
		return;
	}
	_tmp4_ = self->priv->_storeids;
	if (_tmp4_ != NULL) {
		GeeSet* _tmp5_;
		TpAccount* _tmp6_;
		const gchar* _tmp7_ = NULL;
		gboolean _tmp8_ = FALSE;
		_tmp5_ = self->priv->_storeids;
		_tmp6_ = account;
		_tmp7_ = tp_proxy_get_object_path ((TpProxy*) _tmp6_);
		_tmp8_ = gee_collection_contains ((GeeCollection*) _tmp5_, _tmp7_);
		_tmp3_ = _tmp8_ == FALSE;
	} else {
		_tmp3_ = FALSE;
	}
	_tmp9_ = _tmp3_;
	if (_tmp9_) {
		return;
	}
	_tmp10_ = account;
	_tmp11_ = tpf_persona_store_dup_for_account (_tmp10_);
	store = _tmp11_;
	_tmp12_ = store;
	_folks_backends_tp_backend_add_store (self, (FolksPersonaStore*) _tmp12_, TRUE);
	_g_object_unref0 (store);
}


static void __folks_backends_tp_backend_store_removed_cb_folks_persona_store_removed (FolksPersonaStore* _sender, gpointer self) {
	_folks_backends_tp_backend_store_removed_cb (self, _sender);
}


static void _folks_backends_tp_backend_add_store (FolksBackendsTpBackend* self, FolksPersonaStore* store, gboolean notify) {
	FolksPersonaStore* _tmp0_;
	FolksPersonaStore* _tmp1_;
	gboolean _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (store != NULL);
	_tmp0_ = store;
	g_signal_connect_object (_tmp0_, "removed", (GCallback) __folks_backends_tp_backend_store_removed_cb_folks_persona_store_removed, self, 0);
	_tmp1_ = store;
	g_signal_emit_by_name ((FolksBackend*) self, "persona-store-added", _tmp1_);
	_tmp2_ = notify;
	if (_tmp2_) {
		g_object_notify ((GObject*) self, "persona-stores");
	}
}


static void _folks_backends_tp_backend_remove_store (FolksBackendsTpBackend* self, FolksPersonaStore* store, gboolean notify) {
	FolksPersonaStore* _tmp0_;
	guint _tmp1_ = 0U;
	FolksPersonaStore* _tmp2_;
	gboolean _tmp3_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (store != NULL);
	_tmp0_ = store;
	g_signal_parse_name ("removed", FOLKS_TYPE_PERSONA_STORE, &_tmp1_, NULL, FALSE);
	g_signal_handlers_disconnect_matched (_tmp0_, G_SIGNAL_MATCH_ID | G_SIGNAL_MATCH_FUNC | G_SIGNAL_MATCH_DATA, _tmp1_, 0, NULL, (GCallback) __folks_backends_tp_backend_store_removed_cb_folks_persona_store_removed, self);
	_tmp2_ = store;
	g_signal_emit_by_name ((FolksBackend*) self, "persona-store-removed", _tmp2_);
	_tmp3_ = notify;
	if (_tmp3_) {
		g_object_notify ((GObject*) self, "persona-stores");
	}
}


static void _folks_backends_tp_backend_store_removed_cb (FolksBackendsTpBackend* self, FolksPersonaStore* store) {
	FolksPersonaStore* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (store != NULL);
	_tmp0_ = store;
	_folks_backends_tp_backend_remove_store (self, _tmp0_, TRUE);
}


static const gchar* folks_backends_tp_backend_real_get_name (FolksBackend* base) {
	const gchar* result;
	FolksBackendsTpBackend* self;
	self = (FolksBackendsTpBackend*) base;
	result = BACKEND_NAME;
	return result;
}


static GeeMap* folks_backends_tp_backend_real_get_persona_stores (FolksBackend* base) {
	GeeMap* result;
	FolksBackendsTpBackend* self;
	GeeMap* _tmp0_ = NULL;
	self = (FolksBackendsTpBackend*) base;
	_tmp0_ = tpf_persona_store_list_persona_stores ();
	result = _tmp0_;
	return result;
}


static gboolean folks_backends_tp_backend_real_get_is_prepared (FolksBackend* base) {
	gboolean result;
	FolksBackendsTpBackend* self;
	gboolean _tmp0_;
	self = (FolksBackendsTpBackend*) base;
	_tmp0_ = self->priv->_is_prepared;
	result = _tmp0_;
	return result;
}


static gboolean folks_backends_tp_backend_real_get_is_quiescent (FolksBackend* base) {
	gboolean result;
	FolksBackendsTpBackend* self;
	gboolean _tmp0_;
	self = (FolksBackendsTpBackend*) base;
	_tmp0_ = self->priv->_is_quiescent;
	result = _tmp0_;
	return result;
}


static void folks_backends_tp_backend_class_init (FolksBackendsTpBackendClass * klass) {
	folks_backends_tp_backend_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (FolksBackendsTpBackendPrivate));
	FOLKS_BACKEND_CLASS (klass)->enable_persona_store = folks_backends_tp_backend_real_enable_persona_store;
	FOLKS_BACKEND_CLASS (klass)->disable_persona_store = folks_backends_tp_backend_real_disable_persona_store;
	FOLKS_BACKEND_CLASS (klass)->set_persona_stores = folks_backends_tp_backend_real_set_persona_stores;
	FOLKS_BACKEND_CLASS (klass)->prepare = folks_backends_tp_backend_real_prepare;
	FOLKS_BACKEND_CLASS (klass)->prepare_finish = folks_backends_tp_backend_real_prepare_finish;
	FOLKS_BACKEND_CLASS (klass)->unprepare = folks_backends_tp_backend_real_unprepare;
	FOLKS_BACKEND_CLASS (klass)->unprepare_finish = folks_backends_tp_backend_real_unprepare_finish;
	FOLKS_BACKEND_CLASS (klass)->get_name = folks_backends_tp_backend_real_get_name;
	FOLKS_BACKEND_CLASS (klass)->get_persona_stores = folks_backends_tp_backend_real_get_persona_stores;
	FOLKS_BACKEND_CLASS (klass)->get_is_prepared = folks_backends_tp_backend_real_get_is_prepared;
	FOLKS_BACKEND_CLASS (klass)->get_is_quiescent = folks_backends_tp_backend_real_get_is_quiescent;
	G_OBJECT_CLASS (klass)->get_property = _vala_folks_backends_tp_backend_get_property;
	G_OBJECT_CLASS (klass)->finalize = folks_backends_tp_backend_finalize;
	/**
	   * {@inheritDoc}
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_TP_BACKEND_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	   * {@inheritDoc}
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_TP_BACKEND_PERSONA_STORES, g_param_spec_object ("persona-stores", "persona-stores", "persona-stores", GEE_TYPE_MAP, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	   * Whether this Backend has been prepared.
	   *
	   * See {@link Folks.Backend.is_prepared}.
	   *
	   * @since 0.3.0
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_TP_BACKEND_IS_PREPARED, g_param_spec_boolean ("is-prepared", "is-prepared", "is-prepared", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	/**
	   * Whether this Backend has reached a quiescent state.
	   *
	   * See {@link Folks.Backend.is_quiescent}.
	   *
	   * @since 0.6.2
	   */
	g_object_class_install_property (G_OBJECT_CLASS (klass), FOLKS_BACKENDS_TP_BACKEND_IS_QUIESCENT, g_param_spec_boolean ("is-quiescent", "is-quiescent", "is-quiescent", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void folks_backends_tp_backend_instance_init (FolksBackendsTpBackend * self) {
	self->priv = FOLKS_BACKENDS_TP_BACKEND_GET_PRIVATE (self);
	self->priv->_is_prepared = FALSE;
	self->priv->_prepare_pending = FALSE;
	self->priv->_is_quiescent = FALSE;
	self->priv->_storeids = NULL;
}


static void folks_backends_tp_backend_finalize (GObject* obj) {
	FolksBackendsTpBackend * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackend);
	_g_object_unref0 (self->priv->_account_manager);
	_g_object_unref0 (self->priv->_storeids);
	G_OBJECT_CLASS (folks_backends_tp_backend_parent_class)->finalize (obj);
}


/**
 * A backend which connects to the Telepathy accounts service and creates a
 * {@link PersonaStore} for each valid account known to Telepathy.
 */
GType folks_backends_tp_backend_get_type (void) {
	static volatile gsize folks_backends_tp_backend_type_id__volatile = 0;
	if (g_once_init_enter (&folks_backends_tp_backend_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksBackendsTpBackendClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_backends_tp_backend_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksBackendsTpBackend), 0, (GInstanceInitFunc) folks_backends_tp_backend_instance_init, NULL };
		GType folks_backends_tp_backend_type_id;
		folks_backends_tp_backend_type_id = g_type_register_static (FOLKS_TYPE_BACKEND, "FolksBackendsTpBackend", &g_define_type_info, 0);
		g_once_init_leave (&folks_backends_tp_backend_type_id__volatile, folks_backends_tp_backend_type_id);
	}
	return folks_backends_tp_backend_type_id__volatile;
}


static void _vala_folks_backends_tp_backend_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	FolksBackendsTpBackend * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackend);
	switch (property_id) {
		case FOLKS_BACKENDS_TP_BACKEND_NAME:
		g_value_set_string (value, folks_backend_get_name ((FolksBackend*) self));
		break;
		case FOLKS_BACKENDS_TP_BACKEND_PERSONA_STORES:
		g_value_set_object (value, folks_backend_get_persona_stores ((FolksBackend*) self));
		break;
		case FOLKS_BACKENDS_TP_BACKEND_IS_PREPARED:
		g_value_set_boolean (value, folks_backend_get_is_prepared ((FolksBackend*) self));
		break;
		case FOLKS_BACKENDS_TP_BACKEND_IS_QUIESCENT:
		g_value_set_boolean (value, folks_backend_get_is_quiescent ((FolksBackend*) self));
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



