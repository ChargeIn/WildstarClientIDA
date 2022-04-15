#include "../winhttp.h"

//----- (000000014034AA90) ----------------------------------------------------
__int64 __fastcall sub_14034AA90(__int64 a1)
{
	unsigned int v2; // eax
	const CHAR* v3; // rdx
	_DWORD* v4; // rcx
	int v6; // ebx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-48h] BYREF
	__int128 v8; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v9)(); // [rsp+50h] [rbp-28h] BYREF
	__int128 v10; // [rsp+58h] [rbp-20h]
	__int64 v11; // [rsp+80h] [rbp+8h] BYREF

	v2 = sub_140881BC0(
		*(_QWORD*)(a1 + 32),
		*(_DWORD*)(a1 + 40),
		*(_DWORD*)(a1 + 44),
		*(_DWORD*)(a1 + 48),
		*(_DWORD*)(a1 + 52));
	*(_DWORD*)(a1 + 16) = v2;
	if (v2 == -1)
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v8 = 0i64;
		*((_QWORD*)&v8 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v9 = TlsValue;
		v11 = 0x141DEED08i64;
		v10 = v8;
		v6 = sub_140196F30(&dword_140C8A65C, 19, &v11, &v9);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v8 + 1));
		if (v6)
			DebugBreak();
		return 2147500037i64;
	}
	else
	{
		v3 = *(const CHAR**)(a1 + 56);
		if (v3)
			sub_140881AD0(v2, v3);
		v4 = *(_DWORD**)(a1 + 24);
		if (v4)
			*v4 = *(_DWORD*)(a1 + 16);
		return 0i64;
	}
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A65C: using guessed type _DWORD dword_140C8A65C;

