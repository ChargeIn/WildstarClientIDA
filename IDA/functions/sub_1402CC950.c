//----- (00000001402CC950) ----------------------------------------------------
__int64* __fastcall sub_1402CC950(__m128* a1)
{
	unsigned __int64 v1; // rax
	__int64 v3; // rdi
	float v4; // xmm4_4
	float* v5; // rax
	float v6; // xmm9_4
	float v7; // xmm10_4
	float v8; // xmm0_4
	float v9; // xmm4_4
	float v10; // xmm3_4
	float v11; // xmm6_4
	float v12; // xmm7_4
	float v13; // xmm1_4
	float v14; // xmm2_4
	float v15; // xmm0_4
	float v16; // xmm3_4
	float v17; // xmm5_4
	float v18; // xmm4_4
	float v19; // xmm2_4
	float v20; // xmm3_4
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm5_4
	float v24; // xmm2_4
	float v25; // xmm5_4
	float v26; // xmm0_4
	float v27; // xmm5_4
	float v28; // xmm2_4
	float v29; // xmm5_4
	float v30; // xmm1_4
	float v31; // xmm0_4
	float v32; // xmm5_4
	float v33; // xmm2_4
	float v34; // xmm5_4
	float v35; // xmm1_4
	float v36; // xmm0_4
	float v37; // xmm5_4
	float v38; // xmm2_4
	float v39; // xmm0_4
	float v40; // xmm2_4
	float v41; // xmm1_4
	float v42; // xmm0_4
	float v43; // xmm2_4
	float v44; // xmm7_4
	float v45; // xmm6_4
	float v46; // xmm1_4
	float v47; // xmm0_4
	float v48; // xmm2_4
	float v49; // xmm4_4
	float v50; // xmm3_4
	float v51; // xmm1_4
	float v52; // xmm0_4
	__int128 v53; // xmm1
	__m128 v55; // [rsp+20h] [rbp-29h]
	__int128 v56; // [rsp+30h] [rbp-19h] BYREF
	int v57[4]; // [rsp+40h] [rbp-9h] BYREF

	v1 = a1->m128_u64[0];
	LODWORD(v56) = -1;
	(*(void(__fastcall**)(__m128*, __int128*, __int64))(v1 + 64))(a1, &v56, 5i64);
	if (!a1[15].m128_i32[0])
	{
		v3 = a1[1].m128_i64[1];
		v57[0] = -1;
		if (*(_DWORD*)(v3 + 24) != 3)
			sub_1402C9AE0(v3, (__int64)v57, 3);
		v4 = a1[5].m128_f32[0];
		v5 = (float*)(*(_QWORD*)(v3 + 64) + 320i64);
		v6 = *v5;
		v7 = *(float*)(*(_QWORD*)(v3 + 64) + 336i64);
		v55 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)a1[8].m128_u32[0], (__m128)a1[8].m128_u32[2]),
			_mm_unpacklo_ps((__m128)a1[8].m128_u32[1], (__m128)0i64));
		v56 = (__int128)v55;
		if (v4 <= 0.0)
		{
			v8 = v4 * v7;
			v9 = v4 * v6;
		}
		else
		{
			v8 = v4 * v6;
			v9 = v4 * v7;
		}
		v10 = a1[6].m128_f32[0];
		v11 = v5[5];
		v12 = v5[1];
		v13 = v55.m128_f32[0] + v8;
		v14 = v55.m128_f32[0] + v9;
		if (v10 <= 0.0)
		{
			v15 = v10 * v11;
			v16 = v10 * v12;
		}
		else
		{
			v15 = v10 * v12;
			v16 = v10 * v11;
		}
		v17 = a1[7].m128_f32[0];
		v18 = v5[2];
		v19 = v14 + v16;
		v20 = v5[6];
		v21 = v13 + v15;
		if (v17 <= 0.0)
		{
			v22 = v17 * v20;
			v23 = v17 * v18;
		}
		else
		{
			v22 = v17 * v18;
			v23 = v17 * v20;
		}
		v24 = v19 + v23;
		v25 = a1[5].m128_f32[1];
		*(float*)&v56 = v24;
		v55.m128_f32[0] = v21 + v22;
		if (v25 <= 0.0)
		{
			v26 = v25 * v7;
			v27 = v25 * v6;
		}
		else
		{
			v26 = v25 * v6;
			v27 = v25 * v7;
		}
		v28 = *((float*)&v56 + 1) + v27;
		v29 = a1[6].m128_f32[1];
		v30 = v55.m128_f32[1] + v26;
		if (v29 <= 0.0)
		{
			v31 = v29 * v11;
			v32 = v29 * v12;
		}
		else
		{
			v31 = v29 * v12;
			v32 = v29 * v11;
		}
		v33 = v28 + v32;
		v34 = a1[7].m128_f32[1];
		v35 = v30 + v31;
		if (v34 <= 0.0)
		{
			v36 = v34 * v20;
			v37 = v34 * v18;
		}
		else
		{
			v36 = v34 * v18;
			v37 = v34 * v20;
		}
		*((float*)&v56 + 1) = v33 + v37;
		v38 = a1[5].m128_f32[2];
		v55.m128_f32[1] = v35 + v36;
		if (v38 <= 0.0)
		{
			v39 = v38 * v7;
			v40 = v38 * v6;
		}
		else
		{
			v39 = v38 * v6;
			v40 = v38 * v7;
		}
		v41 = v55.m128_f32[2] + v39;
		v42 = *((float*)&v56 + 2) + v40;
		v43 = a1[6].m128_f32[2];
		v44 = v12 * v43;
		v45 = v11 * v43;
		if (v43 <= 0.0)
		{
			v46 = v41 + v45;
			v47 = v42 + v44;
		}
		else
		{
			v46 = v41 + v44;
			v47 = v42 + v45;
		}
		v48 = a1[7].m128_f32[2];
		v49 = v18 * v48;
		v50 = v20 * v48;
		if (v48 <= 0.0)
		{
			v51 = v46 + v50;
			v52 = v47 + v49;
		}
		else
		{
			v51 = v46 + v49;
			v52 = v47 + v50;
		}
		*((float*)&v56 + 2) = v52;
		v55.m128_f32[2] = v51;
		v53 = v56;
		a1[13] = v55;
		a1[14] = (__m128)v53;
		a1[15].m128_i32[0] = 1;
	}
	return (__int64*)&a1[13];
}
// 1402CC950: using guessed type int var_60[4];

