//----- (000000014035B640) ----------------------------------------------------
void __fastcall sub_14035B640(__m128* a1)
{
	unsigned __int64* v1; // rbx
	unsigned __int64 v3; // rcx
	_QWORD* v4; // rdx
	__int64 v5; // rdx
	__m128* i; // r11
	__int64 j; // r10
	__m128* v8; // r9
	float v9; // xmm0_4
	float v10; // xmm0_4
	unsigned __int64 v11; // r9
	__int64 v12; // rax
	__m128* k; // rdi
	unsigned __int64 m; // r9
	__m128* v15; // r8
	__m128* v16; // rdx
	__m128* v17; // rcx
	unsigned __int64 v18; // rax
	__m128 v19; // xmm2
	unsigned __int64 v20; // rax
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	unsigned __int64 v23; // rax
	__m128 v24; // [rsp+20h] [rbp-38h]
	__m128 v25; // [rsp+30h] [rbp-28h]

	v1 = (unsigned __int64*)&a1[335];
	v3 = a1[335].m128_u64[0];
	if (v3)
	{
		do
		{
			v4 = *(_QWORD**)(v3 + 904);
			if (v4)
				*v4 = *(_QWORD*)(v3 + 912);
			v5 = *(_QWORD*)(v3 + 912);
			if (v5)
				*(_QWORD*)(v5 + 904) = *(_QWORD*)(v3 + 904);
			*(_QWORD*)(v3 + 904) = 0i64;
			*(_QWORD*)(v3 + 912) = 0i64;
			v3 = *v1;
		} while (*v1);
	}
	for (i = (__m128*)a1[146].m128_u64[0]; i; i = (__m128*)i[89].m128_u64[0])
	{
		for (j = *(_QWORD*)(i[1].m128_u64[1] + 72); j; j = *(_QWORD*)(j + 24))
		{
			v8 = *(__m128**)(j + 8);
			if (!v8[56].m128_u64[1])
			{
				if (v8[54].m128_i32[0])
				{
					v24 = _mm_max_ps(i[12], v8[48]);
					v25 = _mm_min_ps(i[13], v8[49]);
					if (v24.m128_f32[0] < v25.m128_f32[0] && v24.m128_f32[2] < v25.m128_f32[2])
					{
						if (!a1[53].m128_i32[1]
							|| ((v9 = v8[49].m128_f32[1] - a1[57].m128_f32[1], v9 <= 0.0)
								? (v10 = v9 * i[81].m128_f32[2])
								: (v10 = v9 * i[81].m128_f32[1]),
								v10 >= i[81].m128_f32[0]))
						{
							if ((unsigned int)sub_14035BDF0(a1, v8 + 48))
							{
								*(_QWORD*)(v11 + 904) = v1;
								*(_QWORD*)(v11 + 912) = *v1;
								*v1 = v11;
								v12 = *(_QWORD*)(v11 + 912);
								if (v12)
									*(_QWORD*)(v12 + 904) = v11 + 912;
							}
						}
					}
				}
			}
		}
	}
	for (k = (__m128*)a1[341].m128_u64[1]; k; k = (__m128*)k[20].m128_u64[1])
	{
		if (!(*(unsigned int(__fastcall**)(__m128*))(k->m128_u64[0] + 24))(k))
		{
			for (m = k[8].m128_u64[1]; m; m = *(_QWORD*)(m + 24))
			{
				v15 = *(__m128**)(m + 8);
				if (!v15[56].m128_u64[1])
				{
					v16 = k + 13;
					v17 = k + 13;
					v18 = 0i64;
					while (1)
					{
						v19 = _mm_mul_ps(v15[50], *v17);
						if ((float)((float)((float)(v19.m128_f32[0] + _mm_shuffle_ps(v19, v19, 85).m128_f32[0])
							+ _mm_shuffle_ps(v19, v19, 170).m128_f32[0])
							+ v17->m128_f32[3]) > v15[51].m128_f32[0])
							break;
						++v18;
						++v17;
						if (v18 >= 6)
						{
							v20 = 0i64;
							while (1)
							{
								v21 = _mm_cmplt_ps((__m128)0i64, *v16);
								v22 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v21, v15[49]), _mm_and_ps(v21, v15[48])), *v16);
								if ((float)((float)((float)(v22.m128_f32[0] + _mm_shuffle_ps(v22, v22, 85).m128_f32[0])
									+ _mm_shuffle_ps(v22, v22, 170).m128_f32[0])
									+ v16->m128_f32[3]) > 0.0)
									goto LABEL_35;
								++v20;
								++v16;
								if (v20 >= 6)
								{
									v15[56].m128_u64[1] = (unsigned __int64)v1;
									v15[57].m128_u64[0] = *v1;
									*v1 = (unsigned __int64)v15;
									v23 = v15[57].m128_u64[0];
									if (v23)
										*(_QWORD*)(v23 + 904) = v15 + 57;
									goto LABEL_35;
								}
							}
						}
					}
				}
			LABEL_35:
				;
			}
		}
	}
}
// 14035B6F7: variable 'i' is possibly undefined
// 14035B778: variable 'v11' is possibly undefined
// 14035B79E: variable 'j' is possibly undefined

