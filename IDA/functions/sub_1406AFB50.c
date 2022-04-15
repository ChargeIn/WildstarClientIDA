//----- (00000001406AFB50) ----------------------------------------------------
__int64 __fastcall sub_1406AFB50(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__m128i v6; // xmm0
	__int64 v7; // rcx
	__int64 result; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (v2
		&& qword_140C659F0
		&& ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			v5))
	{
		v6 = _mm_cvtsi32_si128(*(_DWORD*)(v5 + 672));
		v7 = a1[2];
		result = 1i64;
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v6);
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
// 1406AFB82: variable 'v3' is possibly undefined
// 140C659F0: using guessed type __int64 qword_140C659F0;

