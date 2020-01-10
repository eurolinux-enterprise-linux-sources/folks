/* folks-dummy.h generated by valac 0.35.3.10-6b27, the Vala compiler, do not modify */


#ifndef __FOLKS_FOLKS_DUMMY_H__
#define __FOLKS_FOLKS_DUMMY_H__

#include <glib.h>
#include <folks/folks.h>
#include <gio/gio.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>

G_BEGIN_DECLS


#define FOLKS_DUMMY_TYPE_BACKEND (folks_dummy_backend_get_type ())
#define FOLKS_DUMMY_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_DUMMY_TYPE_BACKEND, FolksDummyBackend))
#define FOLKS_DUMMY_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_DUMMY_TYPE_BACKEND, FolksDummyBackendClass))
#define FOLKS_DUMMY_IS_BACKEND(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_DUMMY_TYPE_BACKEND))
#define FOLKS_DUMMY_IS_BACKEND_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_DUMMY_TYPE_BACKEND))
#define FOLKS_DUMMY_BACKEND_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_DUMMY_TYPE_BACKEND, FolksDummyBackendClass))

typedef struct _FolksDummyBackend FolksDummyBackend;
typedef struct _FolksDummyBackendClass FolksDummyBackendClass;
typedef struct _FolksDummyBackendPrivate FolksDummyBackendPrivate;

#define FOLKS_DUMMY_TYPE_PERSONA_STORE (folks_dummy_persona_store_get_type ())
#define FOLKS_DUMMY_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_DUMMY_TYPE_PERSONA_STORE, FolksDummyPersonaStore))
#define FOLKS_DUMMY_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_DUMMY_TYPE_PERSONA_STORE, FolksDummyPersonaStoreClass))
#define FOLKS_DUMMY_IS_PERSONA_STORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_DUMMY_TYPE_PERSONA_STORE))
#define FOLKS_DUMMY_IS_PERSONA_STORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_DUMMY_TYPE_PERSONA_STORE))
#define FOLKS_DUMMY_PERSONA_STORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_DUMMY_TYPE_PERSONA_STORE, FolksDummyPersonaStoreClass))

typedef struct _FolksDummyPersonaStore FolksDummyPersonaStore;
typedef struct _FolksDummyPersonaStoreClass FolksDummyPersonaStoreClass;

#define FOLKS_DUMMY_TYPE_PERSONA (folks_dummy_persona_get_type ())
#define FOLKS_DUMMY_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_DUMMY_TYPE_PERSONA, FolksDummyPersona))
#define FOLKS_DUMMY_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_DUMMY_TYPE_PERSONA, FolksDummyPersonaClass))
#define FOLKS_DUMMY_IS_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_DUMMY_TYPE_PERSONA))
#define FOLKS_DUMMY_IS_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_DUMMY_TYPE_PERSONA))
#define FOLKS_DUMMY_PERSONA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_DUMMY_TYPE_PERSONA, FolksDummyPersonaClass))

typedef struct _FolksDummyPersona FolksDummyPersona;
typedef struct _FolksDummyPersonaClass FolksDummyPersonaClass;
typedef struct _FolksDummyPersonaPrivate FolksDummyPersonaPrivate;
typedef struct _FolksDummyPersonaStorePrivate FolksDummyPersonaStorePrivate;

#define FOLKS_DUMMY_TYPE_FULL_PERSONA (folks_dummy_full_persona_get_type ())
#define FOLKS_DUMMY_FULL_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), FOLKS_DUMMY_TYPE_FULL_PERSONA, FolksDummyFullPersona))
#define FOLKS_DUMMY_FULL_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), FOLKS_DUMMY_TYPE_FULL_PERSONA, FolksDummyFullPersonaClass))
#define FOLKS_DUMMY_IS_FULL_PERSONA(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FOLKS_DUMMY_TYPE_FULL_PERSONA))
#define FOLKS_DUMMY_IS_FULL_PERSONA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), FOLKS_DUMMY_TYPE_FULL_PERSONA))
#define FOLKS_DUMMY_FULL_PERSONA_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), FOLKS_DUMMY_TYPE_FULL_PERSONA, FolksDummyFullPersonaClass))

typedef struct _FolksDummyFullPersona FolksDummyFullPersona;
typedef struct _FolksDummyFullPersonaClass FolksDummyFullPersonaClass;
typedef struct _FolksDummyFullPersonaPrivate FolksDummyFullPersonaPrivate;

