//----- (000000014069F410) ----------------------------------------------------
__int64 __fastcall sub_14069F410(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int** v3; // rcx
	__int64 v4; // r8
	__m128i v5; // xmm0

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = *(unsigned int***)result;
		v4 = a1[2];
		result = 1i64;
		v5 = _mm_cvtsi32_si128(**v3);
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
		a1[2] += 16i64;
	}
	return result;
}

