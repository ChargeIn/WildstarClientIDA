//----- (00000001401431C0) ----------------------------------------------------
__int128* __fastcall sub_1401431C0(__int128* a1, _QWORD* a2)
{
	unsigned int* v4; // rax
	unsigned __int64 v5; // rax
	__int128* v6; // rax
	__int128 v7; // xmm0
	_DWORD* v8; // rax
	char* v9; // rax
	unsigned __int16* v10; // rdi
	unsigned int v11; // eax
	__int128* v12; // rcx
	__int128 v13; // xmm0
	__int64 v14; // rcx
	_DWORD* v15; // rax
	_DWORD* v16; // r10
	__m128 v17; // xmm8
	__m128 v18; // xmm7
	__m128 v19; // xmm6
	__int64 v21; // [rsp+30h] [rbp-58h] BYREF
	unsigned __int16* v22; // [rsp+38h] [rbp-50h]

	v4 = (unsigned int*)sub_140143AE0((__int64)a2, 2);
	if (v4)
	{
		v5 = *v4;
		if (v5 >= *(_QWORD*)(qword_140C63678 + 48))
			v6 = *(__int128**)(qword_140C63678 + 40);
		else
			v6 = (__int128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v5);
		v7 = *v6;
		goto LABEL_17;
	}
	v8 = sub_1400580E0((__int64)a2, 2);
	if (v8 == dword_140A12138 || (unsigned int)(v8[2] - 3) > 1)
	{
		v15 = sub_1400580E0((__int64)a2, 2);
		if (v15 == v16 || v15[2] != 5)
		{
			v7 = xmmword_140C777D0;
		LABEL_17:
			*a1 = v7;
			return a1;
		}
		v17 = sub_140144EF0(a2, "ColorTable", 2u, (unsigned __int64*)"r", 1);
		v18 = sub_140144EF0(a2, "ColorTable", 2u, (unsigned __int64*)"g", 2);
		v19 = sub_140144EF0(a2, "ColorTable", 2u, (unsigned __int64*)"b", 3);
		*a1 = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps(v17, v19),
			_mm_unpacklo_ps(v18, sub_140144EF0(a2, "ColorTable", 2u, (unsigned __int64*)"a", 4)));
	}
	else
	{
		v9 = (char*)sub_140056BB0(a2, 2u, 0i64);
		sub_14018F2D0(&v21, v9);
		v10 = v22;
		v11 = sub_140142170(qword_140C63678, v22);
		if ((unsigned __int64)v11 >= *(_QWORD*)(qword_140C63678 + 48))
			v12 = *(__int128**)(qword_140C63678 + 40);
		else
			v12 = (__int128*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * v11);
		v13 = *v12;
		v14 = qword_140C63678;
		*a1 = v13;
		sub_1401429A0(v14, v11);
		if (v10)
			sub_14018B900((__int64)v10, 0);
	}
	return a1;
}
// 1401432BD: variable 'v16' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

