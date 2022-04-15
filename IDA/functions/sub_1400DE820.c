//----- (00000001400DE820) ----------------------------------------------------
__int64 __fastcall sub_1400DE820(_QWORD* a1)
{
	__int64 result; // rax
	__m128i v3; // xmm0
	__int64 v4; // rcx

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = _mm_cvtsi32_si128(*(_DWORD*)(result + 24));
		v4 = a1[2];
		result = 1i64;
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v3);
		a1[2] += 16i64;
	}
	return result;
}

