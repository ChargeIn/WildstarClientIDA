#include "../winhttp.h"

//----- (0000000140280630) ----------------------------------------------------
void __fastcall sub_140280630(__int64 a1)
{
	_QWORD* v1; // rcx
	int v2; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v4; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v5)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v6; // [rsp+48h] [rbp-20h]
	__int64 v7; // [rsp+70h] [rbp+8h] BYREF

	v1 = *(_QWORD**)(a1 + 8600);
	if (v1[6])
	{
		if (v1)
			sub_140278A10(v1);
	}
	else
	{
		*(_QWORD*)&v4 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v4 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v5 = TlsValue;
		v7 = 0x141DE34C8i64;
		v6 = v4;
		v2 = sub_1401971E0(&dword_140C8A34C, 14, &v7, &v5);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v4 + 1));
		if (v2)
			DebugBreak();
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A34C: using guessed type _DWORD dword_140C8A34C;

