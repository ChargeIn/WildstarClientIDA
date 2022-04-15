#include "../winhttp.h"

//----- (0000000140753D70) ----------------------------------------------------
int* __fastcall sub_140753D70(_QWORD* a1, __int64 a2, __int128* a3)
{
	_DWORD* v4; // rcx
	int* result; // rax
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // r15
	int* v11; // r14
	_DWORD* v12; // rbx
	_DWORD* v13; // rax
	__int64 v14; // rcx
	_DWORD* v15; // rbx
	__int128 v16; // [rsp+30h] [rbp-58h]
	__int128 v17; // [rsp+40h] [rbp-48h]
	__int128 v18; // [rsp+50h] [rbp-38h]
	__int128 v19; // [rsp+60h] [rbp-28h]
	__int64 v20; // [rsp+90h] [rbp+8h]

	v4 = (_DWORD*)a1[2];
	if (v4 == (_DWORD*)a1[3])
	{
		v8 = ((__int64)v4 - a1[1]) / 72;
		if (v8)
			v9 = 2 * v8;
		else
			v9 = 1i64;
		v10 = 18 * (sub_14018A3E0(72 * v9) / 0x48ui64);
		v11 = sub_14018B280(v10 * 4, 0);
		v12 = sub_1403D84E0((_DWORD*)a1[1], (_DWORD*)a2, v11);
		sub_1403D8660(v12, a3);
		v13 = sub_1403D84E0((_DWORD*)a2, (_DWORD*)a1[2], v12 + 18);
		v14 = a1[1];
		v15 = v13;
		if (v14)
			sub_14018B900(v14, 0);
		result = &v11[v10];
		a1[1] = v11;
		a1[2] = v15;
		a1[3] = &v11[v10];
	}
	else
	{
		sub_1403D8660(v4, v4 - 18);
		a1[2] += 72i64;
		v16 = *a3;
		v17 = a3[1];
		v18 = a3[2];
		v19 = a3[3];
		v20 = *((_QWORD*)a3 + 8);
		result = sub_140753F10(a2, (_DWORD*)(a1[2] - 144i64), (_DWORD*)(a1[2] - 72i64));
		*(_OWORD*)a2 = v16;
		*(_OWORD*)(a2 + 16) = v17;
		*(_OWORD*)(a2 + 32) = v18;
		*(_OWORD*)(a2 + 48) = v19;
		*(_QWORD*)(a2 + 64) = v20;
	}
	return result;
}

