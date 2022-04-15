//----- (0000000140559920) ----------------------------------------------------
void __fastcall sub_140559920(__m128* a1)
{
	__int64 v1; // rsi
	__int32 v2; // r13d
	int v3; // edi
	__int64 v4; // rbp
	unsigned __int64 v6; // rcx
	__int8 v7; // al
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // r14
	int v11; // eax
	int v12; // esi
	__int64 v13; // rax
	unsigned __int64 v14; // rcx
	__int64 v15; // r14
	int v16; // eax
	int v17; // esi
	__int64 v18; // rax
	__int64 v19; // rsi
	unsigned int v20; // r9d
	int v21; // r8d
	int v22; // r8d
	int* v23; // r10
	int v24; // edx
	int v25; // eax
	int v26; // ecx
	int v27; // edx
	int v28; // edx
	__m128* v29; // r14
	__int64 v30; // rax
	__m128 v31; // xmm3
	int v32; // r12d
	__m128 v33; // xmm7
	float v34; // xmm6_4
	float v35; // xmm6_4
	int v36; // eax
	int v37; // eax
	__m128 v38; // xmm2
	__m128 v39; // xmm1
	__m128 v40; // xmm4
	__m128 v41; // xmm3
	float v42; // xmm1_4
	__int32* v43; // rax
	int v44; // r15d
	BOOL v45; // eax
	BOOL v46; // esi
	__m128 v47; // xmm1
	__m128 v48; // xmm2
	float v49; // xmm3_4
	__m128 v50; // xmm1
	__m128 v51; // xmm2
	__int32 v52; // ecx
	__m128 v53; // xmm7
	float v54; // xmm4_4
	__m128 v55; // [rsp+30h] [rbp-78h] BYREF
	__m128 v56; // [rsp+40h] [rbp-68h] BYREF

	v1 = qword_140C65898;
	v2 = a1->m128_i32[2];
	v3 = 0;
	a1->m128_i32[2] = 0;
	v4 = *(_QWORD*)(v1 + 25744);
	if (!v4)
	{
		a1->m128_i32[1] = -1;
		a1->m128_u64[1] = 0i64;
		a1[4].m128_i32[0] = 0;
		a1[1].m128_i32[0] = 0;
		a1[4].m128_i32[2] = 300;
		*(unsigned __int64*)((char*)&a1[4].m128_u64[1] + 4) = -1i64;
		a1[5].m128_i32[1] = -1;
		a1[8].m128_i32[0] = 0;
		v6 = a1[9].m128_u64[0];
		if (v6)
			(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)v6 + 152i64))(v6);
		return;
	}
	if ((*(_BYTE*)(v4 + 4208) & 4) != 0)
		return;
	v7 = a1[4].m128_i8[4];
	if (v7)
	{
		a1[4].m128_i8[4] = v7 - 1;
		return;
	}
	if (a1[4].m128_i32[0])
	{
		v8 = a1[5].m128_i32[1];
		switch (a1->m128_i32[1])
		{
		case 2:
			if ((unsigned int)v8 <= 0x23)
			{
				v9 = qword_140C89D80[v8];
				if (v9)
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 64i64))(v9, 0i64);
			}
			break;
		case 3:
			v10 = sub_1403AC780(v1 + 160, &a1[4].m128_i32[2]);
			if (v10)
			{
				if (sub_1403D90D0(v1, a1->m128_i32[3]))
				{
					v11 = sub_1403998E0(qword_140C65898, &a1[4].m128_i32[2], 0, 0i64);
					v12 = v11;
					if (v11)
					{
						if (v11 != 317 && sub_14056A030(v10))
						{
							v13 = sub_14056A030(v10);
							sub_1403A12A0(qword_140C65898, v12, v13, 0);
						}
					}
				}
			}
			break;
		case 4:
			v14 = a1[4].m128_u32[3];
			if (v14 < *(_QWORD*)(v1 + 2712))
			{
				v15 = *(_QWORD*)(*(_QWORD*)(v1 + 2704) + 8 * v14);
				if (v15)
				{
					if (sub_1403D90D0(v1, a1->m128_i32[3]))
					{
						v16 = sub_14039A040(qword_140C65898, a1[4].m128_u32[3], 0i64, 0, a1->m128_i32[3], 0i64);
						v17 = v16;
						if (v16)
						{
							if (v16 != 317)
							{
								v18 = sub_1405A4B80(v15, 1);
								sub_1403A12A0(qword_140C65898, v17, v18, 0);
							}
						}
					}
				}
			}
			break;
		case 5:
		case 6:
			v19 = *(_QWORD*)(v1 + 120);
			if (v19 && sub_1403ACD90(qword_140C65B70, a1[4].m128_u32[3], v19))
			{
				v20 = a1[5].m128_u32[0];
				v21 = 0;
				if (v20 >= 0xC)
					v21 = 7;
				sub_14039AC90(qword_140C65898, v19, v21, v20, a1[4].m128_u32[3]);
				goto LABEL_31;
			}
			break;
		case 7:
			if (sub_1403ACD90(qword_140C65B70, a1[1].m128_u32[0], v4))
			{
				sub_14039B340(qword_140C65898, a1[1].m128_u32[0]);
			LABEL_31:
				sub_140051AF0(0, 15);
			}
			break;
		default:
			break;
		}
		sub_1405598D0((__int64)a1);
		v1 = qword_140C65898;
	}
	v22 = dword_140C4D220;
	v23 = (int*)qword_140C63750;
	v24 = 0;
	v25 = dword_140C4D220;
	if (*(_DWORD*)qword_140C63750 < dword_140C4D220)
		v25 = *(_DWORD*)qword_140C63750;
	LOBYTE(v24) = *((_BYTE*)&dword_140C4D230 + v25) == 0;
	if ((a1->m128_i32[0] == 0) != v24)
	{
		if (*(_DWORD*)qword_140C63750 < dword_140C4D220)
			v22 = *(_DWORD*)qword_140C63750;
		a1->m128_i32[0] = *((unsigned __int8*)&dword_140C4D230 + v22);
		v26 = dword_140C4D220;
		if (*v23 < dword_140C4D220)
			v26 = *v23;
		v27 = *((unsigned __int8*)&dword_140C4D230 + v26);
		*(_DWORD*)(v1 + 29236) = v27 == 0;
		*(_DWORD*)(v1 + 29232) = 2 - (v27 != 0);
		*(_DWORD*)(v1 + 29228) = v27 == 0;
	}
	if (a1->m128_i32[1] != -1)
	{
		v28 = a1->m128_i32[3];
		v29 = 0i64;
		if (v28)
		{
			v30 = sub_1403D90D0(v1, v28);
			v29 = (__m128*)v30;
			if (!v30)
			{
			LABEL_47:
				sub_1405598D0((__int64)a1);
				return;
			}
			a1[2] = *(__m128*)(v30 + 4576);
		}
		if (a1->m128_i32[1] == 1 && *(_QWORD*)(v4 + 968))
			goto LABEL_47;
		v31 = *(__m128*)(v4 + 4576);
		v32 = 0;
		v33 = _mm_sub_ps(a1[2], v31);
		v55 = v33;
		v34 = _mm_shuffle_ps(v33, v33, 85).m128_f32[0];
		v35 = v34 * v34;
		if (a1[8].m128_i32[0])
		{
			if (dword_140C636A8 - a1[6].m128_i32[0] <= 0)
				goto LABEL_53;
			v37 = dword_140C636A8 + 500;
			v38 = _mm_sub_ps(v31, a1[7]);
			v39 = _mm_mul_ps(v38, v38);
			LOBYTE(v32) = (float)((float)(v39.m128_f32[0] + _mm_shuffle_ps(v39, v39, 85).m128_f32[0])
				+ _mm_shuffle_ps(v39, v39, 170).m128_f32[0]) < 0.1;
		}
		else
		{
			v36 = dword_140C636A8;
			a1[8].m128_i32[0] = 1;
			v37 = v36 + 500;
		}
		a1[6].m128_i32[0] = v37;
		a1[7] = v31;
	LABEL_53:
		if (((*(_DWORD*)(v4 + 4232) - 1) & 0xFFFFFFFD) != 0)
		{
			v55.m128_i32[1] = 0;
			v33 = v55;
		}
		v40 = (__m128)0x40400000u;
		v41 = _mm_mul_ps(v33, v33);
		v41.m128_f32[0] = (float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0])
			+ _mm_shuffle_ps(v41, v41, 170).m128_f32[0];
		v42 = 1.0 / fsqrt(v41.m128_f32[0]);
		v40.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v41.m128_f32[0] * v42) * v42)) * 0.5) * v42, 0.0);
		v56 = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v33);
		v43 = (__int32*)sub_1401B3170((__int64)&v55, v56.m128_f32);
		v44 = 0;
		a1[3].m128_i32[0] = *v43;
		a1[3].m128_i32[1] = v43[1];
		a1[3].m128_i32[2] = v43[2];
		a1[5].m128_i32[3] = 1065353216;
		if (!v29 || v29[264].m128_i32[2] == 3 && a1->m128_i32[1] == 1)
		{
			v49 = a1[3].m128_f32[3];
			v46 = 0;
			v50 = _mm_mul_ps(v33, v33);
			LOBYTE(v46) = (float)(v49 * v49) > (float)((float)(v50.m128_f32[0] + _mm_shuffle_ps(v50, v50, 85).m128_f32[0])
				+ _mm_shuffle_ps(v50, v50, 170).m128_f32[0]);
			if (a1->m128_i32[1] == 1)
			{
				v51 = _mm_mul_ps(v33, v33);
				LOBYTE(v44) = (float)((float)(v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0])
					+ _mm_shuffle_ps(v51, v51, 170).m128_f32[0]) > (float)((float)(v49 * 1.5) * v49);
			}
		}
		else
		{
			v45 = sub_1403AD690((__m128*)v4, v29, 0.0, a1[3].m128_f32[3], 0.0);
			v46 = v45;
			if (a1->m128_i32[1] != 1)
			{
				if (v45)
					goto LABEL_68;
				if (v32)
					goto LABEL_64;
				v47 = _mm_mul_ps(v33, v33);
				if ((float)((float)(v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0])
					+ _mm_shuffle_ps(v47, v47, 170).m128_f32[0]) <= a1[3].m128_f32[3])
				{
					v48 = _mm_mul_ps(v33, v33);
					if (v35 > fmaxf(
						(float)((float)(v48.m128_f32[0] + _mm_shuffle_ps(v48, v48, 85).m128_f32[0])
							+ _mm_shuffle_ps(v48, v48, 170).m128_f32[0])
						* 10.0,
						4.0))
						goto LABEL_64;
				}
				goto LABEL_71;
			}
			LOBYTE(v44) = !sub_1403AD690((__m128*)v4, v29, 0.0, a1[3].m128_f32[3] * 1.5, 0.0);
		}
		if (v46)
		{
		LABEL_68:
			v52 = a1->m128_i32[1];
			if (v52)
			{
				if ((unsigned int)(v52 - 2) <= 5)
				{
					a1[4].m128_i32[0] = 1;
					a1[4].m128_i8[4] = 2;
					return;
				}
				goto LABEL_77;
			}
		LABEL_64:
			sub_1405598D0((__int64)a1);
			return;
		}
	LABEL_71:
		v52 = a1->m128_i32[1];
		if (v52 == 1)
		{
			if (v2 || v44)
				v3 = 1;
			a1->m128_i32[2] = v3;
		}
		else
		{
			a1->m128_i32[2] = 1;
		}
	LABEL_77:
		if (v52 == 1 && a1->m128_i32[2])
		{
			v53 = _mm_mul_ps(v33, v33);
			v54 = fminf(
				(float)(fsqrt(
					(float)(v53.m128_f32[0] + _mm_shuffle_ps(v53, v53, 85).m128_f32[0])
					+ _mm_shuffle_ps(v53, v53, 170).m128_f32[0])
					- a1[3].m128_f32[3])
				/ (float)((float)(a1[3].m128_f32[3] + 0.0000099999997) * 4.0),
				1.0);
			a1[5].m128_f32[3] = fmaxf(0.0099999998, v54 * v54);
		}
	}
}
// 140559BAD: conditional instruction was optimized away because rbp.8!=0
// 14039B340: using guessed type __int64 __fastcall sub_14039B340(_QWORD, _QWORD);
// 140C4D220: using guessed type int dword_140C4D220;
// 140C4D230: using guessed type int dword_140C4D230;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C89D80: using guessed type __int64 qword_140C89D80[];

