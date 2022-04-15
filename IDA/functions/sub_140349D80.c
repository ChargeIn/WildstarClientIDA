#include "../winhttp.h"

//----- (0000000140349D80) ----------------------------------------------------
void __fastcall sub_140349D80(__int64 a1)
{
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v4; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v5)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v6; // [rsp+48h] [rbp-20h]
	__int64 v7; // [rsp+70h] [rbp+8h] BYREF

	*(_QWORD*)a1 = off_140B65328;
	sub_14034A1A0(a1, 0x80004004);
	if (*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)&v4 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v4 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = TlsValue;
		v7 = 0x141DEEB90i64;
		v6 = v4;
		v2 = sub_1401971E0(&dword_140C8A654, 19, &v7, &v5);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v4 + 1));
		if (v2)
			DebugBreak();
	}
	if (*(_QWORD*)(a1 + 24))
		sub_1401A4A00((const void***)(a1 + 24));
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B65328: using guessed type __int64 (__fastcall *off_140B65328[13])();
// 140C8A654: using guessed type _DWORD dword_140C8A654;

