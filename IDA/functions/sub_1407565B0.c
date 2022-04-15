//----- (00000001407565B0) ----------------------------------------------------
__int64 __fastcall sub_1407565B0(_QWORD* a1)
{
	__int64 result; // rax
	unsigned int v3; // eax
	__int64 v4; // rcx
	__int64 v5; // rax
	__m128i v6; // xmm0
	__int64 v7; // rcx

	if (!qword_140C659B0)
		return 0i64;
	v3 = sub_140056D60(a1, 1u);
	if (!v3)
		return 0i64;
	v5 = sub_1404A8700(v4, v3);
	if (!v5)
		return 0i64;
	v6 = _mm_cvtsi32_si128(*(_DWORD*)(v5 + 16));
	v7 = a1[2];
	result = 1i64;
	*(_DWORD*)(v7 + 8) = 3;
	*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	a1[2] += 16i64;
	return result;
}
// 1407565DB: variable 'v4' is possibly undefined
// 140C659B0: using guessed type __int64 qword_140C659B0;

