/* kf-test.vapi generated by valac 0.35.3.10-6b27, do not modify. */

namespace KfTest {
	[CCode (cheader_filename = "kf-test.h")]
	public class Backend {
		public Backend ();
		public void set_up (string key_file_contents);
		public void tear_down ();
	}
	[CCode (cheader_filename = "kf-test.h")]
	public class TestCase : Folks.TestCase {
		public KfTest.Backend kf_backend;
		public TestCase (string name);
		public override void tear_down ();
	}
}
