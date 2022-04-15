//----- (00000001406F6610) ----------------------------------------------------
__int64 __fastcall sub_1406F6610(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax
	unsigned __int64 v3; // r9
	_DWORD* v4; // r8
	int v5; // eax
	unsigned int v6; // eax
	__m128i v7; // xmm0

	v1 = *(_QWORD*)(qword_140C65898 + 120);
	if (v1)
	{
		v3 = *(_QWORD*)(a1 + 16);
		v4 = &unk_140A12138;
		if (*(_QWORD*)(a1 + 24) < v3)
			v4 = *(_DWORD**)(a1 + 24);
		v5 = v4[2];
		if (v5 && (v5 != 1 || *v4) || (v6 = *(_DWORD*)(v1 + 60)) == 0)
			v6 = *(_DWORD*)(v1 + 56);
		v7 = _mm_cvtsi32_si128(v6);
		*(_DWORD*)(v3 + 8) = 3;
		result = 1i64;
		*(_QWORD*)v3 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

