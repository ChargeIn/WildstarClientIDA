#include "../winhttp.h"

//----- (0000000140344EA0) ----------------------------------------------------
void __fastcall sub_140344EA0(__int64 a1)
{
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v4; // [rsp+38h] [rbp-40h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-38h]
	__int64 v6[5]; // [rsp+50h] [rbp-28h] BYREF
	__int64 v7; // [rsp+98h] [rbp+20h] BYREF

	if (!dword_140C65868)
	{
		TlsValue = &off_140B5E648;
		v4 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v6[0] = (__int64)TlsValue;
		v7 = 0x141DEEAD8i64;
		v6[1] = v4;
		v6[2] = (__int64)lpTlsValue;
		v2 = sub_140196F30(&dword_140C8A650, 19, &v7, a1, v6);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v2)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65868: using guessed type int dword_140C65868;
// 140C8A650: using guessed type _DWORD dword_140C8A650;

