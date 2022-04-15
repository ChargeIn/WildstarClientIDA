//----- (00000001402FCED0) ----------------------------------------------------
_OWORD* __fastcall sub_1402FCED0(__m128* a1, _OWORD* a2)
{
	unsigned __int64 v2; // rax
	unsigned __int64 v5; // rdx
	__int64 i; // rax
	__m128* v7; // rcx
	__m128 v8; // xmm1
	__m128* v9; // rax
	_OWORD* result; // rax
	int v11[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = a1->m128_u64[0];
	v11[0] = -1;
	(*(void(__fastcall**)(__m128*, int*, _QWORD))(v2 + 16))(a1, v11, 0i64);
	if (!a1[99].m128_i32[0])
	{
		v5 = 0i64;
		a1[97] = (__m128)xmmword_140C798C0;
		for (a1[98] = (__m128)xmmword_140C798D0; v5 < a1[55].m128_u64[0]; ++v5)
		{
			for (i = *(_QWORD*)(*(_QWORD*)(a1[54].m128_u64[1] + 8 * v5) + 8i64); i; i = *(_QWORD*)(i + 96))
			{
				v7 = *(__m128**)(i + 32);
				if (v7)
				{
					v8 = _mm_max_ps(a1[98], v7[5]);
					a1[97] = _mm_min_ps(a1[97], v7[4]);
					a1[98] = v8;
				}
			}
		}
		if (a1[98].m128_f32[0] < a1[97].m128_f32[0]
			|| a1[98].m128_f32[1] < a1[97].m128_f32[1]
			|| a1[98].m128_f32[2] < a1[97].m128_f32[2])
		{
			v9 = (__m128*)a1[4].m128_u64[0];
			a1[97] = v9[65];
			a1[98] = v9[66];
		}
		a1[99].m128_i32[0] = 1;
	}
	result = a2;
	*a2 = a1[97];
	a2[1] = a1[98];
	return result;
}
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;
// 1402FCED0: using guessed type int var_18[6];

