//----- (000000014036A460) ----------------------------------------------------
__int64 __fastcall sub_14036A460(_QWORD* a1, __m128* a2, char a3, unsigned int a4, int** a5)
{
	unsigned int v5; // r15d
	int* v10; // rbx
	int v11; // r12d
	_QWORD* v12; // rcx
	_QWORD* v13; // r8
	__int64 v14; // rax
	_QWORD* v15; // rdi
	int v16; // r15d
	int v17; // r14d
	__int64 i; // r8
	__int64 v19; // rdx
	__int64 v20; // rax
	bool v21; // zf
	__int64 j; // r8
	__int64 v23; // rdx
	__int64 v24; // rax
	unsigned __int64 k; // rdx
	__int64 v26; // rcx
	_QWORD* v27; // r9
	__int64 v28; // rax
	__int64 v29; // rax
	int* v30; // rax
	_QWORD* v31; // rdi
	int* m; // r14
	__m128* v33; // rax
	__m128 v34; // xmm2
	__m128 v35; // xmm1
	_QWORD* v36; // rcx
	__int64 v37; // rcx
	_QWORD* n; // rdi
	__m128* v39; // rax
	__m128 v40; // xmm2
	__m128 v41; // xmm1
	_QWORD* v42; // rcx
	__int64 v43; // rcx
	_QWORD* ii; // rdi
	__m128* v45; // rax
	__m128 v46; // xmm2
	__m128 v47; // xmm1
	_QWORD* v48; // rcx
	__int64 v49; // rcx
	int v50[4]; // [rsp+20h] [rbp-48h] BYREF
	int v51[4]; // [rsp+30h] [rbp-38h] BYREF

	v5 = a4;
	if (!a5)
		return 2147942487i64;
	v10 = sub_14018B280(32i64, 0);
	if (v10)
	{
		*(_QWORD*)v10 = off_140B787C0;
		v10[6] = 1;
		*((_QWORD*)v10 + 1) = 0i64;
		*((_QWORD*)v10 + 2) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = a3 & 1;
	if ((a3 & 1) != 0)
	{
		v12 = (_QWORD*)a1[657];
		if (v12)
		{
			v13 = a1 + 662;
			do
			{
				if (!v12[138])
				{
					v12[138] = v13;
					v12[139] = *v13;
					*v13 = v12;
					v14 = v12[139];
					if (v14)
						*(_QWORD*)(v14 + 1104) = v12 + 139;
				}
				++* ((_QWORD*)v10 + 1);
				v12 = (_QWORD*)v12[129];
			} while (v12);
		}
	}
	sub_140357AA0((__int64)a1, a2);
	v15 = (_QWORD*)a1[291];
	if (v15)
	{
		v16 = a3 & 2;
		v17 = a3 & 4;
		do
		{
			if (v11)
			{
				for (i = *(_QWORD*)(v15[3] + 64i64); i; i = *(_QWORD*)(i + 24))
				{
					v19 = *(_QWORD*)(i + 8);
					if (!*(_QWORD*)(v19 + 1104))
					{
						*(_QWORD*)(v19 + 1104) = a1 + 662;
						*(_QWORD*)(v19 + 1112) = a1[662];
						a1[662] = v19;
						v20 = *(_QWORD*)(v19 + 1112);
						if (v20)
							*(_QWORD*)(v20 + 1104) = v19 + 1112;
						++* ((_QWORD*)v10 + 1);
					}
				}
			}
			if (v16)
			{
				v21 = v15[181] == 0i64;
				v50[0] = 0;
				if (v21 || (unsigned int)sub_14037CC30((__int64)v15, (__int64)v50))
				{
					for (j = *(_QWORD*)(v15[3] + 48i64); j; j = *(_QWORD*)(j + 24))
					{
						v23 = *(_QWORD*)(*(_QWORD*)(j + 8) + 32i64);
						if (!*(_QWORD*)(v23 + 1232))
						{
							*(_QWORD*)(v23 + 1232) = a1 + 632;
							*(_QWORD*)(v23 + 1240) = a1[632];
							a1[632] = v23;
							v24 = *(_QWORD*)(v23 + 1240);
							if (v24)
								*(_QWORD*)(v24 + 1232) = v23 + 1240;
							++* ((_QWORD*)v10 + 1);
						}
					}
				}
			}
			if (v17)
			{
				v21 = v15[181] == 0i64;
				v51[0] = 0;
				if (v21 || (unsigned int)sub_14037CC30((__int64)v15, (__int64)v51))
				{
					for (k = 0i64; k < v15[129]; ++k)
					{
						v26 = *(_QWORD*)(v15[130] + 8 * k);
						if (v26)
						{
							v27 = a1 + 541;
							if (!*(_QWORD*)(v26 + 224))
							{
								*(_QWORD*)(v26 + 224) = v27;
								*(_QWORD*)(v26 + 232) = *v27;
								*v27 = v26;
								v28 = *(_QWORD*)(v26 + 232);
								if (v28)
									*(_QWORD*)(v28 + 224) = v26 + 232;
							}
							++* ((_QWORD*)v10 + 1);
						}
					}
				}
			}
			v15 = (_QWORD*)v15[176];
		} while (v15);
		v5 = a4;
	}
	v29 = 8i64 * *((_QWORD*)v10 + 1);
	if (!is_mul_ok(*((_QWORD*)v10 + 1), 8ui64))
		v29 = -1i64;
	v30 = sub_14018B280(v29, 0);
	*((_QWORD*)v10 + 2) = v30;
	v31 = (_QWORD*)a1[662];
	for (m = v30; v31; v31 = (_QWORD*)a1[662])
	{
		v33 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v31 + 80i64))(v31, v5);
		v34 = _mm_sub_ps(*a2, v33[2]);
		v35 = _mm_mul_ps(v34, v34);
		if ((float)((float)(v33[3].m128_f32[0] + a2[1].m128_f32[0]) * (float)(v33[3].m128_f32[0] + a2[1].m128_f32[0])) > (float)((float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 85).m128_f32[0]) + _mm_shuffle_ps(v35, v35, 170).m128_f32[0]))
		{
			*(_QWORD*)m = v31;
			m += 2;
			(*(void(__fastcall**)(_QWORD*)) * v31)(v31);
		}
		v36 = (_QWORD*)v31[138];
		if (v36)
			*v36 = v31[139];
		v37 = v31[139];
		if (v37)
			*(_QWORD*)(v37 + 1104) = v31[138];
		v31[138] = 0i64;
		v31[139] = 0i64;
	}
	for (n = (_QWORD*)a1[632]; n; n = (_QWORD*)a1[632])
	{
		v39 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*n + 80i64))(n, v5);
		v40 = _mm_sub_ps(*a2, v39[2]);
		v41 = _mm_mul_ps(v40, v40);
		if ((float)((float)(v39[3].m128_f32[0] + a2[1].m128_f32[0]) * (float)(v39[3].m128_f32[0] + a2[1].m128_f32[0])) > (float)((float)(v41.m128_f32[0] + _mm_shuffle_ps(v41, v41, 85).m128_f32[0]) + _mm_shuffle_ps(v41, v41, 170).m128_f32[0]))
		{
			*(_QWORD*)m = n;
			m += 2;
			(*(void(__fastcall**)(_QWORD*)) * n)(n);
		}
		v42 = (_QWORD*)n[154];
		if (v42)
			*v42 = n[155];
		v43 = n[155];
		if (v43)
			*(_QWORD*)(v43 + 1232) = n[154];
		n[154] = 0i64;
		n[155] = 0i64;
	}
	for (ii = (_QWORD*)a1[541]; ii; ii = (_QWORD*)a1[541])
	{
		v45 = (__m128*)(*(__int64(__fastcall**)(_QWORD*, _QWORD))(*ii + 80i64))(ii, v5);
		v46 = _mm_sub_ps(*a2, v45[2]);
		v47 = _mm_mul_ps(v46, v46);
		if ((float)((float)(v45[3].m128_f32[0] + a2[1].m128_f32[0]) * (float)(v45[3].m128_f32[0] + a2[1].m128_f32[0])) > (float)((float)(v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0]) + _mm_shuffle_ps(v47, v47, 170).m128_f32[0]))
		{
			*(_QWORD*)m = ii;
			m += 2;
			(*(void(__fastcall**)(_QWORD*)) * ii)(ii);
		}
		v48 = (_QWORD*)ii[28];
		if (v48)
			*v48 = ii[29];
		v49 = ii[29];
		if (v49)
			*(_QWORD*)(v49 + 224) = ii[28];
		ii[28] = 0i64;
		ii[29] = 0i64;
	}
	*((_QWORD*)v10 + 1) = ((__int64)m - *((_QWORD*)v10 + 2)) >> 3;
	*a5 = v10;
	return 0i64;
}
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();
// 14036A460: using guessed type int var_48[4];
// 14036A460: using guessed type int var_38[4];

