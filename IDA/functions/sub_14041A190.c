//----- (000000014041A190) ----------------------------------------------------
__int64 __fastcall sub_14041A190(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rdx
	__m128i v4; // xmm0
	__int64 result; // rax

	v2 = sub_140417B50(a1, 1u);
	v3 = a1[2];
	*(_DWORD*)(v3 + 8) = 3;
	v4 = _mm_cvtsi32_si128(v2);
	result = 1i64;
	*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	a1[2] += 16i64;
	return result;
}

