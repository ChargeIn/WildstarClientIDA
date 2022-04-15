#include "../winhttp.h"

//----- (00000001408260F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1408260F0(const WCHAR* a1)
{
	HANDLE hObject; // [rsp+40h] [rbp-18h]

	hObject = CreateFileW(a1, 0x80000000, 0, 0i64, 3u, 0x80u, 0i64);
	if (hObject != (HANDLE)-1i64)
		CloseHandle(hObject);
	return hObject != (HANDLE)-1i64;
}

