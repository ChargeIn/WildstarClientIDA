#include "../winhttp.h"

//----- (0000000140549E10) ----------------------------------------------------
__int64 __fastcall sub_140549E10(
	__int64 a1,
	int a2,
	__int64 a3,
	int a4,
	_OWORD* a5,
	int a6,
	int a7,
	int a8,
	__int64* a9,
	int a10,
	int a11,
	int a12,
	int a13,
	int a14,
	__int64 a15)
{
	__int64 v15; // rdi
	int v16; // eax
	__int64* v18; // rsi
	int v19; // edx
	__int64 v20; // rcx
	__int64 v21; // rax
	unsigned int v22; // r10d
	int v24; // eax
	__int64* v25; // rdx
	__int64 v26; // rax

	v15 = 0i64;
	v16 = dword_140C636A8 - a8;
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
	*(_DWORD*)(a1 + 72) = v16;
	*(_DWORD*)(a1 + 76) = v16;
	*(_DWORD*)(a1 + 80) = v16;
	*(_DWORD*)(a1 + 84) = v16;
	*(_DWORD*)(a1 + 92) = 1;
	*(_DWORD*)(a1 + 88) = a12;
	v18 = (__int64*)(a1 + 8);
	*(_OWORD*)(a1 + 96) = *a5;
	*(_DWORD*)(a1 + 120) = a7;
	*(_DWORD*)(a1 + 116) = a4;
	*(_DWORD*)(a1 + 112) = a6;
	*(_DWORD*)(a1 + 124) = a14;
	*(_DWORD*)(a1 + 136) = 0;
	*(_DWORD*)(a1 + 128) = a10;
	*(_DWORD*)(a1 + 132) = a11;
	*(_DWORD*)(a1 + 140) = a13;
	*(_OWORD*)(a1 + 144) = 0i64;
	*(_OWORD*)(a1 + 160) = 0i64;
	*(_OWORD*)(a1 + 176) = 0i64;
	v19 = *(_DWORD*)(a1 + 116);
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 256) = a15;
	v20 = qword_140C65898;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_DWORD*)(a1 + 288) = 0;
	*(_DWORD*)(a1 + 292) = 1;
	*(_QWORD*)(a1 + 300) = 0i64;
	*(_DWORD*)(a1 + 296) = a15 == 0;
	*(_DWORD*)(a1 + 308) = 0;
	v21 = sub_1403D90D0(v20, v19);
	v22 = *(_DWORD*)(a1 + 32);
	if (v22)
	{
		if (!v21)
			goto LABEL_10;
		if (*(_QWORD*)(qword_140C65898 + 120) == v21 || *(_QWORD*)(qword_140C65898 + 25744) == v21)
			v15 = qword_140C65898;
		if (!v15 || (v15 = sub_1405A5B90(v15, v22)) == 0)
			LABEL_10:
		v15 = sub_1407A0FD0(qword_140C65B70, v22);
	}
	*(_QWORD*)(a1 + 280) = v15;
	sub_14054A370(a1);
	v24 = *(_DWORD*)(*(_QWORD*)(a1 + 48) + 68i64);
	if ((v24 & 0x100000) == 0
		&& ((v24 & 0x80000) != 0
			|| (v24 & 0x1000000) == 0 && (v24 & 0x200000) == 0 && ((v24 & 0x400000) != 0 || *(_DWORD*)(a1 + 288) == 2)
			|| (unsigned int)sub_14054AE10(a1)))
	{
		*(_DWORD*)(a1 + 304) = 1;
	}
	sub_14054A160(a1);
	if (*(_DWORD*)(*(_QWORD*)(a1 + 48) + 8i64) == 3)
		sub_14054A160(a1);
	if (a9)
	{
		if (!*(_QWORD*)a1)
		{
			*(_QWORD*)a1 = a9;
			*v18 = *a9;
			*a9 = a1;
			if (*v18)
				*(_QWORD*)*v18 = v18;
		}
	}
	v25 = (__int64*)(qword_140C65898 + 25408);
	if (!*(_QWORD*)(a1 + 16))
	{
		*(_QWORD*)(a1 + 16) = v25;
		*(_QWORD*)(a1 + 24) = *v25;
		*v25 = a1;
		v26 = *(_QWORD*)(a1 + 24);
		if (v26)
			*(_QWORD*)(v26 + 16) = a1 + 24;
	}
	return a1;
}
// 140549F97: variable 'v22' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

