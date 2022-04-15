#include "../winhttp.h"

//----- (000000014018ABA0) ----------------------------------------------------
void __fastcall sub_14018ABA0(__int64 a1, char a2)
{
	int v3; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v5; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v7[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v8; // [rsp+80h] [rbp+8h] BYREF

	if ((a1 & 0xFFFFFFFFC0000000ui64) != 0 && (a2 & 0x10) == 0)
	{
		TlsValue = &off_140B5E648;
		v5 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v7[0] = (__int64)TlsValue;
		v8 = 0x141D3A768i64;
		v7[1] = v5;
		v7[2] = (__int64)lpTlsValue;
		v3 = sub_140196F30(&dword_140C8A174, 2, &v8, a1, v7);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v3)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A174: using guessed type _DWORD dword_140C8A174;

