//----- (00000001404FAC10) ----------------------------------------------------
__int64 __fastcall sub_1404FAC10(_QWORD* a1)
{
	__int64 v2; // rax
	__m128i v4; // xmm0
	__int64 v5; // rax

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v4 = _mm_cvtsi32_si128(*(_DWORD*)(v2 + 7184));
		v5 = a1[2];
		*(_DWORD*)(v5 + 8) = 3;
		*(_QWORD*)v5 = *(_OWORD*)&_mm_cvtepi32_pd(v4);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}

