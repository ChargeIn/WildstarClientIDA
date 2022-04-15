//----- (00000001403563C0) ----------------------------------------------------
__int64 __fastcall sub_1403563C0(__int64 a1)
{
	__m128 v2; // xmm2
	__m128 v3; // xmm1
	unsigned int v4; // eax
	__int64 v5; // rdi
	__int64 v6; // rsi
	__m128** v7; // rcx
	__m128* i; // rdi
	__m128* j; // rdi
	int v11; // eax

	if (*(_DWORD*)(a1 + 1608))
		return 0i64;
	v2 = _mm_sub_ps(*(__m128*)(a1 + 928), *(__m128*)(a1 + 912));
	v3 = _mm_mul_ps(v2, v2);
	if ((float)((float)(v3.m128_f32[0] + _mm_shuffle_ps(v3, v3, 85).m128_f32[0]) + _mm_shuffle_ps(v3, v3, 170).m128_f32[0]) <= 1024.0)
	{
		while (*(_QWORD*)(a1 + 2344))
			sub_14037D540(*(__m128***)(a1 + 2344));
		while (*(_QWORD*)(a1 + 5088))
			sub_1403788A0(*(__m128**)(a1 + 5088));
		while (*(_QWORD*)(a1 + 5320))
			sub_14038C1C0(*(__m128**)(a1 + 5320));
		v11 = *(_DWORD*)(a1 + 880);
		if (v11 - *(_DWORD*)(a1 + 944) >= 0)
		{
			*(_OWORD*)(a1 + 928) = *(_OWORD*)(a1 + 912);
			*(_DWORD*)(a1 + 944) = v11 + 250;
		}
		return 0i64;
	}
	v4 = *(_DWORD*)(a1 + 2204) * *(_DWORD*)(a1 + 2208);
	if (v4)
	{
		v5 = 0i64;
		v6 = v4;
		do
		{
			v7 = *(__m128***)(v5 + *(_QWORD*)(a1 + 2272));
			if (v7)
				sub_14037D540(v7);
			v5 += 8i64;
			--v6;
		} while (v6);
	}
	for (i = *(__m128**)(a1 + 5032); i; i = (__m128*)i[73].m128_u64[1])
		sub_1403788A0(i);
	for (j = *(__m128**)(a1 + 5248); j; j = (__m128*)j[63].m128_u64[1])
		sub_14038C1C0(j);
	*(_OWORD*)(a1 + 928) = *(_OWORD*)(a1 + 912);
	*(_DWORD*)(a1 + 944) = *(_DWORD*)(a1 + 880) + 250;
	return 0i64;
}

