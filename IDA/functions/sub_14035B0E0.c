//----- (000000014035B0E0) ----------------------------------------------------
void __fastcall sub_14035B0E0(__m128* a1)
{
	__m128** v1; // r14
	unsigned __int64 v2; // rdx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	__m128* i; // rbx
	unsigned __int64 v7; // rcx
	__m128* v8; // rdx
	__m128* v9; // rcx
	unsigned __int64 v10; // rax
	__m128 v11; // xmm2
	unsigned __int64 v12; // rax
	__m128 v13; // xmm2
	__m128 v14; // xmm1
	unsigned __int64 v15; // rax
	__m128* j; // rsi
	__int64 k; // rdi
	__m128* v18; // rbx
	unsigned __int64 v19; // rcx
	__int64 v20; // rcx
	float v21; // xmm0_4
	float v22; // xmm0_4
	unsigned __int64 v23; // rax
	__m128* m; // rsi
	unsigned __int64 n; // rdi
	__m128* v26; // rbx
	unsigned __int64 v27; // rcx
	__int64 v28; // rcx
	__m128* v29; // rdx
	__m128* v30; // rcx
	unsigned __int64 v31; // rax
	__m128 v32; // xmm2
	unsigned __int64 v33; // rax
	__m128 v34; // xmm2
	__m128 v35; // xmm1
	unsigned __int64 v36; // rax
	__m128 v37; // [rsp+20h] [rbp-58h]
	__m128 v38; // [rsp+30h] [rbp-48h]

	v1 = (__m128**) & a1[330].m128_u64[1];
	v2 = a1[330].m128_u64[1];
	if (v2)
	{
		do
		{
			v4 = *(_QWORD**)(v2 + 1088);
			if (v4)
				*v4 = *(_QWORD*)(v2 + 1096);
			v5 = *(_QWORD*)(v2 + 1096);
			if (v5)
				*(_QWORD*)(v5 + 1088) = *(_QWORD*)(v2 + 1088);
			*(_QWORD*)(v2 + 1088) = 0i64;
			*(_QWORD*)(v2 + 1096) = 0i64;
			v2 = (unsigned __int64)*v1;
		} while (*v1);
	}
	for (i = (__m128*)a1[328].m128_u64[1]; i; i = (__m128*)i[64].m128_u64[1])
	{
		v7 = i[2].m128_u64[0];
		if (v7
			&& !(*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v7 + 944i64))(v7)
			&& !i[74].m128_u64[0]
			&& sub_14038C510((__int64)i, a1[55].m128_i32[0]) != 0.0
			&& ((*(float (**)(void))(i->m128_u64[0] + 144))() != 0.0
				|| (*(float(__fastcall**)(__m128*))(i->m128_u64[0] + 160))(i) != 0.0))
		{
			v8 = a1 + 111;
			v9 = a1 + 111;
			v10 = 0i64;
			while (1)
			{
				v11 = _mm_mul_ps(i[18], *v9);
				if ((float)((float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
					+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0])
					+ v9->m128_f32[3]) > i[19].m128_f32[0])
					break;
				++v10;
				++v9;
				if (v10 >= 6)
				{
					v12 = 0i64;
					while (1)
					{
						v13 = _mm_cmplt_ps((__m128)0i64, *v8);
						v14 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v13, i[17]), _mm_and_ps(v13, i[16])), *v8);
						if ((float)((float)((float)(v14.m128_f32[0] + _mm_shuffle_ps(v14, v14, 85).m128_f32[0])
							+ _mm_shuffle_ps(v14, v14, 170).m128_f32[0])
							+ v8->m128_f32[3]) > 0.0)
							goto LABEL_23;
						++v12;
						++v8;
						if (v12 >= 6)
						{
							if (!i[68].m128_u64[0])
							{
								i[68].m128_u64[0] = (unsigned __int64)v1;
								i[68].m128_u64[1] = (unsigned __int64)*v1;
								*v1 = i;
								v15 = i[68].m128_u64[1];
								if (v15)
									*(_QWORD*)(v15 + 1088) = (char*)i + 1096;
							}
							goto LABEL_23;
						}
					}
				}
			}
		}
	LABEL_23:
		;
	}
	for (j = (__m128*)a1[146].m128_u64[0]; j; j = (__m128*)j[89].m128_u64[0])
	{
		for (k = *(_QWORD*)(j[1].m128_u64[1] + 64); k; k = *(_QWORD*)(k + 24))
		{
			v18 = *(__m128**)(k + 8);
			if (!v18[68].m128_u64[0])
			{
				if (v18[57].m128_i32[2])
				{
					v19 = v18[2].m128_u64[0];
					if (v19)
					{
						if (!(*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v19 + 944i64))(v19)
							&& !v18[74].m128_u64[0]
							&& sub_14038C510((__int64)v18, a1[55].m128_i32[0]) != 0.0
							&& ((*(float(__fastcall**)(__int64))(v18->m128_u64[0] + 144))(v20) != 0.0
								|| (*(float(__fastcall**)(__m128*))(v18->m128_u64[0] + 160))(v18) != 0.0))
						{
							v37 = _mm_max_ps(j[12], v18[16]);
							v38 = _mm_min_ps(j[13], v18[17]);
							if (v37.m128_f32[0] < v38.m128_f32[0] && v37.m128_f32[2] < v38.m128_f32[2])
							{
								if (!a1[53].m128_i32[1]
									|| ((v21 = v18[17].m128_f32[1] - a1[57].m128_f32[1], v21 <= 0.0)
										? (v22 = v21 * j[81].m128_f32[2])
										: (v22 = v21 * j[81].m128_f32[1]),
										v22 >= j[81].m128_f32[0]))
								{
									if ((unsigned int)sub_14035BDF0(a1, v18 + 16))
									{
										if (!v18[68].m128_u64[0])
										{
											v18[68].m128_u64[0] = (unsigned __int64)v1;
											v18[68].m128_u64[1] = (unsigned __int64)*v1;
											*v1 = v18;
											v23 = v18[68].m128_u64[1];
											if (v23)
												*(_QWORD*)(v23 + 1088) = (char*)v18 + 1096;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (a1[385].m128_i32[2] != 2)
	{
		for (m = (__m128*)a1[341].m128_u64[1]; m; m = (__m128*)m[20].m128_u64[1])
		{
			if (!(*(unsigned int(__fastcall**)(__m128*))(m->m128_u64[0] + 24))(m))
			{
				for (n = m[8].m128_u64[0]; n; n = *(_QWORD*)(n + 24))
				{
					v26 = *(__m128**)(n + 8);
					if (!v26[68].m128_u64[0])
					{
						v27 = v26[2].m128_u64[0];
						if (v27)
						{
							if (!(*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)v27 + 944i64))(v27)
								&& !v26[74].m128_u64[0]
								&& sub_14038C510((__int64)v26, a1[55].m128_i32[0]) != 0.0
								&& ((*(float(__fastcall**)(__int64))(v26->m128_u64[0] + 144))(v28) != 0.0
									|| (*(float(__fastcall**)(__m128*))(v26->m128_u64[0] + 160))(v26) != 0.0))
							{
								v29 = m + 13;
								v30 = m + 13;
								v31 = 0i64;
								while (1)
								{
									v32 = _mm_mul_ps(v26[18], *v30);
									if ((float)((float)((float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
										+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0])
										+ v30->m128_f32[3]) > v26[19].m128_f32[0])
										break;
									++v31;
									++v30;
									if (v31 >= 6)
									{
										v33 = 0i64;
										while (1)
										{
											v34 = _mm_cmplt_ps((__m128)0i64, *v29);
											v35 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v34, v26[17]), _mm_and_ps(v34, v26[16])), *v29);
											if ((float)((float)((float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0])
												+ _mm_shuffle_ps(v35, v35, 170).m128_f32[0])
												+ v29->m128_f32[3]) > 0.0)
												goto LABEL_67;
											++v33;
											++v29;
											if (v33 >= 6)
											{
												if (!v26[68].m128_u64[0])
												{
													v26[68].m128_u64[0] = (unsigned __int64)v1;
													v26[68].m128_u64[1] = (unsigned __int64)*v1;
													*v1 = v26;
													v36 = v26[68].m128_u64[1];
													if (v36)
														*(_QWORD*)(v36 + 1088) = (char*)v26 + 1096;
												}
												goto LABEL_67;
											}
										}
									}
								}
							}
						}
					}
				LABEL_67:
					;
				}
			}
		}
	}
}
// 14035B364: variable 'v20' is possibly undefined
// 14035B4EA: variable 'v28' is possibly undefined

