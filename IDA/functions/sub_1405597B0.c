#include "../winhttp.h"

//----- (00000001405597B0) ----------------------------------------------------
__int64 __fastcall sub_1405597B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	int v5; // eax
	__int64 v9; // rcx
	__int64 v10; // r8
	__int64 v11; // rcx
	int v12; // eax

	v5 = dword_140C4D2A0;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D2A0)
		v5 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C4D2B0 + v5))
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 72) = 300;
	*(_QWORD*)(a1 + 76) = -1i64;
	v9 = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 84) = -1;
	*(_DWORD*)(a1 + 128) = 0;
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 152i64))(v9);
	if (!a3)
		return 2147500037i64;
	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	v10 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v10)
		return 2147500037i64;
	v11 = sub_1403ACD90(qword_140C65B70, a4, v10);
	if (!v11)
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = 7;
	v12 = *(_DWORD*)(a3 + 8);
	*(_DWORD*)(a1 + 16) = a4;
	*(_DWORD*)(a1 + 12) = v12;
	*(_DWORD*)(a1 + 88) = 0;
	*(_DWORD*)(a1 + 60) = *(_DWORD*)(*(_QWORD*)(v11 + 112) + 112i64);
	sub_140559920((__m128*)a1);
	return 0i64;
}
// 140C4D2A0: using guessed type int dword_140C4D2A0;
// 140C4D2B0: using guessed type int dword_140C4D2B0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

