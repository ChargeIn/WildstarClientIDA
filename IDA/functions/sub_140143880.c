//----- (0000000140143880) ----------------------------------------------------
unsigned int* __fastcall sub_140143880(unsigned int* a1, _QWORD* a2, unsigned int a3, __m128* a4)
{
	unsigned int* v8; // rax
	unsigned __int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // rcx
	int v12; // r8d
	__m128* v13; // rax
	__m128* v14; // rdx
	_DWORD* v15; // rax
	char* v16; // rax
	__int64 v17; // rdi
	unsigned int v18; // eax
	__int64 v19; // rcx
	__int64 v20; // r9
	__int64 v21; // r8
	int v22; // r10d
	_DWORD* v23; // rax
	_DWORD* v24; // r10
	__m128 v25; // xmm8
	__m128 v26; // xmm7
	__m128 v27; // xmm6
	unsigned int v28; // eax
	__m128 v30; // [rsp+30h] [rbp-58h] BYREF

	v8 = (unsigned int*)sub_140143AE0((__int64)a2, a3);
	if (v8)
	{
		v9 = *v8;
		*a1 = v9;
		if (v9 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v10 = *(_QWORD*)(qword_140C63678 + 40);
			v11 = 32 * v9;
			v12 = *(_DWORD*)(v11 + v10 + 16);
			if ((unsigned int)(v12 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v11 + v10 + 16) = v12 + 1;
		}
		return a1;
	}
	v13 = (__m128*)sub_140118290((__int64)a2, a3);
	if (v13)
	{
		v14 = &v30;
		v30 = *v13;
		goto LABEL_18;
	}
	v15 = sub_1400580E0((__int64)a2, a3);
	if (v15 == dword_140A12138 || (unsigned int)(v15[2] - 3) > 1)
	{
		v23 = sub_1400580E0((__int64)a2, a3);
		if (v23 != v24 && v23[2] == 5)
		{
			v25 = sub_140144EF0(a2, "ColorTable", a3, (unsigned __int64*)"r", 1);
			v26 = sub_140144EF0(a2, "ColorTable", a3, (unsigned __int64*)"g", 2);
			v27 = sub_140144EF0(a2, "ColorTable", a3, (unsigned __int64*)"b", 3);
			v30 = _mm_unpacklo_ps(
				_mm_unpacklo_ps(v25, v27),
				_mm_unpacklo_ps(v26, sub_140144EF0(a2, "ColorTable", a3, (unsigned __int64*)"a", 4)));
			v28 = sub_140141F10(qword_140C63678, &v30);
		LABEL_19:
			*a1 = v28;
			return a1;
		}
		v14 = a4;
	LABEL_18:
		v28 = sub_140141F10(qword_140C63678, v14);
		goto LABEL_19;
	}
	v16 = (char*)sub_140056BB0(a2, a3, 0i64);
	sub_14018F2D0(&v30, v16);
	v17 = v30.m128_i64[1];
	v18 = sub_140142170(qword_140C63678, (unsigned __int16*)v30.m128_u64[1]);
	v19 = qword_140C63678;
	*a1 = v18;
	if ((unsigned __int64)v18 < *(_QWORD*)(v19 + 48))
	{
		v20 = *(_QWORD*)(v19 + 40);
		v21 = 32i64 * v18;
		v22 = *(_DWORD*)(v21 + v20 + 16);
		if ((unsigned int)(v22 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v21 + v20 + 16) = v22 + 1;
	}
	sub_1401429A0(v19, v18);
	if (v17)
		sub_14018B900(v17, 0);
	return a1;
}
// 1401439C2: variable 'v24' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140143880: using guessed type __m128 var_58;

