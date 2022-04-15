//----- (000000014035AC20) ----------------------------------------------------
void __fastcall sub_14035AC20(__int64 a1)
{
	__m128** i; // r14
	__m128* v3; // rcx
	_QWORD* v4; // rdx
	__int64 v5; // rdx
	__int64 j; // rbp
	__int64 k; // rsi
	__int64 v8; // rbx
	float v9; // xmm0_4
	float v10; // xmm0_4
	__int64 v11; // rax
	_QWORD* v12; // rcx
	__int64 v13; // rax
	__m128* v14; // rbx
	__m128** v15; // r15
	__int64 m; // rbp
	__int64 n; // rsi
	__int64 v18; // rbx
	float v19; // xmm0_4
	float v20; // xmm0_4
	__int64 v21; // rax
	__m128* ii; // r9
	__m128* v23; // rax
	__m128* v24; // rax
	__int64 v25; // r9
	__m128 v26; // xmm4
	__m128 v27; // xmm5
	__m128 v28; // xmm6
	__m128* v29; // rdx
	__m128 v30; // xmm7
	char* v31; // rcx
	__m128 v32; // xmm3
	__m128* v33; // rax
	__int64 v34; // rcx
	__m128 v35; // xmm3
	__m128 v36; // xmm2
	char* v37; // rax
	__int64 v38; // rcx
	__int128 v39; // xmm0
	char v40[64]; // [rsp+20h] [rbp-158h] BYREF
	char v41[96]; // [rsp+60h] [rbp-118h] BYREF
	__m128 v42[6]; // [rsp+C0h] [rbp-B8h] BYREF

	for (i = (__m128**)(a1 + 5456); *i; v3[19].m128_u64[1] = 0i64)
	{
		v3 = *i;
		v4 = (_QWORD*)(*i)[19].m128_u64[0];
		if (v4)
			*v4 = v3[19].m128_u64[1];
		v5 = v3[19].m128_i64[1];
		if (v5)
			*(_QWORD*)(v5 + 304) = v3[19].m128_u64[0];
		v3[19].m128_u64[0] = 0i64;
	}
	for (j = *(_QWORD*)(a1 + 2336); j; j = *(_QWORD*)(j + 1424))
	{
		for (k = *(_QWORD*)(*(_QWORD*)(j + 24) + 40i64); k; k = *(_QWORD*)(k + 24))
		{
			v8 = *(_QWORD*)(k + 8);
			if (!*(_QWORD*)(v8 + 320)
				&& (*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v8 + 24i64))(*(_QWORD*)(k + 8)))
			{
				if (!*(_DWORD*)(a1 + 852)
					|| ((v9 = *(float*)(v8 + 52) - *(float*)(a1 + 916), v9 <= 0.0)
						? (v10 = v9 * *(float*)(j + 1304))
						: (v10 = v9 * *(float*)(j + 1300)),
						v10 >= *(float*)(j + 1296)))
				{
					if ((unsigned int)sub_14035BDF0((__m128*)a1, (__m128*)(v8 + 32)))
					{
						if (!*(_QWORD*)(v8 + 304))
						{
							*(_QWORD*)(v8 + 304) = i;
							*(_QWORD*)(v8 + 312) = *i;
							*i = (__m128*)v8;
							v11 = *(_QWORD*)(v8 + 312);
							if (v11)
								*(_QWORD*)(v11 + 304) = v8 + 312;
						}
						v12 = (_QWORD*)(a1 + 5464);
						if (!*(_QWORD*)(v8 + 320))
						{
							*(_QWORD*)(v8 + 320) = v12;
							*(_QWORD*)(v8 + 328) = *v12;
							*v12 = v8;
							v13 = *(_QWORD*)(v8 + 328);
							if (v13)
								*(_QWORD*)(v13 + 320) = v8 + 328;
						}
						*(_OWORD*)(v8 + 176) = *(_OWORD*)(a1 + 1872);
						*(_OWORD*)(v8 + 192) = *(_OWORD*)(a1 + 1888);
					}
				}
			}
		}
	}
	v14 = *i;
	v15 = (__m128**)(a1 + 5464);
	for (*(_QWORD*)(a1 + 5448) = *(_QWORD*)(a1 + 5464); v14; v14 = (__m128*)v14[19].m128_u64[1])
		sub_140390F20((__int64)v14, v14 + 11, 0i64);
	if ((*(_DWORD*)(a1 + 128) & 0x1000000) == 0)
	{
		for (m = *(_QWORD*)(a1 + 2336); m; m = *(_QWORD*)(m + 1424))
		{
			for (n = *(_QWORD*)(*(_QWORD*)(m + 24) + 40i64); n; n = *(_QWORD*)(n + 24))
			{
				v18 = *(_QWORD*)(n + 8);
				if (!*(_QWORD*)(v18 + 320)
					&& !(*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v18 + 24i64))(*(_QWORD*)(n + 8)))
				{
					if (!*(_DWORD*)(a1 + 852)
						|| ((v19 = *(float*)(v18 + 52) - *(float*)(a1 + 916), v19 <= 0.0)
							? (v20 = v19 * *(float*)(m + 1304))
							: (v20 = v19 * *(float*)(m + 1300)),
							v20 >= *(float*)(m + 1296)))
					{
						if ((unsigned int)sub_14035BDF0((__m128*)a1, (__m128*)(v18 + 32)))
						{
							if (!*(_QWORD*)(v18 + 320))
							{
								*(_QWORD*)(v18 + 320) = v15;
								*(_QWORD*)(v18 + 328) = *v15;
								*v15 = (__m128*)v18;
								v21 = *(_QWORD*)(v18 + 328);
								if (v21)
									*(_QWORD*)(v21 + 320) = v18 + 328;
							}
							*(_OWORD*)(v18 + 176) = *(_OWORD*)(a1 + 1872);
							*(_OWORD*)(v18 + 192) = *(_OWORD*)(a1 + 1888);
						}
					}
				}
			}
		}
	}
	for (ii = *v15; ii; ii = *(__m128**)(v25 + 328))
	{
		v23 = (__m128*)sub_140359840((__m128*)a1, (__int64)v40, ii + 11);
		v24 = sub_1401B20F0(v42, v23);
		v26 = *(__m128*)(a1 + 1024);
		v27 = *(__m128*)(a1 + 1040);
		v28 = *(__m128*)(a1 + 1056);
		v29 = v24 + 6;
		v30 = *(__m128*)(a1 + 1072);
		if (v24 < &v24[6])
		{
			v31 = (char*)(v41 - (char*)v24);
			do
			{
				_mm_prefetch(&v24[1].m128_i8[8], 0);
				v32 = *v24++;
				_mm_stream_ps(
					(float*)&v31[(_QWORD)v24 - 16],
					_mm_add_ps(
						_mm_add_ps(
							_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v27), _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v26)),
							_mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v28)),
						_mm_mul_ps(_mm_shuffle_ps(v32, v32, 255), v30)));
			} while (v24 < v29);
		}
		_mm_sfence();
		v33 = (__m128*)v41;
		v34 = 6i64;
		do
		{
			v35 = *v33++;
			v36 = _mm_mul_ps(v35, v35);
			v36.m128_f32[0] = 1.0
				/ fsqrt(
					(float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
					+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0]);
			v33[-1] = _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v35);
			--v34;
		} while (v34);
		v37 = v41;
		v38 = 6i64;
		do
		{
			v39 = *(_OWORD*)v37;
			v37 += 16;
			*(_OWORD*)&v37[v25 + 208 - (_QWORD)v41 - 16] = v39;
			--v38;
		} while (v38);
	}
}
// 14035B07C: variable 'v25' is possibly undefined
// 14035AC20: using guessed type char var_158[64];
// 14035AC20: using guessed type __m128 var_B8[6];

