/* tp-lowlevel.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "FolksTpLowlevel", gir_namespace = "TpLowlevel", gir_version = "0.6", lower_case_cprefix = "folks_tp_lowlevel_")]
namespace FolksTpLowlevel {
	[CCode (cheader_filename = "tp-lowlevel.h")]
	public static async void connection_set_contact_alias_async (TelepathyGLib.Connection conn, uint handle, string alias) throws GLib.Error;
}
