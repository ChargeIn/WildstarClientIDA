#include "../winhttp.h"

//----- (00000001407291F0) ----------------------------------------------------
__int64 __fastcall sub_1407291F0(__int64 a1, _DWORD* a2)
{
	int v3; // ecx
	int* v4; // rax
	int v5; // edx
	int v6; // ecx
	int v7; // eax
	int v8; // ecx
	unsigned int v9; // eax
	unsigned int v10; // edx

	v3 = *(_DWORD*)(a1 + 20) - 1;
	if (!v3)
	{
		*(_DWORD*)(a1 + 20) = 11;
		return 0i64;
	}
	if (v3 != 4 || *a2 != 3)
		return 0i64;
	if (dword_140C4B248)
		sub_14072AFA0(a1, &dword_140C4B248);
	sub_140729D70((_QWORD*)a1);
	v4 = (int*)qword_140C63750;
	v5 = dword_140C636A8;
	*(_DWORD*)(a1 + 20) = 4;
	v6 = *v4;
	v7 = dword_140C54730;
	if (v6 < dword_140C54730)
		v7 = v6;
	v8 = dword_140C54740[v7];
	v9 = *(_DWORD*)(a1 + 1192);
	v10 = v8 + v5;
	if (v9 == -1)
	{
		*(_DWORD*)(a1 + 1192) = v10;
		return 0i64;
	}
	else
	{
		if (v9 < v10)
			v9 = v10;
		*(_DWORD*)(a1 + 1192) = v9;
		return 0i64;
	}
}
// 140C4B248: using guessed type int dword_140C4B248;
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;

