//----- (0000000140691C10) ----------------------------------------------------
__int64 __fastcall sub_140691C10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // rax
	unsigned int* v5; // rcx
	__int64 v6; // rdx
	__int64 result; // rax
	__m128i v8; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		return 0i64;
	v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
	if (!v4)
		return 0i64;
	v5 = *(unsigned int**)(v4 + 8);
	v6 = a1[2];
	result = 1i64;
	v8 = _mm_cvtsi32_si128(*v5);
	*(_DWORD*)(v6 + 8) = 3;
	*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
	a1[2] += 16i64;
	return result;
}
// 140C658A0: using guessed type __int64 qword_140C658A0;

