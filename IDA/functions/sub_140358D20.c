//----- (0000000140358D20) ----------------------------------------------------
__int64 __fastcall sub_140358D20(__int64 a1, __int64 a2, __m128* a3)
{
	__int64 i; // rcx
	_QWORD* v7; // r8
	__int64 v8; // rdx
	__int64 result; // rax
	unsigned int v10; // r15d
	__m128 v11; // xmm2
	__m128 v12; // xmm1
	int v13; // ecx
	int v14; // r10d
	__m128 v15; // xmm3
	int v16; // ecx
	__m128 v17; // xmm1
	int v18; // ecx
	int v19; // ecx
	int v20; // ecx
	int v21; // r8d
	int v22; // edx
	int v23; // eax
	unsigned __int64 v24; // rdi
	_QWORD* v25; // rbx
	_QWORD* v26; // rbx
	__int64 j; // rdi
	__m128* v28; // rbx
	unsigned __int64 v29; // rax
	__m128* v30; // rcx
	_QWORD* v31; // rdx
	unsigned __int64 v32; // rdx
	int v33; // [rsp+20h] [rbp-38h]
	int v34; // [rsp+28h] [rbp-30h]
	int v35; // [rsp+2Ch] [rbp-2Ch]
	__m128 v36; // [rsp+30h] [rbp-28h]
	__m128 v37; // [rsp+40h] [rbp-18h]
	int v38; // [rsp+80h] [rbp+28h] BYREF
	int v39; // [rsp+84h] [rbp+2Ch]
	__m128* v40; // [rsp+88h] [rbp+30h] BYREF

	for (i = *(_QWORD*)(a1 + 5456); i; i = *(_QWORD*)(a1 + 5456))
	{
		v7 = *(_QWORD**)(i + 304);
		if (v7)
			*v7 = *(_QWORD*)(i + 312);
		v8 = *(_QWORD*)(i + 312);
		if (v8)
			*(_QWORD*)(v8 + 304) = *(_QWORD*)(i + 304);
		*(_QWORD*)(i + 304) = 0i64;
		*(_QWORD*)(i + 312) = 0i64;
	}
	if (a2)
	{
		result = sub_140390C00(a2, (__int64)a3);
		v10 = result;
		if (!(_DWORD)result)
			return result;
	}
	else
	{
		v10 = 1;
	}
	v11 = (__m128)(unsigned int)dword_140C43FB8;
	v12 = (__m128)(unsigned int)dword_140C43FB8;
	v12.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a3->m128_f32[0]) + 0.5) * 2048.0;
	v13 = (int)v12.m128_f32[0];
	if ((int)v12.m128_f32[0] != 0x80000000 && (float)v13 != v12.m128_f32[0])
		v12.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v15 = (__m128)(unsigned int)dword_140C43FB8;
	v14 = (int)v12.m128_f32[0];
	v15.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a3->m128_f32[2]) + 0.5) * 2048.0;
	v16 = (int)v15.m128_f32[0];
	if ((int)v15.m128_f32[0] != 0x80000000 && (float)v16 != v15.m128_f32[0])
		v15.m128_f32[0] = (float)(v16 - (_mm_movemask_ps(_mm_unpacklo_ps(v15, v15)) & 1));
	v17 = (__m128)(unsigned int)dword_140C43FB8;
	v17.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a3[1].m128_f32[0]) + 0.5) * 2048.0;
	v18 = (int)v17.m128_f32[0];
	if ((int)v17.m128_f32[0] != 0x80000000 && (float)v18 != v17.m128_f32[0])
		v17.m128_f32[0] = (float)(v18 - (_mm_movemask_ps(_mm_unpacklo_ps(v17, v17)) & 1));
	v11.m128_f32[0] = (float)((float)(*(float*)&dword_140C43FB8 * a3[1].m128_f32[2]) + 0.5) * 2048.0;
	v19 = (int)v11.m128_f32[0];
	if ((int)v11.m128_f32[0] != 0x80000000 && (float)v19 != v11.m128_f32[0])
		v11.m128_f32[0] = (float)(v19 - (_mm_movemask_ps(_mm_unpacklo_ps(v11, v11)) & 1));
	v20 = dword_140C44538;
	v21 = dword_140C4453C;
	v40 = 0i64;
	if ((int)v17.m128_f32[0] + 1 < dword_140C44538)
		v20 = (int)v17.m128_f32[0] + 1;
	v22 = qword_140C44530;
	if ((int)v11.m128_f32[0] + 1 < dword_140C4453C)
		v21 = (int)v11.m128_f32[0] + 1;
	v23 = HIDWORD(qword_140C44530);
	if ((int)qword_140C44530 < v14)
		v22 = v14;
	if (SHIDWORD(qword_140C44530) < (int)v15.m128_f32[0])
		v23 = (int)v15.m128_f32[0];
	if (v22 < v20 && v23 < v21)
	{
		v33 = v22;
		v34 = v20;
		v35 = v21;
		v39 = v23;
		do
		{
			v38 = v22;
			if (v22 < v20)
			{
				do
				{
					v24 = (*(__int64(__fastcall**)(int*))(a1 + 2384))(&v38);
					v25 = *(_QWORD**)(*(_QWORD*)(a1 + 2376) + 8 * (v24 % *(_QWORD*)(a1 + 2368)));
					if (v25)
					{
						while (v24 != *v25 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(a1 + 2392))(&v38, v25 + 2))
						{
							v25 = (_QWORD*)v25[1];
							if (!v25)
								goto LABEL_49;
						}
						v26 = v25 + 3;
						if (v26)
						{
							if (*v26)
							{
								for (j = *(_QWORD*)(*v26 + 40i64); j; j = *(_QWORD*)(j + 24))
								{
									v28 = *(__m128**)(j + 8);
									if (!v28[19].m128_u64[0])
									{
										if ((*(unsigned int(__fastcall**)(_QWORD))(v28->m128_u64[0] + 24))(*(_QWORD*)(j + 8)))
										{
											if (!v28[19].m128_u64[0])
											{
												v28[19].m128_u64[0] = (unsigned __int64)&v40;
												v28[19].m128_u64[1] = (unsigned __int64)v40;
												v40 = v28;
												v29 = v28[19].m128_u64[1];
												if (v29)
													*(_QWORD*)(v29 + 304) = (char*)v28 + 312;
											}
										}
									}
								}
							}
						}
					}
				LABEL_49:
					v20 = v34;
					++v38;
				} while (v38 < v34);
				v21 = v35;
				v22 = v33;
				v23 = v39;
			}
			v39 = ++v23;
		} while (v23 < v21);
		while (v40)
		{
			v30 = v40;
			v31 = (_QWORD*)v40[19].m128_u64[0];
			if (v31)
				*v31 = v40[19].m128_u64[1];
			v32 = v30[19].m128_u64[1];
			if (v32)
				*(_QWORD*)(v32 + 304) = v30[19].m128_u64[0];
			v30[19].m128_u64[0] = 0i64;
			v30[19].m128_u64[1] = 0i64;
			v37 = _mm_min_ps(v30[3], a3[1]);
			v36 = _mm_max_ps(v30[2], *a3);
			if (v36.m128_f32[0] < v37.m128_f32[0] && v36.m128_f32[1] < v37.m128_f32[1] && v36.m128_f32[2] < v37.m128_f32[2])
				sub_140390C00((__int64)v30, (__int64)a3);
		}
	}
	return v10;
}
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44530: using guessed type __int64 qword_140C44530;
// 140C44538: using guessed type int dword_140C44538;
// 140C4453C: using guessed type int dword_140C4453C;

