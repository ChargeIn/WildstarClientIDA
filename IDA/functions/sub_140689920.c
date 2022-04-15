//----- (0000000140689920) ----------------------------------------------------
__int64 __fastcall sub_140689920(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 32i64))(v4);
		v6 = a1[2];
		*(_DWORD*)(v6 + 8) = 3;
		v7 = _mm_cvtsi32_si128(v5);
		result = 1i64;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

