#include "../winhttp.h"

//----- (0000000140190940) ----------------------------------------------------
_QWORD* __fastcall sub_140190940(_QWORD* lpTlsValue, int a2)
{
	LPVOID Value; // rax
	DWORD v5; // ecx

	*lpTlsValue = &off_140B5E648;
	lpTlsValue[1] = L"Result";
	Value = TlsGetValue(dwTlsIndex);
	v5 = dwTlsIndex;
	lpTlsValue[2] = Value;
	TlsSetValue(v5, lpTlsValue);
	*lpTlsValue = &off_140B5E640;
	*((_DWORD*)lpTlsValue + 6) = a2;
	return lpTlsValue;
}
// 140A42C90: using guessed type wchar_t aResult[7];
// 140B5E640: using guessed type void *off_140B5E640;
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

