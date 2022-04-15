#include "../winhttp.h"

//----- (00000001408776D0) ----------------------------------------------------
__int64 __fastcall sub_1408776D0(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // r10d
	__int64 v4; // rdi
	int v6; // r9d
	signed int i; // esi
	int v8; // ecx
	float* v9; // rbx
	int* v10; // r13
	unsigned int v11; // r12d
	__int64 v12; // rcx
	unsigned __int64 v13; // rdx
	float* v14; // rbx
	__m128 v15; // xmm0
	__m128 v16; // xmm1
	__m128 v17; // xmm4
	__m128 v18; // xmm3
	int* v19; // r11
	__int64 v20; // r9
	int v21; // r8d
	float* v22; // rcx
	int* v23; // rdx
	float v24; // xmm0_4
	int v25; // r14d
	__int64 v26; // rcx
	float* v27; // r8
	int v28; // edx
	float* v29; // rax
	int v30; // edx
	float* v31; // rax
	int v32; // edx
	float* v33; // rax
	int v34; // edx
	float* v35; // rax
	int v36; // r10d
	__int64 v37; // r9
	int* v38; // rdx
	float v39; // xmm0_4
	_WORD* v40; // rdx
	float v41; // xmm0_4
	__int64 v42; // rcx
	__int64 result; // rax
	int v44; // ecx

	v3 = *(_DWORD*)(a1 + 16);
	v4 = 0i64;
	v6 = v3;
	for (i = 0; v6; v6 &= v6 - 1)
		++i;
	v8 = *(_DWORD*)(a2 + 8);
	v9 = *(float**)a2;
	v10 = *(int**)(a3 + 8);
	v11 = i << 10;
	if (v8 == v3)
	{
		v12 = *(_QWORD*)(a3 + 8);
		v13 = (unsigned __int64)&v9[v11];
		if ((unsigned __int64)v9 < v13)
		{
			v14 = v9 + 12;
			do
			{
				v15 = *(__m128*)(v14 - 12);
				v16 = *(__m128*)(v14 - 8);
				v17 = *(__m128*)(v14 - 4);
				v14 += 16;
				v12 += 32i64;
				v18 = _mm_mul_ps((__m128)xmmword_140B62690, *(__m128*)(v14 - 16));
				*(__m128i*)(v12 - 32) = _mm_packs_epi32(
					_mm_cvtps_epi32(_mm_mul_ps(v15, (__m128)xmmword_140B62690)),
					_mm_cvtps_epi32(_mm_mul_ps(v16, (__m128)xmmword_140B62690)));
				*(__m128i*)(v12 - 16) = _mm_packs_epi32(
					_mm_cvtps_epi32(_mm_mul_ps(v17, (__m128)xmmword_140B62690)),
					_mm_cvtps_epi32(v18));
			} while ((unsigned __int64)(v14 - 12) < v13);
		}
	}
	else
	{
		for (; v8; v8 &= v8 - 1)
			v4 = (unsigned int)(v4 + 1);
		if ((unsigned int)v4 >= i)
		{
			v25 = 1024;
			v26 = 4i64 * (int)v4;
			v27 = v9 + 1;
			v28 = 1024;
			v29 = v9;
			do
			{
				*v29 = (float)(v29[2] * 0.70700002) + *v29;
				v29 = (float*)((char*)v29 + v26);
				--v28;
			} while (v28);
			v30 = 1024;
			v31 = v9 + 1;
			do
			{
				*v31 = (float)(v31[1] * 0.70700002) + *v31;
				v31 = (float*)((char*)v31 + v26);
				--v30;
			} while (v30);
			v32 = 1024;
			v33 = v9;
			do
			{
				*v33 = (float)(v33[4] * 0.70700002) + *v33;
				v33 = (float*)((char*)v33 + v26);
				--v32;
			} while (v32);
			v34 = 1024;
			v35 = v9 + 1;
			do
			{
				*v35 = (float)(v35[4] * 0.70700002) + *v35;
				v35 = (float*)((char*)v35 + v26);
				--v34;
			} while (v34);
			v36 = 1024;
			v37 = 2i64 * i;
			v38 = v10;
			do
			{
				v39 = *v9;
				if (*v9 <= 1.0)
				{
					if (v39 < -1.0)
						v39 = -1.0;
				}
				else
				{
					v39 = 1.0;
				}
				v9 = (float*)((char*)v9 + v26);
				*(_WORD*)v38 = (int)(float)(v39 * 32767.0);
				v38 = (int*)((char*)v38 + v37);
				--v36;
			} while (v36);
			v40 = (_WORD*)v10 + 1;
			do
			{
				v41 = *v27;
				if (*v27 <= 1.0)
				{
					if (v41 < -1.0)
						v41 = -1.0;
				}
				else
				{
					v41 = 1.0;
				}
				v27 = (float*)((char*)v27 + v26);
				*v40 = (int)(float)(v41 * 32767.0);
				v40 = (_WORD*)((char*)v40 + v37);
				--v25;
			} while (v25);
		}
		else
		{
			sub_1407E4830(v10, 0i64, 2i64 * v11);
			if ((_DWORD)v4)
			{
				v19 = v10;
				v20 = 4i64 * (int)v4;
				do
				{
					v21 = 1024;
					v22 = v9;
					v23 = v19;
					do
					{
						v24 = *v22;
						if (*v22 <= 1.0)
						{
							if (v24 < -1.0)
								v24 = -1.0;
						}
						else
						{
							v24 = 1.0;
						}
						v22 = (float*)((char*)v22 + v20);
						*(_WORD*)v23 = (int)(float)(v24 * 32767.0);
						v23 = (int*)((char*)v23 + 2 * i);
						--v21;
					} while (v21);
					++v9;
					v19 = (int*)((char*)v19 + 2);
					--v4;
				} while (v4);
			}
		}
	}
	v42 = *(_QWORD*)(a1 + 8);
	if (v42)
		sub_140877220(v42, (__int64)v10, i << 11);
	*(_DWORD*)(a1 + 44) += i << 11;
	result = *(unsigned int*)(a1 + 44);
	v44 = *(_DWORD*)(a1 + 44);
	if ((unsigned int)result >= *(_DWORD*)(a1 + 40))
		v44 = 0;
	*(_DWORD*)(a1 + 44) = v44;
	return result;
}
// 140B62690: using guessed type __int128 xmmword_140B62690;
// 140B79ED0: using guessed type int dword_140B79ED0;

