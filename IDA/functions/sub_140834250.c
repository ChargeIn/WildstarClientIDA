//----- (0000000140834250) ----------------------------------------------------
LRESULT __fastcall sub_140834250(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	if (Msg == 537
		&& wParam == 0x8000
		&& byte_140C61F48
		&& (*(_QWORD*)(lParam + 12) == 0x11D093EF6994AD04i64 && *(_QWORD*)(lParam + 20) == 0x963122C9A000CCA3ui64
			|| *(_QWORD*)(lParam + 12) == 0x11D08F5665E8773Ei64 && *(_QWORD*)(lParam + 20) == 0x963122C9A000B9A3ui64))
	{
		byte_140C61F49 = 1;
		sub_140856280((void**)&qword_140C61B68[5].LockCount);
	}
	return CallWindowProcW(dwNewLong, hWnd, Msg, wParam, lParam);
}
// 140C61F48: using guessed type char byte_140C61F48;
// 140C61F49: using guessed type char byte_140C61F49;

