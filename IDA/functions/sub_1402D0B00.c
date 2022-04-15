//----- (00000001402D0B00) ----------------------------------------------------
void __fastcall sub_1402D0B00(__int64 a1, float* a2, char a3, __int64 a4)
{
	float v8; // xmm4_4
	float v9; // xmm7_4
	float v10; // xmm8_4
	float v11; // xmm0_4
	float v12; // xmm4_4
	float v13; // xmm3_4
	float v14; // xmm9_4
	float v15; // xmm10_4
	float v16; // xmm1_4
	float v17; // xmm2_4
	float v18; // xmm0_4
	float v19; // xmm3_4
	float v20; // xmm5_4
	float v21; // xmm4_4
	float v22; // xmm2_4
	float v23; // xmm3_4
	float v24; // xmm1_4
	float v25; // xmm0_4
	float v26; // xmm5_4
	float v27; // xmm2_4
	float v28; // xmm5_4
	float v29; // xmm0_4
	float v30; // xmm5_4
	float v31; // xmm2_4
	float v32; // xmm5_4
	float v33; // xmm1_4
	float v34; // xmm0_4
	float v35; // xmm5_4
	float v36; // xmm2_4
	float v37; // xmm5_4
	float v38; // xmm1_4
	float v39; // xmm0_4
	float v40; // xmm5_4
	float v41; // xmm2_4
	float v42; // xmm5_4
	float v43; // xmm0_4
	float v44; // xmm5_4
	float v45; // xmm2_4
	float v46; // xmm5_4
	float v47; // xmm1_4
	float v48; // xmm0_4
	float v49; // xmm5_4
	float v50; // xmm1_4
	float v51; // xmm0_4
	float v52; // xmm2_4
	float v53; // xmm4_4
	float v54; // xmm3_4
	float v55; // xmm1_4
	float v56; // xmm2_4
	_QWORD* v57; // rcx
	__m128 v58; // [rsp+38h] [rbp-39h]
	__m128 v59; // [rsp+48h] [rbp-29h] BYREF
	__int128 v60[2]; // [rsp+58h] [rbp-19h] BYREF

	v59.m128_i32[0] = -1;
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)a1 + 88i64))(a1, &v59);
	v8 = *(float*)(a1 + 128);
	v9 = *a2;
	v10 = a2[4];
	v58 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 176), (__m128) * (unsigned int*)(a1 + 184)),
		_mm_unpacklo_ps((__m128) * (unsigned int*)(a1 + 180), (__m128)0i64));
	v59 = v58;
	if (v8 <= 0.0)
	{
		v11 = v8 * v10;
		v12 = v8 * v9;
	}
	else
	{
		v11 = v8 * v9;
		v12 = v8 * v10;
	}
	v13 = *(float*)(a1 + 144);
	v14 = a2[1];
	v15 = a2[5];
	v16 = v58.m128_f32[0] + v11;
	v17 = v58.m128_f32[0] + v12;
	if (v13 <= 0.0)
	{
		v18 = v13 * v15;
		v19 = v13 * v14;
	}
	else
	{
		v18 = v13 * v14;
		v19 = v13 * v15;
	}
	v20 = *(float*)(a1 + 160);
	v21 = a2[2];
	v22 = v17 + v19;
	v23 = a2[6];
	v24 = v16 + v18;
	if (v20 <= 0.0)
	{
		v25 = v20 * v23;
		v26 = v20 * v21;
	}
	else
	{
		v25 = v20 * v21;
		v26 = v20 * v23;
	}
	v27 = v22 + v26;
	v28 = *(float*)(a1 + 132);
	v59.m128_f32[0] = v27;
	v58.m128_f32[0] = v24 + v25;
	if (v28 <= 0.0)
	{
		v29 = v28 * v10;
		v30 = v28 * v9;
	}
	else
	{
		v29 = v28 * v9;
		v30 = v28 * v10;
	}
	v31 = v59.m128_f32[1] + v30;
	v32 = *(float*)(a1 + 148);
	v33 = v58.m128_f32[1] + v29;
	if (v32 <= 0.0)
	{
		v34 = v32 * v15;
		v35 = v32 * v14;
	}
	else
	{
		v34 = v32 * v14;
		v35 = v32 * v15;
	}
	v36 = v31 + v35;
	v37 = *(float*)(a1 + 164);
	v38 = v33 + v34;
	if (v37 <= 0.0)
	{
		v39 = v37 * v23;
		v40 = v37 * v21;
	}
	else
	{
		v39 = v37 * v21;
		v40 = v37 * v23;
	}
	v41 = v36 + v40;
	v42 = *(float*)(a1 + 136);
	v59.m128_f32[1] = v41;
	v58.m128_f32[1] = v38 + v39;
	if (v42 <= 0.0)
	{
		v43 = v42 * v10;
		v44 = v42 * v9;
	}
	else
	{
		v43 = v42 * v9;
		v44 = v42 * v10;
	}
	v45 = v59.m128_f32[2] + v44;
	v46 = *(float*)(a1 + 152);
	v47 = v58.m128_f32[2] + v43;
	if (v46 <= 0.0)
	{
		v48 = v46 * v15;
		v49 = v46 * v14;
	}
	else
	{
		v48 = v46 * v14;
		v49 = v46 * v15;
	}
	v50 = v47 + v48;
	v51 = *(float*)(a1 + 168);
	v52 = v45 + v49;
	v53 = v21 * v51;
	v54 = v23 * v51;
	if (v51 <= 0.0)
	{
		v55 = v50 + v54;
		v56 = v52 + v53;
	}
	else
	{
		v55 = v50 + v53;
		v56 = v52 + v54;
	}
	v57 = *(_QWORD**)(a1 + 24);
	v58.m128_f32[2] = v55;
	v59.m128_f32[2] = v56;
	v60[0] = (__int128)v58;
	v60[1] = (__int128)v59;
	sub_1402D4550(v57, (__int64)v60, a3, a4, a1 + 64);
}

