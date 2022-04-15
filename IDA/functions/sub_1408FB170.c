#include "../winhttp.h"

//----- (00000001408FB170) ----------------------------------------------------
__int64 __fastcall sub_1408FB170(unsigned int* a1, __int64 a2, float* a3)
{
	__int64 result; // rax
	int v4; // r12d
	__int64 v5; // rsi
	unsigned int v8; // r8d
	unsigned int v9; // r13d
	__m128 v10; // xmm1
	int v11; // ecx
	__int64 v12; // r9
	int* v13; // r15
	unsigned int v14; // edi
	unsigned int v15; // ecx
	unsigned int v16; // eax
	unsigned int v17; // r8d
	unsigned int v18; // ecx
	__m128* v19; // rcx
	__int64 v20; // rdx
	__int64 v21; // r11
	__int64 v22; // rcx
	__int64 v23; // rax
	int* v24; // r9
	__m128 v25; // xmm3
	__m128 v26; // xmm6
	__m128 v27; // xmm7
	__m128 v28; // xmm8
	__m128 v29; // xmm4
	__m128 v30; // xmm5
	float* v31; // r8
	__int64 v32; // r10
	__m128 v33; // xmm0
	__m128 v34; // xmm1
	__m128 v35; // xmm2
	__m128 v36; // xmm0
	__m128* v37; // rcx
	__int64 v38; // rdx
	__int64 v39; // rax
	__m128 v40; // xmm1
	__m128 v41; // xmm1
	unsigned int v42; // edx
	__m128 v43; // xmm2
	__m128 v44; // xmm3
	__m128 v45; // xmm4
	__int64 v46; // rcx
	__m128 i; // xmm5
	__m128 v48; // xmm0
	unsigned int v49; // eax
	unsigned int v50; // eax
	unsigned int v51; // [rsp+20h] [rbp-F8h]
	int v52; // [rsp+120h] [rbp+8h]
	unsigned int v54; // [rsp+130h] [rbp+18h]
	unsigned __int64 v55; // [rsp+138h] [rbp+20h]

	result = a1[18];
	v4 = *(unsigned __int16*)(a2 + 18);
	v10 = 0i64;
	v5 = 0i64;
	v8 = 0;
	v9 = (a1[116] + 3) >> 2;
	v52 = 0;
	v10.m128_f32[0] = (float)v4 / (float)(int)result;
	v11 = (int)v10.m128_f32[0];
	if ((int)v10.m128_f32[0] != 0x80000000 && (float)v11 != v10.m128_f32[0])
	{
		result = !(_mm_movemask_ps(_mm_unpacklo_ps(v10, v10)) & 1);
		v10.m128_f32[0] = (float)(result + v11);
	}
	v12 = ((int)v10.m128_f32[0] + 3) & 0xFFFFFFFC;
	v51 = ((int)v10.m128_f32[0] + 3) & 0xFFFFFFFC;
	v13 = (int*)&a3[v12];
	if (*(_WORD*)(a2 + 18))
	{
		v55 = (unsigned int)(16 * v12);
		do
		{
			v14 = v12;
			a1[19] = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4i64 * v8);
			a1[20] = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4i64 * (v8 + a1[18]));
			a1[21] = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4i64 * (v8 + 2 * a1[18]));
			v15 = a1[18];
			v16 = v8 + 2 * v15;
			v17 = v8 + 1;
			v18 = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4i64 * (v16 + v15));
			if (v4 < (unsigned int)v12)
				v14 = v4;
			v54 = v17;
			a1[22] = v18;
			sub_1408F94F0((__int64)a1, v14);
			if (a1[112] == 1)
			{
				sub_1408FBB00((__int64)(a1 + 40), a3, v14);
			}
			else if (a1[112] == 2)
			{
				sub_1408FBD40((__int64)(a1 + 40), (unsigned __int64)a3, v14);
			}
			else
			{
				v19 = (__m128*)(a1 + 40);
				if (a1[112] == 3)
					sub_1408FBD90(v19, a3, v14);
				else
					sub_1408F6B80(v19, (unsigned __int64)a3, v14);
			}
			sub_1407E4830(v13, 0i64, v55);
			if (v9)
			{
				v20 = 0i64;
				v21 = v9;
				v22 = 0i64;
				do
				{
					v23 = *((_QWORD*)a1 + 6);
					v24 = v13;
					v25 = *(__m128*)(v20 + v23);
					v26 = *(__m128*)(v20 + v23 + 16);
					v27 = *(__m128*)(v20 + v23 + 48);
					v28 = *(__m128*)(v20 + v23 + 64);
					v29 = *(__m128*)(v20 + v23 + 80);
					v30 = *(__m128*)(v20 + v23 + 96);
					if (v14)
					{
						v31 = a3;
						v32 = v14;
						do
						{
							v33 = (__m128) * (unsigned int*)v31;
							v25 = _mm_add_ps(v25, v26);
							v24 += 4;
							++v31;
							v34 = _mm_mul_ps(v30, v28);
							v35 = _mm_add_ps(_mm_mul_ps(v29, v27), _mm_shuffle_ps(v33, v33, 0));
							v36 = v30;
							v30 = v29;
							v29 = _mm_add_ps(v35, v34);
							*((__m128*)v24 - 1) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v29, v36), v25), *((__m128*)v24 - 1));
							--v32;
						} while (v32);
					}
					*(__m128*)(v22 + v23 + 80) = v29;
					v22 += 112i64;
					v20 += 112i64;
					*(__m128*)(v22 + *((_QWORD*)a1 + 6) - 16) = v30;
					*(__m128*)(v22 + *((_QWORD*)a1 + 6) - 112) = v25;
					--v21;
				} while (v21);
			}
			v37 = (__m128*)v13;
			v38 = *(_QWORD*)a2 + 4 * v5;
			if (v14)
			{
				v39 = v14;
				do
				{
					v40 = *v37;
					v38 += 4i64;
					++v37;
					v41 = _mm_add_ps(v40, _mm_movehl_ps(v40, v40));
					*(float*)(v38 - 4) = _mm_shuffle_ps(v41, v41, 85).m128_f32[0] + v41.m128_f32[0];
					--v39;
				} while (v39);
			}
			sub_1408FA280((__int64)a1);
			v42 = v14 >> 2;
			v43 = _mm_shuffle_ps((__m128)a1[25], (__m128)a1[25], 0);
			v44 = _mm_shuffle_ps((__m128)a1[26], (__m128)a1[26], 0);
			v45 = _mm_shuffle_ps((__m128)a1[29], (__m128)a1[29], 0);
			v46 = *(_QWORD*)a2 + 4 * v5;
			for (i = _mm_shuffle_ps((__m128)a1[30], (__m128)a1[30], 0); v42; --v42)
			{
				v43 = _mm_add_ps(v43, v45);
				v44 = _mm_add_ps(v44, i);
				v48 = *(__m128*)v46;
				v46 += 16i64;
				*(__m128*)(v46 - 16) = _mm_mul_ps(v48, v43);
				*(__m128*)(v46 + 4080) = _mm_mul_ps(v48, v44);
			}
			result = *a1;
			if ((_DWORD)result == 2)
			{
				*(_QWORD*)(a1 + 29) = 0i64;
				a1[25] = a1[33];
				result = a1[34];
				a1[26] = result;
			}
			else if ((_DWORD)result == 4)
			{
				a1[25] = a1[33];
				v49 = a1[34];
				*(_QWORD*)(a1 + 29) = 0i64;
				a1[26] = v49;
				v50 = a1[35];
				*(_QWORD*)(a1 + 31) = 0i64;
				a1[27] = v50;
				result = a1[36];
				a1[28] = result;
			}
			v8 = v54;
			LODWORD(v12) = v51;
			v5 = v14 + v52;
			v52 += v14;
			v4 -= v14;
		} while (v4);
	}
	return result;
}

