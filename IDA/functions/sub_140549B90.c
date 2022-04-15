#include "../winhttp.h"

//----- (0000000140549B90) ----------------------------------------------------
__int64 __fastcall sub_140549B90(
	__int64 a1,
	int a2,
	__int64 a3,
	int a4,
	int a5,
	int a6,
	__int64* a7,
	int a8,
	int a9,
	int a10,
	__int64 a11,
	__int64 a12)
{
	__int64 v12; // rdi
	int v14; // eax
	__int64* v15; // rsi
	int v16; // edx
	__int64 v17; // rcx
	__int64 v18; // rax
	unsigned int v19; // r10d
	int v21; // eax
	__int64* v22; // rdx
	__int64 v23; // rax

	v12 = 0i64;
	v14 = dword_140C636A8 - a6;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = a2;
	*(_QWORD*)(a1 + 36) = 0i64;
	*(_DWORD*)(a1 + 44) = 0;
	*(_QWORD*)(a1 + 48) = a3;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_DWORD*)(a1 + 72) = v14;
	*(_DWORD*)(a1 + 76) = v14;
	*(_DWORD*)(a1 + 80) = v14;
	*(_DWORD*)(a1 + 84) = v14;
	*(_DWORD*)(a1 + 116) = a4;
	*(_DWORD*)(a1 + 92) = 0;
	*(_DWORD*)(a1 + 88) = a9;
	*(_DWORD*)(a1 + 124) = 0;
	*(_DWORD*)(a1 + 120) = a5;
	*(_QWORD*)(a1 + 132) = 0i64;
	*(_DWORD*)(a1 + 128) = a8;
	v15 = (__int64*)(a1 + 8);
	*(_DWORD*)(a1 + 140) = a10;
	*(_OWORD*)(a1 + 144) = 0i64;
	*(_OWORD*)(a1 + 160) = 0i64;
	*(_OWORD*)(a1 + 176) = 0i64;
	*(__m256*)(a1 + 192) = ymmword_140C78390;
	*(_OWORD*)(a1 + 224) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 240) = xmmword_140C783C0;
	v16 = *(_DWORD*)(a1 + 116);
	*(_QWORD*)(a1 + 264) = a12;
	*(_QWORD*)(a1 + 256) = a11;
	v17 = qword_140C65898;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_DWORD*)(a1 + 296) = a11 == 0;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_DWORD*)(a1 + 288) = 0;
	*(_DWORD*)(a1 + 292) = 1;
	*(_QWORD*)(a1 + 300) = 0i64;
	*(_DWORD*)(a1 + 308) = 0;
	v18 = sub_1403D90D0(v17, v16);
	v19 = *(_DWORD*)(a1 + 32);
	if (v19)
	{
		if (!v18)
			goto LABEL_10;
		if (*(_QWORD*)(qword_140C65898 + 120) == v18 || *(_QWORD*)(qword_140C65898 + 25744) == v18)
			v12 = qword_140C65898;
		if (!v12 || (v12 = sub_1405A5B90(v12, v19)) == 0)
			LABEL_10:
		v12 = sub_1407A0FD0(qword_140C65B70, v19);
	}
	*(_QWORD*)(a1 + 280) = v12;
	sub_14054A370(a1);
	v21 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64);
	if ((v21 & 0x100000) == 0
		&& ((v21 & 0x80000) != 0
			|| (v21 & 0x1000000) == 0 && (v21 & 0x200000) == 0 && ((v21 & 0x400000) != 0 || *(_DWORD*)(a1 + 288) == 2)
			|| (unsigned int)sub_14054AE10(a1)))
	{
		*(_DWORD*)(a1 + 304) = 1;
	}
	sub_14054A160(a1);
	if (*(_DWORD*)(*(_QWORD*)(a1 + 48) + 8i64) == 3)
		sub_14054A160(a1);
	if (a7)
	{
		if (!*(_QWORD*)a1)
		{
			*(_QWORD*)a1 = a7;
			*v15 = *a7;
			*a7 = a1;
			if (*v15)
				*(_QWORD*)*v15 = v15;
		}
	}
	v22 = (__int64*)(qword_140C65898 + 25408);
	if (!*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = v22;
		*(_QWORD*)(a1 + 24) = *v22;
		*v22 = a1;
		v23 = *(_QWORD*)(a1 + 24);
		if (v23)
			*(_QWORD*)(v23 + 16) = a1 + 24;
	}
	return a1;
}
// 140549D23: variable 'v19' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

