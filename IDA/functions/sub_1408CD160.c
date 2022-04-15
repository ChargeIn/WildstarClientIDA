#include "../winhttp.h"

//----- (00000001408CD160) ----------------------------------------------------
__int64 __fastcall sub_1408CD160(
	__int64 a1,
	__int64 a2,
	__int64* a3,
	__int64 a4,
	unsigned int* a5,
	__int64 a6,
	char a7)
{
	unsigned int v7; // r13d
	float v8; // xmm1_4
	unsigned int v9; // r12d
	__int64 v10; // rdi
	unsigned int v12; // ecx
	__int64 v13; // rbp
	__int64 v14; // rsi
	float v15; // xmm4_4
	unsigned int v16; // r10d
	__m128* v17; // r11
	__m128* v18; // rbx
	float* v19; // rcx
	float* v20; // rdx
	__int64 v21; // r8
	__m128 v22; // xmm2
	__m128 v23; // xmm9
	__m128 v24; // xmm9
	float v25; // xmm0_4
	__m128 v26; // xmm2
	__m128 v27; // xmm5
	__m128 v28; // xmm10
	__m128 v29; // xmm10
	float v30; // xmm0_4
	__m128 v31; // xmm2
	__m128 v32; // xmm6
	__m128 v33; // xmm11
	__m128 v34; // xmm11
	unsigned int v35; // r14d
	float v36; // xmm0_4
	__m128 v37; // xmm2
	__m128 v38; // xmm7
	__m128 v39; // xmm12
	__m128 v40; // xmm12
	__m128 v41; // xmm8
	__int64 v42; // r9
	__m128 v43; // xmm4
	__m128 v44; // xmm3
	__m128 v45; // xmm1
	__m128 v46; // xmm0
	__m128 v47; // xmm2
	__m128 v48; // xmm1
	__m128 v49; // xmm2
	__m128 v50; // xmm1
	__m128 v51; // xmm0
	__int128* v52; // rbx
	__int64 v53; // rcx
	__int64 v54; // rax
	__int128 v55; // xmm0
	__int128 v56; // xmm1
	__int128 v57; // xmm0
	__int128 v58; // xmm1
	__int128 v59; // xmm0
	__int128 v60; // xmm1
	__int128 v61; // xmm0
	__int128 v62; // xmm1
	__int128 v63; // xmm1
	__int64 v64; // rbp
	__int64 v65; // r14
	__int64 v66; // rdi
	unsigned int v67; // r8d
	__int64 v68; // rbx
	unsigned int v69; // r8d
	__int64 result; // rax
	__m128 v71; // [rsp+30h] [rbp-B8h]
	unsigned int v72; // [rsp+F0h] [rbp+8h]
	float* v73; // [rsp+F8h] [rbp+10h]
	float* v74; // [rsp+100h] [rbp+18h]

	v7 = *(_DWORD*)(a1 + 8);
	v8 = *(float*)(a4 + 4);
	v9 = *(unsigned __int16*)(a2 + 18);
	v10 = *a3;
	v12 = *(_DWORD*)(a1 + 32);
	v13 = *(unsigned int*)(a1 + 12);
	v14 = *(unsigned int*)(a1 + 36);
	v15 = 1.0 / (float)(int)v9;
	v16 = v12 - v14;
	v72 = v12;
	v17 = (__m128*)(*(_QWORD*)a1 + 4 * v13);
	if (v7 - (unsigned int)v13 < v12 - (unsigned int)v14)
		v16 = v7 - v13;
	v18 = (__m128*)(*(_QWORD*)(a1 + 24) + 4 * v14);
	v73 = *(float**)a2;
	v19 = *(float**)a2;
	v74 = (float*)(*(_QWORD*)a2 + 4i64 * *(unsigned __int16*)(a2 + 16));
	v20 = v74;
	v21 = v10 + 4i64 * *((unsigned __int16*)a3 + 8);
	v22 = (__m128)a5[1];
	v22.m128_f32[0] = (float)(v22.m128_f32[0] - v8) * v15;
	v23 = v22;
	v23.m128_f32[0] = v22.m128_f32[0] * 4.0;
	v24 = _mm_shuffle_ps(v23, v23, 0);
	v71.m128_f32[1] = v22.m128_f32[0] + v8;
	v71.m128_f32[2] = (float)(v22.m128_f32[0] + v8) + v22.m128_f32[0];
	v25 = v71.m128_f32[2] + v22.m128_f32[0];
	v26 = (__m128)a5[4];
	v71.m128_f32[3] = v25;
	v71.m128_i32[0] = *(_DWORD*)(a4 + 4);
	v27 = v71;
	v71.m128_i32[0] = *(_DWORD*)(a4 + 16);
	v26.m128_f32[0] = (float)(v26.m128_f32[0] - v71.m128_f32[0]) * v15;
	v28 = v26;
	v28.m128_f32[0] = v26.m128_f32[0] * 4.0;
	v29 = _mm_shuffle_ps(v28, v28, 0);
	v71.m128_f32[1] = v26.m128_f32[0] + v71.m128_f32[0];
	v71.m128_f32[2] = (float)(v26.m128_f32[0] + v71.m128_f32[0]) + v26.m128_f32[0];
	v30 = v71.m128_f32[2] + v26.m128_f32[0];
	v31 = (__m128)a5[2];
	v71.m128_f32[3] = v30;
	v32 = v71;
	v71.m128_i32[0] = *(_DWORD*)(a4 + 8);
	v31.m128_f32[0] = (float)(v31.m128_f32[0] - v71.m128_f32[0]) * v15;
	v33 = v31;
	v33.m128_f32[0] = v31.m128_f32[0] * 4.0;
	v34 = _mm_shuffle_ps(v33, v33, 0);
	v35 = v9;
	v71.m128_f32[1] = v31.m128_f32[0] + v71.m128_f32[0];
	v71.m128_f32[2] = (float)(v31.m128_f32[0] + v71.m128_f32[0]) + v31.m128_f32[0];
	v36 = v71.m128_f32[2] + v31.m128_f32[0];
	v37 = (__m128)a5[5];
	v71.m128_f32[3] = v36;
	v38 = v71;
	v71.m128_i32[0] = *(_DWORD*)(a4 + 20);
	v37.m128_f32[0] = (float)(v37.m128_f32[0] - v71.m128_f32[0]) * v15;
	v39 = v37;
	v39.m128_f32[0] = v37.m128_f32[0] * 4.0;
	v71.m128_f32[1] = v37.m128_f32[0] + v71.m128_f32[0];
	v40 = _mm_shuffle_ps(v39, v39, 0);
	v71.m128_f32[2] = (float)(v37.m128_f32[0] + v71.m128_f32[0]) + v37.m128_f32[0];
	v71.m128_f32[3] = v71.m128_f32[2] + v37.m128_f32[0];
	v41 = v71;
	while (v35)
	{
		if (v35 < v16)
			v16 = v35;
		if (v16 >> 2)
		{
			v42 = v16 >> 2;
			do
			{
				v43 = *v18;
				v44 = *v17;
				v45 = v41;
				v20 += 4;
				++v17;
				++v18;
				v10 += 16i64;
				v21 += 16i64;
				v19 += 4;
				v41 = _mm_add_ps(v41, v40);
				v46 = v27;
				v47 = v38;
				*(__m128*)(v10 - 16) = v44;
				v48 = _mm_add_ps(_mm_mul_ps(v45, v43), *(__m128*)(v19 - 4));
				v27 = _mm_add_ps(v27, v24);
				v38 = _mm_add_ps(v38, v34);
				*(__m128*)(v21 - 16) = v43;
				v49 = _mm_add_ps(_mm_mul_ps(v47, v44), *(__m128*)(v20 - 4));
				v50 = _mm_add_ps(v48, _mm_mul_ps(v46, v44));
				v51 = _mm_mul_ps(v32, v43);
				*((__m128*)v19 - 1) = v50;
				v32 = _mm_add_ps(v32, v29);
				*((__m128*)v20 - 1) = _mm_add_ps(v49, v51);
				--v42;
			} while (v42);
		}
		LODWORD(v13) = v16 + v13;
		LODWORD(v14) = v16 + v14;
		if ((_DWORD)v13 == v7)
		{
			v17 = *(__m128**)a1;
			LODWORD(v13) = 0;
		}
		if ((_DWORD)v14 == v72)
		{
			v18 = *(__m128**)(a1 + 24);
			LODWORD(v14) = 0;
		}
		v35 -= v16;
		v16 = v72 - v14;
		if (v7 - (unsigned int)v13 < v72 - (unsigned int)v14)
			v16 = v7 - v13;
	}
	if (*(_DWORD*)a6)
	{
		if (a7)
		{
			v52 = (__int128*)(a1 + 48);
			sub_1408A81D0(
				(__m128*)(a1 + 48),
				*(_DWORD*)a6 - 1,
				COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 400))),
				COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(a6 + 8)),
				*(float*)(a6 + 4),
				*(float*)(a6 + 12));
			v53 = a1 + 224;
			if ((((unsigned __int8)(a1 - 32) | (unsigned __int8)(a1 + 48)) & 0xF) != 0)
			{
				sub_1407DB590((int*)v53, (int*)(a1 + 48), 0xA0ui64);
			}
			else
			{
				v54 = 1i64;
				do
				{
					v55 = *v52;
					v56 = v52[1];
					v53 += 128i64;
					v52 += 8;
					*(_OWORD*)(v53 - 128) = v55;
					v57 = *(v52 - 6);
					*(_OWORD*)(v53 - 112) = v56;
					v58 = *(v52 - 5);
					*(_OWORD*)(v53 - 96) = v57;
					v59 = *(v52 - 4);
					*(_OWORD*)(v53 - 80) = v58;
					v60 = *(v52 - 3);
					*(_OWORD*)(v53 - 64) = v59;
					v61 = *(v52 - 2);
					*(_OWORD*)(v53 - 48) = v60;
					v62 = *(v52 - 1);
					*(_OWORD*)(v53 - 32) = v61;
					*(_OWORD*)(v53 - 16) = v62;
					--v54;
				} while (v54);
				v63 = v52[1];
				*(_OWORD*)v53 = *v52;
				*(_OWORD*)(v53 + 16) = v63;
			}
		}
		sub_1408A8970((__m128*)(a1 + 48), v73, v9);
		sub_1408A8970((__m128*)(a1 + 224), v74, v9);
	}
	v64 = *(unsigned int*)(a1 + 12);
	v65 = *(unsigned int*)(a1 + 36);
	v66 = v7 - (unsigned int)v64;
	v67 = v66;
	v68 = v72 - (unsigned int)v65;
	if (v9 < (unsigned int)v66)
		v67 = v9;
	sub_1407DB590((int*)(*(_QWORD*)a1 + 4 * v64), (int*)v73, 4 * v67);
	if ((unsigned int)v66 < v9)
		sub_1407DB590(*(int**)a1, (int*)&v73[v66], 4 * (v9 - (unsigned int)v66));
	v69 = v72 - v65;
	if (v9 < (unsigned int)v68)
		v69 = v9;
	sub_1407DB590((int*)(*(_QWORD*)(a1 + 24) + 4 * v65), (int*)v74, 4 * v69);
	if ((unsigned int)v68 < v9)
		sub_1407DB590(*(int**)(a1 + 24), (int*)&v74[v68], 4 * (v9 - (unsigned int)v68));
	*(_DWORD*)(a1 + 12) = (v9 + (unsigned int)v64) % v7;
	result = ((unsigned int)v65 + v9) / v72;
	*(_DWORD*)(a1 + 36) = ((unsigned int)v65 + v9) % v72;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

