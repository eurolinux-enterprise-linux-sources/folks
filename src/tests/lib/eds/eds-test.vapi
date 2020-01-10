/* eds-test.vapi generated by valac 0.27.1.3-6129, do not modify. */

namespace EdsTest {
	[CCode (cheader_filename = "eds-test.h")]
	public class Backend {
		public Backend ();
		public void add_contact (owned Gee.HashMap<string,GLib.Value?> c);
		public async void commit_contacts_to_addressbook ();
		public async void remove_contact (int contact_pos);
		public void reset ();
		public void set_as_default ();
		public void set_up (bool source_is_default = false, string name = "test");
		public void tear_down ();
		public async void update_contact (int contact_pos, owned Gee.HashMap<string,GLib.Value?> updated_data);
		public string address_book_uid { get; }
	}
	[CCode (cheader_filename = "eds-test.h")]
	public class TestCase : Folks.TestCase {
		public EdsTest.Backend? eds_backend;
		public TestCase (string name);
		public virtual void configure_primary_store ();
		public virtual void create_backend ();
		public override string create_transient_dir ();
		public override void private_bus_up ();
		public override void set_up ();
		public override void tear_down ();
	}
}
