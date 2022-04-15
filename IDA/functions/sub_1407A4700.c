//----- (00000001407A4700) ----------------------------------------------------
__int64 __fastcall sub_1407A4700(__int64 a1)
{
	__m128 v1; // xmm7
	unsigned __int64 v4; // r13
	int v5; // ecx
	__int64 v6; // r14
	float v7; // xmm10_4
	__int64 v8; // rax
	unsigned __int64 v9; // rdx
	__int64 v10; // rcx
	__m128 v11; // xmm4
	__m128 v12; // xmm5
	__m128 v13; // xmm9
	float v14; // xmm9_4
	__m128 v15; // xmm8
	__m128 v16; // xmm1
	float v17; // xmm8_4
	__m128 v18; // xmm6
	__m128 v19; // xmm5
	float v20; // xmm1_4
	__m128 v21; // xmm0
	__m128 v22; // xmm6
	__m128 v23; // xmm0
	__int64 v24; // rcx
	unsigned __int64 v25; // rdx
	__int64 v26; // rax
	__m128* v27; // rax
	__m128 v28; // xmm4
	__m128 v29; // xmm5
	__m128 v30; // xmm3
	float v31; // xmm1_4
	__int64 v32; // rax
	unsigned __int64 v33; // rdx
	__int64 v34; // rcx
	__m128 v35; // xmm3
	__m128 v36; // xmm2
	float v37; // xmm2_4
	__m128 v38; // xmm1
	__m128 v39; // xmm0
	__m128 v40; // xmm0
	unsigned __int64 v41; // r12
	unsigned __int64 v42; // rbp
	unsigned __int64 v43; // r13
	__int64 v44; // r12
	__int64 v45; // rax
	__int64 v46; // rbx
	int* v47; // rax
	int v48; // r8d
	__int64 v49; // rdx
	int* v50; // rdx
	int* v51; // rsi
	__int64 v52; // rcx
	int v53; // ecx
	__m128* v54; // r9
	__m128 v55; // xmm1
	__m128 v56; // xmm2
	float v57; // xmm2_4
	__int64 v58; // rbx
	int* v59; // rax
	__int64 v60; // rdx
	int* v61; // rsi
	int* v62; // rdx
	__int64 v63; // rcx
	__int64 v64; // [rsp+40h] [rbp-B8h]
	__int64 v65; // [rsp+40h] [rbp-B8h]
	__int64 v66; // [rsp+50h] [rbp-A8h]

	if (*(_QWORD*)(a1 + 48))
		return 0i64;
	v4 = *(_QWORD*)(a1 + 32);
	if (v4 < 4)
		return 2147500037i64;
	v5 = *(_DWORD*)(a1 + 12);
	v6 = 112i64;
	v7 = *(float*)&dword_140C4E988;
	if (v5)
	{
		if (v5 == 1 && v4 - 1 > 1)
		{
			v8 = 112i64;
			v9 = v4 - 2;
			do
			{
				v10 = *(_QWORD*)(a1 + 24);
				v11 = _mm_sub_ps(*(__m128*)(v8 + v10), *(__m128*)(v8 + v10 - 112));
				v12 = _mm_sub_ps(*(__m128*)(v8 + v10 + 112), *(__m128*)(v8 + v10));
				v13 = _mm_mul_ps(v11, v11);
				v14 = (float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
					+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
				v15 = _mm_mul_ps(v12, v12);
				v16 = _mm_shuffle_ps(v15, v15, 170);
				v17 = (float)(v15.m128_f32[0] + _mm_shuffle_ps(v15, v15, 85).m128_f32[0]) + v16.m128_f32[0];
				if (v14 <= v7 || v17 <= v7)
				{
					*(__m128*)(v8 + v10 + 16) = v12;
					*(__m128*)(v8 + v10 + 32) = v11;
				}
				else
				{
					v18 = 0i64;
					v1.m128_f32[0] = v14;
					v16.m128_f32[0] = v17;
					v1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v1, v1, 0), v12), _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v11));
					v19 = _mm_mul_ps(v1, v1);
					v19.m128_f32[0] = (float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
						+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
					v20 = 1.0 / fsqrt(v19.m128_f32[0]);
					v21 = 0i64;
					v18.m128_f32[0] = fmaxf(
						(float)((float)(3.0 - (float)((float)(v19.m128_f32[0] * v20) * v20)) * 0.5) * v20,
						0.0);
					v21.m128_f32[0] = fsqrt(v17);
					v22 = _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v1);
					v23 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v22);
					*(__m128*)(v8 + v10 + 16) = v23;
					v23.m128_f32[0] = fsqrt(v14);
					*(__m128*)(v8 + v10 + 32) = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v22);
				}
				v8 += 112i64;
				--v9;
			} while (v9);
		}
	}
	else if (v4 - 1 > 1)
	{
		v24 = 112i64;
		v25 = v4 - 2;
		do
		{
			v26 = *(_QWORD*)(a1 + 24);
			*(__m128*)(v24 + v26 + 16) = _mm_sub_ps(*(__m128*)(v24 + v26 + 112), *(__m128*)(v24 + v26));
			*(__m128*)(v24 + v26 + 32) = _mm_sub_ps(*(__m128*)(v24 + v26), *(__m128*)(v24 + v26 - 112));
			v24 += 112i64;
			--v25;
		} while (v25);
	}
	v27 = *(__m128**)(a1 + 24);
	v28 = 0i64;
	v29 = v27[9];
	v30 = _mm_mul_ps(v29, v29);
	v30.m128_f32[0] = (float)(v30.m128_f32[0] + _mm_shuffle_ps(v30, v30, 85).m128_f32[0])
		+ _mm_shuffle_ps(v30, v30, 170).m128_f32[0];
	v31 = 1.0 / fsqrt(v30.m128_f32[0]);
	v28.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v30.m128_f32[0] * v31) * v31)) * 0.5) * v31, 0.0);
	v27[3] = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v29);
	if (v4 - 1 > 1)
	{
		v32 = 112i64;
		v33 = v4 - 2;
		do
		{
			v34 = *(_QWORD*)(a1 + 24);
			v35 = *(__m128*)(v32 + v34 + 16);
			v36 = _mm_mul_ps(v35, v35);
			v37 = (float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
				+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0];
			if (v37 <= v7)
			{
				v40 = *(__m128*)(v32 + v34 - 64);
			}
			else
			{
				v38 = 0i64;
				v38.m128_f32[0] = 1.0 / fsqrt(v37);
				v39 = v38;
				v39.m128_f32[0] = (float)((float)((float)(v38.m128_f32[0] * v37) * v38.m128_f32[0]) - 3.0)
					* (float)(v38.m128_f32[0] * -0.5);
				v40 = _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v35);
			}
			*(__m128*)(v32 + v34 + 48) = v40;
			v32 += 112i64;
			--v33;
		} while (v33);
	}
	v41 = v4;
	v42 = 1i64;
	v43 = v4 - 2;
	v44 = 112 * v41;
	*(_OWORD*)(*(_QWORD*)(a1 + 24) + v44 - 64) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + v44 - 176);
	v45 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)(v45 + 96) = 0xFFFFFFFFi64;
	if (v43 > 1)
	{
		do
		{
			*(_QWORD*)(v6 + *(_QWORD*)(a1 + 24) + 96) = *(_QWORD*)(a1 + 48);
			v46 = *(_QWORD*)(a1 + 48);
			LODWORD(v64) = *(_DWORD*)(a1 + 16);
			LODWORD(v66) = 0;
			HIDWORD(v64) = *(_DWORD*)(v6 + *(_QWORD*)(a1 + 24) + 104);
			v47 = sub_14018DB00(*(_QWORD*)(a1 + 40), v46 + 1, 24i64);
			v49 = 3 * v46;
			*(_QWORD*)&v47[2 * v49] = v64;
			*(_QWORD*)&v47[2 * v49 + 2] = v42;
			*(_QWORD*)&v47[2 * v49 + 4] = v66;
			v50 = *(int**)(a1 + 40);
			v51 = v47;
			if (v50 != v47)
			{
				sub_1407DB590(v47, v50, 24i64 * *(_QWORD*)(a1 + 48));
				v52 = *(_QWORD*)(a1 + 40);
				if (v52)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v52 - 16) + 8i64))(v52 - 16);
				*(_QWORD*)(a1 + 40) = v51;
			}
			*(_QWORD*)(a1 + 48) = v46 + 1;
			v53 = *(_DWORD*)(a1 + 12);
			v54 = (__m128*)(v6 + *(_QWORD*)(a1 + 24));
			v55 = _mm_sub_ps(v54[7], *v54);
			v56 = _mm_mul_ps(v55, v55);
			v57 = fsqrt(
				(float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
				+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0]);
			if (v53)
			{
				if (v53 == 1)
					sub_1407A5230(a1, v42, v48, v54, 1.0, v54 + 7, v57);
			}
			else
			{
				*(float*)(a1 + 16) = v57 + *(float*)(a1 + 16);
			}
			++v42;
			v6 += 112i64;
		} while (v42 < v43);
	}
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + v44 - 128) = *(_QWORD*)(a1 + 48);
	v58 = *(_QWORD*)(a1 + 48);
	LODWORD(v65) = *(_DWORD*)(a1 + 16);
	LODWORD(v66) = 0;
	HIDWORD(v65) = *(_DWORD*)(*(_QWORD*)(a1 + 24) + v44 - 120);
	v59 = sub_14018DB00(*(_QWORD*)(a1 + 40), v58 + 1, 24i64);
	v60 = 3 * v58;
	v61 = v59;
	*(_QWORD*)&v59[2 * v60] = v65;
	*(_QWORD*)&v59[2 * v60 + 2] = v43;
	*(_QWORD*)&v59[2 * v60 + 4] = v66;
	v62 = *(int**)(a1 + 40);
	if (v62 != v59)
	{
		sub_1407DB590(v59, v62, 24i64 * *(_QWORD*)(a1 + 48));
		v63 = *(_QWORD*)(a1 + 40);
		if (v63)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v63 - 16) + 8i64))(v63 - 16);
		*(_QWORD*)(a1 + 40) = v61;
	}
	*(_QWORD*)(a1 + 48) = v58 + 1;
	*(_QWORD*)(*(_QWORD*)(a1 + 24) + v44 - 16) = 0xFFFFFFFFi64;
	return 0i64;
}
// 1407A4879: variable 'v1' is possibly undefined
// 1407A4B23: variable 'v66' is possibly undefined
// 1407A4BB8: variable 'v48' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C4E988: using guessed type int dword_140C4E988;

