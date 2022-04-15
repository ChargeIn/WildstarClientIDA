//----- (00000001407D9B20) ----------------------------------------------------
__int64 __fastcall sub_1407D9B20(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char* a5)
{
	unsigned int v5; // r9d
	__int64 result; // rax
	__int64 v10; // rcx
	char* v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rdx
	unsigned int v14; // r9d
	unsigned int v15; // r8d
	__m128 v16; // xmm3
	int v17; // r8d
	__int64 v18; // rdx
	__m128* v19; // rcx
	__m128 v20; // xmm2
	__m128 v21; // xmm1
	__int64 v22; // rsi
	__int64 v23; // rdx
	__m128 v24; // xmm3
	__int64 v25; // r8
	__int64 v26; // r8
	unsigned int v27; // edx
	__int64 v28; // rcx
	__int64 v29; // rsi
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__m128 v33; // xmm3
	int v34; // ebx
	__m128* v35; // rdx
	__m128* v36; // rcx
	__m128 v37; // xmm2
	char v38; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (!*(_DWORD*)a1)
	{
		result = (unsigned int)dword_140DC5170;
		if ((dword_140DC5170 & 1) == 0)
		{
			result = dword_140DC5170 | 1u;
			dword_140DC5170 |= 1u;
		}
		*(_DWORD*)a3 = dword_140DC5180;
		*(_DWORD*)(a3 + 4) = dword_140DC5184;
		*(_OWORD*)(a3 + 16) = xmmword_140DC5190;
		*(_OWORD*)(a3 + 32) = xmmword_140DC51A0;
		return result;
	}
	if (v5 == 1)
	{
		v10 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)a3 = *(_DWORD*)v10;
		result = *(unsigned int*)(v10 + 4);
		*(_DWORD*)(a3 + 4) = result;
		*(_OWORD*)(a3 + 16) = *(_OWORD*)(v10 + 16);
		*(_OWORD*)(a3 + 32) = *(_OWORD*)(v10 + 32);
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
				v16 = 0i64;
				v17 = v15 - v14;
				result = (unsigned int)v17;
				v18 = *(_QWORD*)(a1 + 16) + 48i64 * (unsigned int)(v12 + 1);
				v19 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v12);
				v16.m128_f32[0] = (float)(int)(a2 - v14) / (float)v17;
				v20 = _mm_shuffle_ps(v16, v16, 0);
				*(float*)a3 = (float)((float)(*(float*)v18 - v19->m128_f32[0]) * v16.m128_f32[0]) + v19->m128_f32[0];
				*(float*)(a3 + 4) = (float)((float)(*(float*)(v18 + 4) - v19->m128_f32[1]) * v16.m128_f32[0])
					+ v19->m128_f32[1];
				*(__m128*)(a3 + 16) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*(__m128*)(v18 + 16), v19[1]), v20), v19[1]);
				v21 = *(__m128*)(v18 + 32);
			LABEL_15:
				*(__m128*)(a3 + 32) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v21, v19[2]), v20), v19[2]);
				return result;
			}
		}
		v22 = (unsigned int)(v12 + 1);
		*(_DWORD*)a5 = v22;
		v5 = *(_DWORD*)a1;
		if ((unsigned int)v22 < *(_DWORD*)a1 - 1)
		{
			v23 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v23 + 4 * v22) <= a2 && a2 < *(_DWORD*)(v23 + 4i64 * (unsigned int)(v12 + 2)))
			{
				v24 = 0i64;
				result = (unsigned int)(v12 + 2);
				v25 = *(_QWORD*)(a1 + 16) + 48 * result;
				v19 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v22);
				v24.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v23 + 4 * v22))
					/ (float)(*(_DWORD*)(v23 + 4i64 * (unsigned int)(v22 + 1)) - *(_DWORD*)(v23 + 4 * v22));
				v20 = _mm_shuffle_ps(v24, v24, 0);
				*(float*)a3 = (float)((float)(*(float*)v25 - v19->m128_f32[0]) * v24.m128_f32[0]) + v19->m128_f32[0];
				*(float*)(a3 + 4) = (float)((float)(*(float*)(v25 + 4) - v19->m128_f32[1]) * v24.m128_f32[0])
					+ v19->m128_f32[1];
				*(__m128*)(a3 + 16) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*(__m128*)(v25 + 16), v19[1]), v20), v19[1]);
				v21 = *(__m128*)(v25 + 32);
				goto LABEL_15;
			}
		}
	}
	else
	{
		v11 = &v38;
	}
	v26 = 0i64;
	v27 = v5;
	while ((unsigned int)v26 < v27)
	{
		v28 = (unsigned int)v26 + ((v27 - (unsigned int)v26) >> 1);
		if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v28))
			v26 = (unsigned int)(v28 + 1);
		else
			v27 = v26 + ((v27 - (unsigned int)v26) >> 1);
	}
	v29 = (unsigned int)(v26 - 1);
	if ((_DWORD)v26)
	{
		if (v5 == (_DWORD)v26)
		{
			v31 = *(_QWORD*)(a1 + 16) + 48 * v29;
			*(_DWORD*)a3 = *(_DWORD*)v31;
			*(_DWORD*)(a3 + 4) = *(_DWORD*)(v31 + 4);
			*(_OWORD*)(a3 + 16) = *(_OWORD*)(v31 + 16);
			*(_OWORD*)(a3 + 32) = *(_OWORD*)(v31 + 32);
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)v11 = result;
		}
		else
		{
			v32 = *(_QWORD*)(a1 + 8);
			v33 = 0i64;
			v34 = a2 - *(_DWORD*)(v32 + 4 * v29);
			v35 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v26);
			result = (unsigned int)(*(_DWORD*)(v32 + 4 * v26) - *(_DWORD*)(v32 + 4 * v29));
			v36 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v29);
			v33.m128_f32[0] = (float)v34 / (float)(int)result;
			v37 = _mm_shuffle_ps(v33, v33, 0);
			*(float*)a3 = (float)((float)(v35->m128_f32[0] - v36->m128_f32[0]) * v33.m128_f32[0]) + v36->m128_f32[0];
			*(float*)(a3 + 4) = (float)((float)(v35->m128_f32[1] - v36->m128_f32[1]) * v33.m128_f32[0]) + v36->m128_f32[1];
			*(__m128*)(a3 + 16) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v35[1], v36[1]), v37), v36[1]);
			*(__m128*)(a3 + 32) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v35[2], v36[2]), v37), v36[2]);
			*(_DWORD*)v11 = v29;
		}
	}
	else
	{
		v30 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)a3 = *(_DWORD*)v30;
		result = *(unsigned int*)(v30 + 4);
		*(_DWORD*)(a3 + 4) = result;
		*(_OWORD*)(a3 + 16) = *(_OWORD*)(v30 + 16);
		*(_OWORD*)(a3 + 32) = *(_OWORD*)(v30 + 32);
		*(_DWORD*)v11 = 0;
	}
	return result;
}
// 140DC5170: using guessed type int dword_140DC5170;
// 140DC5180: using guessed type int dword_140DC5180;
// 140DC5184: using guessed type int dword_140DC5184;
// 140DC5190: using guessed type __int128 xmmword_140DC5190;
// 140DC51A0: using guessed type __int128 xmmword_140DC51A0;

