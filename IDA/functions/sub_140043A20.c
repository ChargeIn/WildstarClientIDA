//----- (0000000140043A20) ----------------------------------------------------
__int64 __fastcall sub_140043A20(_QWORD* a1)
{
	int v1; // r14d
	int v3; // r12d
	__int64 v4; // rbx
	_DWORD* v5; // rax
	bool v6; // cf
	_DWORD* v7; // rcx
	char* v8; // rdx
	int* v9; // rbp
	__int64 v10; // rax
	__int64 v11; // rdi
	int* v12; // rdi
	__int64 v13; // rax
	int* v14; // r15
	__int64 v15; // rbx
	unsigned __int64 v16; // rbx
	_WORD* v17; // r13
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rbp
	_QWORD* v21; // rdi
	bool v22; // bl
	_DWORD* v23; // rcx
	__int64 result; // rax
	__int64 v25; // [rsp+20h] [rbp-48h] BYREF
	int* v26; // [rsp+28h] [rbp-40h]
	__int64 v27; // [rsp+70h] [rbp+8h] BYREF

	v1 = 0;
	v3 = 0;
	if (!qword_140C65898)
		goto LABEL_41;
	v4 = *(_QWORD*)(qword_140C65898 + 29504);
	v5 = (_DWORD*)a1[3];
	v6 = (unsigned __int64)v5 < a1[2];
	v7 = dword_140A12138;
	if (v6)
		v7 = v5;
	if (v7[2] == 4)
		goto LABEL_11;
	if ((unsigned int)sub_14005E620((__int64)a1, (__int64)v7))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v7 = dword_140A12138;
		if (a1[3] < a1[2])
			v7 = (_DWORD*)a1[3];
	LABEL_11:
		v8 = (char*)(*(_QWORD*)v7 + 32i64);
		goto LABEL_12;
	}
	v8 = 0i64;
LABEL_12:
	sub_14018F2D0(&v25, v8);
	v9 = v26;
	v10 = sub_14013A630(v4 + 2496, v26);
	v11 = v10;
	if (!v10)
		goto LABEL_39;
	if ((unsigned int)sub_140421470((__int64)&v27, v10) == 1)
	{
		v3 = 1;
	}
	else if ((unsigned int)sub_140421470((__int64)&v27, v11))
	{
		v3 = (unsigned __int8)sub_140136B00(v11, *(_DWORD*)(v4 + 2568));
	}
	if (!*(_BYTE*)(v11 + 264))
		goto LABEL_39;
	v12 = *(int**)(v11 + 24);
	v13 = 0i64;
	v14 = 0i64;
	if (*(_WORD*)v12)
	{
		do
			++v13;
		while (*((_WORD*)v12 + v13));
	}
	v15 = (2 * v13) >> 1;
	if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v14 = sub_14018B280(2 * (v15 + 1), 0);
	v16 = 2 * v15;
	sub_1407DB590(v14, v12, v16);
	v17 = (_WORD*)((char*)v14 + v16);
	if ((int*)((char*)v14 + v16))
		*v17 = 0;
	v18 = *(_QWORD*)(qword_140C63620 + 112);
	v19 = v18;
	v20 = v18;
	v21 = *(_QWORD**)(v18 + 8);
	if (v21)
	{
		do
		{
			if ((int)sub_1400454D0(v21[5], v21[6], (unsigned __int16*)v14, (__int64)v17) < 0)
			{
				v21 = (_QWORD*)v21[3];
			}
			else
			{
				v20 = (__int64)v21;
				v21 = (_QWORD*)v21[2];
			}
		} while (v21);
		v19 = v18;
	}
	if (v20 == v19)
		goto LABEL_34;
	if ((int)sub_1400454D0((__int64)v14, (__int64)v17, *(unsigned __int16**)(v20 + 40), *(_QWORD*)(v20 + 48)) < 0)
	{
		v19 = v18;
	LABEL_34:
		v27 = v19;
		goto LABEL_35;
	}
	v27 = v20;
LABEL_35:
	v22 = v27 != v18;
	if (v14)
		sub_14018B900((__int64)v14, 0);
	v9 = v26;
	if (v22)
		v3 = 0;
LABEL_39:
	if (v9)
		sub_14018B900((__int64)v9, 0);
LABEL_41:
	v23 = (_DWORD*)a1[2];
	result = 1i64;
	LOBYTE(v1) = v3 != 0;
	v23[2] = 1;
	*v23 = v1;
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63620: using guessed type __int64 qword_140C63620;
// 140C65898: using guessed type __int64 qword_140C65898;

