//----- (0000000140731CF0) ----------------------------------------------------
__int64 __fastcall sub_140731CF0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rax
	__m128i v3; // xmm0
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v2 = *((_QWORD*)&xmmword_140C7DFC0 + 1) - xmmword_140C7DFC0;
	*(_DWORD*)(v1 + 8) = 3;
	v3 = _mm_cvtsi32_si128(v2 >> 3);
	result = 1i64;
	*(_QWORD*)v1 = *(_OWORD*)&_mm_cvtepi32_pd(v3);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C7DFC0: using guessed type __int128 xmmword_140C7DFC0;

