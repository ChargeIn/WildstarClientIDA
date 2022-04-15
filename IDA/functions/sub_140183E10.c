//----- (0000000140183E10) ----------------------------------------------------
void __fastcall sub_140183E10(__int64 a1)
{
	float v1; // xmm3_4
	float v2; // xmm6_4
	float v3; // xmm4_4
	float v4; // xmm1_4
	float v5; // xmm8_4
	float v6; // xmm9_4
	float v7; // xmm2_4
	float v8; // xmm5_4
	float v9; // xmm1_4
	__m128i v10; // xmm1
	__m128i v11; // xmm1
	int v12[4]; // [rsp+30h] [rbp-58h] BYREF
	float v13; // [rsp+40h] [rbp-48h]
	float v14; // [rsp+44h] [rbp-44h]

	if (*(_DWORD*)(a1 + 1072))
	{
		v1 = 0.0;
		v2 = (float)*(int*)(a1 + 1048);
		v3 = 0.0;
		v4 = (float)*(int*)(a1 + 1052) - 1.0;
		if (v2 > 0.0000099999997 && v4 > 0.0000099999997)
		{
			v5 = (float)*(int*)(a1 + 1080);
			v6 = (float)*(int*)(a1 + 1084);
			v7 = v5 / v2;
			v8 = v6 / v4;
			if (*(_DWORD*)(a1 + 1068))
			{
				if (v7 >= v8)
				{
					v7 = v6 / v4;
					v1 = (float)(v5 - (float)(v8 * v2)) * 0.5;
				}
				else
				{
					v8 = v5 / v2;
					v3 = (float)(v6 - (float)(v7 * v4)) * 0.5;
				}
			}
			*(float*)v12 = v1;
			*(float*)&v12[1] = v3;
			v9 = (float)((float)(v4 + 1.0) * v8) + v3;
			v13 = (float)(v7 * v2) + v1;
			v14 = v9;
			if (v1 < v13 && v3 < v9)
			{
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(a1 + 1128),
					0i64);
				v10 = _mm_shuffle_epi32(
					_mm_cvttps_epi32(
						_mm_add_ps(
							_mm_mul_ps(
								_mm_min_ps(_mm_max_ps((__m128)0i64, (__m128)xmmword_140B7AE50), (__m128)xmmword_140B7B240),
								(__m128)xmmword_140B7B470),
							(__m128)xmmword_140B7AC50)),
					198);
				v11 = _mm_packus_epi16(v10, v10);
				(*(void(__fastcall**)(__int64, _QWORD, int*, _QWORD, _QWORD, int*))(*(_QWORD*)qword_140C65670 + 664i64))(
					qword_140C65670,
					(unsigned int)_mm_cvtsi128_si32(_mm_packus_epi16(v11, v11)),
					v12,
					0i64,
					0i64,
					v12);
			}
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7AE50: using guessed type __int128 xmmword_140B7AE50;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140B7B470: using guessed type __int128 xmmword_140B7B470;
// 140C65670: using guessed type __int64 qword_140C65670;

