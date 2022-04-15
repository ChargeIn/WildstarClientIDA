//----- (00000001407D8F40) ----------------------------------------------------
__int64 __fastcall sub_1407D8F40(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char* a5)
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
	__m128 v31; // xmm3
	int v32; // r11d
	__m128* v33; // rdx
	__m128* v34; // rcx
	char v35; // [rsp+48h] [rbp+20h] BYREF

	v5 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		if (v5 == 1)
		{
			v10 = *(_QWORD*)(a1 + 16);
			*(_OWORD*)a3 = *(_OWORD*)v10;
			*(_DWORD*)(a3 + 16) = *(_DWORD*)(v10 + 16);
			*(_DWORD*)(a3 + 20) = *(_DWORD*)(v10 + 20);
			*(_DWORD*)(a3 + 24) = *(_DWORD*)(v10 + 24);
			*(_DWORD*)(a3 + 28) = *(_DWORD*)(v10 + 28);
			*(_DWORD*)(a3 + 32) = *(_DWORD*)(v10 + 32);
			*(_DWORD*)(a3 + 36) = *(_DWORD*)(v10 + 36);
			*(_DWORD*)(a3 + 40) = *(_DWORD*)(v10 + 40);
			*(_DWORD*)(a3 + 44) = *(_DWORD*)(v10 + 44);
			*(_DWORD*)(a3 + 48) = *(_DWORD*)(v10 + 48);
			*(_DWORD*)(a3 + 52) = *(_DWORD*)(v10 + 52);
			*(_DWORD*)(a3 + 56) = *(_DWORD*)(v10 + 56);
			*(_DWORD*)(a3 + 60) = *(_DWORD*)(v10 + 60);
			*(_DWORD*)(a3 + 64) = *(_DWORD*)(v10 + 64);
			*(_DWORD*)(a3 + 68) = *(_DWORD*)(v10 + 68);
			*(_DWORD*)(a3 + 72) = *(_DWORD*)(v10 + 72);
			*(_DWORD*)(a3 + 76) = *(_DWORD*)(v10 + 76);
			*(_DWORD*)(a3 + 80) = *(_DWORD*)(v10 + 80);
			result = *(unsigned int*)(v10 + 84);
			*(_DWORD*)(a3 + 84) = result;
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
					v18 = (__m128*)(*(_QWORD*)(a1 + 16) + 96i64 * (unsigned int)(v12 + 1));
					result = (unsigned int)v17;
					v19 = (__m128*)(*(_QWORD*)(a1 + 16) + 96 * v12);
					v16.m128_f32[0] = (float)(int)(a2 - v14) / (float)v17;
					*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v18, *v19), _mm_shuffle_ps(v16, v16, 0)), *v19);
					*(float*)(a3 + 24) = (float)((float)(v18[1].m128_f32[2] - v19[1].m128_f32[2]) * v16.m128_f32[0])
						+ v19[1].m128_f32[2];
					*(float*)(a3 + 28) = (float)((float)(v18[1].m128_f32[3] - v19[1].m128_f32[3]) * v16.m128_f32[0])
						+ v19[1].m128_f32[3];
					*(float*)(a3 + 32) = (float)((float)(v18[2].m128_f32[0] - v19[2].m128_f32[0]) * v16.m128_f32[0])
						+ v19[2].m128_f32[0];
					*(float*)(a3 + 36) = (float)((float)(v18[2].m128_f32[1] - v19[2].m128_f32[1]) * v16.m128_f32[0])
						+ v19[2].m128_f32[1];
					*(float*)(a3 + 60) = (float)((float)(v18[3].m128_f32[3] - v19[3].m128_f32[3]) * v16.m128_f32[0])
						+ v19[3].m128_f32[3];
					*(float*)(a3 + 64) = (float)((float)(v18[4].m128_f32[0] - v19[4].m128_f32[0]) * v16.m128_f32[0])
						+ v19[4].m128_f32[0];
					*(float*)(a3 + 68) = (float)((float)(v18[4].m128_f32[1] - v19[4].m128_f32[1]) * v16.m128_f32[0])
						+ v19[4].m128_f32[1];
					*(float*)(a3 + 72) = (float)((float)(v18[4].m128_f32[2] - v19[4].m128_f32[2]) * v16.m128_f32[0])
						+ v19[4].m128_f32[2];
					*(float*)(a3 + 76) = (float)((float)(v18[4].m128_f32[3] - v19[4].m128_f32[3]) * v16.m128_f32[0])
						+ v19[4].m128_f32[3];
					*(float*)(a3 + 80) = (float)((float)(v18[5].m128_f32[0] - v19[5].m128_f32[0]) * v16.m128_f32[0])
						+ v19[5].m128_f32[0];
					*(float*)(a3 + 84) = (float)((float)(v18[5].m128_f32[1] - v19[5].m128_f32[1]) * v16.m128_f32[0])
						+ v19[5].m128_f32[1];
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
					v23 = (__m128*)(*(_QWORD*)(a1 + 16) + 96 * result);
					v24 = (__m128*)(*(_QWORD*)(a1 + 16) + 96 * v20);
					v22.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v21 + 4 * v20))
						/ (float)(*(_DWORD*)(v21 + 4i64 * (unsigned int)(v20 + 1)) - *(_DWORD*)(v21 + 4 * v20));
					*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v23, *v24), _mm_shuffle_ps(v22, v22, 0)), *v24);
					*(float*)(a3 + 24) = (float)((float)(v23[1].m128_f32[2] - v24[1].m128_f32[2]) * v22.m128_f32[0])
						+ v24[1].m128_f32[2];
					*(float*)(a3 + 28) = (float)((float)(v23[1].m128_f32[3] - v24[1].m128_f32[3]) * v22.m128_f32[0])
						+ v24[1].m128_f32[3];
					*(float*)(a3 + 32) = (float)((float)(v23[2].m128_f32[0] - v24[2].m128_f32[0]) * v22.m128_f32[0])
						+ v24[2].m128_f32[0];
					*(float*)(a3 + 36) = (float)((float)(v23[2].m128_f32[1] - v24[2].m128_f32[1]) * v22.m128_f32[0])
						+ v24[2].m128_f32[1];
					*(float*)(a3 + 60) = (float)((float)(v23[3].m128_f32[3] - v24[3].m128_f32[3]) * v22.m128_f32[0])
						+ v24[3].m128_f32[3];
					*(float*)(a3 + 64) = (float)((float)(v23[4].m128_f32[0] - v24[4].m128_f32[0]) * v22.m128_f32[0])
						+ v24[4].m128_f32[0];
					*(float*)(a3 + 68) = (float)((float)(v23[4].m128_f32[1] - v24[4].m128_f32[1]) * v22.m128_f32[0])
						+ v24[4].m128_f32[1];
					*(float*)(a3 + 72) = (float)((float)(v23[4].m128_f32[2] - v24[4].m128_f32[2]) * v22.m128_f32[0])
						+ v24[4].m128_f32[2];
					*(float*)(a3 + 76) = (float)((float)(v23[4].m128_f32[3] - v24[4].m128_f32[3]) * v22.m128_f32[0])
						+ v24[4].m128_f32[3];
					*(float*)(a3 + 80) = (float)((float)(v23[5].m128_f32[0] - v24[5].m128_f32[0]) * v22.m128_f32[0])
						+ v24[5].m128_f32[0];
					*(float*)(a3 + 84) = (float)((float)(v23[5].m128_f32[1] - v24[5].m128_f32[1]) * v22.m128_f32[0])
						+ v24[5].m128_f32[1];
					return result;
				}
			}
		}
		else
		{
			v11 = &v35;
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
				sub_1407D0500(a3, *(_QWORD*)(a1 + 16) + 96 * v28);
				result = (unsigned int)(*(_DWORD*)a1 - 2);
				*(_DWORD*)v11 = result;
			}
			else
			{
				v30 = *(_QWORD*)(a1 + 8);
				v31 = 0i64;
				v32 = a2 - *(_DWORD*)(v30 + 4 * v28);
				v33 = (__m128*)(*(_QWORD*)(a1 + 16) + 96 * v25);
				result = (unsigned int)(*(_DWORD*)(v30 + 4 * v25) - *(_DWORD*)(v30 + 4 * v28));
				v34 = (__m128*)(*(_QWORD*)(a1 + 16) + 96 * v28);
				v31.m128_f32[0] = (float)v32 / (float)(int)result;
				*(__m128*)a3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(*v33, *v34), _mm_shuffle_ps(v31, v31, 0)), *v34);
				*(float*)(a3 + 24) = (float)((float)(v33[1].m128_f32[2] - v34[1].m128_f32[2]) * v31.m128_f32[0])
					+ v34[1].m128_f32[2];
				*(float*)(a3 + 28) = (float)((float)(v33[1].m128_f32[3] - v34[1].m128_f32[3]) * v31.m128_f32[0])
					+ v34[1].m128_f32[3];
				*(float*)(a3 + 32) = (float)((float)(v33[2].m128_f32[0] - v34[2].m128_f32[0]) * v31.m128_f32[0])
					+ v34[2].m128_f32[0];
				*(float*)(a3 + 36) = (float)((float)(v33[2].m128_f32[1] - v34[2].m128_f32[1]) * v31.m128_f32[0])
					+ v34[2].m128_f32[1];
				*(float*)(a3 + 60) = (float)((float)(v33[3].m128_f32[3] - v34[3].m128_f32[3]) * v31.m128_f32[0])
					+ v34[3].m128_f32[3];
				*(float*)(a3 + 64) = (float)((float)(v33[4].m128_f32[0] - v34[4].m128_f32[0]) * v31.m128_f32[0])
					+ v34[4].m128_f32[0];
				*(float*)(a3 + 68) = (float)((float)(v33[4].m128_f32[1] - v34[4].m128_f32[1]) * v31.m128_f32[0])
					+ v34[4].m128_f32[1];
				*(float*)(a3 + 72) = (float)((float)(v33[4].m128_f32[2] - v34[4].m128_f32[2]) * v31.m128_f32[0])
					+ v34[4].m128_f32[2];
				*(float*)(a3 + 76) = (float)((float)(v33[4].m128_f32[3] - v34[4].m128_f32[3]) * v31.m128_f32[0])
					+ v34[4].m128_f32[3];
				*(float*)(a3 + 80) = (float)((float)(v33[5].m128_f32[0] - v34[5].m128_f32[0]) * v31.m128_f32[0])
					+ v34[5].m128_f32[0];
				*(float*)(a3 + 84) = (float)((float)(v33[5].m128_f32[1] - v34[5].m128_f32[1]) * v31.m128_f32[0])
					+ v34[5].m128_f32[1];
				*(_DWORD*)v11 = v28;
			}
		}
		else
		{
			v29 = *(_QWORD*)(a1 + 16);
			*(_OWORD*)a3 = *(_OWORD*)v29;
			*(_DWORD*)(a3 + 16) = *(_DWORD*)(v29 + 16);
			*(_DWORD*)(a3 + 20) = *(_DWORD*)(v29 + 20);
			*(_DWORD*)(a3 + 24) = *(_DWORD*)(v29 + 24);
			*(_DWORD*)(a3 + 28) = *(_DWORD*)(v29 + 28);
			*(_DWORD*)(a3 + 32) = *(_DWORD*)(v29 + 32);
			*(_DWORD*)(a3 + 36) = *(_DWORD*)(v29 + 36);
			*(_DWORD*)(a3 + 40) = *(_DWORD*)(v29 + 40);
			*(_DWORD*)(a3 + 44) = *(_DWORD*)(v29 + 44);
			*(_DWORD*)(a3 + 48) = *(_DWORD*)(v29 + 48);
			*(_DWORD*)(a3 + 52) = *(_DWORD*)(v29 + 52);
			*(_DWORD*)(a3 + 56) = *(_DWORD*)(v29 + 56);
			*(_DWORD*)(a3 + 60) = *(_DWORD*)(v29 + 60);
			*(_DWORD*)(a3 + 64) = *(_DWORD*)(v29 + 64);
			*(_DWORD*)(a3 + 68) = *(_DWORD*)(v29 + 68);
			*(_DWORD*)(a3 + 72) = *(_DWORD*)(v29 + 72);
			*(_DWORD*)(a3 + 76) = *(_DWORD*)(v29 + 76);
			*(_DWORD*)(a3 + 80) = *(_DWORD*)(v29 + 80);
			result = *(unsigned int*)(v29 + 84);
			*(_DWORD*)(a3 + 84) = result;
			*(_DWORD*)v11 = 0;
		}
	}
	else
	{
		result = (unsigned int)dword_140DC4FE0;
		if ((dword_140DC4FE0 & 1) == 0)
		{
			result = dword_140DC4FE0 | 1u;
			dword_140DC4FE0 |= 1u;
		}
		*(_OWORD*)a3 = xmmword_140DC4FF0;
		*(_DWORD*)(a3 + 16) = dword_140DC5000;
		*(_DWORD*)(a3 + 20) = dword_140DC5004;
		*(_DWORD*)(a3 + 24) = dword_140DC5008;
		*(_DWORD*)(a3 + 28) = dword_140DC500C;
		*(_DWORD*)(a3 + 32) = dword_140DC5010;
		*(_DWORD*)(a3 + 36) = dword_140DC5014;
		*(_DWORD*)(a3 + 40) = dword_140DC5018;
		*(_DWORD*)(a3 + 44) = dword_140DC501C;
		*(_DWORD*)(a3 + 48) = dword_140DC5020;
		*(_DWORD*)(a3 + 52) = dword_140DC5024;
		*(_DWORD*)(a3 + 56) = dword_140DC5028;
		*(_DWORD*)(a3 + 60) = dword_140DC502C;
		*(_DWORD*)(a3 + 64) = dword_140DC5030;
		*(_DWORD*)(a3 + 68) = dword_140DC5034;
		*(_DWORD*)(a3 + 72) = dword_140DC5038;
		*(_DWORD*)(a3 + 76) = dword_140DC503C;
		*(_DWORD*)(a3 + 80) = dword_140DC5040;
		*(_DWORD*)(a3 + 84) = dword_140DC5044;
	}
	return result;
}
// 140DC4FE0: using guessed type int dword_140DC4FE0;
// 140DC4FF0: using guessed type __int128 xmmword_140DC4FF0;
// 140DC5000: using guessed type int dword_140DC5000;
// 140DC5004: using guessed type int dword_140DC5004;
// 140DC5008: using guessed type int dword_140DC5008;
// 140DC500C: using guessed type int dword_140DC500C;
// 140DC5010: using guessed type int dword_140DC5010;
// 140DC5014: using guessed type int dword_140DC5014;
// 140DC5018: using guessed type int dword_140DC5018;
// 140DC501C: using guessed type int dword_140DC501C;
// 140DC5020: using guessed type int dword_140DC5020;
// 140DC5024: using guessed type int dword_140DC5024;
// 140DC5028: using guessed type int dword_140DC5028;
// 140DC502C: using guessed type int dword_140DC502C;
// 140DC5030: using guessed type int dword_140DC5030;
// 140DC5034: using guessed type int dword_140DC5034;
// 140DC5038: using guessed type int dword_140DC5038;
// 140DC503C: using guessed type int dword_140DC503C;
// 140DC5040: using guessed type int dword_140DC5040;
// 140DC5044: using guessed type int dword_140DC5044;

