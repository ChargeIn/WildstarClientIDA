#include "../winhttp.h"

//----- (00000001407D88C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407D88C0(__int64 a1, unsigned int a2, _OWORD* a3, __int64 a4, char* a5)
{
	__m128 v5; // xmm2
	unsigned int v6; // ebx
	unsigned __int64 result; // rax
	char* v11; // r11
	__int64 v12; // rcx
	__int64 v13; // r8
	unsigned int v14; // ebx
	unsigned int v15; // r8d
	__int64 v16; // rax
	__m128 v17; // xmm3
	__m128* v18; // rcx
	int v19; // r8d
	__int64 v20; // r8
	__int64 v21; // rsi
	__int64 v22; // r8
	unsigned int v23; // edx
	__int64 v24; // rcx
	__int64 v25; // rsi
	__int64 v26; // rcx
	__m128 v27; // xmm4
	__m128 v28; // xmm3
	__int64 v29; // rcx
	char v30; // [rsp+28h] [rbp+20h] BYREF

	v6 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		if (v6 == 1)
		{
			result = *(_QWORD*)(a1 + 16);
			*a3 = *(_OWORD*)result;
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
					v16 = *(_QWORD*)(a1 + 16);
					v17 = *(__m128*)(v16 + 16i64 * (unsigned int)(v12 + 1));
					v18 = (__m128*)(v16 + 16 * v12);
					v19 = v15 - v14;
					result = (unsigned int)v19;
					v5.m128_f32[0] = (float)(int)(a2 - v14) / (float)v19;
					*a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), _mm_sub_ps(v17, *v18)), *v18);
					return result;
				}
			}
			v20 = (unsigned int)(v12 + 1);
			*(_DWORD*)a5 = v20;
			v6 = *(_DWORD*)a1;
			if ((unsigned int)v20 < *(_DWORD*)a1 - 1)
			{
				v21 = *(_QWORD*)(a1 + 8);
				if (*(_DWORD*)(v21 + 4 * v20) <= a2 && a2 < *(_DWORD*)(v21 + 4i64 * (unsigned int)(v12 + 2)))
				{
					result = (unsigned int)(*(_DWORD*)(v21 + 4i64 * (unsigned int)(v12 + 2))
						- *(_DWORD*)(v21 + 4i64 * (unsigned int)(v12 + 1)));
					v5.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v21 + 4 * v20)) / (float)(int)result;
					*a3 = _mm_add_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(v5, v5, 0),
							_mm_sub_ps(
								*(__m128*)(*(_QWORD*)(a1 + 16) + 16i64 * (unsigned int)(v12 + 2)),
								*(__m128*)(*(_QWORD*)(a1 + 16) + 16i64 * (unsigned int)(v12 + 1)))),
						*(__m128*)(*(_QWORD*)(a1 + 16) + 16i64 * (unsigned int)(v12 + 1)));
					return result;
				}
			}
		}
		else
		{
			v11 = &v30;
		}
		v22 = 0i64;
		v23 = v6;
		while ((unsigned int)v22 < v23)
		{
			v24 = (unsigned int)v22 + ((v23 - (unsigned int)v22) >> 1);
			if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v24))
				v22 = (unsigned int)(v24 + 1);
			else
				v23 = v22 + ((v23 - (unsigned int)v22) >> 1);
		}
		v25 = (unsigned int)(v22 - 1);
		if ((_DWORD)v22)
		{
			if (v6 == (_DWORD)v22)
			{
				*a3 = *(_OWORD*)(*(_QWORD*)(a1 + 16) + 16i64 * (unsigned int)v25);
				result = (unsigned int)(*(_DWORD*)a1 - 2);
				*(_DWORD*)v11 = result;
			}
			else
			{
				v26 = *(_QWORD*)(a1 + 16);
				v27 = *(__m128*)(v26 + 16i64 * (unsigned int)v25);
				v28 = *(__m128*)(v26 + 16 * v22);
				v29 = *(_QWORD*)(a1 + 8);
				result = (unsigned int)(*(_DWORD*)(v29 + 4 * v22) - *(_DWORD*)(v29 + 4 * v25));
				v5.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v29 + 4 * v25)) / (float)(int)result;
				*a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), _mm_sub_ps(v28, v27)), v27);
				*(_DWORD*)v11 = v25;
			}
		}
		else
		{
			result = *(_QWORD*)(a1 + 16);
			*a3 = *(_OWORD*)result;
			*(_DWORD*)v11 = 0;
		}
	}
	else
	{
		result = (unsigned int)dword_140DC4FC0;
		if ((dword_140DC4FC0 & 1) == 0)
		{
			result = dword_140DC4FC0 | 1u;
			dword_140DC4FC0 |= 1u;
		}
		*a3 = xmmword_140DC4FD0;
	}
	return result;
}
// 1407D897F: variable 'v5' is possibly undefined
// 140DC4FC0: using guessed type int dword_140DC4FC0;
// 140DC4FD0: using guessed type __int128 xmmword_140DC4FD0;

