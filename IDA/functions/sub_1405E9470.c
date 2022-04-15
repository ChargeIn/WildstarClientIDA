//----- (00000001405E9470) ----------------------------------------------------
__int64 __fastcall sub_1405E9470(__int64 a1)
{
	unsigned int v1; // ebx
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	__int64 v5; // r9
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbp
	int* v9; // rax
	__int64 v10; // rsi
	int* v11; // rax
	_QWORD* v12; // rdi
	char* v13; // rdx
	_DWORD* v14; // rax
	__int64 v15; // rdi
	__int64 v17; // [rsp+30h] [rbp-48h] BYREF
	__int64 v18; // [rsp+38h] [rbp-40h]
	__int64 v19; // [rsp+50h] [rbp-28h] BYREF
	__int64 v20; // [rsp+58h] [rbp-20h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	sub_1400F26A0(v7 + 384, 1);
	v9 = (int*)sub_1406622C0(a1, 2);
	if (v9)
		v10 = sub_1403D90D0(qword_140C65898, *v9);
	else
		v10 = 0i64;
	v11 = (int*)sub_1406622C0(a1, 3);
	if (v11)
		sub_1403D90D0(qword_140C65898, *v11);
	v12 = *(_QWORD**)(v8 + 16);
	v13 = (char*)sub_14018F0E0(&v17, 0i64)[1];
	v14 = (_DWORD*)(v12[3] + 48i64);
	if ((unsigned __int64)v14 < v12[2] && v14 != dword_140A12138 && *(int*)(v12[3] + 56i64) > 0)
		v13 = (char*)sub_140056BB0(v12, 4u, 0i64);
	sub_14018F2D0(&v19, v13);
	if (v18)
		sub_14018B900(v18, 0);
	if (v10)
		v1 = *(_DWORD*)(v10 + 8);
	v15 = v20;
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "GenericFloater", "US", v1, v20);
	if (v15)
		sub_14018B900(v15, 0);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

