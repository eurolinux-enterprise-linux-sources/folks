/* dummy-test.vapi generated by valac 0.26.2.1-1f25, do not modify. */

namespace DummyTest {
	[CCode (cheader_filename = "dummy-test.h")]
	public class TestCase : Folks.TestCase {
		public FolksDummy.Backend dummy_backend;
		public FolksDummy.PersonaStore dummy_persona_store;
		public TestCase (string name);
		public virtual void configure_primary_store ();
		public override void set_up ();
		public override void tear_down ();
	}
}
