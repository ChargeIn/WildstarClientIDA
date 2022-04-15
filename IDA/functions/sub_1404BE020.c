//----- (00000001404BE020) ----------------------------------------------------
void __fastcall sub_1404BE020(_QWORD* a1, __m128* a2)
{
	__int64 v2; // r10
	__int64 v5; // rcx
	__int64* v6; // rdx
	__int64* v7; // r8
	__int64 v8; // rcx
	__m128* v9; // rax
	__m128 v10; // xmm4
	__m128 v11; // [rsp+20h] [rbp-E0h] BYREF
	__int128 v12; // [rsp+30h] [rbp-D0h] BYREF
	unsigned __int64 v13; // [rsp+40h] [rbp-C0h]
	int v14; // [rsp+48h] [rbp-B8h]
	float v15; // [rsp+4Ch] [rbp-B4h]
	__m256 v16[2]; // [rsp+50h] [rbp-B0h] BYREF
	char v17[64]; // [rsp+90h] [rbp-70h] BYREF
	__m128 v18[4]; // [rsp+D0h] [rbp-30h] BYREF
	__int128 v19[6]; // [rsp+110h] [rbp+10h] BYREF
	__int64 v20; // [rsp+170h] [rbp+70h] BYREF
	double v21[8]; // [rsp+180h] [rbp+80h] BYREF

	v2 = a1[2];
	if (v2)
	{
		v5 = *(_QWORD*)(qword_140C659F0 + 824);
		v6 = *(__int64**)(v5 + 16);
		v7 = *(__int64**)(v5 + 24);
		if (v6 != v7)
		{
			while (*(_DWORD*)(*v6 + 188) != *(_DWORD*)(*(_QWORD*)(v2 + 296) + 20i64))
			{
				if (++v6 == v7)
					return;
			}
			v8 = *v6;
			if (*v6)
			{
				v12 = *(_OWORD*)(v2 + 512);
				v13 = *(_QWORD*)(v2 + 528);
				v14 = *(_DWORD*)(v2 + 536);
				v15 = *(float*)(v2 + 540);
				v9 = (__m128*)sub_1405B0600(v8, v16);
				v10 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v9[1]),
							_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *v9)),
						_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v9[2])),
					v9[3]);
				*(_QWORD*)&v16[0].m256_f32[2] = 0i64;
				*(_QWORD*)&v16[0].m256_f32[4] = &v12;
				v13 = v10.m128_u64[0];
				*(_QWORD*)&v16[0].m256_f32[6] = &v11;
				v14 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v10, 8));
				v11 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(v10, _mm_shuffle_ps(v10, v10, 170)),
					_mm_unpacklo_ps(_mm_shuffle_ps(v10, v10, 85), (__m128)0i64));
				v19[1] = *(_OWORD*)&v16[0].m256_f32[4];
				v16[0].m256_f32[0] = v15;
				v19[0] = *(unsigned __int64*)v16[0].m256_f32;
				sub_1401B0590((int*)v19, (__int64)v17);
				v20 = (*(__int64(__fastcall**)(_QWORD, __m256*))(*(_QWORD*)a1[2] + 120i64))(a1[2], v16);
				sub_1401AFC20(&v20, v21);
				v11.m128_u64[0] = (unsigned __int64)v21;
				*(_QWORD*)&v19[0] = v21;
				v11.m128_u64[1] = (unsigned __int64)v17;
				*((_QWORD*)&v19[0] + 1) = v17;
				sub_1401AFB10((__m128**)v19, v18);
				(*(void(__fastcall**)(_QWORD, __m128*))(*(_QWORD*)a1[2] + 40i64))(a1[2], v18);
				(*(void(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
			}
		}
	}
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 1404BE020: using guessed type double var_50[8];
// 1404BE020: using guessed type __m128 var_100[4];

