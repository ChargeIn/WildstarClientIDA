//----- (00000001400F0D80) ----------------------------------------------------
__int64 __fastcall sub_1400F0D80(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 result; // rax
	__int64 v4; // rcx
	__m128i v5; // xmm0

	*a3 += 8i64;
	result = *a3;
	v4 = *(_QWORD*)(a2 + 16);
	v5 = _mm_cvtsi32_si128(*(_DWORD*)(*a3 - 8));
	*(_DWORD*)(v4 + 8) = 3;
	*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	*(_QWORD*)(a2 + 16) += 16i64;
	return result;
}

