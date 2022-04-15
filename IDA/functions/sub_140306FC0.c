#include "../winhttp.h"

//----- (0000000140306FC0) ----------------------------------------------------
unsigned __int64 sub_140306FC0(__int64 a1, unsigned int a2, __m128i* a3, ...)
{
	__m128 v3; // xmm2
	unsigned int v4; // r9d
	unsigned __int16* v8; // rdx
	unsigned __int64 result; // rax
	va_list v10; // r14
	__int64 v11; // r11
	__int64 v12; // rcx
	unsigned int v13; // r15d
	__int64 v14; // rax
	unsigned int v15; // ebx
	__int64 v16; // r10
	__int64 v17; // r11
	int v18; // ebx
	__int64 v19; // rbx
	__int64 v20; // r15
	__int64 v21; // r10
	__int64 v22; // rdx
	unsigned int v23; // r8d
	__int64 v24; // rcx
	__int64 v25; // r15
	__int64 v26; // rbx
	__int64 v27; // r10
	__int64 v28; // rcx
	__m128 v29; // [rsp+20h] [rbp-38h] BYREF
	__m128i v30[2]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v31; // [rsp+78h] [rbp+20h] BYREF
	va_list va; // [rsp+78h] [rbp+20h]
	_DWORD* v33; // [rsp+80h] [rbp+28h]
	va_list va1; // [rsp+88h] [rbp+30h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v31 = va_arg(va1, _QWORD);
	v33 = va_arg(va1, _DWORD*);
	v4 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		if ((dword_140C8A5F0 & 1) == 0)
			dword_140C8A5F0 |= 1u;
		sub_1401C9800((__int64*)va, &stru_140C8A5E0);
		va_copy((va_list)v8, va);
		goto LABEL_5;
	}
	if (v4 == 1)
	{
		v8 = *(unsigned __int16**)(a1 + 16);
	LABEL_5:
		result = (unsigned __int64)sub_1401ADB90((__m128i*) & v29, v8);
		*a3 = (__m128i)v29;
		return result;
	}
	v10 = (va_list)v33;
	if (v33)
	{
		v11 = (unsigned int)*v33;
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *(_DWORD*)(v12 + 4 * v11);
		if (v13 <= a2)
		{
			v14 = (unsigned int)(v11 + 1);
			v15 = *(_DWORD*)(v12 + 4 * v14);
			if (a2 < v15)
			{
				sub_1401ADB90(v30, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 6 * v14));
				sub_1401ADB90((__m128i*) & v29, (unsigned __int16*)(v16 + 6 * v17));
				v18 = v15 - v13;
				result = (unsigned int)v18;
				v3.m128_f32[0] = (float)(int)(a2 - v13) / (float)v18;
				*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps((__m128)v30[0], v29)), v29);
				return result;
			}
		}
		v19 = (unsigned int)(v11 + 1);
		*v33 = v19;
		v4 = *(_DWORD*)a1;
		if ((unsigned int)v19 < *(_DWORD*)a1 - 1)
		{
			v20 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v20 + 4 * v19) <= a2 && a2 < *(_DWORD*)(v20 + 4i64 * (unsigned int)(v11 + 2)))
			{
				sub_1401ADB90((__m128i*) & v29, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 6i64 * (unsigned int)(v11 + 2)));
				sub_1401ADB90(v30, (unsigned __int16*)(v21 + 6 * v19));
				result = (unsigned int)(*(_DWORD*)(v20 + 4i64 * (unsigned int)(v19 + 1)) - *(_DWORD*)(v20 + 4 * v19));
				v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v20 + 4 * v19)) / (float)(int)result;
				*(__m128*)a3 = _mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v29, (__m128)v30[0])),
					(__m128)v30[0]);
				return result;
			}
		}
	}
	else
	{
		va_copy(v10, va);
	}
	v22 = 0i64;
	v23 = v4;
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
		if (v4 == (_DWORD)v22)
		{
			sub_1401ADB90(v30, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 6 * v25));
			*a3 = v30[0];
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v10 = result;
		}
		else
		{
			v26 = (unsigned int)v22;
			sub_1401ADB90((__m128i*) & v29, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 6 * v22));
			sub_1401ADB90(v30, (unsigned __int16*)(v27 + 6 * v25));
			v28 = *(_QWORD*)(a1 + 8);
			result = (unsigned int)(*(_DWORD*)(v28 + 4 * v26) - *(_DWORD*)(v28 + 4 * v25));
			v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v28 + 4 * v25)) / (float)(int)result;
			*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v29, (__m128)v30[0])), (__m128)v30[0]);
			*(_DWORD*)v10 = v25;
		}
	}
	else
	{
		result = (unsigned __int64)sub_1401ADB90(v30, *(unsigned __int16**)(a1 + 16));
		*a3 = v30[0];
		*(_DWORD*)v10 = 0;
	}
	return result;
}
// 140307081: variable 'v16' is possibly undefined
// 140307081: variable 'v17' is possibly undefined
// 1403070BB: variable 'v3' is possibly undefined
// 14030711F: variable 'v21' is possibly undefined
// 140307219: variable 'v27' is possibly undefined
// 140C8A5E0: using guessed type __m128i stru_140C8A5E0;
// 140C8A5F0: using guessed type int dword_140C8A5F0;

