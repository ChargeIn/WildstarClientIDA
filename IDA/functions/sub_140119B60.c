//----- (0000000140119B60) ----------------------------------------------------
__int64 __fastcall sub_140119B60(__int64 a1)
{
	unsigned __int64 v2; // rcx
	_QWORD* v3; // rsi
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	char* v7; // rdi
	int* v8; // rbp
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rax
	int v11; // r14d
	_DWORD* v12; // rcx
	int v13; // eax
	int* v14; // rdx
	__int64 v16; // [rsp+30h] [rbp-28h] BYREF
	char* v17; // [rsp+38h] [rbp-20h]
	char* v18; // [rsp+40h] [rbp-18h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0i64;
	v4 = 0;
	if (v2)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v2)
				goto LABEL_7;
		}
		v3 = *(_QWORD**)(v5 + 8i64 * v4);
	}
LABEL_7:
	sub_1400F2540((__int64)(v3 + 48), &v16, 1);
	v7 = v17;
	if (v17 != v18)
	{
		sub_1400F2540((__int64)(v3 + 48), &v16, 2);
		v8 = (int*)v17;
		if (v17 != v18)
		{
			v9 = *(_QWORD*)(a1 + 16);
			v10 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 32i64);
			v11 = -2;
			if ((unsigned __int64)v10 < v9)
			{
				v12 = dword_140A12138;
				if (v10 != dword_140A12138 && *(_DWORD*)(*(_QWORD*)(a1 + 24) + 40i64) == 5)
				{
					if ((unsigned __int64)v10 < v9)
						v12 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 32i64);
					*(_QWORD*)v9 = *(_QWORD*)v12;
					*(_DWORD*)(v9 + 8) = v12[2];
					*(_QWORD*)(a1 + 16) += 16i64;
					v11 = sub_1400578C0(a1);
				}
			}
			v13 = sub_1400E8D60(v7);
			if (v13)
				v14 = (int*)off_140C2C4D0[v13];
			else
				v14 = (int*)v7;
			sub_1400EB7D0(v3, v14, v8, *(int**)(qword_140C63650 + 784), v11);
		}
		if (v8)
			sub_14018B900((__int64)v8, 0);
	}
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C2C4D0: using guessed type char *off_140C2C4D0[80];
// 140C63650: using guessed type __int64 qword_140C63650;

