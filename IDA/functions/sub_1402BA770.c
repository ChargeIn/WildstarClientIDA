//----- (00000001402BA770) ----------------------------------------------------
__int64 __fastcall sub_1402BA770(
	__int64 a1,
	__int64 a2,
	float* a3,
	char a4,
	__int64 a5,
	float* a6,
	float a7,
	unsigned __int64 a8,
	unsigned __int64 a9,
	__int64 a10,
	int a11,
	int a12)
{
	float* v13; // r8
	float v15; // xmm11_4
	int v17; // edx
	__int64 v18; // r14
	unsigned __int64 v19; // rcx
	__int64 v20; // r15
	float v21; // xmm10_4
	__m128 v22; // xmm1
	int v23; // ecx
	unsigned __int64 v24; // rdi
	__int64 v25; // rbp
	__int64 v26; // rdx
	float v27; // xmm0_4
	__int64 v28; // rcx
	float v29; // xmm6_4
	float v30; // xmm7_4
	float v31; // xmm8_4
	float v32; // xmm9_4
	float v33; // xmm3_4
	float v34; // xmm2_4
	int v35; // eax
	float v36; // xmm4_4
	float v37; // xmm1_4
	float v38; // xmm0_4
	float v39; // xmm5_4
	float v40; // xmm0_4
	float v41; // xmm5_4
	float v42; // xmm0_4
	float v43; // xmm5_4
	float v44; // xmm0_4
	float v46; // [rsp+50h] [rbp-E8h] BYREF
	float v47; // [rsp+54h] [rbp-E4h]
	float v48; // [rsp+60h] [rbp-D8h]
	float v49; // [rsp+64h] [rbp-D4h]
	float v50; // [rsp+70h] [rbp-C8h] BYREF
	float v51; // [rsp+74h] [rbp-C4h]
	float v52; // [rsp+80h] [rbp-B8h]
	float v53; // [rsp+84h] [rbp-B4h]
	char v54; // [rsp+158h] [rbp+20h]
	unsigned __int64 v55; // [rsp+180h] [rbp+48h]
	int v56; // [rsp+190h] [rbp+58h]

	v54 = a4;
	v13 = a6;
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 232i64) = a11;
	v15 = a6[1];
	if (a8 < a9)
	{
		v17 = a4 & 1;
		v18 = 24 * a8;
		v19 = a9 - a8;
		v55 = a9 - a8;
		v56 = v17;
		do
		{
			v20 = *(_QWORD*)(a1 + 2408);
			v21 = *v13;
			if (v17)
			{
				v22 = (__m128)LODWORD(a7);
				v22.m128_f32[0] = (float)((float)((float)(a7 - *(float*)(v18 + v20 + 16)) * 0.5) * *(float*)(a1 + 48)) + 0.5;
				v23 = (int)v22.m128_f32[0];
				if ((int)v22.m128_f32[0] != 0x80000000 && (float)v23 != v22.m128_f32[0])
					v22.m128_f32[0] = (float)(v23 - (_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1));
				v19 = v55;
				v21 = v21 + (float)(v22.m128_f32[0] * *(float*)(a1 + 36));
			}
			else if ((a4 & 2) != 0)
			{
				v21 = v21 + (float)(a7 - *(float*)(v18 + v20 + 16));
			}
			v24 = *(_QWORD*)(v18 + v20);
			if (v24 < *(_QWORD*)(v18 + v20 + 8))
			{
				v25 = 4 * (v24 - a10);
				do
				{
					v26 = *(_QWORD*)(*(_QWORD*)(a2 + 168) + 8 * v24);
					if (*(_QWORD*)v26 != -1i64)
					{
						v27 = *(float*)(a1 + 36);
						v28 = *(_QWORD*)(a2 + 160);
						v29 = (float)*(unsigned __int16*)(v26 + 8);
						v50 = v29;
						v30 = (float)*(unsigned __int16*)(v26 + 10);
						v51 = v30;
						v31 = (float)*(unsigned __int16*)(v26 + 12);
						v52 = v31;
						v32 = (float)*(unsigned __int16*)(v26 + 14);
						v53 = v32;
						v33 = (float)((float)((float)(*(_DWORD*)(v28 + 8 * v24) + *(__int16*)(v26 + 16)) * v27) + v21)
							+ *(float*)(*(_QWORD*)(a1 + 2384) + v25);
						v46 = v33;
						v34 = (float)((float)(v31 - v29) * v27) + v33;
						v35 = *(_DWORD*)(v28 + 8 * v24 + 4) + *(__int16*)(v26 + 18);
						v48 = v34;
						v36 = (float)((float)v35 * v27) + v15;
						v37 = (float)((float)(v32 - v30) * v27) + v36;
						v47 = v36;
						v49 = v37;
						if (!a3)
							goto LABEL_24;
						if (v33 < *a3)
						{
							v38 = *a3 - v33;
							v33 = *a3;
							v46 = *a3;
							v50 = v29 + (float)(v38 * *(float*)(a1 + 48));
						}
						v39 = a3[1];
						if (v36 < v39)
						{
							v40 = v39 - v36;
							v36 = a3[1];
							v47 = v36;
							v51 = v30 + (float)(v40 * *(float*)(a1 + 48));
						}
						v41 = a3[4];
						if (v34 > v41)
						{
							v42 = v41 - v34;
							v34 = a3[4];
							v48 = v34;
							v52 = v31 + (float)(v42 * *(float*)(a1 + 48));
						}
						v43 = a3[5];
						if (v37 > v43)
						{
							v44 = v43 - v37;
							v37 = a3[5];
							v49 = v37;
							v53 = v32 + (float)(v44 * *(float*)(a1 + 48));
						}
						if (v33 < v34 && v36 < v37)
							LABEL_24:
						(*(void(__fastcall**)(_QWORD, _QWORD, float*, float*, float*, __int64, int, _DWORD, _DWORD))(**(_QWORD**)(a1 + 16) + 232i64))(
							*(_QWORD*)(a1 + 16),
							*(_QWORD*)v26,
							&v50,
							&v46,
							&v46,
							a5,
							a12,
							0,
							0);
					}
					++v24;
					v25 += 4i64;
				} while (v24 < *(_QWORD*)(v18 + v20 + 8));
				v19 = v55;
				v17 = v56;
				v13 = a6;
				a4 = v54;
			}
			v15 = v15 + *(float*)(a1 + 52);
			v18 += 24i64;
			v55 = --v19;
		} while (v19);
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 232i64) = 0;
	return 0i64;
}

