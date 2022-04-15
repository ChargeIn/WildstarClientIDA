//----- (00000001408F13E0) ----------------------------------------------------
__m128* __fastcall sub_1408F13E0(__int64 a1, __int64 a2, __m128* a3, __int64 a4, unsigned int a5, int a6)
{
	unsigned int v6; // ebx
	__int64 v7; // r10
	__int64 v8; // r11
	__m128* result; // rax
	unsigned int v11; // r15d
	__int64 v12; // rbp
	int v13; // r13d
	unsigned int v14; // r14d
	__int64 v15; // rcx
	__int64 v16; // rsi
	unsigned __int64 v17; // r9
	__m128* v18; // rdx
	__int64 v19; // r11
	__m128 v20; // xmm1
	__m128 v21; // xmm4
	unsigned int* v22; // r8
	unsigned __int64 v23; // r10
	__m128 v24; // xmm5
	__m128 v25; // xmm6
	__m128 v26; // xmm7
	__m128 v27; // xmm0
	__m128 v28; // xmm3
	__m128 v29; // xmm0
	__m128 v30; // xmm2
	__m128 v31; // xmm2
	__m128* v33; // [rsp+70h] [rbp+18h]

	v33 = a3;
	v6 = 0;
	v7 = a4;
	v8 = a2;
	result = (__m128*)((a6 + 3) & 0xFFFFFFFC);
	v11 = ((a6 + 3) & 0xFFFFFFFC) >> 2;
	if (a5)
	{
		v12 = 0i64;
		v13 = 2 * (_DWORD)result;
		v14 = 0;
		do
		{
			v15 = *(unsigned __int16*)(a1 + 16);
			v16 = v8 + 4i64 * v6 * (unsigned int)v15;
			v17 = *(_QWORD*)a1 + 4 * v12 * v15;
			result = (__m128*)(v7 + 4i64 * v14);
			if (v11)
			{
				v18 = a3 + 2;
				v19 = v11;
				do
				{
					v20 = *result;
					v21 = result[1];
					v22 = (unsigned int*)v17;
					v23 = v17 + 4i64 * *(unsigned __int16*)(a1 + 18);
					v24 = v18[-2];
					v25 = v18[-1];
					v26 = *v18;
					if (v17 < v23)
					{
						do
						{
							v27 = (__m128) * v22++;
							v28 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v26, v21), _mm_shuffle_ps(v27, v27, 0)), _mm_mul_ps(v25, v20));
							v29 = _mm_mul_ps(v24, v21);
							v21 = v20;
							v30 = _mm_sub_ps(_mm_mul_ps(v28, v24), v29);
							v31 = _mm_add_ps(v30, _mm_movehl_ps(v30, v30));
							v20 = v28;
							*(float*)((char*)v22 + v16 - v17 - 4) = *(float*)((char*)v22 + v16 - v17 - 4)
								+ (float)(_mm_shuffle_ps(v31, v31, 85).m128_f32[0]
									+ v31.m128_f32[0]);
						} while ((unsigned __int64)v22 < v23);
					}
					*result = v20;
					result[1] = v21;
					result += 2;
					v18 += 3;
					--v19;
				} while (v19);
				a3 = v33;
				v7 = a4;
				v8 = a2;
			}
			++v6;
			++v12;
			v14 += v13;
		} while (v6 < a5);
	}
	return result;
}

