#include "../winhttp.h"

//----- (0000000140033BE0) ----------------------------------------------------
LRESULT __fastcall sub_140033BE0(_DWORD* a1, HWND a2, UINT a3, WPARAM a4, LPARAM a5)
{
	if (!a1[24] && a3 == 258)
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 128i64))(a1);
	return DefWindowProcW(a2, a3, a4, a5);
}

