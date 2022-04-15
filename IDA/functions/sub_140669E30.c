//----- (0000000140669E30) ----------------------------------------------------
__int64 __fastcall sub_140669E30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 result; // rax
	__m128i v6; // xmm0

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && *(_QWORD*)v2)
	{
		v3 = *(_QWORD*)(*(_QWORD*)v2 + 8i64);
		v4 = a1[2];
		result = 1i64;
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 56));
		*(_DWORD*)(v4 + 8) = 3;
		*(_QWORD*)v4 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
		a1[2] += 16i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}

