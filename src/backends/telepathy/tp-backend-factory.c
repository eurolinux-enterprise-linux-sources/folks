/* tp-backend-factory.c generated by valac 0.20.1.30-1b1d, the Vala compiler
 * generated from tp-backend-factory.vala, do not modify */

/*
 * Copyright (C) 2009 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2009 Nokia Corporation.
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
 * Authors: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *          Travis Reitter <travis.reitter@collabora.co.uk>
 *
 * This file was originally part of Rygel.
 */

#include <glib.h>
#include <glib-object.h>
#include <folks/folks.h>


#define FOLKS_BACKENDS_TP_TYPE_BACKEND_FACTORY (folks_backends_tp_backend_factory_get_type ())
#define FOLKS_BACKENDS_TP_BACKEND_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND_FACTORY, FolksBackendsTpBackendFactory))
#define FOLKS_BACKENDS_TP_BACKEND_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_BACKENDS_TP_TYPE_BACKEND_FACTORY, FolksBackendsTpBackendFactoryClass))
#define FOLKS_BACKENDS_TP_IS_BACKEND_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND_FACTORY))
#define FOLKS_BACKENDS_TP_IS_BACKEND_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_BACKENDS_TP_TYPE_BACKEND_FACTORY))
#define FOLKS_BACKENDS_TP_BACKEND_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND_FACTORY, FolksBackendsTpBackendFactoryClass))

typedef struct _FolksBackendsTpBackendFactory FolksBackendsTpBackendFactory;
typedef struct _FolksBackendsTpBackendFactoryClass FolksBackendsTpBackendFactoryClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _FolksBackendsTpBackendFactoryPrivate FolksBackendsTpBackendFactoryPrivate;

#define FOLKS_BACKENDS_TP_TYPE_BACKEND (folks_backends_tp_backend_get_type ())
#define FOLKS_BACKENDS_TP_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackend))
#define FOLKS_BACKENDS_TP_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackendClass))
#define FOLKS_BACKENDS_TP_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND))
#define FOLKS_BACKENDS_TP_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_BACKENDS_TP_TYPE_BACKEND))
#define FOLKS_BACKENDS_TP_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_BACKENDS_TP_TYPE_BACKEND, FolksBackendsTpBackendClass))

typedef struct _FolksBackendsTpBackend FolksBackendsTpBackend;
typedef struct _FolksBackendsTpBackendClass FolksBackendsTpBackendClass;

struct _FolksBackendsTpBackendFactory {
	GObject parent_instance;
	FolksBackendsTpBackendFactoryPrivate * priv;
};

struct _FolksBackendsTpBackendFactoryClass {
	GObjectClass parent_class;
};


extern FolksBackendsTpBackendFactory* _backend_factory;
FolksBackendsTpBackendFactory* _backend_factory = NULL;
static gpointer folks_backends_tp_backend_factory_parent_class = NULL;

GType folks_backends_tp_backend_factory_get_type (void) G_GNUC_CONST;
void module_init (FolksBackendStore* backend_store);
FolksBackendsTpBackendFactory* folks_backends_tp_backend_factory_new (FolksBackendStore* backend_store);
FolksBackendsTpBackendFactory* folks_backends_tp_backend_factory_construct (GType object_type, FolksBackendStore* backend_store);
void module_finalize (FolksBackendStore* backend_store);
enum  {
	FOLKS_BACKENDS_TP_BACKEND_FACTORY_DUMMY_PROPERTY
};
FolksBackendsTpBackend* folks_backends_tp_backend_new (void);
FolksBackendsTpBackend* folks_backends_tp_backend_construct (GType object_type);
GType folks_backends_tp_backend_get_type (void) G_GNUC_CONST;


/**
 * The Telepathy backend module entry point.
 */
void module_init (FolksBackendStore* backend_store) {
	FolksBackendStore* _tmp0_;
	FolksBackendsTpBackendFactory* _tmp1_;
	g_return_if_fail (backend_store != NULL);
	_tmp0_ = backend_store;
	_tmp1_ = folks_backends_tp_backend_factory_new (_tmp0_);
	_g_object_unref0 (_backend_factory);
	_backend_factory = _tmp1_;
}


/**
 * The Telepathy backend module exit point.
 */
void module_finalize (FolksBackendStore* backend_store) {
	g_return_if_fail (backend_store != NULL);
	_g_object_unref0 (_backend_factory);
	_backend_factory = NULL;
}


/**
   * {@inheritDoc}
   */
FolksBackendsTpBackendFactory* folks_backends_tp_backend_factory_construct (GType object_type, FolksBackendStore* backend_store) {
	FolksBackendsTpBackendFactory * self = NULL;
	FolksBackendStore* _tmp0_;
	FolksBackendsTpBackend* _tmp1_;
	FolksBackendsTpBackend* _tmp2_;
	g_return_val_if_fail (backend_store != NULL, NULL);
	self = (FolksBackendsTpBackendFactory*) g_object_new (object_type, NULL);
	_tmp0_ = backend_store;
	_tmp1_ = folks_backends_tp_backend_new ();
	_tmp2_ = _tmp1_;
	folks_backend_store_add_backend (_tmp0_, (FolksBackend*) _tmp2_);
	_g_object_unref0 (_tmp2_);
	return self;
}


FolksBackendsTpBackendFactory* folks_backends_tp_backend_factory_new (FolksBackendStore* backend_store) {
	return folks_backends_tp_backend_factory_construct (FOLKS_BACKENDS_TP_TYPE_BACKEND_FACTORY, backend_store);
}


static void folks_backends_tp_backend_factory_class_init (FolksBackendsTpBackendFactoryClass * klass) {
	folks_backends_tp_backend_factory_parent_class = g_type_class_peek_parent (klass);
}


static void folks_backends_tp_backend_factory_instance_init (FolksBackendsTpBackendFactory * self) {
}


/**
 * A backend factory to create a single {@link Backend}.
 */
GType folks_backends_tp_backend_factory_get_type (void) {
	static volatile gsize folks_backends_tp_backend_factory_type_id__volatile = 0;
	if (g_once_init_enter (&folks_backends_tp_backend_factory_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (FolksBackendsTpBackendFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) folks_backends_tp_backend_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (FolksBackendsTpBackendFactory), 0, (GInstanceInitFunc) folks_backends_tp_backend_factory_instance_init, NULL };
		GType folks_backends_tp_backend_factory_type_id;
		folks_backends_tp_backend_factory_type_id = g_type_register_static (G_TYPE_OBJECT, "FolksBackendsTpBackendFactory", &g_define_type_info, 0);
		g_once_init_leave (&folks_backends_tp_backend_factory_type_id__volatile, folks_backends_tp_backend_factory_type_id);
	}
	return folks_backends_tp_backend_factory_type_id__volatile;
}



