//----- (00000001407014C0) ----------------------------------------------------
__int64 __fastcall sub_1407014C0(_QWORD* a1)
{
	unsigned int v2; // eax
	int* v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__m128i v6; // xmm0
	__int64 result; // rax

	v2 = sub_140056D60(a1, 1u);
	if (v2 >= 0x1D)
		return 0i64;
	v3 = &dword_140C89730[6 * v2];
	if (!v3)
		return 0i64;
	v4 = *((_QWORD*)v3 + 2);
	if (v4)
		LODWORD(v4) = v4 - 1;
	v5 = a1[2];
	v6 = _mm_cvtsi32_si128(v4);
	result = 1i64;
	*(_DWORD*)(v5 + 8) = 3;
	*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
	a1[2] += 16i64;
	return result;
}
// 140C89730: using guessed type int dword_140C89730[];

