//----- (00000001401852B0) ----------------------------------------------------
void __fastcall sub_1401852B0(__int64 a1, __int64 a2, __int64 a3)
{
	int* v3; // rsi
	__int64 v5; // rax
	int* v7; // rbp
	__int64 v8; // rbx
	unsigned __int64 v9; // rbx
	_WORD* v10; // r14
	__int64 v11; // r15
	__int64 v12; // rsi
	_QWORD* v13; // rbx
	int v14; // eax
	__int64 v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // rsi
	int* v18; // rax
	int* v19; // rbx
	char* v20; // rax
	__int64 v21; // rcx
	char v22[8]; // [rsp+40h] [rbp-78h] BYREF
	int* v23; // [rsp+48h] [rbp-70h]
	int* v24; // [rsp+50h] [rbp-68h]
	int* v25; // [rsp+58h] [rbp-60h]
	__int64 v26; // [rsp+60h] [rbp-58h] BYREF
	__int64 v27; // [rsp+68h] [rbp-50h]
	int v28; // [rsp+C0h] [rbp+8h] BYREF
	__int64 v29; // [rsp+C8h] [rbp+10h] BYREF
	__int64 v30; // [rsp+D0h] [rbp+18h]

	v30 = a3;
	v3 = *(int**)(a2 + 24);
	v5 = 0i64;
	v7 = 0i64;
	if (*(_WORD*)v3)
	{
		do
			++v5;
		while (*((_WORD*)v3 + v5));
	}
	v8 = (2 * v5) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v7 = sub_14018B280(2 * (v8 + 1), 0);
	v9 = 2 * v8;
	sub_1407DB590(v7, v3, v9);
	v10 = (_WORD*)((char*)v7 + v9);
	if ((int*)((char*)v7 + v9))
		*v10 = 0;
	v11 = *(_QWORD*)(a1 + 200);
	v12 = v11;
	v13 = *(_QWORD**)(v11 + 8);
	while (v13)
	{
		if ((int)sub_1400454D0(v13[5], v13[6], (unsigned __int16*)v7, (__int64)v10) < 0)
		{
			v13 = (_QWORD*)v13[3];
		}
		else
		{
			v12 = (__int64)v13;
			v13 = (_QWORD*)v13[2];
		}
	}
	if (v12 == v11
		|| (v14 = sub_1400454D0((__int64)v7, (__int64)v10, *(unsigned __int16**)(v12 + 40), *(_QWORD*)(v12 + 48)),
			v29 = v12,
			v14 < 0))
	{
		v29 = v11;
	}
	v15 = v29;
	if (v7)
		sub_14018B900((__int64)v7, 0);
	if (v15 != *(_QWORD*)(a1 + 200))
	{
		v16 = *(_QWORD*)(a1 + 88);
		v17 = v30;
		v28 = 0;
		if (v16)
			v28 = sub_140137770(v16, a2, v30);
		else
			sub_1400F3010(
				*(_QWORD*)(a1 + 8) + 384i64,
				0i64,
				*(_DWORD*)(a1 + 64),
				(__int64)"OnDependencyError",
				"SS>b",
				*(_QWORD*)(a2 + 24),
				v30,
				&v28);
		v29 = v15;
		sub_140186550(a1 + 192, &v29);
		if (v28)
		{
			if (!*(_QWORD*)(a1 + 208))
				sub_140185550(a1);
		}
		else
		{
			v18 = sub_14018B280(16i64, 0);
			v19 = v18;
			v23 = v18;
			v24 = v18;
			v25 = v18 + 4;
			if (v18)
				*(_WORD*)v18 = 0;
			v20 = (char*)sub_14018EFA0(&v26, (__int64)L"Error in %s: %s", *(_QWORD*)(a2 + 24), v17);
			if (v20 != v22)
			{
				sub_14001C480((__int64)v22, *((int**)v20 + 1), *((int**)v20 + 2));
				v19 = v23;
			}
			if (v27)
				sub_14018B900(v27, 0);
			sub_1401340D0(a1, v19);
			v21 = *(_QWORD*)(a1 + 88);
			if (v21)
			{
				sub_140137280(v21, v19);
				*(_DWORD*)(*(_QWORD*)(a1 + 88) + 536i64) = 5;
			}
			if (v19)
				sub_14018B900((__int64)v19, 0);
		}
	}
}
// 1401340D0: using guessed type __int64 __fastcall sub_1401340D0(_QWORD, _QWORD);
// 140A3F4A0: using guessed type wchar_t aErrorInSS[16];
// 1401852B0: using guessed type char var_78[8];

