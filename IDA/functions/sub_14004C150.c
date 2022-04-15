//----- (000000014004C150) ----------------------------------------------------
__int64 __fastcall sub_14004C150(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdx
	__m128i v5; // xmm0
	__int64 v6; // rcx
	__int64 result; // rax

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	if (!v4)
		return 0i64;
	v5 = _mm_cvtsi32_si128(*(_DWORD*)(v4 + 4892));
	v6 = a1[2];
	result = 1i64;
	*(_DWORD*)(v6 + 8) = 3;
	*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
	a1[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

