//----- (0000000140695940) ----------------------------------------------------
__int64 __fastcall sub_140695940(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__m128i v5; // xmm0
	__int64 v6; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& *(_DWORD*)(*(_QWORD*)v4 + 4i64) == 75)
	{
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(*(_QWORD*)v4 + 36i64));
		v6 = a1[2];
		result = 1i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
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

