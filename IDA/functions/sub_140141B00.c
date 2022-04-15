//----- (0000000140141B00) ----------------------------------------------------
__int64 __fastcall sub_140141B00(__int64 a1, __m128* a2)
{
	__int64 v4; // rbx
	__int64* v5; // rdi
	float* v6; // rax
	unsigned int v7; // r14d
	unsigned int v8; // r15d
	float* v9; // rax
	float v10; // xmm0_4
	__int64 v12; // rax
	__int128 v13[3]; // [rsp+20h] [rbp-38h] BYREF

	v4 = 0i64;
	if (!*(_QWORD*)(a1 + 816))
		return 0i64;
	while (1)
	{
		v5 = *(__int64**)(*(_QWORD*)(a1 + 808) + 8 * v4);
		v6 = (float*)(*(__int64(__fastcall**)(__int64*, __int128*))(*v5 + 16))(v5, v13);
		v7 = (int)*v6;
		v8 = (int)v6[1];
		v9 = (float*)(*(__int64(__fastcall**)(__int64*, __int128*))(*v5 + 16))(v5, v13);
		if (a2->m128_f32[0] >= *v9 && a2->m128_f32[0] < v9[4])
		{
			v10 = a2->m128_f32[1];
			if (v10 >= v9[1] && v10 < v9[5])
				break;
		}
		if ((unsigned __int64)++v4 >= *(_QWORD*)(a1 + 816))
			return 0i64;
	}
	v12 = *v5;
	v13[0] = (__int128)_mm_sub_ps(
		*a2,
		_mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), _mm_cvtsi32_si128(0)))));
	return (*(__int64(__fastcall**)(__int64*, __int128*))(v12 + 64))(v5, v13);
}

