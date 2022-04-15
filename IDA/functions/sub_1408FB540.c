#include "../winhttp.h"

//----- (00000001408FB540) ----------------------------------------------------
__int64 __fastcall sub_1408FB540(unsigned int* a1, __int64 a2, float* a3)
{
	int v3; // r12d
	__int64 v5; // r14
	__int64 result; // rax
	__int64 v7; // r13
	__m128 v9; // xmm1
	int v10; // ecx
	__int64 v11; // r8
	int* v12; // r15
	unsigned int v13; // edi
	unsigned int v14; // ecx
	int v15; // eax
	unsigned int v16; // ecx
	__m128* v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // r11
	__int64 v20; // rcx
	__int64 v21; // rax
	int* v22; // r9
	__m128 v23; // xmm3
	__m128 v24; // xmm6
	__m128 v25; // xmm7
	__m128 v26; // xmm8
	__m128 v27; // xmm4
	__m128 v28; // xmm5
	float* v29; // r8
	__int64 v30; // r10
	__m128 v31; // xmm0
	__m128 v32; // xmm1
	__m128 v33; // xmm2
	__m128 v34; // xmm0
	__m128* v35; // rdx
	__int64 v36; // r8
	__int64 v37; // rax
	__m128 v38; // xmm1
	__m128 v39; // xmm1
	unsigned int v40; // eax
	unsigned int v41; // eax
	unsigned int v42; // [rsp+110h] [rbp+8h]
	unsigned __int64 v44; // [rsp+120h] [rbp+18h]
	unsigned int v45; // [rsp+128h] [rbp+20h]

	v3 = *(unsigned __int16*)(a2 + 18);
	v9 = 0i64;
	v5 = 0i64;
	v42 = (a1[116] + 3) >> 2;
	result = a1[18];
	v7 = 0i64;
	v9.m128_f32[0] = (float)v3 / (float)(int)result;
	v10 = (int)v9.m128_f32[0];
	if ((int)v9.m128_f32[0] != 0x80000000 && (float)v10 != v9.m128_f32[0])
	{
		result = !(_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1);
		v9.m128_f32[0] = (float)(result + v10);
	}
	v11 = ((int)v9.m128_f32[0] + 3) & 0xFFFFFFFC;
	v45 = ((int)v9.m128_f32[0] + 3) & 0xFFFFFFFC;
	v12 = (int*)&a3[v11];
	if (*(_WORD*)(a2 + 18))
	{
		v44 = (unsigned int)(16 * v11);
		do
		{
			v13 = v11;
			a1[19] = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4 * v7);
			a1[20] = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4i64 * ((unsigned int)v7 + a1[18]));
			a1[21] = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4i64 * ((unsigned int)v7 + 2 * a1[18]));
			v14 = a1[18];
			v15 = v7 + 2 * v14;
			v7 = (unsigned int)(v7 + 1);
			v16 = *(_DWORD*)(*((_QWORD*)a1 + 8) + 4i64 * (v15 + v14));
			if (v3 < (unsigned int)v11)
				v13 = v3;
			a1[22] = v16;
			sub_1408F94F0((__int64)a1, v13);
			if (a1[112] == 1)
			{
				sub_1408FBB00((__int64)(a1 + 40), a3, v13);
			}
			else if (a1[112] == 2)
			{
				sub_1408FBD40((__int64)(a1 + 40), (unsigned __int64)a3, v13);
			}
			else
			{
				v17 = (__m128*)(a1 + 40);
				if (a1[112] == 3)
					sub_1408FBD90(v17, a3, v13);
				else
					sub_1408F6B80(v17, (unsigned __int64)a3, v13);
			}
			sub_1407E4830(v12, 0i64, v44);
			if (v42)
			{
				v18 = 0i64;
				v19 = v42;
				v20 = 0i64;
				do
				{
					v21 = *((_QWORD*)a1 + 6);
					v22 = v12;
					v23 = *(__m128*)(v18 + v21);
					v24 = *(__m128*)(v18 + v21 + 16);
					v25 = *(__m128*)(v18 + v21 + 48);
					v26 = *(__m128*)(v18 + v21 + 64);
					v27 = *(__m128*)(v18 + v21 + 80);
					v28 = *(__m128*)(v18 + v21 + 96);
					if (v13)
					{
						v29 = a3;
						v30 = v13;
						do
						{
							v31 = (__m128) * (unsigned int*)v29;
							v23 = _mm_add_ps(v23, v24);
							v22 += 4;
							++v29;
							v32 = _mm_mul_ps(v28, v26);
							v33 = _mm_add_ps(_mm_mul_ps(v27, v25), _mm_shuffle_ps(v31, v31, 0));
							v34 = v28;
							v28 = v27;
							v27 = _mm_add_ps(v33, v32);
							*((__m128*)v22 - 1) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v27, v34), v23), *((__m128*)v22 - 1));
							--v30;
						} while (v30);
					}
					*(__m128*)(v20 + v21 + 80) = v27;
					v20 += 112i64;
					v18 += 112i64;
					*(__m128*)(v20 + *((_QWORD*)a1 + 6) - 16) = v28;
					*(__m128*)(v20 + *((_QWORD*)a1 + 6) - 112) = v23;
					--v19;
				} while (v19);
			}
			v35 = (__m128*)v12;
			v36 = *(_QWORD*)a2 + 4 * v5;
			if (v13)
			{
				v37 = v13;
				do
				{
					v38 = *v35;
					v36 += 4i64;
					++v35;
					v39 = _mm_add_ps(v38, _mm_movehl_ps(v38, v38));
					*(float*)(v36 - 4) = _mm_shuffle_ps(v39, v39, 85).m128_f32[0] + v39.m128_f32[0];
					--v37;
				} while (v37);
			}
			sub_1408FA280((__int64)a1);
			sub_1408FB930(a1, (__int64*)a2, v13, v5);
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
				v40 = a1[34];
				*(_QWORD*)(a1 + 29) = 0i64;
				a1[26] = v40;
				v41 = a1[35];
				*(_QWORD*)(a1 + 31) = 0i64;
				a1[27] = v41;
				result = a1[36];
				a1[28] = result;
			}
			LODWORD(v11) = v45;
			v5 = v13 + (unsigned int)v5;
			v3 -= v13;
		} while (v3);
	}
	return result;
}

