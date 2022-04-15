//----- (00000001403098C0) ----------------------------------------------------
unsigned __int64 sub_1403098C0(__int64 a1, unsigned int a2, __m128i* a3, ...)
{
	__m128 v3; // xmm2
	unsigned int v4; // r9d
	unsigned __int16* v8; // rdx
	unsigned __int64 result; // rax
	va_list v10; // r14
	__int64 v11; // rbx
	__int64 v12; // rcx
	unsigned int v13; // r12d
	__int64 v14; // rax
	unsigned int v15; // edi
	__int64 v16; // r11
	int v17; // edi
	__int64 v18; // rdi
	__int64 v19; // r12
	__int64 v20; // r11
	__int64 v21; // rdx
	unsigned int v22; // r8d
	__int64 v23; // rcx
	__int64 v24; // r12
	__int64 v25; // rdi
	__int64 v26; // r11
	__int64 v27; // rcx
	__m128 v28; // [rsp+20h] [rbp-48h] BYREF
	__m128 v29; // [rsp+30h] [rbp-38h] BYREF
	__int64 v30; // [rsp+88h] [rbp+20h] BYREF
	va_list va; // [rsp+88h] [rbp+20h]
	_DWORD* v32; // [rsp+90h] [rbp+28h]
	va_list va1; // [rsp+98h] [rbp+30h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v30 = va_arg(va1, _QWORD);
	v32 = va_arg(va1, _DWORD*);
	v4 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		if ((dword_140DC0DE0 & 1) == 0)
			dword_140DC0DE0 |= 1u;
		sub_1401C9940((__int64*)va);
		va_copy((va_list)v8, va);
		goto LABEL_5;
	}
	if (v4 == 1)
	{
		v8 = *(unsigned __int16**)(a1 + 16);
	LABEL_5:
		result = (unsigned __int64)sub_1401B1980((__m128i*) & v28, v8);
		*a3 = (__m128i)v28;
		return result;
	}
	v10 = (va_list)v32;
	if (v32)
	{
		v11 = (unsigned int)*v32;
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *(_DWORD*)(v12 + 4 * v11);
		if (v13 <= a2)
		{
			v14 = (unsigned int)(v11 + 1);
			v15 = *(_DWORD*)(v12 + 4 * v14);
			if (a2 < v15)
			{
				sub_1401B1980((__m128i*) & v29, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 8 * v14));
				sub_1401B1980((__m128i*) & v28, (unsigned __int16*)(v16 + 8 * v11));
				v17 = v15 - v13;
				result = (unsigned int)v17;
				v3.m128_f32[0] = (float)(int)(a2 - v13) / (float)v17;
				*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v29, v28)), v28);
				return result;
			}
		}
		v18 = (unsigned int)(v11 + 1);
		*v32 = v18;
		v4 = *(_DWORD*)a1;
		if ((unsigned int)v18 < *(_DWORD*)a1 - 1)
		{
			v19 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v19 + 4 * v18) <= a2 && a2 < *(_DWORD*)(v19 + 4i64 * (unsigned int)(v11 + 2)))
			{
				sub_1401B1980((__m128i*) & v28, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 8i64 * (unsigned int)(v11 + 2)));
				sub_1401B1980((__m128i*) & v29, (unsigned __int16*)(v20 + 8 * v18));
				result = (unsigned int)(*(_DWORD*)(v19 + 4i64 * (unsigned int)(v11 + 2)) - *(_DWORD*)(v19 + 4 * v18));
				v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v19 + 4 * v18)) / (float)(int)result;
				*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v28, v29)), v29);
				return result;
			}
		}
	}
	else
	{
		va_copy(v10, va);
	}
	v21 = 0i64;
	v22 = v4;
	while ((unsigned int)v21 < v22)
	{
		v23 = (unsigned int)v21 + ((v22 - (unsigned int)v21) >> 1);
		if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v23))
			v21 = (unsigned int)(v23 + 1);
		else
			v22 = v21 + ((v22 - (unsigned int)v21) >> 1);
	}
	v24 = (unsigned int)(v21 - 1);
	if ((_DWORD)v21)
	{
		if (v4 == (_DWORD)v21)
		{
			sub_1401B1980((__m128i*) & v29, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 8 * v24));
			*a3 = (__m128i)v29;
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v10 = result;
		}
		else
		{
			v25 = (unsigned int)v21;
			sub_1401B1980((__m128i*) & v28, (unsigned __int16*)(*(_QWORD*)(a1 + 16) + 8 * v21));
			sub_1401B1980((__m128i*) & v29, (unsigned __int16*)(v26 + 8 * v24));
			v27 = *(_QWORD*)(a1 + 8);
			result = (unsigned int)(*(_DWORD*)(v27 + 4 * v25) - *(_DWORD*)(v27 + 4 * v24));
			v3.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v27 + 4 * v24)) / (float)(int)result;
			*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), _mm_sub_ps(v28, v29)), v29);
			*(_DWORD*)v10 = v24;
		}
	}
	else
	{
		result = (unsigned __int64)sub_1401B1980((__m128i*) & v29, *(unsigned __int16**)(a1 + 16));
		*a3 = (__m128i)v29;
		*(_DWORD*)v10 = 0;
	}
	return result;
}
// 14030997E: variable 'v16' is possibly undefined
// 1403099B8: variable 'v3' is possibly undefined
// 140309A0A: variable 'v20' is possibly undefined
// 140309B05: variable 'v26' is possibly undefined
// 140DC0DE0: using guessed type int dword_140DC0DE0;

