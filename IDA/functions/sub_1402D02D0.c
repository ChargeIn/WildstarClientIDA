//----- (00000001402D02D0) ----------------------------------------------------
__int64 __fastcall sub_1402D02D0(__int64 a1, __int128* a2)
{
	__int128 v2; // xmm0
	__m128* v3; // rbx
	float* v5; // rcx
	float v6; // xmm4_4
	float v7; // xmm9_4
	float v8; // xmm8_4
	float v9; // xmm0_4
	float v10; // xmm4_4
	float v11; // xmm3_4
	float v12; // xmm6_4
	float v13; // xmm7_4
	float v14; // xmm1_4
	float v15; // xmm2_4
	float v16; // xmm0_4
	float v17; // xmm3_4
	float v18; // xmm5_4
	float v19; // xmm4_4
	float v20; // xmm2_4
	float v21; // xmm3_4
	float v22; // xmm1_4
	float v23; // xmm1_4
	float v24; // xmm0_4
	float v25; // xmm0_4
	float v26; // xmm3_4
	float v27; // xmm0_4
	float v28; // xmm1_4
	float v29; // xmm11_4
	float v30; // xmm0_4
	float v31; // xmm3_4
	float v32; // xmm2_4
	float v33; // xmm0_4
	float v34; // xmm1_4
	float v35; // xmm1_4
	float v36; // xmm0_4
	float v37; // xmm11_4
	float v38; // xmm3_4
	float v39; // xmm2_4
	float v40; // xmm0_4
	float v41; // xmm1_4
	float v42; // xmm3_4
	float v43; // xmm1_4
	float v44; // xmm9_4
	float v45; // xmm8_4
	float v46; // xmm0_4
	float v47; // xmm1_4
	float v48; // xmm2_4
	float v49; // xmm7_4
	float v50; // xmm6_4
	float v51; // xmm0_4
	float v52; // xmm1_4
	float v53; // xmm2_4
	float v54; // xmm5_4
	float v55; // xmm4_4
	float v56; // xmm0_4
	float v57; // xmm1_4
	__int64 v58; // r15
	unsigned int v59; // r14d
	__int64 result; // rax
	__m128* v61; // xmm6_8
	__int64 v62; // rbx
	__int64 v63; // rax
	__int64 v64; // rcx
	__int64 v65; // rdx
	__m128 v66; // [rsp+28h] [rbp-E0h]
	__m128 v67; // [rsp+38h] [rbp-D0h]
	__int64 v68; // [rsp+70h] [rbp-98h]
	_BYTE v69[64]; // [rsp+78h] [rbp-90h] BYREF
	__m128* v70[10]; // [rsp+B8h] [rbp-50h] BYREF
	__int64 v71[14]; // [rsp+108h] [rbp+0h] BYREF

	v2 = *a2;
	v3 = (__m128*)(a1 + 64);
	v70[0] = (__m128*)(a1 + 64);
	*(_OWORD*)(a1 + 64) = v2;
	*(_OWORD*)(a1 + 80) = a2[1];
	*(_OWORD*)(a1 + 96) = a2[2];
	*(_OWORD*)(a1 + 112) = a2[3];
	sub_1401AFC20((__int64*)v70, (double*)(a1 + 128));
	v5 = *(float**)(a1 + 32);
	v6 = v3->m128_f32[0];
	v7 = v5[4];
	v8 = v5[8];
	v67 = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128)v3[3].m128_u32[0], (__m128)v3[3].m128_u32[2]),
		_mm_unpacklo_ps((__m128)v3[3].m128_u32[1], (__m128)0i64));
	v66 = v67;
	if (v3->m128_f32[0] <= 0.0)
	{
		v9 = v6 * v8;
		v10 = v6 * v7;
	}
	else
	{
		v9 = v6 * v7;
		v10 = v6 * v8;
	}
	v11 = v3[1].m128_f32[0];
	v12 = v5[9];
	v13 = v5[5];
	v14 = v67.m128_f32[0] + v9;
	v15 = v67.m128_f32[0] + v10;
	if (v11 <= 0.0)
	{
		v16 = v11 * v12;
		v17 = v11 * v13;
	}
	else
	{
		v16 = v11 * v13;
		v17 = v11 * v12;
	}
	v18 = v5[6];
	v19 = v5[10];
	v20 = v15 + v17;
	v21 = v3[2].m128_f32[0];
	v22 = v14 + v16;
	if (v21 <= 0.0)
	{
		v23 = v22 + (float)(v19 * v21);
		v24 = v5[6];
	}
	else
	{
		v23 = v22 + (float)(v18 * v21);
		v24 = v5[10];
	}
	v25 = v24 * v21;
	v26 = v3->m128_f32[1];
	v67.m128_f32[0] = v23;
	v66.m128_f32[0] = v20 + v25;
	if (v26 <= 0.0)
	{
		v27 = v5[8];
		v28 = v5[4];
	}
	else
	{
		v27 = v5[4];
		v28 = v5[8];
	}
	v29 = v3[1].m128_f32[1];
	v30 = v27 * v26;
	v31 = v66.m128_f32[1] + (float)(v28 * v26);
	v32 = v67.m128_f32[1] + v30;
	if (v29 <= 0.0)
	{
		v33 = v5[9];
		v34 = v5[5];
	}
	else
	{
		v33 = v5[5];
		v34 = v5[9];
	}
	v35 = v34 * v29;
	v36 = v33 * v29;
	v37 = v3[2].m128_f32[1];
	v38 = v31 + v35;
	v39 = v32 + v36;
	if (v37 <= 0.0)
	{
		v40 = v5[10];
		v41 = v5[6];
	}
	else
	{
		v40 = v5[6];
		v41 = v5[10];
	}
	v42 = v38 + (float)(v41 * v37);
	v43 = v3->m128_f32[2];
	v44 = v7 * v43;
	v45 = v8 * v43;
	v66.m128_f32[1] = v42;
	v67.m128_f32[1] = v39 + (float)(v40 * v37);
	if (v43 <= 0.0)
	{
		v46 = v67.m128_f32[2] + v45;
		v47 = v66.m128_f32[2] + v44;
	}
	else
	{
		v46 = v67.m128_f32[2] + v44;
		v47 = v66.m128_f32[2] + v45;
	}
	v48 = v3[1].m128_f32[2];
	v49 = v13 * v48;
	v50 = v12 * v48;
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
	v53 = v3[2].m128_f32[2];
	v54 = v18 * v53;
	v55 = v19 * v53;
	if (v53 <= 0.0)
	{
		v56 = v51 + v55;
		v57 = v52 + v54;
	}
	else
	{
		v56 = v51 + v54;
		v57 = v52 + v55;
	}
	v67.m128_f32[2] = v56;
	v66.m128_f32[2] = v57;
	*(__m128*)(a1 + 192) = v67;
	*(__m128*)(a1 + 208) = v66;
	v58 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1) + 240);
	v59 = 0;
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
	if (*(_DWORD*)(result + 232))
	{
		v61 = v3;
		do
		{
			v62 = *(unsigned int*)(v58 + 4i64 * v59);
			v63 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24i64))(*(_QWORD*)(a1 + 8));
			v71[0] = 0i64;
			v64 = *(_QWORD*)(v63 + 168);
			v71[1] = 0i64;
			v71[3] = 0i64;
			v68 = (v62 << 6) + v64 + 16;
			v71[5] = v68;
			v71[2] = v68 + 16;
			v71[4] = v68 + 32;
			sub_1401AFF00((__int64)v71, (__int64)v69);
			v65 = *(unsigned int*)(v58 + 4i64 * v59);
			v70[0] = (__m128*)v69;
			v70[1] = v61;
			sub_1401AFB10(v70, (__m128*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 320i64) + (v65 << 6)));
			++v59;
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		} while (v59 < *(_DWORD*)(result + 232));
	}
	return result;
}

