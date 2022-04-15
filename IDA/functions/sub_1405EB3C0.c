//----- (00000001405EB3C0) ----------------------------------------------------
__int64 __fastcall sub_1405EB3C0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	int v6; // r10d
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // r9
	unsigned __int64 v11; // r8
	unsigned int* v12; // rdx
	__int64 result; // rax
	__m128i v14; // xmm0
	__int64 v15; // rcx

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		goto LABEL_14;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		goto LABEL_14;
	v4 = *(_QWORD*)(v3 + 8);
	if (!v4)
		goto LABEL_14;
	v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120));
	if (v5
		&& (v6 = **(_DWORD**)(v5 + 112), (v7 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
		&& (v8 = *(int*)(v7 + 220), (int)v8 < 23)
		&& (v9 = 16 * v8 + qword_140C65B70 + 88) != 0
		&& (v10 = *(_QWORD*)(v9 + 8), v11 = 0i64, v10))
	{
		v12 = *(unsigned int**)v9;
		while (**(_DWORD**)(*(_QWORD*)v12 + 112i64) != v6)
		{
			++v11;
			v12 += 6;
			if (v11 >= v10)
				goto LABEL_14;
		}
		v14 = _mm_cvtsi32_si128(v12[2]);
		v15 = a1[2];
		result = 1i64;
		*(_DWORD*)(v15 + 8) = 3;
		*(_QWORD*)v15 = *(_OWORD*)&_mm_cvtepi32_pd(v14);
		a1[2] += 16i64;
	}
	else
	{
	LABEL_14:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