struct _FolksDummyBackend {
	FolksBackend parent_instance;
	FolksDummyBackendPrivate * priv;
};

struct _FolksDummyBackendClass {
	FolksBackendClass parent_class;
};

struct _FolksDummyPersona {
	FolksPersona parent_instance;
	FolksDummyPersonaPrivate * priv;
};

struct _FolksDummyPersonaClass {
	FolksPersonaClass parent_class;
};

typedef void (*FolksDummyPersonaChangePropertyCallback) (void* user_data);
struct _FolksDummyPersonaStore {
	FolksPersonaStore parent_instance;
	FolksDummyPersonaStorePrivate * priv;
};

struct _FolksDummyPersonaStoreClass {
	FolksPersonaStoreClass parent_class;
};

typedef gint (*FolksDummyPersonaStoreAddPersonaFromDetailsMock) (FolksDummyPersona* persona, void* user_data, GError** error);
typedef gint (*FolksDummyPersonaStoreRemovePersonaMock) (FolksDummyPersona* persona, void* user_data, GError** error);
typedef gint (*FolksDummyPersonaStorePrepareMock) (void* user_data, GError** error);
struct _FolksDummyFullPersona {
	FolksDummyPersona parent_instance;
	FolksDummyFullPersonaPrivate * priv;
};

struct _FolksDummyFullPersonaClass {
	FolksDummyPersonaClass parent_class;
};


