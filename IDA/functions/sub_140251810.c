#include "../winhttp.h"

//----- (0000000140251810) ----------------------------------------------------
__int64 __fastcall sub_140251810(__int64 a1)
{
	bool v2; // zf
	int v3; // ebx
	int v4; // eax
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-48h] BYREF
	__int128 v7; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v8)(); // [rsp+40h] [rbp-28h] BYREF
	__int128 v9; // [rsp+48h] [rbp-20h]
	__int64 v10; // [rsp+70h] [rbp+8h] BYREF

	*(_QWORD*)a1 = &off_140B603A0;
	v2 = qword_140C65678 == 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	if (!v2)
	{
		*(_QWORD*)&v7 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v7 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v8 = TlsValue;
		v10 = 0x141DDDE90i64;
		v9 = v7;
		v3 = sub_1401971E0(&dword_140C8A298, 14, &v10, &v8);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v7 + 1));
		if (v3)
			DebugBreak();
	}
	v4 = *(_DWORD*)(a1 + 64);
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 172) = 1;
	*(_DWORD*)(a1 + 68) = 5;
	*(_DWORD*)(a1 + 72) = 5;
	qword_140C65678 = a1;
	*(_DWORD*)(a1 + 64) = v4 & 0xFFFFB000 | 0x800;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	sub_1407E4830((int*)(a1 + 128), 0i64, 0x2Cui64);
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_DWORD*)(a1 + 248) = 1065353216;
	*(_DWORD*)(a1 + 252) = 1065353216;
	return a1;
}
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B603A0: using guessed type __int64 (__fastcall *off_140B603A0)();
// 140C65678: using guessed type __int64 qword_140C65678;
// 140C8A298: using guessed type _DWORD dword_140C8A298;

