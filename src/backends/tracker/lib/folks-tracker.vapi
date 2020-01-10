/* folks-tracker.vapi generated by valac 0.34.0.3-63fa6, do not modify. */

[CCode (gir_namespace = "FolksTracker", gir_version = "0.6")]
namespace Trf {
	[CCode (cheader_filename = "folks/folks-tracker.h")]
	public class OntologyDefs : GLib.Object {
		public const string DEFAULT_CONTACT_URN;
		public const string NAO_FAVORITE;
		public const string NAO_HAS_PROPERTY;
		public const string NAO_PROPERTY;
		public const string NAO_PROPERTY_NAME;
		public const string NAO_PROPERTY_VALUE;
		public const string NAO_TAG;
		public const string NAO_URL_PREFIX;
		public const string NCO_ADDITIONAL;
		public const string NCO_ADDRESS_LOCATION;
		public const string NCO_AFFILIATION;
		public const string NCO_BIRTHDAY;
		public const string NCO_BLOG;
		public const string NCO_COUNTRY;
		public const string NCO_COUNTY;
		public const string NCO_DISTRICT;
		public const string NCO_EMAIL;
		public const string NCO_EMAIL_PROP;
		public const string NCO_EXTENDED_ADDRESS;
		public const string NCO_FAMILY;
		public const string NCO_FEMALE;
		public const string NCO_FULLNAME;
		public const string NCO_GENDER;
		public const string NCO_GIVEN;
		public const string NCO_HAS_AFFILIATION;
		public const string NCO_HAS_EMAIL;
		public const string NCO_HAS_IMADDRESS;
		public const string NCO_HAS_PHONE;
		public const string NCO_HAS_POSTAL_ADDRESS;
		public const string NCO_IMADDRESS;
		public const string NCO_IMID;
		public const string NCO_IMPROTOCOL;
		public const string NCO_IM_NICKNAME;
		public const string NCO_LOCALITY;
		public const string NCO_MALE;
		public const string NCO_NICKNAME;
		public const string NCO_NOTE;
		public const string NCO_ORG;
		public const string NCO_PERSON;
		public const string NCO_PHONE;
		public const string NCO_PHONE_PROP;
		public const string NCO_PHOTO;
		public const string NCO_POBOX;
		public const string NCO_POSTALCODE;
		public const string NCO_POSTAL_ADDRESS;
		public const string NCO_PREFIX;
		public const string NCO_REGION;
		public const string NCO_ROLE;
		public const string NCO_STREET_ADDRESS;
		public const string NCO_SUFFIX;
		public const string NCO_TITLE;
		public const string NCO_URL;
		public const string NCO_URL_PREFIX;
		public const string NCO_WEBSITE;
		public const string NFO_IMAGE;
		public const string NIE_DATAOBJECT;
		public const string NIE_URL;
		public const string PERSON_CLASS;
		public const string RDF_TYPE;
		public const string RDF_URL_PREFIX;
		public OntologyDefs ();
	}
	[CCode (cheader_filename = "folks/folks-tracker.h")]
	public class Persona : Folks.Persona, Folks.AvatarDetails, Folks.BirthdayDetails, Folks.EmailDetails, Folks.FavouriteDetails, Folks.GenderDetails, Folks.ImDetails, Folks.LocalIdDetails, Folks.NameDetails, Folks.NoteDetails, Folks.PhoneDetails, Folks.PostalAddressDetails, Folks.RoleDetails, Folks.UrlDetails, Folks.WebServiceDetails {
		public Persona (Trf.PersonaStore store, string tracker_id, Tracker.Sparql.Cursor? cursor = null);
		public override void linkable_property_to_links (string prop_name, Folks.Persona.LinkablePropertyCallback callback);
		public Tracker.Sparql.Cursor? cursor { get; construct; }
		public override string[] linkable_properties { get; }
		public string tracker_id { get; construct; }
		public override string[] writeable_properties { get; }
	}
	[CCode (cheader_filename = "folks/folks-tracker.h")]
	public class PersonaStore : Folks.PersonaStore {
		public PersonaStore ();
		public override async Folks.Persona? add_persona_from_details (GLib.HashTable<string,GLib.Value?> details) throws Folks.PersonaStoreError;
		public int get_favorite_id ();
		public int get_gender_female_id ();
		public int get_gender_male_id ();
		public override async void prepare () throws GLib.Error;
		public override async void remove_persona (Folks.Persona persona) throws Folks.PersonaStoreError;
		public static string serialize_local_ids (Gee.Set<string> local_ids);
		public static string serialize_web_services (Gee.MultiMap<string,Folks.WebServiceFieldDetails> ws_obj);
		public static Gee.Set<string> unserialize_local_ids (string local_ids);
		public static Gee.MultiMap<string,Folks.WebServiceFieldDetails> unserialize_web_services (string ws_addrs);
		public override string[] always_writeable_properties { get; }
		public override Folks.MaybeBool can_add_personas { get; }
		public override Folks.MaybeBool can_alias_personas { get; }
		public override Folks.MaybeBool can_group_personas { get; }
		public override Folks.MaybeBool can_remove_personas { get; }
		public override bool is_prepared { get; }
		public override bool is_quiescent { get; }
		public override Gee.Map<string,Trf.Persona> personas { get; }
		public override string type_id { get; }
	}
}
[CCode (cheader_filename = "folks/folks-tracker.h")]
public struct Event {
	public int graph_id;
	public int subject_id;
	public int pred_id;
	public int object_id;
}
