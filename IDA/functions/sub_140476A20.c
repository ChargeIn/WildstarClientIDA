//----- (0000000140476A20) ----------------------------------------------------
__int64 __fastcall sub_140476A20(__int64* a1, __int64 a2, __m128* a3)
{
	int v4; // edx
	int v5; // eax
	__m128* v7; // rdi
	int v8; // eax
	int v9; // eax
	__int64 v10; // rax
	unsigned __int64 v11; // rax
	__m128 v12; // xmm4
	float v13; // xmm3_4
	__m128 v14; // xmm2
	__m128 v15; // xmm1
	__m128* v16; // rcx
	__m128 v17; // xmm2
	__m128 v18; // xmm1
	__int64 v19; // rcx
	__int64 v20; // rcx
	int v21[6]; // [rsp+20h] [rbp-18h] BYREF

	v4 = *(_DWORD*)qword_140C63750;
	v5 = dword_140C47300;
	if (*(_DWORD*)qword_140C63750 < dword_140C47300)
		v5 = *(_DWORD*)qword_140C63750;
	if (!byte_140C47310[v5])
		return 0i64;
	v7 = *(__m128**)(qword_140C65898 + 25744);
	if (!v7)
		return 0i64;
	if (a3[8].m128_i32[0] == 20)
	{
		v9 = dword_140C47380;
		if (v4 < dword_140C47380)
			v9 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&dword_140C47390 + v9))
			return 0i64;
	}
	else
	{
		v8 = dword_140C47340;
		if (v4 < dword_140C47340)
			v8 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&dword_140C47350 + v8))
			return 0i64;
	}
	v10 = *a1;
	v21[0] = 0;
	if (!(*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v10 + 24))(a1, v21, 0i64))
		return 0i64;
	v11 = a3[386].m128_u64[1];
	if (!v11 || a3[5].m128_i32[1] > 1)
		return 0i64;
	v12 = a3[286];
	v13 = *(float*)(v11 + 4) * *(float*)(v11 + 4);
	v14 = _mm_sub_ps(v7[286], v12);
	v15 = _mm_mul_ps(v14, v14);
	if ((float)((float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0])
		+ _mm_shuffle_ps(v15, v15, 170).m128_f32[0]) > v13)
	{
		v16 = *(__m128**)(qword_140C65898 + 29096);
		if (!v16)
			v16 = *(__m128**)(qword_140C65898 + 29088);
		v17 = _mm_sub_ps(v16[2], v12);
		v18 = _mm_mul_ps(v17, v17);
		if ((float)((float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0])
			+ _mm_shuffle_ps(v18, v18, 170).m128_f32[0]) > v13)
			return 0i64;
	}
	v19 = *(_QWORD*)(qword_140C65898 + 29096);
	if (v19)
	{
		if (*(_DWORD*)(v19 + 696))
		{
			v20 = *(_QWORD*)(qword_140C65898 + 29080);
			if (v20)
			{
				if (*(_DWORD*)(v20 + 52))
					return 0i64;
			}
		}
	}
	return 1i64;
}
// 140476AA2: conditional instruction was optimized away because ecx.4!=14
// 140C47300: using guessed type int dword_140C47300;
// 140C47310: using guessed type _BYTE[32];
// 140C47340: using guessed type int dword_140C47340;
// 140C47350: using guessed type int dword_140C47350;
// 140C47380: using guessed type int dword_140C47380;
// 140C47390: using guessed type int dword_140C47390;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140476A20: using guessed type int var_18[6];

