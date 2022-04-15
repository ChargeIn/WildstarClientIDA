#include "../winhttp.h"

//----- (00000001407174A0) ----------------------------------------------------
__int64 sub_1407174A0()
{
	int v0; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v3; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v4)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v5; // [rsp+48h] [rbp-20h]
	__int64 v6; // [rsp+70h] [rbp+8h] BYREF

	*(_QWORD*)&v3 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v3 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v4 = TlsValue;
	v6 = 0x141E40450i64;
	v5 = v3;
	v0 = sub_140196F30(&dword_140C8B110, 40, &v6, &v4);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v3 + 1));
	if (v0)
		DebugBreak();
	return 2147500037i64;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8B110: using guessed type _DWORD dword_140C8B110;

