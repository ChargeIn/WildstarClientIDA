//----- (0000000140682840) ----------------------------------------------------
__int64 __fastcall sub_140682840(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // r10
	__int64 v5; // r10
	__int64 v6; // rax
	__int64 v7; // r10
	__m128i v8; // xmm0
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v2 + 8)) != 0
		&& (v5 = *(_QWORD*)(v4 + 8)) != 0
		&& (v6 = sub_140617410(v3, *(_DWORD*)(v5 + 4))) != 0
		&& *(_DWORD*)(*(_QWORD*)(v6 + 152) + 4i64) == 4
		&& *(_DWORD*)v6 == 1)
	{
		v8 = _mm_cvtsi32_si128(*(_DWORD*)(v7 + 8));
		v9 = a1[2];
		result = 1i64;
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
		a1[2] += 16i64;
	}
	else
	{
		v11 = a1[2];
		*(_DWORD*)(v11 + 8) = 3;
		*(_QWORD*)v11 = 0i64;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 14068288D: variable 'v3' is possibly undefined
// 1406828A9: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

