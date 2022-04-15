#include "../winhttp.h"

//----- (0000000140642A00) ----------------------------------------------------
__int64 __fastcall sub_140642A00(_DWORD* a1, unsigned int a2)
{
	int v5; // eax
	int v6; // ebx
	int v7; // [rsp+20h] [rbp-58h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v9; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v11[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v12; // [rsp+90h] [rbp+18h] BYREF

	if (a2 < 0x20)
		return a1[5] & (unsigned int)(1 << a2);
	if (a2 < 0x40)
		return a1[6] & (unsigned int)(1 << (a2 - 32));
	TlsValue = &off_140B5E648;
	v9 = 0i64;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v12 = 0x141E24358i64;
	v11[0] = (__int64)TlsValue;
	v11[1] = v9;
	v5 = a1[4];
	v11[2] = (__int64)lpTlsValue;
	v7 = v5;
	v6 = sub_140196F30(&dword_140C8AFFC, 41, &v12, a2, v7, v11);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v6)
		DebugBreak();
	return 0i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8AFFC: using guessed type _DWORD dword_140C8AFFC;

