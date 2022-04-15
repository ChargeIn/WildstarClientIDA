#include "../winhttp.h"

//----- (00000001407D8590) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407D8590(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char* a5)
{
	unsigned int v5; // r9d
	unsigned __int64 result; // rax
	__int64 v10; // rcx
	char* v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // r8
	unsigned int v14; // esi
	unsigned int v15; // r9d
	__int64 v16; // rdx
	__m128 v17; // xmm3
	__m128* v18; // rcx
	__int64 v19; // r8
	__int64 v20; // rsi
	__int64 v21; // rcx
	__m128 v22; // xmm3
	__int64 v23; // rdx
	__int64 v24; // r8
	unsigned int v25; // edx
	__int64 v26; // rcx
	__int64 v27; // rsi
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__m128 v31; // xmm3
	int v32; // eax
	__int64 v33; // r8
	float v34; // xmm0_4
	__m128* v35; // r9
	char v36; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		if (v5 == 1)
		{
			v10 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)a3 = *(_DWORD*)v10;
			result = *(unsigned int*)(v10 + 4);
			*(_DWORD*)(a3 + 4) = result;
			*(_OWORD*)(a3 + 16) = *(_OWORD*)(v10 + 16);
			return result;
		}
		v11 = a5;
		if (a5)
		{
			v12 = *(unsigned int*)a5;
			v13 = *(_QWORD*)(a1 + 8);
			v14 = *(_DWORD*)(v13 + 4 * v12);
			if (v14 <= a2)
			{
				v15 = *(_DWORD*)(v13 + 4i64 * (unsigned int)(v12 + 1));
				if (a2 < v15)
				{
					v16 = 32i64 * (unsigned int)(v12 + 1);
					v17 = 0i64;
					result = *(_QWORD*)(a1 + 16);
					v18 = (__m128*)(result + 32 * v12);
					v17.m128_f32[0] = (float)(int)(a2 - v14) / (float)(int)(v15 - v14);
					*(float*)a3 = (float)((float)(*(float*)(v16 + result) - v18->m128_f32[0]) * v17.m128_f32[0])
						+ v18->m128_f32[0];
					*(float*)(a3 + 4) = (float)((float)(*(float*)(v16 + result + 4) - v18->m128_f32[1]) * v17.m128_f32[0])
						+ v18->m128_f32[1];
					*(__m128*)(a3 + 16) = _mm_add_ps(
						_mm_mul_ps(
							_mm_sub_ps(*(__m128*)(v16 + result + 16), v18[1]),
							_mm_shuffle_ps(v17, v17, 0)),
						v18[1]);
					return result;
				}
			}
			v19 = (unsigned int)(v12 + 1);
			*(_DWORD*)a5 = v19;
			v5 = *(_DWORD*)a1;
			if ((unsigned int)v19 < *(_DWORD*)a1 - 1)
			{
				v20 = *(_QWORD*)(a1 + 8);
				if (*(_DWORD*)(v20 + 4 * v19) <= a2 && a2 < *(_DWORD*)(v20 + 4i64 * (unsigned int)(v12 + 2)))
				{
					v21 = *(_QWORD*)(a1 + 16);
					v22 = 0i64;
					v23 = 32i64 * (unsigned int)(v19 + 1);
					result = v21 + 32i64 * (unsigned int)v19;
					v22.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v20 + 4 * v19))
						/ (float)(*(_DWORD*)(v20 + 4i64 * (unsigned int)(v19 + 1)) - *(_DWORD*)(v20 + 4 * v19));
					*(float*)a3 = (float)((float)(*(float*)(v23 + v21) - *(float*)result) * v22.m128_f32[0]) + *(float*)result;
					*(float*)(a3 + 4) = (float)((float)(*(float*)(v23 + v21 + 4) - *(float*)(result + 4)) * v22.m128_f32[0])
						+ *(float*)(result + 4);
					*(__m128*)(a3 + 16) = _mm_add_ps(
						_mm_mul_ps(
							_mm_sub_ps(*(__m128*)(v23 + v21 + 16), *(__m128*)(result + 16)),
							_mm_shuffle_ps(v22, v22, 0)),
						*(__m128*)(result + 16));
					return result;
				}
			}
		}
		else
		{
			v11 = &v36;
		}
		v24 = 0i64;
		v25 = v5;
		while ((unsigned int)v24 < v25)
		{
			v26 = (unsigned int)v24 + ((v25 - (unsigned int)v24) >> 1);
			if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v26))
				v24 = (unsigned int)(v26 + 1);
			else
				v25 = v24 + ((v25 - (unsigned int)v24) >> 1);
		}
		v27 = (unsigned int)(v24 - 1);
		if ((_DWORD)v24)
		{
			if (v5 == (_DWORD)v24)
			{
				v29 = *(_QWORD*)(a1 + 16) + 32i64 * (unsigned int)v27;
				*(_DWORD*)a3 = *(_DWORD*)v29;
				*(_DWORD*)(a3 + 4) = *(_DWORD*)(v29 + 4);
				*(_OWORD*)(a3 + 16) = *(_OWORD*)(v29 + 16);
				result = (unsigned int)(*(_DWORD*)a1 - 2);
				*(_DWORD*)v11 = result;
			}
			else
			{
				v30 = *(_QWORD*)(a1 + 8);
				v31 = 0i64;
				v32 = *(_DWORD*)(v30 + 4 * v24);
				v33 = 32 * v24;
				v34 = (float)(v32 - *(_DWORD*)(v30 + 4 * v27));
				result = *(_QWORD*)(a1 + 16);
				v35 = (__m128*)(result + 32i64 * (unsigned int)v27);
				v31.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v30 + 4 * v27)) / v34;
				*(float*)a3 = (float)((float)(*(float*)(v33 + result) - v35->m128_f32[0]) * v31.m128_f32[0])
					+ v35->m128_f32[0];
				*(float*)(a3 + 4) = (float)((float)(*(float*)(v33 + result + 4) - v35->m128_f32[1]) * v31.m128_f32[0])
					+ v35->m128_f32[1];
				*(__m128*)(a3 + 16) = _mm_add_ps(
					_mm_mul_ps(
						_mm_sub_ps(*(__m128*)(v33 + result + 16), v35[1]),
						_mm_shuffle_ps(v31, v31, 0)),
					v35[1]);
				*(_DWORD*)v11 = v27;
			}
		}
		else
		{
			v28 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)a3 = *(_DWORD*)v28;
			result = *(unsigned int*)(v28 + 4);
			*(_DWORD*)(a3 + 4) = result;
			*(_OWORD*)(a3 + 16) = *(_OWORD*)(v28 + 16);
			*(_DWORD*)v11 = 0;
		}
	}
	else
	{
		result = (unsigned int)dword_140DC4F90;
		if ((dword_140DC4F90 & 1) == 0)
		{
			result = dword_140DC4F90 | 1u;
			dword_140DC4F90 |= 1u;
		}
		*(_DWORD*)a3 = dword_140DC4FA0;
		*(_DWORD*)(a3 + 4) = dword_140DC4FA4;
		*(_OWORD*)(a3 + 16) = xmmword_140DC4FB0;
	}
	return result;
}
// 140DC4F90: using guessed type int dword_140DC4F90;
// 140DC4FA0: using guessed type int dword_140DC4FA0;
// 140DC4FA4: using guessed type int dword_140DC4FA4;
// 140DC4FB0: using guessed type __int128 xmmword_140DC4FB0;

