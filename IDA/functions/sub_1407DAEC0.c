//----- (00000001407DAEC0) ----------------------------------------------------
__int64 __fastcall sub_1407DAEC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char* a5)
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
	__m128* v18; // rdx
	__m128* v19; // rcx
	__int64 v20; // rsi
	__int64 v21; // rdx
	__m128 v22; // xmm3
	__m128* v23; // r8
	__m128* v24; // rcx
	__int64 v25; // r8
	unsigned int v26; // edx
	__int64 v27; // rcx
	__int64 v28; // rsi
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__m128 v32; // xmm3
	int v33; // ebx
	__m128* v34; // rdx
	__m128* v35; // rcx
	char v36; // [rsp+28h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		if (v5 == 1)
		{
			v10 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)a3 = *(_DWORD*)v10;
			*(_DWORD*)(a3 + 4) = *(_DWORD*)(v10 + 4);
			*(_OWORD*)(a3 + 16) = *(_OWORD*)(v10 + 16);
			*(_DWORD*)(a3 + 32) = *(_DWORD*)(v10 + 32);
			result = *(unsigned int*)(v10 + 36);
			*(_DWORD*)(a3 + 36) = result;
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
					v18 = (__m128*)(*(_QWORD*)(a1 + 16) + 48i64 * (unsigned int)(v12 + 1));
					result = (unsigned int)v17;
					v19 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v12);
					v16.m128_f32[0] = (float)(int)(a2 - v14) / (float)v17;
					*(float*)a3 = (float)((float)(v18->m128_f32[0] - v19->m128_f32[0]) * v16.m128_f32[0]) + v19->m128_f32[0];
					*(float*)(a3 + 4) = (float)((float)(v18->m128_f32[1] - v19->m128_f32[1]) * v16.m128_f32[0])
						+ v19->m128_f32[1];
					*(__m128*)(a3 + 16) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v18[1], v19[1]), _mm_shuffle_ps(v16, v16, 0)), v19[1]);
					*(float*)(a3 + 32) = (float)((float)(v18[2].m128_f32[0] - v19[2].m128_f32[0]) * v16.m128_f32[0])
						+ v19[2].m128_f32[0];
					*(float*)(a3 + 36) = (float)((float)(v18[2].m128_f32[1] - v19[2].m128_f32[1]) * v16.m128_f32[0])
						+ v19[2].m128_f32[1];
					return result;
				}
			}
			v20 = (unsigned int)(v12 + 1);
			*(_DWORD*)a5 = v20;
			v5 = *(_DWORD*)a1;
			if ((unsigned int)v20 < *(_DWORD*)a1 - 1)
			{
				v21 = *(_QWORD*)(a1 + 8);
				if (*(_DWORD*)(v21 + 4 * v20) <= a2 && a2 < *(_DWORD*)(v21 + 4i64 * (unsigned int)(v12 + 2)))
				{
					v22 = 0i64;
					result = (unsigned int)(v12 + 2);
					v23 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * result);
					v24 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v20);
					v22.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v21 + 4 * v20))
						/ (float)(*(_DWORD*)(v21 + 4i64 * (unsigned int)(v20 + 1)) - *(_DWORD*)(v21 + 4 * v20));
					*(float*)a3 = (float)((float)(v23->m128_f32[0] - v24->m128_f32[0]) * v22.m128_f32[0]) + v24->m128_f32[0];
					*(float*)(a3 + 4) = (float)((float)(v23->m128_f32[1] - v24->m128_f32[1]) * v22.m128_f32[0])
						+ v24->m128_f32[1];
					*(__m128*)(a3 + 16) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v23[1], v24[1]), _mm_shuffle_ps(v22, v22, 0)), v24[1]);
					*(float*)(a3 + 32) = (float)((float)(v23[2].m128_f32[0] - v24[2].m128_f32[0]) * v22.m128_f32[0])
						+ v24[2].m128_f32[0];
					*(float*)(a3 + 36) = (float)((float)(v23[2].m128_f32[1] - v24[2].m128_f32[1]) * v22.m128_f32[0])
						+ v24[2].m128_f32[1];
					return result;
				}
			}
		}
		else
		{
			v11 = &v36;
		}
		v25 = 0i64;
		v26 = v5;
		while ((unsigned int)v25 < v26)
		{
			v27 = (unsigned int)v25 + ((v26 - (unsigned int)v25) >> 1);
			if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v27))
				v25 = (unsigned int)(v27 + 1);
			else
				v26 = v25 + ((v26 - (unsigned int)v25) >> 1);
		}
		v28 = (unsigned int)(v25 - 1);
		if ((_DWORD)v25)
		{
			if (v5 == (_DWORD)v25)
			{
				v30 = *(_QWORD*)(a1 + 16) + 48 * v28;
				*(_DWORD*)a3 = *(_DWORD*)v30;
				*(_DWORD*)(a3 + 4) = *(_DWORD*)(v30 + 4);
				*(_OWORD*)(a3 + 16) = *(_OWORD*)(v30 + 16);
				*(_DWORD*)(a3 + 32) = *(_DWORD*)(v30 + 32);
				*(_DWORD*)(a3 + 36) = *(_DWORD*)(v30 + 36);
				result = (unsigned int)(*(_DWORD*)a1 - 2);
				*(_DWORD*)v11 = result;
			}
			else
			{
				v31 = *(_QWORD*)(a1 + 8);
				v32 = 0i64;
				v33 = a2 - *(_DWORD*)(v31 + 4 * v28);
				v34 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v25);
				result = (unsigned int)(*(_DWORD*)(v31 + 4 * v25) - *(_DWORD*)(v31 + 4 * v28));
				v35 = (__m128*)(*(_QWORD*)(a1 + 16) + 48 * v28);
				v32.m128_f32[0] = (float)v33 / (float)(int)result;
				*(float*)a3 = (float)((float)(v34->m128_f32[0] - v35->m128_f32[0]) * v32.m128_f32[0]) + v35->m128_f32[0];
				*(float*)(a3 + 4) = (float)((float)(v34->m128_f32[1] - v35->m128_f32[1]) * v32.m128_f32[0]) + v35->m128_f32[1];
				*(__m128*)(a3 + 16) = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v34[1], v35[1]), _mm_shuffle_ps(v32, v32, 0)), v35[1]);
				*(float*)(a3 + 32) = (float)((float)(v34[2].m128_f32[0] - v35[2].m128_f32[0]) * v32.m128_f32[0])
					+ v35[2].m128_f32[0];
				*(float*)(a3 + 36) = (float)((float)(v34[2].m128_f32[1] - v35[2].m128_f32[1]) * v32.m128_f32[0])
					+ v35[2].m128_f32[1];
				*(_DWORD*)v11 = v28;
			}
		}
		else
		{
			v29 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)a3 = *(_DWORD*)v29;
			*(_DWORD*)(a3 + 4) = *(_DWORD*)(v29 + 4);
			*(_OWORD*)(a3 + 16) = *(_OWORD*)(v29 + 16);
			*(_DWORD*)(a3 + 32) = *(_DWORD*)(v29 + 32);
			result = *(unsigned int*)(v29 + 36);
			*(_DWORD*)(a3 + 36) = result;
			*(_DWORD*)v11 = 0;
		}
	}
	else
	{
		result = (unsigned int)dword_140DC51F0;
		if ((dword_140DC51F0 & 1) == 0)
		{
			result = dword_140DC51F0 | 1u;
			dword_140DC51F0 |= 1u;
		}
		*(_DWORD*)a3 = dword_140DC5200;
		*(_DWORD*)(a3 + 4) = dword_140DC5204;
		*(_OWORD*)(a3 + 16) = xmmword_140DC5210;
		*(_DWORD*)(a3 + 32) = dword_140DC5220;
		*(_DWORD*)(a3 + 36) = dword_140DC5224;
	}
	return result;
}
// 140DC51F0: using guessed type int dword_140DC51F0;
// 140DC5200: using guessed type int dword_140DC5200;
// 140DC5204: using guessed type int dword_140DC5204;
// 140DC5210: using guessed type __int128 xmmword_140DC5210;
// 140DC5220: using guessed type int dword_140DC5220;
// 140DC5224: using guessed type int dword_140DC5224;

