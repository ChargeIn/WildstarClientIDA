//----- (0000000140309620) ----------------------------------------------------
unsigned __int64 sub_140309620(__int64 a1, unsigned int a2, __m128i* a3, ...)
{
	__m128 v3; // xmm2
	unsigned int v4; // r9d
	unsigned __int16* v8; // rdx
	unsigned __int64 result; // rax
	va_list v10; // rsi
	__int64 v11; // r10
	__int64 v12; // rcx
	unsigned int v13; // r14d
	__int64 v14; // rax
	__int64 v15; // r9
	__int64 v16; // r10
	int v17; // r11d
	int v18; // r11d
	__int64 v19; // r11
	__int64 v20; // r14
	__int64 v21; // r9
	__int64 v22; // r11
	__int64 v23; // r11
	__int64 v24; // rdx
	unsigned int v25; // r8d
	__int64 v26; // rcx
	__int64 v27; // r14
	__int64 v28; // r9
	__int64 v29; // rcx
	__int64 v30; // r11
	__m128 v31; // [rsp+20h] [rbp-38h] BYREF
	__m128i v32[2]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v33; // [rsp+78h] [rbp+20h] BYREF
	va_list va; // [rsp+78h] [rbp+20h]
	_DWORD* v35; // [rsp+80h] [rbp+28h]
	va_list va1; // [rsp+88h] [rbp+30h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v33 = va_arg(va1, _QWORD);
	v35 = va_arg(va1, _DWORD*);
	v4 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		if ((dword_140C8A5A0 & 1) == 0)
			dword_140C8A5A0 |= 1u;
		sub_1401C95B0((__int64*)va, &stru_140C8A590);
		va_copy((va_list)v8, va);
		goto LABEL_5;
	}
	if (v4 == 1)
	{
		v8 = *(unsigned __int16**)(a1 + 16);
	LABEL_5:
		result = (unsigned __int64)sub_1401B2CE0((__m128i*) & v31, v8);
		*a3 = (__m128i)v31;
		return result;
	}
	v10 = (va_list)v35;
	if (v35)
	{
		v11 = (unsigned int)*v35;
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *(_DWORD*)(v12 + 4 * v11);
		if (v13 <= a2)
		{
			v14 = (unsigned int)(v11 + 1);
			if (a2 < *(_DWORD*)(v12 + 4 * v14))
			{
				sub_1401B2CE0(v32, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 4 * v14));
				sub_1401B2CE0((__m128i*) & v31, (unsigned __int16*)(v15 + 4 * v16));
				v18 = v17 - v13;
				result = (unsigned int)v18;
				v3.m128_f32[0] = (float)(int)(a2 - v13) / (float)v18;
				*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps((__m128)v32[0], v31)), v31);
				return result;
			}
		}
		v19 = (unsigned int)(v11 + 1);
		*v35 = v19;
		v4 = *(_DWORD*)a1;
		if ((unsigned int)v19 < *(_DWORD*)a1 - 1)
		{
			v20 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v20 + 4 * v19) <= a2 && a2 < *(_DWORD*)(v20 + 4i64 * (unsigned int)(v11 + 2)))
			{
				sub_1401B2CE0((__m128i*) & v31, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 4i64 * (unsigned int)(v11 + 2)));
				sub_1401B2CE0(v32, (unsigned __int16*)(v21 + 4 * v22));
				result = (unsigned int)(*(_DWORD*)(v20 + 4i64 * (unsigned int)(v23 + 1)) - *(_DWORD*)(v20 + 4 * v23));
				v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v20 + 4 * v23)) / (float)(int)result;
				*(__m128*)a3 = _mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v31, (__m128)v32[0])),
					(__m128)v32[0]);
				return result;
			}
		}
	}
	else
	{
		va_copy(v10, va);
	}
	v24 = 0i64;
	v25 = v4;
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
		if (v4 == (_DWORD)v24)
		{
			sub_1401B2CE0(v32, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 4 * v27));
			*a3 = v32[0];
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v10 = result;
		}
		else
		{
			sub_1401B2CE0((__m128i*) & v31, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 4 * v24));
			sub_1401B2CE0(v32, (unsigned __int16*)(v28 + 4 * v27));
			v29 = *(_QWORD*)(a1 + 8);
			result = (unsigned int)(*(_DWORD*)(v29 + 4 * v30) - *(_DWORD*)(v29 + 4 * v27));
			v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v29 + 4 * v27)) / (float)(int)result;
			*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v31, (__m128)v32[0])), (__m128)v32[0]);
			*(_DWORD*)v10 = v27;
		}
	}
	else
	{
		result = (unsigned __int64)sub_1401B2CE0(v32, *(unsigned __int16**)(a1 + 16));
		*a3 = v32[0];
		*(_DWORD*)v10 = 0;
	}
	return result;
}
// 1403096D6: variable 'v15' is possibly undefined
// 1403096D6: variable 'v16' is possibly undefined
// 1403096E7: variable 'v17' is possibly undefined
// 140309711: variable 'v3' is possibly undefined
// 140309767: variable 'v21' is possibly undefined
// 140309767: variable 'v22' is possibly undefined
// 140309790: variable 'v23' is possibly undefined
// 140309855: variable 'v28' is possibly undefined
// 140309882: variable 'v30' is possibly undefined
// 140C8A590: using guessed type __m128i stru_140C8A590;
// 140C8A5A0: using guessed type int dword_140C8A5A0;

