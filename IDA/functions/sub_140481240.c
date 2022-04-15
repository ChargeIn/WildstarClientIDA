#include "../winhttp.h"

//----- (0000000140481240) ----------------------------------------------------
void __fastcall sub_140481240(__int64* a1, __int64 a2, int* a3)
{
	__int64 v3; // r9
	__int64 v7; // r8
	int* v8; // rdx
	int* v9; // rbx
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // r12
	int* v13; // rbp
	_DWORD* v14; // rax
	_DWORD* v15; // r15
	_DWORD* v16; // rax
	__int64 v17; // rsi
	__int64 v18; // rbx
	_DWORD* i; // r14
	__int64 v20; // rcx
	__int64 v21; // rcx
	int v22; // [rsp+30h] [rbp-48h]
	__int64 v23; // [rsp+38h] [rbp-40h] BYREF
	int* v24; // [rsp+40h] [rbp-38h]
	int* v25; // [rsp+48h] [rbp-30h]
	__int64 v26; // [rsp+50h] [rbp-28h]

	v3 = a1[2];
	if (v3 == a1[3])
	{
		v10 = (v3 - a1[1]) / 40;
		if (v10)
			v11 = 2 * v10;
		else
			v11 = 1i64;
		v12 = 10 * (sub_14018A3E0(40 * v11) / 0x28ui64);
		v13 = sub_14018B280(v12 * 4, 0);
		v14 = sub_1404820C0(a1[1], a2, (__int64)v13);
		v15 = v14;
		if (v14)
		{
			*v14 = *a3;
			*((_QWORD*)v14 + 2) = 0i64;
			*((_QWORD*)v14 + 3) = 0i64;
			*((_QWORD*)v14 + 4) = 0i64;
			sub_14001C1B0((_QWORD*)v14 + 1, *((int**)a3 + 2), *((_QWORD*)a3 + 3));
		}
		v16 = sub_1404820C0(a2, a1[2], (__int64)(v15 + 10));
		v17 = a1[2];
		v18 = a1[1];
		for (i = v16; v18 != v17; v18 += 40i64)
		{
			v20 = *(_QWORD*)(v18 + 16);
			if (v20)
				sub_14018B900(v20, 0);
		}
		v21 = a1[1];
		if (v21)
			sub_14018B900(v21, 0);
		a1[1] = (__int64)v13;
		a1[3] = (__int64)&v13[v12];
		a1[2] = (__int64)i;
	}
	else
	{
		if (v3)
		{
			*(_DWORD*)v3 = *(_DWORD*)(v3 - 40);
			*(_QWORD*)(v3 + 16) = 0i64;
			*(_QWORD*)(v3 + 24) = 0i64;
			*(_QWORD*)(v3 + 32) = 0i64;
			sub_14001C1B0((_QWORD*)(v3 + 8), *(int**)(v3 - 24), *(_QWORD*)(v3 - 16));
		}
		a1[2] += 40i64;
		v7 = *((_QWORD*)a3 + 3);
		v8 = (int*)*((_QWORD*)a3 + 2);
		v22 = *a3;
		v24 = 0i64;
		v25 = 0i64;
		v26 = 0i64;
		sub_14001C1B0(&v23, v8, v7);
		sub_140482020(a2, a1[2] - 80, (_DWORD*)(a1[2] - 40));
		v9 = v24;
		*(_DWORD*)a2 = v22;
		if (&v23 != (__int64*)(a2 + 8))
			sub_14001C480(a2 + 8, v9, v25);
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
}

