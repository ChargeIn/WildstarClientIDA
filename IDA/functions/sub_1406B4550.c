//----- (00000001406B4550) ----------------------------------------------------
__int64 __fastcall sub_1406B4550(_QWORD* a1)
{
	unsigned __int64* v2; // rax
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__m128i v5; // xmm0
	__int64 v6; // rcx
	__int64 result; // rax

	v2 = (unsigned __int64*)sub_140056AB0(a1, 1u);
	if (v2)
		v3 = *v2;
	else
		v3 = 0i64;
	v4 = sub_140629AF0(qword_140C65898 + 27592, v3);
	if (v4)
	{
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(v4 + 16));
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
// 140C65898: using guessed type __int64 qword_140C65898;

