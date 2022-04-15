//----- (00000001408BBC00) ----------------------------------------------------
unsigned int* __fastcall sub_1408BBC00(__int64 a1, __int64* a2)
{
	__m128 v2; // xmm11
	float* v3; // rbx
	__m128* v4; // r13
	__int64* v5; // r10
	__int64 v6; // rdx
	__int64 v7; // r11
	unsigned int* v8; // r15
	float v9; // xmm5_4
	__m128 v10; // xmm3
	float v11; // xmm6_4
	float v12; // xmm7_4
	float v13; // xmm8_4
	unsigned __int64 v14; // r12
	unsigned int* v15; // rdi
	unsigned int* v16; // rsi
	float v17; // xmm10_4
	float v18; // xmm9_4
	unsigned int* v19; // rbp
	unsigned int* v20; // r14
	unsigned int v21; // r9d
	__m128 v22; // xmm12
	float v23; // xmm13_4
	unsigned int* result; // rax
	float v25; // xmm2_4
	__m128 v26; // xmm11
	float v27; // xmm15_4
	float v28; // xmm14_4
	unsigned int* v29; // r13
	__m128 v30; // xmm1
	__m128 v31; // xmm2
	__m128 v32; // xmm0
	__m128 v33; // xmm4
	unsigned int v34; // edx
	__int64 v35; // rax
	__int64 v36; // rcx
	int v37; // r10d
	unsigned int v38; // edx
	__int64 v39; // r8
	__int128 v40; // xmm0
	__int64 v41; // rcx
	__m128 v42; // xmm1
	__m128 v43; // xmm1
	unsigned int v44; // ecx
	__int64 v45; // rdx
	__m128 v46; // xmm0
	__m128 v47; // xmm2
	__m128 v48; // xmm2
	__int64 v49; // rax
	__int128 v50; // xmm1
	float v51; // xmm1_4
	__m128 v52; // xmm2
	__m128 v53; // xmm2
	float* v54; // rcx
	__int64 v55; // rdx
	float v56; // xmm4_4
	__m128 v57; // xmm1
	float v58; // xmm0_4
	unsigned int* v59; // [rsp+0h] [rbp-1E8h]
	float* v60; // [rsp+8h] [rbp-1E0h]
	float* v61; // [rsp+10h] [rbp-1D8h]
	__m128 v62; // [rsp+20h] [rbp-1C8h]
	__m128 v63; // [rsp+30h] [rbp-1B8h]
	__int128 v64[6]; // [rsp+40h] [rbp-1A8h]
	__int128 v65; // [rsp+A0h] [rbp-148h]
	char v66; // [rsp+B0h] [rbp-138h] BYREF
	int v69; // [rsp+208h] [rbp+20h]

	v3 = *(float**)(a1 + 48);
	v4 = (__m128*)a1;
	v5 = a2;
	v6 = *(_QWORD*)(a1 + 16);
	v7 = *v5;
	v8 = *(unsigned int**)(a1 + 272);
	LODWORD(v9) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 564), (__m128) * (unsigned int*)(a1 + 564), 0).m128_u32[0];
	v10 = *(__m128*)(a1 + 496);
	LODWORD(v11) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 572), (__m128) * (unsigned int*)(a1 + 572), 0).m128_u32[0];
	LODWORD(v12) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 576), (__m128) * (unsigned int*)(a1 + 576), 0).m128_u32[0];
	LODWORD(v13) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 560), (__m128) * (unsigned int*)(a1 + 560), 0).m128_u32[0];
	v14 = *(_QWORD*)(a1 + 336);
	v15 = *(unsigned int**)(a1 + 304);
	v16 = *(unsigned int**)(a1 + 144);
	LODWORD(v17) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 568), (__m128) * (unsigned int*)(a1 + 568), 0).m128_u32[0];
	LODWORD(v18) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 76), (__m128) * (unsigned int*)(a1 + 76), 0).m128_u32[0];
	v19 = *(unsigned int**)(a1 + 160);
	v20 = *(unsigned int**)(a1 + 168);
	v21 = *(_DWORD*)(a1 + 596);
	v22 = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 68), (__m128) * (unsigned int*)(a1 + 68), 0);
	LODWORD(v23) = _mm_shuffle_ps((__m128) * (unsigned int*)(a1 + 72), (__m128) * (unsigned int*)(a1 + 72), 0).m128_u32[0];
	v61 = *(float**)(a1 + 40);
	result = *(unsigned int**)(a1 + 152);
	v25 = 1.0 / (float)*((unsigned __int16*)v5 + 8);
	v2.m128_f32[0] = -2.0 / (float)*(int*)(v6 + 24);
	v60 = *(float**)(a1 + 56);
	v26 = _mm_shuffle_ps(v2, v2, 0);
	v69 = *((unsigned __int16*)v5 + 9);
	v27 = (float)(*(float*)(v6 + 20) - *(float*)(a1 + 576)) * v25;
	v28 = (float)(*(float*)(v6 + 16) - *(float*)(a1 + 572)) * v25;
	v62 = *(__m128*)(a1 + 368);
	v63 = *(__m128*)(a1 + 432);
	if (*((_WORD*)v5 + 9))
	{
		v29 = *(unsigned int**)(a1 + 152);
		do
		{
			v30 = (__m128) * v16;
			v31 = (__m128) * v29;
			v32 = (__m128) * v19;
			v16 += 4;
			if ((unsigned __int64)v16 >= v14)
				v16 = v8;
			v29 += 4;
			v33 = (__m128) * v20;
			if ((unsigned __int64)v29 >= v14)
				v29 = v8 + 1;
			v19 += 4;
			if ((unsigned __int64)v19 >= v14)
				v19 = v8 + 2;
			v20 += 4;
			if ((unsigned __int64)v20 >= v14)
				v20 = v8 + 3;
			v34 = 0;
			v10 = _mm_add_ps(
				_mm_mul_ps(_mm_movelh_ps(_mm_unpacklo_ps(v30, v31), _mm_unpacklo_ps(v32, v33)), v62),
				_mm_mul_ps(v10, v63));
			do
			{
				v35 = v34;
				v36 = v34++;
				v64[v36] = (__int128)_mm_mul_ps(stru_1409AA150[4 * v35], v10);
			} while (v34 < v21);
			v37 = *((unsigned __int16*)v5 + 8);
			v38 = 0;
			v39 = 0i64;
			do
			{
				v40 = *(unsigned int*)(v7 + 4 * v39);
				v41 = v38++;
				v41 *= 2i64;
				v39 = (unsigned int)(v37 + v39);
				v42 = *(__m128*)((char*)v64 + 8 * v41);
				*(__int128*)((char*)&v65 + 8 * v41) = v40;
				v43 = _mm_add_ps(v42, _mm_movehl_ps(v42, v42));
				*(__int128*)((char*)v64 + 8 * v41) = (__int128)_mm_add_ps(_mm_shuffle_ps(v43, v43, 85), v43);
			} while (v38 < v21);
			v44 = 0;
			v11 = v11 + v28;
			v12 = v12 + v27;
			v45 = 0i64;
			v46 = _mm_add_ps(_mm_movehl_ps(v10, v10), v10);
			v47 = _mm_add_ps(_mm_shuffle_ps(v46, v46, 85), v46);
			v48 = _mm_shuffle_ps(v47, v47, 0);
			do
			{
				v49 = v44++;
				v49 *= 2i64;
				v50 = *(__int128*)((char*)&v65 + 8 * v49);
				*(float*)&v50 = (float)(*(float*)&v50 * v11)
					+ (float)(COERCE_FLOAT(*(__int128*)((char*)v64 + 8 * v49)) * v12);
				*(_DWORD*)(v7 + 4 * v45) = v50;
				v45 = (unsigned int)(v37 + v45);
				*(__int128*)((char*)v64 + 8 * v49) = v50;
			} while (v44 < v21);
			v51 = *(float*)&v65;
			v7 += 4i64;
			v52 = _mm_add_ps(_mm_mul_ps(v48, v26), v10);
			v53 = _mm_shuffle_ps(v52, _mm_shuffle_ps(v52, v52, 15), 201);
			if (v21 > 1)
			{
				v54 = (float*)&v66;
				v55 = v21 - 1;
				do
				{
					v51 = v51 + *v54;
					v54 += 4;
					--v55;
				} while (v55);
			}
			v9 = (float)((float)(v17 * v9) + v51) - v13;
			v13 = v51;
			if (v61)
			{
				v56 = *v3;
				*v3++ = v9;
				if (v3 == v60)
					v3 = v61;
			}
			else
			{
				v56 = v9;
			}
			v5 = a2;
			v15 += 4;
			v57 = v22;
			v58 = v23 * v18;
			v18 = v56;
			v57.m128_f32[0] = (float)(v22.m128_f32[0] * v56) + v58;
			*((__m128*)v15 - 1) = _mm_add_ps(_mm_shuffle_ps(v57, v57, 0), v53);
			if ((unsigned __int64)v15 >= v14)
				v15 = v8;
			--v69;
		} while (v69);
		v59 = v29;
		v4 = (__m128*)a1;
		result = v59;
	}
	v4[4].m128_f32[3] = v18;
	v4[35].m128_f32[0] = v13;
	v4[35].m128_f32[1] = v9;
	v4[3].m128_u64[0] = (unsigned __int64)v3;
	v4[19].m128_u64[0] = (unsigned __int64)v15;
	v4[9].m128_u64[0] = (unsigned __int64)v16;
	v4[9].m128_u64[1] = (unsigned __int64)result;
	v4[10].m128_u64[0] = (unsigned __int64)v19;
	v4[10].m128_u64[1] = (unsigned __int64)v20;
	v4[31] = v10;
	return result;
}
// 1408BBD85: variable 'v2' is possibly undefined
// 1409AA150: using guessed type __m128 stru_1409AA150[24];
// 1408BBC00: using guessed type __int128 var_1A8[6];

