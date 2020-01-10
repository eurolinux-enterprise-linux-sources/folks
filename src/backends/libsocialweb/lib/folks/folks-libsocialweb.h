/* folks-libsocialweb.h generated by valac 0.20.1.30-1b1d, the Vala compiler, do not modify */


#ifndef __FOLKS_FOLKS_LIBSOCIALWEB_H__
#define __FOLKS_FOLKS_LIBSOCIALWEB_H__

#include <glib.h>
#include <folks/folks.h>
#include <libsocialweb-client/libsocialweb-client-hack-for-vala.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>

G_BEGIN_DECLS


#define SWF_TYPE_PERSONA (swf_persona_get_type ())
#define SWF_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SWF_TYPE_PERSONA, SwfPersona))
#define SWF_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SWF_TYPE_PERSONA, SwfPersonaClass))
#define SWF_IS_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SWF_TYPE_PERSONA))
#define SWF_IS_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SWF_TYPE_PERSONA))
#define SWF_PERSONA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SWF_TYPE_PERSONA, SwfPersonaClass))

typedef struct _SwfPersona SwfPersona;
typedef struct _SwfPersonaClass SwfPersonaClass;
typedef struct _SwfPersonaPrivate SwfPersonaPrivate;

#define SWF_TYPE_PERSONA_STORE (swf_persona_store_get_type ())
#define SWF_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), SWF_TYPE_PERSONA_STORE, SwfPersonaStore))
#define SWF_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), SWF_TYPE_PERSONA_STORE, SwfPersonaStoreClass))
#define SWF_IS_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SWF_TYPE_PERSONA_STORE))
#define SWF_IS_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), SWF_TYPE_PERSONA_STORE))
#define SWF_PERSONA_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), SWF_TYPE_PERSONA_STORE, SwfPersonaStoreClass))

typedef struct _SwfPersonaStore SwfPersonaStore;
typedef struct _SwfPersonaStoreClass SwfPersonaStoreClass;
typedef struct _SwfPersonaStorePrivate SwfPersonaStorePrivate;

struct _SwfPersona {
	FolksPersona parent_instance;
	SwfPersonaPrivate * priv;
};

struct _SwfPersonaClass {
	FolksPersonaClass parent_class;
};

struct _SwfPersonaStore {
	FolksPersonaStore parent_instance;
	SwfPersonaStorePrivate * priv;
};

struct _SwfPersonaStoreClass {
	FolksPersonaStoreClass parent_class;
};


GType swf_persona_get_type (void) G_GNUC_CONST;
GType swf_persona_store_get_type (void) G_GNUC_CONST;
SwfPersona* swf_persona_new (SwfPersonaStore* store, SwContact* contact);
SwfPersona* swf_persona_construct (GType object_type, SwfPersonaStore* store, SwContact* contact);
gchar* swf_persona_get_contact_id (SwContact* contact);
void swf_persona_update (SwfPersona* self, SwContact* contact);
SwContact* swf_persona_get_lsw_contact (SwfPersona* self);
SwfPersonaStore* swf_persona_store_new (SwClientService* service);
SwfPersonaStore* swf_persona_store_construct (GType object_type, SwClientService* service);
SwClientService* swf_persona_store_get_service (SwfPersonaStore* self);


G_END_DECLS

#endif
