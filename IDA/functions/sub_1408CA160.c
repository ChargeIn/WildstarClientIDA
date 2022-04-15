//----- (00000001408CA160) ----------------------------------------------------
__int64 __fastcall sub_1408CA160(unsigned int* a1, __int128* a2, __m128* a3, __m128* a4, unsigned int a5)
{
	__int64 result; // rax
	unsigned __int16 v6; // r10
	unsigned int v7; // ebp
	__int64 v8; // r14
	__m128* v9; // r11
	__m128* v10; // rbx
	int v12; // esi
	unsigned int v13; // r10d
	unsigned __int64 v14; // r9
	__int64 v15; // rax
	__int128 v16; // xmm0
	__m128 v17; // xmm3
	__m128 v18; // xmm2
	unsigned int v19; // ebp
	unsigned __int16* v20; // r15
	unsigned int* v21; // r12
	unsigned int v22; // eax
	__int64 v23; // r13
	__int64 v24; // rdx
	__int64 v25; // r8
	__int64 v26; // r9
	__int64 v27; // r10
	__int64 v28; // r11
	__int64 v29; // rbx
	__int64 v30; // rdi
	__int64 v31; // rsi
	__m128 v32; // xmm3
	__m128 v33; // xmm1
	__m128 v34; // xmm0
	__m128 v35; // xmm2
	__m128 v36; // xmm1
	__m128 v37; // xmm0
	__m128 v38; // xmm2
	__m128 v39; // xmm1
	unsigned int i; // r8d
	__int64 v41; // rax
	__int64 v42; // rdx
	__m128 v43; // xmm0
	__m128 v44; // xmm1
	__int64 v45; // rax
	__int64 v46; // rdx
	__m128 v47; // xmm0
	__m128 v48; // xmm1
	char* v49; // rdx
	char* v50; // rdx
	unsigned int v51; // [rsp+0h] [rbp-58h]
	unsigned __int64 v52; // [rsp+8h] [rbp-50h]
	int v53; // [rsp+60h] [rbp+8h]
	__int128* v54; // [rsp+68h] [rbp+10h]
	__m128* v55; // [rsp+70h] [rbp+18h]
	__m128* v56; // [rsp+78h] [rbp+20h]

	v56 = a4;
	v55 = a3;
	result = *((unsigned __int16*)a1 + 396);
	v6 = *((_WORD*)a1 + 397);
	v7 = a5;
	v8 = *((_QWORD*)a1 + 1);
	v9 = a4;
	if ((unsigned __int16)result < v6)
		v6 = *((_WORD*)a1 + 396);
	v10 = a3;
	v12 = v6 & 0xFFFC;
	v53 = v12;
	if (a5)
	{
		do
		{
			v13 = *a1 - *((unsigned __int16*)a1 + *((unsigned __int16*)a1 + 395) + 330);
			if (*a1 - *((unsigned __int16*)a1 + *((unsigned __int16*)a1 + 394) + 266) < v13)
				v13 = *a1 - *((unsigned __int16*)a1 + *((unsigned __int16*)a1 + 394) + 266);
			if (*a1 - a1[4] < v13)
				v13 = *a1 - a1[4];
			if (v7 < v13)
				v13 = v7;
			v51 = v13;
			if (v13 >= 4)
			{
				v14 = (unsigned __int64)v13 >> 2;
				v52 = v14;
				do
				{
					v15 = a1[4];
					v16 = *a2++;
					v17 = 0i64;
					v18 = 0i64;
					v19 = 0;
					v54 = a2;
					*(_OWORD*)(v8 + 4 * v15) = v16;
					a1[4] = v15 + 4;
					if (v12)
					{
						v20 = (unsigned __int16*)(a1 + 134);
						v21 = a1 + 7;
						v22 = ((unsigned int)(v12 - 1) >> 2) + 1;
						v23 = v22;
						v19 = 4 * v22;
						do
						{
							v24 = *(v20 - 2);
							v25 = *(v20 - 1);
							v26 = *v20;
							v27 = v20[1];
							v28 = v20[62];
							v29 = v20[63];
							v30 = v20[64];
							v31 = v20[65];
							v32 = _mm_add_ps(
								_mm_add_ps(
									v17,
									_mm_mul_ps(*(__m128*)(v8 + 4 * v24), _mm_shuffle_ps((__m128) * (v21 - 2), (__m128) * (v21 - 2), 0))),
								_mm_mul_ps(*(__m128*)(v8 + 4 * v25), _mm_shuffle_ps((__m128) * (v21 - 1), (__m128) * (v21 - 1), 0)));
							v33 = _mm_mul_ps(*(__m128*)(v8 + 4 * v26), _mm_shuffle_ps((__m128) * v21, (__m128) * v21, 0));
							v34 = _mm_shuffle_ps((__m128)v21[1], (__m128)v21[1], 0);
							v21 += 4;
							v20 += 4;
							v17 = _mm_add_ps(_mm_add_ps(v32, v33), _mm_mul_ps(*(__m128*)(v8 + 4 * v27), v34));
							v35 = _mm_add_ps(
								_mm_add_ps(
									v18,
									_mm_mul_ps(*(__m128*)(v8 + 4 * v28), _mm_shuffle_ps((__m128)v21[58], (__m128)v21[58], 0))),
								_mm_mul_ps(*(__m128*)(v8 + 4 * v29), _mm_shuffle_ps((__m128)v21[59], (__m128)v21[59], 0)));
							v36 = _mm_mul_ps(*(__m128*)(v8 + 4 * v30), _mm_shuffle_ps((__m128)v21[60], (__m128)v21[60], 0));
							v37 = (__m128)v21[61];
							*(v20 - 6) = v24 + 4;
							*(v20 - 5) = v25 + 4;
							*(v20 - 4) = v26 + 4;
							*(v20 - 3) = v27 + 4;
							v20[58] = v28 + 4;
							v20[59] = v29 + 4;
							v38 = _mm_add_ps(v35, v36);
							v39 = _mm_mul_ps(*(__m128*)(v8 + 4 * v31), _mm_shuffle_ps(v37, v37, 0));
							v20[60] = v30 + 4;
							v18 = _mm_add_ps(v38, v39);
							v20[61] = v31 + 4;
							--v23;
						} while (v23);
						v9 = v56;
						v10 = v55;
						a2 = v54;
						v14 = v52;
						v12 = v53;
					}
					for (i = v19;
						i < *((unsigned __int16*)a1 + 396);
						v17 = _mm_add_ps(v17, _mm_mul_ps(v44, _mm_shuffle_ps(v43, v43, 0))))
					{
						v41 = i++;
						v42 = *((unsigned __int16*)a1 + v41 + 266);
						v43 = (__m128)a1[v41 + 5];
						v44 = *(__m128*)(v8 + 4 * v42);
						*((_WORD*)a1 + v41 + 266) = v42 + 4;
					}
					for (; v19 < *((unsigned __int16*)a1 + 397); v18 = _mm_add_ps(
						v18,
						_mm_mul_ps(v48, _mm_shuffle_ps(v47, v47, 0))))
					{
						v45 = v19++;
						v46 = *((unsigned __int16*)a1 + v45 + 330);
						v47 = (__m128)a1[v45 + 69];
						v48 = *(__m128*)(v8 + 4 * v46);
						*((_WORD*)a1 + v45 + 330) = v46 + 4;
					}
					*v10++ = v17;
					*v9++ = v18;
					--v14;
					v55 = v10;
					v52 = v14;
					v56 = v9;
				} while (v14);
				v13 = v51;
				v7 = a5;
			}
			v49 = (char*)a1 + 2 * *((unsigned __int16*)a1 + 394);
			if (*((unsigned __int16*)v49 + 266) == *a1)
			{
				*((_WORD*)v49 + 266) = 0;
				*((_WORD*)a1 + 394) = (unsigned __int16)(*((_WORD*)a1 + 394) + 1) % (int)*((unsigned __int16*)a1 + 396);
			}
			v50 = (char*)a1 + 2 * *((unsigned __int16*)a1 + 395);
			if (*((unsigned __int16*)v50 + 330) == *a1)
			{
				*((_WORD*)v50 + 330) = 0;
				*((_WORD*)a1 + 395) = (unsigned __int16)(*((_WORD*)a1 + 395) + 1) % (int)*((unsigned __int16*)a1 + 397);
			}
			result = *a1;
			if (a1[4] == (_DWORD)result)
				a1[4] = 0;
			v7 -= v13;
			a5 = v7;
		} while (v7);
	}
	return result;
}

