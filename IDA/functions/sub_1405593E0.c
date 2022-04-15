#include "../winhttp.h"

//----- (00000001405593E0) ----------------------------------------------------
__int64 __fastcall sub_1405593E0(__int64 a1, __int64 a2, int* a3)
{
	int v4; // eax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rax

	v4 = dword_140C4D260;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D260)
		v4 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C4D270 + v4))
		return 2147500037i64;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 64) = 0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_DWORD*)(a1 + 72) = 300;
	*(_QWORD*)(a1 + 76) = -1i64;
	v8 = *(_QWORD*)(a1 + 144);
	*(_DWORD*)(a1 + 84) = -1;
	*(_DWORD*)(a1 + 128) = 0;
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 152i64))(v8);
	if (!a2)
		return 2147500037i64;
	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 2147500037i64;
	if (!*(_QWORD*)(qword_140C65898 + 120))
		return 2147500037i64;
	v9 = sub_1403AC780(qword_140C65898 + 160, a3);
	if (!v9)
		return 2147500037i64;
	v10 = sub_14056A030(v9);
	if (v10)
	{
		*(_DWORD*)(a1 + 4) = 3;
		*(_DWORD*)(a1 + 12) = *(_DWORD*)(a2 + 8);
		*(_QWORD*)(a1 + 72) = *(_QWORD*)a3;
		*(_DWORD*)(a1 + 60) = *(_DWORD*)(*(_QWORD*)(v10 + 112) + 112i64);
		sub_140559920((__m128*)a1);
	}
	return 0i64;
}
// 140C4D260: using guessed type int dword_140C4D260;
// 140C4D270: using guessed type int dword_140C4D270;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

