//----- (0000000140684490) ----------------------------------------------------
__int64 __fastcall sub_140684490(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__m128i v5; // xmm0
	__int64 v6; // rcx
	__int64 result; // rax
	__int64 v8; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v2 = sub_140056AB0(a1, 1u)) != 0
		&& (v3 = *(_QWORD*)(v2 + 8)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0)
	{
		v5 = _mm_cvtsi32_si128(*(_DWORD*)(v4 + 64));
		v6 = a1[2];
		result = 1i64;
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v5);
		a1[2] += 16i64;
	}
	else
	{
		v8 = a1[2];
		*(_QWORD*)v8 = 0i64;
		*(_DWORD*)(v8 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

