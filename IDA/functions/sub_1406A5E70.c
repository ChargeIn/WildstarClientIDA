//----- (00000001406A5E70) ----------------------------------------------------
__int64 __fastcall sub_1406A5E70(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v6; // rdx
	__m128i v7; // xmm0
	__int64 v8; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (!v2)
		return 0i64;
	v4 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
	if (!v4)
		return 0i64;
	v5 = **(unsigned int**)(v3 + 8);
	if (v5 >= (__int64)(*(_QWORD*)(v4 + 256) - *(_QWORD*)(v4 + 248)) >> 3)
		return 0i64;
	v6 = *(_QWORD*)(*(_QWORD*)(v4 + 248) + 8 * v5);
	if (!v6)
		return 0i64;
	v7 = _mm_cvtsi32_si128(*(_DWORD*)(v6 + 56));
	v8 = a1[2];
	result = 1i64;
	*(_DWORD*)(v8 + 8) = 3;
	*(_QWORD*)v8 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
	a1[2] += 16i64;
	return result;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

