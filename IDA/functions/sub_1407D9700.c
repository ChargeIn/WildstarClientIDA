//----- (00000001407D9700) ----------------------------------------------------
__int64 __fastcall sub_1407D9700(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char* a5)
{
	__m128 v5; // xmm4
	unsigned int v7; // r8d
	__int128* v10; // rcx
	__int64 result; // rax
	__int64 v12; // r9
	__int128 v13; // xmm0
	_DWORD* v14; // rcx
	__int128* v15; // rdx
	__int64 v16; // r9
	__int128 v17; // xmm0
	char* v18; // rdi
	__int64 v19; // r8
	__int64 v20; // rcx
	unsigned int v21; // esi
	unsigned int v22; // r10d
	float* v23; // rdx
	float* v24; // r8
	float* v25; // rcx
	float v26; // xmm3_4
	__m128 v27; // xmm4
	float v28; // xmm0_4
	signed __int64 v29; // rdx
	__int64 v30; // r9
	__m128 v31; // xmm1
	__int64 v32; // r10
	__int64 v33; // rsi
	float* v34; // rdx
	float* v35; // rax
	float v36; // xmm3_4
	float* v37; // rcx
	__m128 v38; // xmm4
	float v39; // xmm0_4
	signed __int64 v40; // rdx
	__int64 v41; // r9
	__m128 v42; // xmm1
	__int64 v43; // r10
	unsigned int v44; // edx
	__int64 v45; // rcx
	__int64 v46; // rsi
	_DWORD* v47; // rcx
	__int128* v48; // rdx
	__int64 v49; // r9
	__int128 v50; // xmm0
	__int64 v51; // rcx
	int v52; // r11d
	float* v53; // r8
	int v54; // eax
	float* v55; // rcx
	float* v56; // r10
	float v57; // xmm0_4
	float v58; // xmm3_4
	__m128 v59; // xmm4
	float v60; // xmm0_4
	signed __int64 v61; // r10
	__int64 v62; // r9
	__m128 v63; // xmm1
	char v64; // [rsp+48h] [rbp+20h] BYREF

	v7 = *(_DWORD*)a1;
	if (*(_DWORD*)a1)
	{
		if (v7 == 1)
		{
			v14 = *(_DWORD**)(a1 + 16);
			v15 = (__int128*)(v14 + 4);
			*(_DWORD*)a3 = *v14;
			*(_DWORD*)(a3 + 4) = v14[1];
			v16 = a3 - (_QWORD)v14;
			result = 16i64;
			do
			{
				v17 = *v15++;
				*(__int128*)((char*)v15 + v16 - 16) = v17;
				--result;
			} while (result);
			return result;
		}
		v18 = a5;
		if (a5)
		{
			v19 = *(unsigned int*)a5;
			v20 = *(_QWORD*)(a1 + 8);
			v21 = *(_DWORD*)(v20 + 4 * v19);
			if (v21 <= a2)
			{
				v22 = *(_DWORD*)(v20 + 4i64 * (unsigned int)(v19 + 1));
				if (a2 < v22)
				{
					v23 = (float*)(*(_QWORD*)(a1 + 16) + 272i64 * (unsigned int)(v19 + 1));
					v24 = (float*)(*(_QWORD*)(a1 + 16) + 272 * v19);
					v25 = v24 + 4;
					result = 16i64;
					v26 = (float)(int)(a2 - v21) / (float)(int)(v22 - v21);
					v5.m128_f32[0] = v26;
					v27 = _mm_shuffle_ps(v5, v5, 0);
					*(float*)a3 = (float)((float)(*v23 - *v24) * v26) + *v24;
					v28 = v23[1];
					v29 = (char*)v23 - (char*)v24;
					*(float*)(a3 + 4) = (float)((float)(v28 - v24[1]) * v26) + v24[1];
					v30 = a3 - (_QWORD)v24;
					do
					{
						v31 = *(__m128*)((char*)v25 + v29);
						v25 += 4;
						*(__m128*)((char*)v25 + v30 - 16) = _mm_add_ps(
							_mm_mul_ps(_mm_sub_ps(v31, *(__m128*)(v25 - 4)), v27),
							*(__m128*)(v25 - 4));
						--result;
					} while (result);
					return result;
				}
			}
			v32 = (unsigned int)(v19 + 1);
			*(_DWORD*)a5 = v32;
			v7 = *(_DWORD*)a1;
			if ((unsigned int)v32 < *(_DWORD*)a1 - 1)
			{
				v33 = *(_QWORD*)(a1 + 8);
				if (*(_DWORD*)(v33 + 4 * v32) <= a2 && a2 < *(_DWORD*)(v33 + 4i64 * (unsigned int)(v32 + 1)))
				{
					v34 = (float*)(*(_QWORD*)(a1 + 16) + 272i64 * (unsigned int)(v32 + 1));
					v35 = (float*)(*(_QWORD*)(a1 + 16) + 272i64 * (unsigned int)v32);
					v36 = (float)(int)(a2 - *(_DWORD*)(v33 + 4 * v32))
						/ (float)(*(_DWORD*)(v33 + 4i64 * (unsigned int)(v32 + 1)) - *(_DWORD*)(v33 + 4 * v32));
					v37 = v35 + 4;
					v5.m128_f32[0] = v36;
					v38 = _mm_shuffle_ps(v5, v5, 0);
					*(float*)a3 = (float)((float)(*v34 - *v35) * v36) + *v35;
					v39 = v34[1];
					v40 = (char*)v34 - (char*)v35;
					*(float*)(a3 + 4) = (float)((float)(v39 - v35[1]) * v36) + v35[1];
					v41 = a3 - (_QWORD)v35;
					result = 16i64;
					do
					{
						v42 = *(__m128*)((char*)v37 + v40);
						v37 += 4;
						*(__m128*)((char*)v37 + v41 - 16) = _mm_add_ps(
							_mm_mul_ps(_mm_sub_ps(v42, *(__m128*)(v37 - 4)), v38),
							*(__m128*)(v37 - 4));
						--result;
					} while (result);
					return result;
				}
			}
		}
		else
		{
			v18 = &v64;
		}
		v43 = 0i64;
		v44 = v7;
		while ((unsigned int)v43 < v44)
		{
			v45 = (unsigned int)v43 + ((v44 - (unsigned int)v43) >> 1);
			if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v45))
				v43 = (unsigned int)(v45 + 1);
			else
				v44 = v43 + ((v44 - (unsigned int)v43) >> 1);
		}
		v46 = (unsigned int)(v43 - 1);
		if ((_DWORD)v43)
		{
			if (v7 == (_DWORD)v43)
			{
				sub_1407D0DC0((char*)a3, (_DWORD*)(*(_QWORD*)(a1 + 16) + 272i64 * (unsigned int)v46));
				result = (unsigned int)(*(_DWORD*)a1 - 2);
				*(_DWORD*)v18 = result;
			}
			else
			{
				v51 = *(_QWORD*)(a1 + 8);
				v52 = a2 - *(_DWORD*)(v51 + 4 * v46);
				v53 = (float*)(*(_QWORD*)(a1 + 16) + 272i64 * (unsigned int)v46);
				v54 = *(_DWORD*)(v51 + 4 * v43) - *(_DWORD*)(v51 + 4 * v46);
				v55 = v53 + 4;
				v56 = (float*)(*(_QWORD*)(a1 + 16) + 272 * v43);
				v57 = (float)v54;
				result = 16i64;
				v58 = (float)v52 / v57;
				v5.m128_f32[0] = v58;
				v59 = _mm_shuffle_ps(v5, v5, 0);
				*(float*)a3 = (float)((float)(*v56 - *v53) * v58) + *v53;
				v60 = v56[1];
				v61 = (char*)v56 - (char*)v53;
				*(float*)(a3 + 4) = (float)((float)(v60 - v53[1]) * v58) + v53[1];
				v62 = a3 - (_QWORD)v53;
				do
				{
					v63 = *(__m128*)((char*)v55 + v61);
					v55 += 4;
					*(__m128*)((char*)v55 + v62 - 16) = _mm_add_ps(
						_mm_mul_ps(_mm_sub_ps(v63, *(__m128*)(v55 - 4)), v59),
						*(__m128*)(v55 - 4));
					--result;
				} while (result);
				*(_DWORD*)v18 = v46;
			}
		}
		else
		{
			v47 = *(_DWORD**)(a1 + 16);
			v48 = (__int128*)(v47 + 4);
			*(_DWORD*)a3 = *v47;
			*(_DWORD*)(a3 + 4) = v47[1];
			v49 = a3 - (_QWORD)v47;
			result = 16i64;
			do
			{
				v50 = *v48++;
				*(__int128*)((char*)v48 + v49 - 16) = v50;
				--result;
			} while (result);
			*(_DWORD*)v18 = 0;
		}
	}
	else
	{
		if ((dword_140DC5050 & 1) == 0)
			dword_140DC5050 |= 1u;
		v10 = (__int128*)&unk_140DC5070;
		result = 16i64;
		*(_DWORD*)a3 = dword_140DC5060;
		*(_DWORD*)(a3 + 4) = dword_140DC5064;
		v12 = a3 - (_QWORD)&unk_140DC5070;
		do
		{
			v13 = *v10++;
			*(__int128*)((char*)v10 + v12) = v13;
			--result;
		} while (result);
	}
	return result;
}
// 1407D9846: variable 'v5' is possibly undefined
// 140DC5050: using guessed type int dword_140DC5050;
// 140DC5060: using guessed type int dword_140DC5060;
// 140DC5064: using guessed type int dword_140DC5064;

