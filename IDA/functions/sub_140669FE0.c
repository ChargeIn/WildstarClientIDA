//----- (0000000140669FE0) ----------------------------------------------------
__int64 __fastcall sub_140669FE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__m128i v4; // xmm0
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
		LODWORD(v2) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 436i64);
	v3 = a1[2];
	v4 = _mm_cvtsi32_si128(v2);
	result = 1i64;
	*(_DWORD*)(v3 + 8) = 3;
	*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	a1[2] += 16i64;
	return result;
}

