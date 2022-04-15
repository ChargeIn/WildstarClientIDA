//----- (00000001402D6F90) ----------------------------------------------------
__int64 __fastcall sub_1402D6F90(__m128* a1, __m128* a2)
{
	__m128 v3; // xmm1
	float v4; // xmm4_4
	float v5; // xmm7_4
	float v6; // xmm8_4
	float v7; // xmm0_4
	float v8; // xmm4_4
	float v9; // xmm3_4
	float v10; // xmm9_4
	float v11; // xmm10_4
	float v12; // xmm1_4
	float v13; // xmm2_4
	float v14; // xmm0_4
	float v15; // xmm3_4
	float v16; // xmm4_4
	float v17; // xmm2_4
	float v18; // xmm3_4
	float v19; // xmm6_4
	float v20; // xmm1_4
	float v21; // xmm0_4
	float v22; // xmm3_4
	float v23; // xmm2_4
	float v24; // xmm3_4
	float v25; // xmm0_4
	float v26; // xmm3_4
	float v27; // xmm2_4
	float v28; // xmm3_4
	float v29; // xmm1_4
	float v30; // xmm0_4
	float v31; // xmm3_4
	float v32; // xmm2_4
	float v33; // xmm3_4
	float v34; // xmm1_4
	float v35; // xmm0_4
	float v36; // xmm3_4
	float v37; // xmm2_4
	float v38; // xmm3_4
	float v39; // xmm0_4
	float v40; // xmm3_4
	float v41; // xmm2_4
	float v42; // xmm3_4
	float v43; // xmm1_4
	float v44; // xmm0_4
	float v45; // xmm3_4
	float v46; // xmm2_4
	float v47; // xmm3_4
	float v48; // xmm1_4
	float v49; // xmm0_4
	float v50; // xmm3_4
	unsigned __int64 v51; // rax
	unsigned __int16* v52; // rbx
	__int64 v53; // rax
	float v54; // xmm6_4
	float v55; // xmm7_4
	float v56; // xmm8_4
	float v57; // xmm9_4
	float v58; // xmm10_4
	float v59; // xmm11_4
	__int64 v60; // rcx
	__m128* v61; // rdx
	float v62; // xmm0_4
	float v63; // xmm0_4
	__m128 v65; // [rsp+28h] [rbp-49h] BYREF
	__m128 v66; // [rsp+38h] [rbp-39h]
	__m128 v67; // [rsp+48h] [rbp-29h]
	__m128 v68; // [rsp+58h] [rbp-19h]

	v3 = _mm_min_ps(a1[6], a2[1]);
	v67 = _mm_max_ps(a1[5], *a2);
	v68 = v3;
	if (v67.m128_f32[0] >= v3.m128_f32[0] || v67.m128_f32[1] >= v68.m128_f32[1] || v67.m128_f32[2] >= v68.m128_f32[2])
		return 0i64;
	v4 = a1[11].m128_f32[0];
	v5 = a2->m128_f32[0];
	v6 = a2[1].m128_f32[0];
	v65 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)a1[14].m128_u32[0], (__m128)a1[14].m128_u32[2]),
		_mm_unpacklo_ps((__m128)a1[14].m128_u32[1], (__m128)0i64));
	v67 = v65;
	if (v4 <= 0.0)
	{
		v7 = v4 * v6;
		v8 = v4 * v5;
	}
	else
	{
		v7 = v4 * v5;
		v8 = v4 * v6;
	}
	v9 = a1[12].m128_f32[0];
	v10 = a2->m128_f32[1];
	v11 = a2[1].m128_f32[1];
	v12 = v65.m128_f32[0] + v7;
	v13 = v65.m128_f32[0] + v8;
	if (v9 <= 0.0)
	{
		v14 = v9 * v11;
		v15 = v9 * v10;
	}
	else
	{
		v14 = v9 * v10;
		v15 = v9 * v11;
	}
	v16 = a2->m128_f32[2];
	v17 = v13 + v15;
	v18 = a1[13].m128_f32[0];
	v19 = a2[1].m128_f32[2];
	v20 = v12 + v14;
	if (v18 <= 0.0)
	{
		v21 = v18 * v19;
		v22 = v18 * v16;
	}
	else
	{
		v21 = v18 * v16;
		v22 = v18 * v19;
	}
	v23 = v17 + v22;
	v24 = a1[11].m128_f32[1];
	v67.m128_f32[0] = v23;
	v65.m128_f32[0] = v20 + v21;
	if (v24 <= 0.0)
	{
		v25 = v24 * v6;
		v26 = v24 * v5;
	}
	else
	{
		v25 = v24 * v5;
		v26 = v24 * v6;
	}
	v27 = v67.m128_f32[1] + v26;
	v28 = a1[12].m128_f32[1];
	v29 = v65.m128_f32[1] + v25;
	if (v28 <= 0.0)
	{
		v30 = v28 * v11;
		v31 = v28 * v10;
	}
	else
	{
		v30 = v28 * v10;
		v31 = v28 * v11;
	}
	v32 = v27 + v31;
	v33 = a1[13].m128_f32[1];
	v34 = v29 + v30;
	if (v33 <= 0.0)
	{
		v35 = v33 * v19;
		v36 = v33 * v16;
	}
	else
	{
		v35 = v33 * v16;
		v36 = v33 * v19;
	}
	v37 = v32 + v36;
	v38 = a1[11].m128_f32[2];
	v67.m128_f32[1] = v37;
	v65.m128_f32[1] = v34 + v35;
	if (v38 <= 0.0)
	{
		v39 = v38 * v6;
		v40 = v38 * v5;
	}
	else
	{
		v39 = v38 * v5;
		v40 = v38 * v6;
	}
	v41 = v67.m128_f32[2] + v40;
	v42 = a1[12].m128_f32[2];
	v43 = v65.m128_f32[2] + v39;
	if (v42 <= 0.0)
	{
		v44 = v42 * v11;
		v45 = v42 * v10;
	}
	else
	{
		v44 = v42 * v10;
		v45 = v42 * v11;
	}
	v46 = v41 + v45;
	v47 = a1[13].m128_f32[2];
	v48 = v43 + v44;
	if (v47 <= 0.0)
	{
		v49 = v47 * v19;
		v50 = v47 * v16;
	}
	else
	{
		v49 = v47 * v16;
		v50 = v47 * v19;
	}
	v51 = a1[1].m128_u64[0];
	v52 = *(unsigned __int16**)(v51 + 88);
	v53 = *(unsigned int*)(v51 + 80);
	v65.m128_f32[2] = v48 + v49;
	v67.m128_f32[2] = v46 + v50;
	v66 = v67;
	if (v52 >= &v52[v53])
		return 0i64;
	v54 = v66.m128_f32[2];
	v55 = v66.m128_f32[1];
	v56 = v66.m128_f32[0];
	v57 = v65.m128_f32[2];
	v58 = v65.m128_f32[1];
	v59 = v65.m128_f32[0];
	while (1)
	{
		v60 = *(_QWORD*)(a1[1].m128_u64[0] + 72);
		v61 = (__m128*)(v60 + 16i64 * *v52);
		if (v61->m128_f32[0] >= v59 && v61->m128_f32[0] <= v56)
		{
			v62 = v61->m128_f32[1];
			if (v62 >= v58 && v62 <= v55)
			{
				v63 = v61->m128_f32[2];
				if (v63 >= v57 && v63 <= v54)
					break;
			}
		}
		if ((unsigned int)sub_1401C9CE0(
			v65.m128_f32,
			v61,
			(__m128*)(v60 + 16i64 * v52[1]),
			(__m128*)(v60 + 16i64 * v52[2])))
			break;
		v52 += 3;
		if ((unsigned __int64)v52 >= *(_QWORD*)(a1[1].m128_u64[0] + 88)
			+ 2 * (unsigned __int64)*(unsigned int*)(a1[1].m128_u64[0] + 80))
			return 0i64;
	}
	return 1i64;
}

