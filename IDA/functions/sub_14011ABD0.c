//----- (000000014011ABD0) ----------------------------------------------------
__int64 __fastcall sub_14011ABD0(__int64 a1)
{
	_QWORD* v1; // rsi
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	int* v7; // r14
	int* v8; // rbp
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rax
	int v11; // r12d
	_DWORD* v12; // rcx
	int* v13; // rbx
	bool v14; // zf
	int* v15; // rbx
	int* v16; // rbx
	__int64 v18; // [rsp+30h] [rbp-58h] BYREF
	int* v19; // [rsp+38h] [rbp-50h]
	int* v20; // [rsp+40h] [rbp-48h]
	__int64 v21; // [rsp+48h] [rbp-40h]
	__int64 v22; // [rsp+50h] [rbp-38h] BYREF
	int* v23; // [rsp+58h] [rbp-30h]
	int* v24; // [rsp+60h] [rbp-28h]

	v1 = 0i64;
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
				goto LABEL_7;
		}
		v1 = *(_QWORD**)(v5 + 8i64 * v4);
	}
LABEL_7:
	sub_1400F2540((__int64)(v1 + 48), &v22, 1);
	sub_1400F2540((__int64)(v1 + 48), &v18, 2);
	v7 = v23;
	v8 = v19;
	if (v24 != v23 && v20 != v19)
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
		v13 = sub_14018B280(10i64, 0);
		v19 = v13;
		v21 = (__int64)v13 + 10;
		sub_1407DB590(v13, (int*)"SlashCmd_", 9ui64);
		v14 = (int*)((char*)v13 + 9) == 0i64;
		v15 = (int*)((char*)v13 + 9);
		v20 = v15;
		if (!v14)
			*(_BYTE*)v15 = 0;
		sub_14001B050(&v18, v7, v24);
		v16 = v19;
		sub_1400EB7D0(v1, v19, v8, *(int**)(qword_140C63650 + 784), v11);
		if (v16)
			sub_14018B900((__int64)v16, 0);
	}
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v7)
		sub_14018B900((__int64)v7, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

