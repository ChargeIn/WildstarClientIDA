#include "../winhttp.h"

//----- (000000014030A000) ----------------------------------------------------
unsigned __int64 sub_14030A000(__int64 a1, unsigned int a2, _DWORD* a3, ...)
{
	__m128 v3; // xmm4
	unsigned int v4; // ebx
	unsigned __int64 result; // rax
	va_list v9; // r11
	__int64 v10; // rdx
	__int64 v11; // rcx
	unsigned int v12; // edi
	__int64 v13; // rax
	unsigned int v14; // ebx
	__m128 v15; // xmm4
	__int64 v16; // rdi
	__int64 v17; // r14
	__int64 v18; // rdx
	__int64 v19; // rdx
	unsigned int v20; // r8d
	__int64 v21; // rcx
	__int64 v22; // rdi
	__m128 v23; // xmm4
	__m128 v24; // [rsp+0h] [rbp-20h]
	__m128 v25; // [rsp+0h] [rbp-20h]
	__m128 v26; // [rsp+0h] [rbp-20h]
	__m128 v27; // [rsp+10h] [rbp-10h]
	__m128 v28; // [rsp+10h] [rbp-10h]
	__m128 v29; // [rsp+10h] [rbp-10h]
	__int64 v30; // [rsp+58h] [rbp+38h] BYREF
	va_list va; // [rsp+58h] [rbp+38h]
	_DWORD* v32; // [rsp+60h] [rbp+40h]
	va_list va1; // [rsp+68h] [rbp+48h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v30 = va_arg(va1, _QWORD);
	v32 = va_arg(va1, _DWORD*);
	v4 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		if ((dword_140DC0E08 & 1) == 0)
			dword_140DC0E08 |= 1u;
		result = (unsigned int)dword_140DC0E0C;
		*a3 = dword_140DC0E0C;
		return result;
	}
	if (v4 == 1)
	{
		result = *(_QWORD*)(a1 + 16);
		*a3 = *(_DWORD*)result;
		return result;
	}
	v9 = (va_list)v32;
	if (v32)
	{
		v10 = (unsigned int)*v32;
		v11 = *(_QWORD*)(a1 + 8);
		v12 = *(_DWORD*)(v11 + 4 * v10);
		if (v12 <= a2)
		{
			v13 = (unsigned int)(v10 + 1);
			v14 = *(_DWORD*)(v11 + 4 * v13);
			if (a2 < v14)
			{
				v27.m128_f32[0] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v13);
				v27.m128_f32[1] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v13 + 1);
				v27.m128_f32[2] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v13 + 2);
				v27.m128_f32[3] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v13 + 3);
				v24.m128_f32[0] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v10);
				v24.m128_f32[1] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v10 + 1);
				v24.m128_f32[2] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v10 + 2);
				v24.m128_f32[3] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v10 + 3);
				v3.m128_f32[0] = (float)(int)(a2 - v12) / (float)(int)(v14 - v12);
				v15 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v27, v24)), v24);
			LABEL_15:
				LOBYTE(v30) = (int)v15.m128_f32[0];
				BYTE1(v30) = (int)_mm_shuffle_ps(v15, v15, 85).m128_f32[0];
				BYTE2(v30) = (int)_mm_shuffle_ps(v15, v15, 170).m128_f32[0];
				BYTE3(v30) = (int)_mm_shuffle_ps(v15, v15, 255).m128_f32[0];
				result = (unsigned int)v30;
				*a3 = v30;
				return result;
			}
		}
		v16 = (unsigned int)(v10 + 1);
		*v32 = v16;
		v4 = *(_DWORD*)a1;
		if ((unsigned int)v16 < *(_DWORD*)a1 - 1)
		{
			v17 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v17 + 4 * v16) <= a2 && a2 < *(_DWORD*)(v17 + 4i64 * (unsigned int)(v10 + 2)))
			{
				v18 = *(_QWORD*)(a1 + 16);
				v25.m128_f32[0] = (float)*(char*)(v18 + 4i64 * (unsigned int)(v16 + 1));
				v25.m128_f32[1] = (float)*(char*)(v18 + 4i64 * (unsigned int)(v16 + 1) + 1);
				v25.m128_f32[2] = (float)*(char*)(v18 + 4i64 * (unsigned int)(v16 + 1) + 2);
				v25.m128_f32[3] = (float)*(char*)(v18 + 4i64 * (unsigned int)(v16 + 1) + 3);
				v28.m128_f32[0] = (float)*(char*)(v18 + 4 * v16);
				v28.m128_f32[1] = (float)*(char*)(v18 + 4 * v16 + 1);
				v28.m128_f32[2] = (float)*(char*)(v18 + 4 * v16 + 2);
				v28.m128_f32[3] = (float)*(char*)(v18 + 4 * v16 + 3);
				v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v17 + 4 * v16))
					/ (float)(*(_DWORD*)(v17 + 4i64 * (unsigned int)(v16 + 1)) - *(_DWORD*)(v17 + 4 * v16));
				v15 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v25, v28)), v28);
				goto LABEL_15;
			}
		}
	}
	else
	{
		va_copy(v9, va);
	}
	v19 = 0i64;
	v20 = v4;
	while ((unsigned int)v19 < v20)
	{
		v21 = (unsigned int)v19 + ((v20 - (unsigned int)v19) >> 1);
		if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v21))
			v19 = (unsigned int)(v21 + 1);
		else
			v20 = v19 + ((v20 - (unsigned int)v19) >> 1);
	}
	v22 = (unsigned int)(v19 - 1);
	if ((_DWORD)v19)
	{
		if (v4 == (_DWORD)v19)
		{
			*a3 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * v22);
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v9 = result;
		}
		else
		{
			v26.m128_f32[0] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v19);
			v26.m128_f32[1] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v19 + 1);
			v26.m128_f32[2] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v19 + 2);
			v26.m128_f32[3] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v19 + 3);
			v29.m128_f32[0] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v22);
			v29.m128_f32[1] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v22 + 1);
			v29.m128_f32[2] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v22 + 2);
			v29.m128_f32[3] = (float)*(char*)(*(_QWORD*)(a1 + 16) + 4 * v22 + 3);
			v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v22))
				/ (float)(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v19) - *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v22));
			v23 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v26, v29)), v29);
			LOBYTE(v30) = (int)v23.m128_f32[0];
			BYTE1(v30) = (int)_mm_shuffle_ps(v23, v23, 85).m128_f32[0];
			BYTE2(v30) = (int)_mm_shuffle_ps(v23, v23, 170).m128_f32[0];
			BYTE3(v30) = (int)_mm_shuffle_ps(v23, v23, 255).m128_f32[0];
			result = (unsigned int)v30;
			*a3 = v30;
			*(_DWORD*)v9 = v22;
		}
	}
	else
	{
		result = *(_QWORD*)(a1 + 16);
		*a3 = *(_DWORD*)result;
		*(_DWORD*)v9 = 0;
	}
	return result;
}
// 14030A14B: variable 'v3' is possibly undefined
// 140DC0E08: using guessed type int dword_140DC0E08;
// 140DC0E0C: using guessed type int dword_140DC0E0C;

