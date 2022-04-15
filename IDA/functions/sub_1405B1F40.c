#include "../winhttp.h"

//----- (00000001405B1F40) ----------------------------------------------------
int* __fastcall sub_1405B1F40(_QWORD* a1, __int64 a2, __int128* a3)
{
	_QWORD* v4; // rcx
	int* result; // rax
	__int64 v8; // rcx
	bool v9; // zf
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned __int64 v12; // r8
	__int64 v13; // r15
	int* v14; // r14
	_QWORD* v15; // rbx
	_QWORD* v16; // rax
	__int64 v17; // rcx
	_QWORD* v18; // rbx
	__int128 v19; // [rsp+30h] [rbp-78h]
	__int128 v20; // [rsp+40h] [rbp-68h]
	__int128 v21; // [rsp+50h] [rbp-58h]
	__int128 v22; // [rsp+60h] [rbp-48h]
	__int128 v23; // [rsp+70h] [rbp-38h]
	__int128 v24; // [rsp+80h] [rbp-28h]
	__int64 v25; // [rsp+B0h] [rbp+8h]

	v4 = (_QWORD*)a1[2];
	if (v4 == (_QWORD*)a1[3])
	{
		v8 = (__int64)v4 - a1[1];
		v9 = v8 / 104 == 0;
		v10 = 2 * (v8 / 104);
		if (v9)
			v10 = 1i64;
		v11 = sub_14018A3E0(104 * v10);
		v13 = 26 * ((unsigned __int64)(((unsigned __int64)v11 * (unsigned __int128)v12) >> 64) >> 5);
		v14 = sub_14018B280(v13 * 4, 0);
		v15 = sub_1405B22B0((_QWORD*)a1[1], (_QWORD*)a2, v14);
		sub_1405B2110(v15, a3);
		v16 = sub_1405B22B0((_QWORD*)a2, (_QWORD*)a1[2], v15 + 13);
		v17 = a1[1];
		v18 = v16;
		if (v17)
			sub_14018B900(v17, 0);
		result = &v14[v13];
		a1[1] = v14;
		a1[2] = v18;
		a1[3] = &v14[v13];
	}
	else
	{
		sub_1405B2110(v4, v4 - 13);
		a1[2] += 104i64;
		v19 = *a3;
		v20 = a3[1];
		v21 = a3[2];
		v22 = a3[3];
		v23 = a3[4];
		v24 = a3[5];
		v25 = *((_QWORD*)a3 + 12);
		result = (int*)sub_1405B2200(a2, (_QWORD*)(a1[2] - 208i64), (_QWORD*)(a1[2] - 104i64));
		*(_OWORD*)a2 = v19;
		*(_OWORD*)(a2 + 16) = v20;
		*(_OWORD*)(a2 + 32) = v21;
		*(_OWORD*)(a2 + 48) = v22;
		*(_OWORD*)(a2 + 64) = v23;
		*(_OWORD*)(a2 + 80) = v24;
		*(_QWORD*)(a2 + 96) = v25;
	}
	return result;
}
// 1405B2073: variable 'v12' is possibly undefined

