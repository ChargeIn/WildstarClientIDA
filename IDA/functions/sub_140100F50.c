#include "../winhttp.h"

//----- (0000000140100F50) ----------------------------------------------------
__int64 __fastcall sub_140100F50(
	__int64 a1,
	__int64 a2,
	int* a3,
	int* a4,
	int a5,
	char a6,
	_DWORD* a7,
	unsigned int* a8,
	unsigned int* a9,
	char a10,
	char a11,
	int a12,
	int a13)
{
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rbx
	int v18[4]; // [rsp+70h] [rbp-168h] BYREF
	__int64 v19[11]; // [rsp+80h] [rbp-158h] BYREF
	unsigned int v20; // [rsp+D8h] [rbp-100h]
	unsigned int v21; // [rsp+DCh] [rbp-FCh]

	v18[0] = *a4;
	v18[1] = a4[1];
	v18[2] = a4[2];
	v18[3] = a4[3];
	sub_1400FE940((__int64)v19, a2, a3, v18, a5, a6, a7, a8, a9, a10, a11, a12, a13);
	v14 = *(_QWORD*)(a1 + 64);
	if (v14 == *(_QWORD*)(a1 + 72))
	{
		sub_140109F90((__int64*)(a1 + 48), *(__int64**)(a1 + 64), (__int64)v19);
	}
	else
	{
		if (v14)
			sub_1400FEB20(*(_QWORD*)(a1 + 64), (__int64)v19);
		*(_QWORD*)(a1 + 64) += 304i64;
	}
	v15 = *(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56);
	*(float*)(a1 + 112) = *(float*)&a5 + *(float*)(a1 + 112);
	v16 = v15 / 304;
	if (v19[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19[0] + 8i64))(v19[0]);
	sub_1401429A0(qword_140C63678, v21);
	sub_1401429A0(qword_140C63678, v20);
	return (unsigned int)(v16 - 1);
}
// 140C63678: using guessed type __int64 qword_140C63678;