GType folks_dummy_backend_get_type (void) G_GNUC_CONST;
FolksDummyBackend* folks_dummy_backend_new (void);
FolksDummyBackend* folks_dummy_backend_construct (GType object_type);
GType folks_dummy_persona_store_get_type (void) G_GNUC_CONST;
void folks_dummy_backend_register_persona_stores (FolksDummyBackend* self, GeeSet* stores, gboolean enable_stores);
void folks_dummy_backend_unregister_persona_stores (FolksDummyBackend* self, GeeSet* stores);
GType folks_dummy_persona_get_type (void) G_GNUC_CONST;
FolksDummyPersona* folks_dummy_persona_new (FolksDummyPersonaStore* store, const gchar* contact_id, gboolean is_user, gchar** linkable_properties, int linkable_properties_length1);
FolksDummyPersona* folks_dummy_persona_construct (GType object_type, FolksDummyPersonaStore* store, const gchar* contact_id, gboolean is_user, gchar** linkable_properties, int linkable_properties_length1);
void folks_dummy_persona_update_writeable_properties (FolksDummyPersona* self, gchar** writeable_properties, int writeable_properties_length1);
void folks_dummy_persona_update_linkable_properties (FolksDummyPersona* self, gchar** linkable_properties, int linkable_properties_length1);
void folks_dummy_persona_change_property (FolksDummyPersona* self, const gchar* property_name, FolksDummyPersonaChangePropertyCallback callback, void* callback_target, GAsyncReadyCallback _callback_, gpointer _user_data_);
void folks_dummy_persona_change_property_finish (FolksDummyPersona* self, GAsyncResult* _res_);
gint folks_dummy_persona_get_property_change_delay (FolksDummyPersona* self);
void folks_dummy_persona_set_property_change_delay (FolksDummyPersona* self, gint value);
FolksDummyPersonaStore* folks_dummy_persona_store_new (const gchar* id, const gchar* display_name, gchar** always_writeable_properties, int always_writeable_properties_length1);
FolksDummyPersonaStore* folks_dummy_persona_store_construct (GType object_type, const gchar* id, const gchar* display_name, gchar** always_writeable_properties, int always_writeable_properties_length1);
void folks_dummy_persona_store_update_capabilities (FolksDummyPersonaStore* self, FolksMaybeBool can_add_personas, FolksMaybeBool can_alias_personas, FolksMaybeBool can_remove_personas);
void folks_dummy_persona_store_freeze_personas_changed (FolksDummyPersonaStore* self);
void folks_dummy_persona_store_thaw_personas_changed (FolksDummyPersonaStore* self);
void folks_dummy_persona_store_register_personas (FolksDummyPersonaStore* self, GeeSet* personas);
void folks_dummy_persona_store_unregister_personas (FolksDummyPersonaStore* self, GeeSet* personas);
void folks_dummy_persona_store_reach_quiescence (FolksDummyPersonaStore* self);
void folks_dummy_persona_store_update_is_user_set_default (FolksDummyPersonaStore* self, gboolean is_user_set_default);
void folks_dummy_persona_store_update_trust_level (FolksDummyPersonaStore* self, FolksPersonaStoreTrust trust_level);
FolksDummyPersonaStoreAddPersonaFromDetailsMock folks_dummy_persona_store_get_add_persona_from_details_mock (FolksDummyPersonaStore* self, gpointer* result_target);
void folks_dummy_persona_store_set_add_persona_from_details_mock (FolksDummyPersonaStore* self, FolksDummyPersonaStoreAddPersonaFromDetailsMock value, gpointer value_target);
FolksDummyPersonaStoreRemovePersonaMock folks_dummy_persona_store_get_remove_persona_mock (FolksDummyPersonaStore* self, gpointer* result_target);
void folks_dummy_persona_store_set_remove_persona_mock (FolksDummyPersonaStore* self, FolksDummyPersonaStoreRemovePersonaMock value, gpointer value_target);
FolksDummyPersonaStorePrepareMock folks_dummy_persona_store_get_prepare_mock (FolksDummyPersonaStore* self, gpointer* result_target);
void folks_dummy_persona_store_set_prepare_mock (FolksDummyPersonaStore* self, FolksDummyPersonaStorePrepareMock value, gpointer value_target);
GType folks_dummy_persona_store_get_persona_type (FolksDummyPersonaStore* self);
void folks_dummy_persona_store_set_persona_type (FolksDummyPersonaStore* self, GType value);
GType folks_dummy_full_persona_get_type (void) G_GNUC_CONST;
FolksDummyFullPersona* folks_dummy_full_persona_new (FolksDummyPersonaStore* store, const gchar* contact_id, gboolean is_user, gchar** linkable_properties, int linkable_properties_length1);
FolksDummyFullPersona* folks_dummy_full_persona_construct (GType object_type, FolksDummyPersonaStore* store, const gchar* contact_id, gboolean is_user, gchar** linkable_properties, int linkable_properties_length1);
void folks_dummy_full_persona_update_gender (FolksDummyFullPersona* self, FolksGender gender);
void folks_dummy_full_persona_update_calendar_event_id (FolksDummyFullPersona* self, const gchar* calendar_event_id);
void folks_dummy_full_persona_update_birthday (FolksDummyFullPersona* self, GDateTime* birthday);
void folks_dummy_full_persona_update_roles (FolksDummyFullPersona* self, GeeSet* roles);
void folks_dummy_full_persona_update_groups (FolksDummyFullPersona* self, GeeSet* groups);
void folks_dummy_full_persona_update_web_service_addresses (FolksDummyFullPersona* self, GeeMultiMap* web_service_addresses);
void folks_dummy_full_persona_update_email_addresses (FolksDummyFullPersona* self, GeeSet* email_addresses);
void folks_dummy_full_persona_update_notes (FolksDummyFullPersona* self, GeeSet* notes);
void folks_dummy_full_persona_update_full_name (FolksDummyFullPersona* self, const gchar* full_name);
void folks_dummy_full_persona_update_nickname (FolksDummyFullPersona* self, const gchar* nickname);
void folks_dummy_full_persona_update_structured_name (FolksDummyFullPersona* self, FolksStructuredName* structured_name);
void folks_dummy_full_persona_update_avatar (FolksDummyFullPersona* self, GLoadableIcon* avatar);
void folks_dummy_full_persona_update_urls (FolksDummyFullPersona* self, GeeSet* urls);
void folks_dummy_full_persona_update_im_addresses (FolksDummyFullPersona* self, GeeMultiMap* im_addresses);
void folks_dummy_full_persona_update_phone_numbers (FolksDummyFullPersona* self, GeeSet* phone_numbers);
void folks_dummy_full_persona_update_postal_addresses (FolksDummyFullPersona* self, GeeSet* postal_addresses);
void folks_dummy_full_persona_update_local_ids (FolksDummyFullPersona* self, GeeSet* local_ids);
void folks_dummy_full_persona_update_is_favourite (FolksDummyFullPersona* self, gboolean is_favourite);
void folks_dummy_full_persona_update_anti_links (FolksDummyFullPersona* self, GeeSet* anti_links);


G_END_DECLS

#endif
