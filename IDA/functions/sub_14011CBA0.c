//----- (000000014011CBA0) ----------------------------------------------------
__int64 __fastcall sub_14011CBA0(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbp
	int* v8; // rax
	__m128i* v9; // rdi
	_DWORD* v10; // rax
	char* v11; // rax
	__int64 v12; // rcx
	__int64 v14; // rax
	_QWORD** v15; // rbx
	__int64 v16; // rax
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	__m128i* v19; // [rsp+28h] [rbp-20h]
	int* v20; // [rsp+30h] [rbp-18h]
	int* v21; // [rsp+38h] [rbp-10h]

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
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
	v8 = sub_14018B280(16i64, 0);
	v9 = (__m128i*)v8;
	v19 = (__m128i*)v8;
	v20 = v8;
	v21 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	v10 = (_DWORD*)a1[3];
	if ((unsigned __int64)v10 >= a1[2] || v10 == dword_140A12138 || (unsigned int)(v10[2] - 3) > 1)
	{
		while (aXmldoc_1[++v1] != 0)
			;
		if ((2 * v1) >> 1)
		{
			sub_14001C310(&v18, (int*)L"XMLDoc", (int*)&aXmldoc_1[v1]);
			v9 = v19;
		}
		else
		{
			sub_1407DB590(v9->m128i_i32, (int*)L"XMLDoc", 0i64);
		}
		v14 = sub_14012A990((__int64)a1, 1);
		if (v14)
		{
			v15 = *(_QWORD***)(v7 + 368);
			v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 16i64))(v14);
			sub_14010DFB0(v15, v16);
		}
	}
	else
	{
		v11 = (char*)sub_140056BB0(a1, 1u, 0i64);
		sub_14018F2D0(&v18, v11);
		v12 = (__int64)v9;
		v9 = v19;
		if (v12)
			sub_14018B900(v12, 0);
		sub_14010DD80(*(_QWORD***)(v7 + 368), v9);
	}
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A1E380: using guessed type wchar_t aXmldoc_1[7];
// 140C63650: using guessed type __int64 qword_140C63650;

