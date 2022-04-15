//----- (0000000140307830) ----------------------------------------------------
unsigned __int64 __fastcall sub_140307830(int* a1, unsigned int a2, __m128* a3, __int64 a4, char* a5)
{
	unsigned int v5; // r9d
	unsigned __int64 result; // rax
	char* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rdx
	unsigned int v13; // r9d
	__int64 v14; // rax
	unsigned int v15; // r8d
	__int64 v16; // rdx
	__int64 v17; // rcx
	int v18; // r8d
	__m128 v19; // xmm4
	__m128 v20; // xmm2
	__m128 v21; // xmm3
	__int64 v22; // rdi
	__int64 v23; // r14
	__int64 v24; // rdx
	__m128 v25; // xmm2
	__m128 v26; // xmm3
	unsigned int v27; // edx
	unsigned int v28; // r8d
	__int64 v29; // rcx
	__int64 v30; // rdi
	__int64 v31; // r9
	__int64 v32; // rdx
	__int64 v33; // rcx
	__m128 v34; // xmm2
	__m128 v35; // xmm3
	char v36; // [rsp+28h] [rbp+20h] BYREF

	v5 = *a1;
	if (*a1)
	{
		if (v5 == 1)
		{
			result = *((_QWORD*)a1 + 2);
			*a3 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)result, (__m128) * (unsigned int*)(result + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(result + 4), (__m128)0i64));
			return result;
		}
		v10 = a5;
		if (a5)
		{
			v11 = *(unsigned int*)a5;
			v12 = *((_QWORD*)a1 + 1);
			v13 = *(_DWORD*)(v12 + 4 * v11);
			if (v13 <= a2)
			{
				v14 = (unsigned int)(v11 + 1);
				v15 = *(_DWORD*)(v12 + 4 * v14);
				if (a2 < v15)
				{
					v16 = *((_QWORD*)a1 + 2);
					v17 = 3 * v11;
					v18 = v15 - v13;
					v19 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v16 + 12 * v14),
							(__m128) * (unsigned int*)(v16 + 12 * v14 + 8)),
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 12 * v14 + 4), (__m128)0i64));
					v20 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v16 + 4 * v17 + 4), (__m128)0i64);
					v21 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v16 + 4 * v17),
							(__m128) * (unsigned int*)(v16 + 4 * v17 + 8)),
						v20);
					result = (unsigned int)v18;
					v20.m128_f32[0] = (float)(int)(a2 - v13) / (float)v18;
					*a3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), _mm_sub_ps(v19, v21)), v21);
					return result;
				}
			}
			v22 = (unsigned int)(v11 + 1);
			*(_DWORD*)a5 = v22;
			v5 = *a1;
			if ((unsigned int)v22 < *a1 - 1)
			{
				v23 = *((_QWORD*)a1 + 1);
				if (*(_DWORD*)(v23 + 4 * v22) <= a2 && a2 < *(_DWORD*)(v23 + 4i64 * (unsigned int)(v11 + 2)))
				{
					v24 = *((_QWORD*)a1 + 2);
					v25 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v24 + 12 * v22 + 4), (__m128)0i64);
					v26 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(
							(__m128) * (unsigned int*)(v24 + 12 * v22),
							(__m128) * (unsigned int*)(v24 + 12 * v22 + 8)),
						v25);
					result = (unsigned int)(*(_DWORD*)(v23 + 4i64 * (unsigned int)(v11 + 2))
						- *(_DWORD*)(v23 + 4i64 * (unsigned int)(v11 + 1)));
					v25.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v23 + 4 * v22)) / (float)(int)result;
					*a3 = _mm_add_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(v25, v25, 0),
							_mm_sub_ps(
								_mm_unpacklo_ps(
									_mm_unpacklo_ps(
										(__m128) * (unsigned int*)(v24 + 12i64 * (unsigned int)(v11 + 2)),
										(__m128) * (unsigned int*)(v24 + 12i64 * (unsigned int)(v11 + 2) + 8)),
									_mm_unpacklo_ps(
										(__m128) * (unsigned int*)(v24 + 12i64 * (unsigned int)(v11 + 2) + 4),
										(__m128)0i64)),
								v26)),
						v26);
					return result;
				}
			}
		}
		else
		{
			v10 = &v36;
		}
		v27 = 0;
		v28 = v5;
		while (v27 < v28)
		{
			v29 = v27 + ((v28 - v27) >> 1);
			if (a2 >= *(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v29))
				v27 = v29 + 1;
			else
				v28 = v27 + ((v28 - v27) >> 1);
		}
		v30 = v27 - 1;
		if (v27)
		{
			if (v5 == v27)
			{
				*a3 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(*((_QWORD*)a1 + 2) + 12 * v30),
						(__m128) * (unsigned int*)(*((_QWORD*)a1 + 2) + 12 * v30 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(*((_QWORD*)a1 + 2) + 12 * v30 + 4), (__m128)0i64));
				result = (unsigned int)(*a1 - 2);
				*(_DWORD*)v10 = result;
			}
			else
			{
				v31 = v27;
				v32 = *((_QWORD*)a1 + 2);
				v33 = *((_QWORD*)a1 + 1);
				v34 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v32 + 12 * v30 + 4), (__m128)0i64);
				v35 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v32 + 12 * v30),
						(__m128) * (unsigned int*)(v32 + 12 * v30 + 8)),
					v34);
				result = (unsigned int)(*(_DWORD*)(v33 + 4 * v31) - *(_DWORD*)(v33 + 4 * v30));
				v34.m128_f32[0] = (float)(int)(a2 - *(_DWORD*)(v33 + 4 * v30)) / (float)(int)result;
				*a3 = _mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v34, v34, 0),
						_mm_sub_ps(
							_mm_unpacklo_ps(
								_mm_unpacklo_ps(
									(__m128) * (unsigned int*)(v32 + 12 * v31),
									(__m128) * (unsigned int*)(v32 + 12 * v31 + 8)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v32 + 12 * v31 + 4), (__m128)0i64)),
							v35)),
					v35);
				*(_DWORD*)v10 = v30;
			}
		}
		else
		{
			result = *((_QWORD*)a1 + 2);
			*a3 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)result, (__m128) * (unsigned int*)(result + 8)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(result + 4), (__m128)0i64));
			*(_DWORD*)v10 = 0;
		}
	}
	else
	{
		result = (unsigned int)dword_140C8A5C4;
		if ((dword_140C8A5C4 & 1) == 0)
		{
			result = dword_140C8A5C4 | 1u;
			dword_140C8A5C4 |= 1u;
		}
		*a3 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)(unsigned int)dword_140C8A5D0, (__m128)(unsigned int)dword_140C8A5D8),
			_mm_unpacklo_ps((__m128)(unsigned int)dword_140C8A5D4, (__m128)0i64));
	}
	return result;
}
// 140C8A5C4: using guessed type int dword_140C8A5C4;
// 140C8A5D0: using guessed type int dword_140C8A5D0;
// 140C8A5D4: using guessed type int dword_140C8A5D4;
// 140C8A5D8: using guessed type int dword_140C8A5D8;

