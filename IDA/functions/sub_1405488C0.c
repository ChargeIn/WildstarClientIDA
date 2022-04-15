//----- (00000001405488C0) ----------------------------------------------------
__int64 __fastcall sub_1405488C0(__int64 a1)
{
	__m128 v1; // xmm0
	int v2; // xmm2_4
	int v3; // r14d
	__int64 v4; // rbx
	__int64 v5; // rdx
	__m128 v6; // xmm7
	int v7; // edi
	int v8; // ecx
	__int128 v9; // xmm1
	__int128 v10; // xmm0
	__int128 v11; // xmm1
	__m128 v12; // xmm0
	__m128 v13; // xmm7
	__int64 v14; // rsi
	int v15; // ecx
	__m128 v16; // xmm1
	__m128 v17; // xmm0
	__m128 v18; // xmm7
	__m128 v19; // xmm4
	__m128 v20; // xmm5
	__m128 v21; // xmm3
	__m128 v22; // xmm6
	bool v23; // zf
	__int128 v24; // xmm0
	float v25; // xmm0_4
	__m128 v26; // xmm5
	__m128 v27; // xmm4
	__m128 v28; // xmm1
	__m128 v29; // xmm6
	__m128 v30; // xmm1
	__m128 v31; // xmm6
	__m128 v32; // xmm1
	__m128 v33; // xmm1
	__int64 result; // rax
	__m128 v35; // [rsp+30h] [rbp-79h] BYREF
	__m128 v36; // [rsp+40h] [rbp-69h] BYREF
	__int128 v37; // [rsp+50h] [rbp-59h]
	__m128 v38; // [rsp+60h] [rbp-49h] BYREF
	__m256 v39; // [rsp+70h] [rbp-39h] BYREF
	__int128 v40; // [rsp+90h] [rbp-19h]
	__int128 v41; // [rsp+A0h] [rbp-9h]

	if (a1)
	{
		v2 = dword_140C463A8;
		v3 = dword_140C636A8;
		v1.m128_f32[0] = *(float*)&dword_140C463A8;
		v39 = ymmword_140C78390;
		v4 = a1;
		v5 = a1;
		v36 = _mm_shuffle_ps(v1, v1, 0);
		v6 = 0i64;
		v7 = 1;
		v8 = 0;
		v35 = 0i64;
		v40 = xmmword_140C783B0;
		v41 = xmmword_140C783C0;
		do
		{
			if (*(_DWORD*)(*(_QWORD*)(v5 + 48) + 8i64) != 7)
				v7 = 0;
			if (++v8 == 1)
			{
				v9 = *(_OWORD*)(v5 + 208);
				*(_OWORD*)v39.m256_f32 = *(_OWORD*)(v5 + 192);
				v10 = *(_OWORD*)(v5 + 224);
				*(_OWORD*)&v39.m256_f32[4] = v9;
				v11 = *(_OWORD*)(v5 + 240);
				v40 = v10;
				v41 = v11;
			}
			v12 = v6;
			v13 = *(__m128*)(v5 + 144);
			v5 = *(_QWORD*)(v5 + 8);
			v6 = _mm_add_ps(v13, v12);
		} while (v5);
		v38 = v6;
		v14 = v4;
		if (v8 == 1)
		{
			v15 = *(_DWORD*)(v4 + 72);
			v16 = *(__m128*)(v4 + 176);
			v36 = *(__m128*)(v4 + 160);
			v35 = v16;
			if (v15 - dword_140C636A8 < 0)
				v3 = v15;
		}
		else
		{
			v17 = 0i64;
			v17.m128_f32[0] = (float)v8;
			v18 = _mm_div_ps(v6, _mm_shuffle_ps(v17, v17, 0));
			v38 = v18;
			do
			{
				v19 = *(__m128*)(v14 + 160);
				v20 = (__m128)v36.m128_u32[2];
				v21 = (__m128)v36.m128_u32[0];
				v22 = *(__m128*)(v14 + 144);
				v21.m128_f32[0] = fminf(v36.m128_f32[0], v19.m128_f32[0]);
				v23 = *(_DWORD*)(*(_QWORD*)(v14 + 48) + 8i64) == 7;
				v20.m128_f32[0] = fminf(v36.m128_f32[2], _mm_shuffle_ps(v19, v19, 170).m128_f32[0]);
				v24 = *(_OWORD*)(v14 + 176);
				v36 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, v20), (__m128)0i64);
				v37 = v24;
				if (v23)
					v25 = sub_14054DA10(v14, 0, 2.0) * 0.5;
				else
					v25 = *(float*)&v37;
				v26 = (__m128)v35.m128_u32[2];
				v27 = (__m128)v35.m128_u32[0];
				if (*(_DWORD*)(v14 + 72) - v3 < 0)
					v3 = *(_DWORD*)(v14 + 72);
				v14 = *(_QWORD*)(v14 + 8);
				v28 = _mm_sub_ps(v22, v18);
				v29 = _mm_and_ps(_mm_shuffle_ps(v28, v28, 170), (__m128)0x7FFFFFFFu);
				v30 = _mm_and_ps(v28, (__m128)0x7FFFFFFFu);
				v29.m128_f32[0] = v29.m128_f32[0] + *((float*)&v37 + 2);
				v30.m128_f32[0] = v30.m128_f32[0] + v25;
				v31 = _mm_unpacklo_ps(_mm_unpacklo_ps(v30, v29), (__m128)0i64);
				v27.m128_f32[0] = fmaxf(v35.m128_f32[0], v31.m128_f32[0]);
				v26.m128_f32[0] = fmaxf(v35.m128_f32[2], _mm_shuffle_ps(v31, v31, 170).m128_f32[0]);
				v35 = _mm_unpacklo_ps(_mm_unpacklo_ps(v27, v26), (__m128)0i64);
			} while (v14);
			v2 = dword_140C463A8;
		}
		v32 = (__m128)v36.m128_u32[0];
		v32.m128_f32[0] = fminf(v36.m128_f32[0], v36.m128_f32[2]);
		v36 = _mm_shuffle_ps(v32, v32, 0);
		if (v7)
		{
			v35.m128_i32[0] = v2;
		}
		else
		{
			v33 = (__m128)v35.m128_u32[0];
			v33.m128_f32[0] = fmaxf(v35.m128_f32[0], v35.m128_f32[2]);
			v35 = _mm_shuffle_ps(v33, v33, 0);
		}
		do
		{
			result = sub_14054CA10(v4, &v38, &v36, &v35, &v39, v3);
			v4 = *(_QWORD*)(v4 + 8);
		} while (v4);
	}
	return result;
}
// 14054890D: variable 'v1' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C463A8: using guessed type int dword_140C463A8;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

