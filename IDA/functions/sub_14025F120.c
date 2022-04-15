//----- (000000014025F120) ----------------------------------------------------
void** __fastcall sub_14025F120(__int64 a1, __int64 a2, __m128* a3)
{
	void** result; // rax
	__int64 v4; // rcx
	int v7; // ecx
	int v8; // ecx
	int v9; // ecx
	float v10; // xmm6_4
	__int64 v11; // rcx
	float v12; // xmm0_4
	float v13; // xmm8_4
	float v14; // xmm4_4
	float v15; // xmm5_4
	float v16; // xmm3_4
	float v17; // xmm2_4
	float v18; // xmm8_4
	float v19; // xmm1_4
	float v20; // xmm4_4
	float v21; // xmm1_4
	float v22; // xmm3_4
	float v23; // xmm0_4
	float v24; // xmm6_4
	float v25; // xmm0_4
	float v26; // xmm2_4
	float v27; // xmm7_4
	float v28; // xmm4_4
	float v29; // xmm1_4
	float v30; // xmm3_4
	float v31; // xmm4_4
	float v32; // xmm1_4
	float v33; // xmm7_4
	double v34; // xmm7_8
	float v35; // xmm0_4
	double v36; // xmm8_8
	float v37; // xmm10_4
	float v38; // xmm9_4
	float v39; // xmm0_4
	float v40; // xmm3_4
	float v41; // xmm2_4
	float v42; // xmm1_4
	__int64 v43; // rcx
	double v44; // xmm6_8
	float v45; // xmm7_4
	float v46; // xmm0_4
	float v47; // xmm2_4
	float v48; // xmm3_4
	__int64 v49; // rcx
	float v50; // [rsp+38h] [rbp-49h] BYREF
	float v51; // [rsp+3Ch] [rbp-45h]
	float v52; // [rsp+48h] [rbp-39h]
	float v53; // [rsp+4Ch] [rbp-35h]
	__m128 v54; // [rsp+58h] [rbp-29h] BYREF
	float v55; // [rsp+68h] [rbp-19h]
	float v56; // [rsp+6Ch] [rbp-15h]
	void* retaddr; // [rsp+E0h] [rbp+5Fh] BYREF
	__int64 v58; // [rsp+E8h] [rbp+67h] BYREF

	result = &retaddr;
	v58 = a1;
	v4 = *(unsigned int*)(a2 + 72);
	if (!(_DWORD)v4)
	{
		v55 = *(float*)(a2 + 156);
		v54 = 0i64;
		return (void**)sub_14025F560(v4, &v54, a3);
	}
	v7 = v4 - 1;
	if (!v7)
	{
		*(_QWORD*)&v44 = *(unsigned int*)(a2 + 132);
		v45 = sub_1408FE3D0(v44);
		v46 = sub_1408FC950(v44);
		LODWORD(v44) = *(_DWORD*)(a2 + 156);
		v47 = *(float*)(a2 + 144);
		v48 = *(float*)(a2 + 64);
		v56 = v47 * v45;
		v55 = v47 * v45;
		*(float*)&v58 = v48 - *(float*)&v44;
		v53 = *(float*)&v44 * (float)(v45 / v46);
		v52 = v53;
		v54.m128_f32[1] = -(float)(v47 * v45);
		v54.m128_f32[0] = v54.m128_f32[1];
		*((float*)&v58 + 1) = v48 - (float)(v47 * v46);
		v51 = -v53;
		v50 = -v53;
		return (void**)sub_14025F6F0(v49, v54.m128_f32, &v50, (unsigned int*)&v58, a3);
	}
	v8 = v7 - 1;
	if (!v8)
	{
		*(_QWORD*)&v34 = *(unsigned int*)(a2 + 132);
		v35 = sub_1408FC950(v34);
		*(_QWORD*)&v36 = *(unsigned int*)(a2 + 140);
		v37 = v35;
		v38 = sub_1408FC950(v36);
		*(float*)&v34 = sub_1408FE3D0(v34) / v37;
		v39 = sub_1408FE3D0(v36);
		v40 = *(float*)(a2 + 156);
		v41 = *(float*)(a2 + 64);
		*(float*)&v58 = v41 - v40;
		v42 = fminf(v37, v38) * *(float*)(a2 + 144);
		*((float*)&v58 + 1) = v41 - v42;
		v55 = v42 * *(float*)&v34;
		v56 = v42 * (float)(v39 / v38);
		v54.m128_f32[0] = -(float)(v42 * *(float*)&v34);
		v53 = v40 * (float)(v39 / v38);
		v54.m128_f32[1] = -v56;
		v52 = v40 * *(float*)&v34;
		v50 = -(float)(v40 * *(float*)&v34);
		v51 = -v53;
		return (void**)sub_14025F6F0(v43, v54.m128_f32, &v50, (unsigned int*)&v58, a3);
	}
	v9 = v8 - 1;
	if (v9)
	{
		if (v9 != 1)
			return result;
		v10 = sub_1408FD8A4(*(float*)(a2 + 64));
		v12 = sub_1408FD8A4(*(float*)(a2 + 68));
		v13 = *(float*)(a2 + 156);
		v14 = *(float*)(a2 + 144);
		v15 = *(float*)(a2 + 132);
		v16 = v14 * v10;
		*(float*)&v58 = -v13;
		v17 = v13 * v10;
		v18 = v13 * v12;
		v55 = v15 + (float)(v14 * v10);
		v19 = -v14;
		v20 = v14 * v12;
		*((float*)&v58 + 1) = v19;
		v21 = v16;
		v22 = *(float*)(a2 + 140);
		v54.m128_f32[1] = v20 - v22;
		v54.m128_f32[0] = v21 - v15;
		v50 = v17 - v15;
		v56 = v22 + v20;
		v52 = v17 + v15;
		v23 = v18 - v22;
		v53 = v18 + v22;
	}
	else
	{
		v24 = sub_1408FD8A4(*(float*)(a2 + 64));
		v25 = sub_1408FD8A4(*(float*)(a2 + 68));
		v26 = *(float*)(a2 + 132);
		v27 = *(float*)(a2 + 156);
		v28 = *(float*)(a2 + 144);
		*(float*)&v58 = -v27;
		v29 = v28;
		v30 = v28 * v24;
		v31 = v28 * v25;
		v55 = v26 + v30;
		*((float*)&v58 + 1) = -v29;
		v54.m128_f32[1] = v31 - v26;
		v56 = v31 + v26;
		v54.m128_f32[0] = v30 - v26;
		v32 = v27;
		v33 = v27 * v25;
		v52 = (float)(v32 * v24) + v26;
		v50 = (float)(v32 * v24) - v26;
		v23 = v33 - v26;
		v53 = v33 + v26;
	}
	v51 = v23;
	return (void**)sub_14025F6F0(v11, v54.m128_f32, &v50, (unsigned int*)&v58, a3);
}
// 14025F259: variable 'v11' is possibly undefined
// 14025F45E: variable 'v43' is possibly undefined
// 14025F528: variable 'v49' is possibly undefined
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

