//----- (000000014011CF30) ----------------------------------------------------
__int64 __fastcall sub_14011CF30(_QWORD* a1)
{
	unsigned __int64 v2; // rcx
	unsigned int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // r15
	char* v7; // rax
	__int64 v8; // r13
	int* v9; // rax
	__int64 v10; // r14
	_DWORD* v11; // rax
	char* v12; // rax
	__int64 v13; // rcx
	unsigned __int64 v14; // r8
	int v15; // r12d
	_DWORD* v16; // rcx
	_DWORD* v17; // rdx
	int* v18; // rax
	__m128i* v19; // rsi
	_DWORD* v20; // rax
	int* v21; // rbp
	unsigned int v22; // ebx
	char* v23; // rax
	__int64 v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // rax
	__int64 v28; // rax
	__int64 v29; // rax
	__int64 v31; // [rsp+40h] [rbp-68h] BYREF
	__m128i* v32; // [rsp+48h] [rbp-60h]
	int* v33; // [rsp+50h] [rbp-58h]
	int* v34; // [rsp+58h] [rbp-50h]
	__int64 v35; // [rsp+60h] [rbp-48h] BYREF
	__m128i* v36; // [rsp+68h] [rbp-40h]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v35, v7);
	v8 = 0i64;
	v9 = sub_14018B280(16i64, 0);
	v10 = (__int64)v9;
	if (v9)
		*(_WORD*)v9 = 0;
	v11 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v11 >= a1[2] || v11 == dword_140A12138 || (unsigned int)(*(_DWORD*)(a1[3] + 40i64) - 3) > 1)
	{
		v8 = sub_1400D6530((__int64)a1, 3);
	}
	else
	{
		v12 = (char*)sub_140056BB0(a1, 3u, 0i64);
		sub_14018F2D0(&v31, v12);
		v13 = v10;
		v10 = (__int64)v32;
		if (v13)
			sub_14018B900(v13, 0);
	}
	v14 = a1[2];
	v15 = -2;
	v16 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v16 < v14 && v16 != dword_140A12138 && *(_DWORD*)(a1[3] + 56i64) == 5)
	{
		v17 = dword_140A12138;
		if ((unsigned __int64)v16 < v14)
			v17 = (_DWORD*)(a1[3] + 48i64);
		*(_QWORD*)v14 = *(_QWORD*)v17;
		*(_DWORD*)(v14 + 8) = v17[2];
		a1[2] += 16i64;
		v15 = sub_1400578C0((__int64)a1);
	}
	v18 = sub_14018B280(16i64, 0);
	v19 = (__m128i*)v18;
	v32 = (__m128i*)v18;
	v33 = v18;
	v34 = v18 + 4;
	if (v18)
		*(_WORD*)v18 = 0;
	v20 = (_DWORD*)a1[3];
	v21 = (int*)v36;
	if ((unsigned __int64)v20 >= a1[2] || v20 == dword_140A12138 || (unsigned int)(v20[2] - 3) > 1)
	{
		v26 = 0i64;
		while (aXmldoc_2[++v26] != 0)
			;
		if ((2 * v26) >> 1)
		{
			sub_14001C310(&v31, (int*)L"XMLDoc", (int*)&aXmldoc_2[v26]);
			v19 = v32;
		}
		else
		{
			sub_1407DB590(v19->m128i_i32, (int*)L"XMLDoc", 0i64);
		}
		v22 = 1;
		v28 = sub_14012A990((__int64)a1, 1);
		if (!v28)
			goto LABEL_38;
		v29 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 16i64))(v28);
		v25 = sub_1400F5890(v6 + 2688, v29, v21, v10, v8, v15, 0, 0i64);
	}
	else
	{
		v22 = 1;
		v23 = (char*)sub_140056BB0(a1, 1u, 0i64);
		sub_14018F2D0(&v35, v23);
		v24 = (__int64)v19;
		v19 = v36;
		if (v24)
			sub_14018B900(v24, 0);
		v25 = sub_1400F52E0(v6 + 2688, v19, v21, v10, v8, v15);
	}
	if (v25)
	{
		v22 = sub_1400D62A0(a1, (__int64)v25);
		goto LABEL_39;
	}
LABEL_38:
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
LABEL_39:
	if (v19)
		sub_14018B900((__int64)v19, 0);
	if (v10)
		sub_14018B900(v10, 0);
	if (v21)
		sub_14018B900((__int64)v21, 0);
	return v22;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A1E390: using guessed type wchar_t aXmldoc_2[7];
// 140C63650: using guessed type __int64 qword_140C63650;

