//----- (00000001406F8D40) ----------------------------------------------------
__int64 __fastcall sub_1406F8D40(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int v3; // eax
	__m128i v4; // xmm0
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 16);
	v3 = sub_1403B4DD0(qword_140C65898);
	*(_DWORD*)(v1 + 8) = 3;
	v4 = _mm_cvtsi32_si128(v3);
	result = 1i64;
	*(_QWORD*)v1 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

