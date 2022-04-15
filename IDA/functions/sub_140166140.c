//----- (0000000140166140) ----------------------------------------------------
__int64 __fastcall sub_140166140(_QWORD* a1)
{
	int v2; // eax
	__int64 result; // rax
	__int64 v4; // rcx
	__m128i v5; // xmm0

	v2 = *(_DWORD*)(sub_1401657E0(a1) + 1060);
	if (v2 == -1)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	else
	{
		v4 = a1[2];
		*(_DWORD*)(v4 + 8) = 3;
		v5 = _mm_cvtsi32_si128(v2 + 1);
		result = 1i64;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
		a1[2] += 16i64;
	}
	return result;
}

