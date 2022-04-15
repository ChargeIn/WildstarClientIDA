//----- (000000014053E5A0) ----------------------------------------------------
void __fastcall sub_14053E5A0(__int64 a1, __int64 a2)
{
	__int64 v2; // r13
	_QWORD* v3; // rcx
	__int64 v4; // r14
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v7; // r8
	int v8; // eax
	__int64 v9; // rax
	__int64* v10; // rbx
	__int64* v11; // rsi
	unsigned int v12; // edi
	__int64 v13; // rcx
	__int64 v14; // rbx
	int v15; // edx
	__int64 v16; // r8
	__int64 v17; // rcx
	unsigned int* v18; // rdx
	unsigned int v19; // ebx
	int v20; // edi
	int v21; // esi
	int v22; // ebp
	int v23; // r14d
	int v24; // r15d
	int v25; // r12d
	int* v26; // rax
	__int64 v27; // rcx
	unsigned __int64 v28; // rax
	unsigned __int8 v29; // al
	__int64 v30; // r8
	__int64 v31; // rcx
	__int64 v32; // rdx
	unsigned int v33; // ebx
	int v34; // esi
	int v35; // ebp
	int v36; // r14d
	int v37; // r15d
	int v38; // r12d
	int v39; // r13d
	unsigned int v40; // edi
	int* v41; // rax
	__int64 v42; // rdx
	__int64 v43; // rcx
	unsigned int v44; // eax
	int v45; // eax
	int v46; // r12d
	__int64 v47; // rdi
	_DWORD* v48; // rax
	int v49; // ecx
	__int64 v50; // r8
	__int64 v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rax
	__int64 v54; // rbx
	__int64 v55; // rax
	int v56; // ecx
	bool v57; // zf
	__int64 v58; // rbx
	unsigned int v59; // eax
	__int64 v60; // rdx
	unsigned __int8 v61; // r10
	unsigned __int64 v62; // rcx
	__int64 v63; // rdx
	__int64 v64; // rbx
	__int64 v65; // rcx
	__int64 v66; // rcx
	int v67; // r8d
	unsigned int v68; // r8d
	__int64 v69; // rdx
	BOOL v70; // esi
	__int64 v71; // rdx
	unsigned int v72; // ecx
	int v73; // esi
	float v74; // xmm6_4
	unsigned __int64 v75; // rbp
	__m128 v76; // xmm2
	__m128 v77; // xmm3
	__int64 v78; // r15
	int* v79; // r14
	int v80; // edi
	__m128* v81; // rdx
	__int32 v82; // r8d
	int v83; // r8d
	int v84; // ecx
	__m128 v85; // xmm1
	int v86; // eax
	__int64 v87; // rax
	unsigned int v88; // edx
	_QWORD* v89; // r9
	_DWORD* v90; // rcx
	_QWORD* v91; // r10
	_DWORD* v92; // rax
	unsigned int v93; // r8d
	int v94; // r8d
	int v95; // r8d
	unsigned int v96; // eax
	int v97; // eax
	__m128* v98; // rdi
	_QWORD* v99; // rsi
	_QWORD* v100; // rbx
	__int32 v101; // eax
	__int64 v102; // rbp
	__int64 v103; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v106; // [rsp+20h] [rbp-88h] BYREF
	_QWORD* v107; // [rsp+30h] [rbp-78h] BYREF
	_QWORD* v108; // [rsp+38h] [rbp-70h]
	__m128* v110; // [rsp+B0h] [rbp+8h]
	unsigned __int64 v112; // [rsp+C0h] [rbp+18h]
	unsigned __int8 v113; // [rsp+C0h] [rbp+18h]
	int v114; // [rsp+C8h] [rbp+20h]

	v2 = a1;
	v3 = *(_QWORD**)(a1 + 312);
	v4 = a2;
	v5 = v3[14];
	v114 = *(_DWORD*)(v5 + 24);
	v6 = *(unsigned int*)(v2 + 432);
	if ((_DWORD)v6 != -1 && (unsigned int)v6 < *(_DWORD*)(v2 + 416))
	{
		v7 = v3[11];
		if (v7)
		{
			v8 = *(_DWORD*)(v5 + 24);
			if ((v8 == 8 || ((v8 - 1) & 0xFFFFFFFD) == 0 && (v9 = v3[10]) != 0 && (*(_DWORD*)(v9 + 12) & 1) != 0)
				&& (*(_BYTE*)(*(_QWORD*)(v7 + 16) + 4 * v6) & 0x40) != 0)
			{
				v10 = *(__int64**)(v2 + 72);
				if (v10)
				{
					do
					{
						v11 = (__int64*)v10[5];
						v12 = *(_DWORD*)(v2 + 432);
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v10[7] + 8i64))(v10[7]);
						v13 = *v10;
						if (*v10)
						{
							do
							{
								v14 = *(_QWORD*)(v13 + 32);
								if (v12 != -1)
								{
									v15 = *(_DWORD*)(*(_QWORD*)(v13 + 176) + 28i64);
									if (v15 != -1 && !_bittest(&v15, v12))
										(**(void(__fastcall***)(__int64, __int64))v13)(v13, 1i64);
								}
								v13 = v14;
							} while (v14);
						}
						v10 = v11;
					} while (v11);
				}
			}
		}
	}
	++* (_DWORD*)(v2 + 400);
	*(_DWORD*)(v2 + 336) = 3;
	*(_DWORD*)(v2 + 432) = *(unsigned __int8*)(v4 + 80);
	*(_DWORD*)(v2 + 324) = *(_DWORD*)(v4 + 4);
	v112 = 0i64;
	if (*(_BYTE*)(v4 + 32))
	{
		v16 = v2 + 848;
		v17 = 0i64;
		v107 = (_QWORD*)(v2 + 848);
		v106 = 0i64;
		do
		{
			v18 = (unsigned int*)(v17 + *(_QWORD*)(a2 + 40));
			v19 = *v18;
			v20 = v18[1];
			v21 = v18[2];
			v22 = v18[3];
			v23 = v18[4];
			v24 = v18[5];
			v25 = v18[6];
			v26 = sub_14054DD00(v16, v18);
			v27 = v106;
			v16 = (__int64)v107;
			*v26 = v19;
			v26[1] = v20;
			v26[2] = v21;
			v26[3] = v22;
			v26[4] = v23;
			v26[5] = v24;
			v17 = v27 + 28;
			v26[6] = v25;
			v28 = *(unsigned __int8*)(a2 + 32);
			++v112;
			v106 = v17;
		} while (v112 < v28);
		v2 = a1;
		v4 = a2;
	}
	v29 = 0;
	v113 = 0;
	if (*(_BYTE*)(v4 + 48))
	{
		v30 = v2 + 880;
		v107 = (_QWORD*)(v2 + 880);
		do
		{
			v31 = *(_QWORD*)(v4 + 56);
			v32 = 32i64 * v29;
			v34 = *(_DWORD*)(v32 + v31 + 8);
			v35 = *(_DWORD*)(v32 + v31 + 12);
			v36 = *(_DWORD*)(v32 + v31 + 16);
			v37 = *(_DWORD*)(v32 + v31 + 20);
			v38 = *(_DWORD*)(v32 + v31 + 24);
			v39 = *(_DWORD*)(v32 + v31 + 28);
			v106 = *(_QWORD*)(v32 + v31);
			v33 = v106;
			v40 = HIDWORD(v106);
			v41 = sub_14054DDC0(v30, (unsigned int*)&v106);
			v30 = (__int64)v107;
			*(_QWORD*)v41 = __PAIR64__(v40, v33);
			v41[2] = v34;
			v41[3] = v35;
			v41[4] = v36;
			v4 = a2;
			v41[5] = v37;
			v41[6] = v38;
			v41[7] = v39;
			v29 = v113 + 1;
			v113 = v29;
		} while (v29 < *(_BYTE*)(a2 + 48));
		v2 = a1;
	}
	if (v114 == 8)
	{
		v42 = *(_QWORD*)(v2 + 312);
		v43 = *(_QWORD*)(v42 + 88);
		if (v43)
		{
			v44 = *(_DWORD*)(v2 + 432);
			if (v44 < *(_DWORD*)(v2 + 416))
			{
				if ((*(_DWORD*)(*(_QWORD*)(v43 + 16) + 4i64 * v44) & 0x200) != 0)
					*(_DWORD*)(v2 + 332) = 1;
				v45 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v42 + 88) + 16i64) + 4i64 * v44);
				if ((v45 & 0x400) != 0)
				{
					while (*(_QWORD*)(v2 + 552))
						(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v2 + 552) + 80i64))(*(_QWORD*)(v2 + 552), 0i64);
				}
				else if ((v45 & 4) != 0 && *(_QWORD*)(v2 + 552))
				{
					do
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 552) + 32i64))(*(_QWORD*)(v2 + 552));
					while (*(_QWORD*)(v2 + 552));
				}
			}
		}
	}
	v46 = 2;
	v47 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v2 + 340));
	if (!v47)
		goto LABEL_74;
	v48 = *(_DWORD**)(*(_QWORD*)(v2 + 312) + 112i64);
	if (!v48[11]
		|| !v48[7]
		|| (v49 = v48[6], (unsigned int)(v49 - 1) <= 2)
		|| (unsigned int)(v49 - 7) <= 1
		|| *(_DWORD*)(v2 + 112))
	{
		v51 = sub_140561C30(qword_140C65B70, *(_DWORD*)(v47 + 5632));
		v50 = qword_140C65898;
		if (!v51)
		{
			v52 = *(_QWORD*)(qword_140C65898 + 120);
			if (v52 == v47)
			{
				if (v52)
				{
					v53 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v52 + 192));
					v54 = v53;
					if (v53
						&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v53 + 32i64))(v53)
						&& *(_DWORD*)(v54 + 128) == 3)
					{
						v51 = sub_1404695E0(v54);
						v50 = qword_140C65898;
						goto LABEL_53;
					}
					v50 = qword_140C65898;
				}
				v51 = 0i64;
			}
		}
	LABEL_53:
		if (v51 != v2)
			goto LABEL_63;
		v55 = *(_QWORD*)(v2 + 312);
		if (*(_QWORD*)(v55 + 80))
			goto LABEL_63;
		v56 = *(_DWORD*)(*(_QWORD*)(v55 + 112) + 24i64);
		if (v56 == 2 || v56 == 7 || v56 == 8)
			goto LABEL_63;
		goto LABEL_58;
	}
	v50 = qword_140C65898;
LABEL_58:
	if (*(_DWORD*)(v47 + 5632))
	{
		v57 = *(_DWORD*)(v47 + 5668) == 0;
		*(_DWORD*)(v47 + 5632) = 0;
		if (v57)
		{
			*(_DWORD*)(v47 + 5664) = 0;
			sub_140195D70(v47 + 5672);
			v50 = qword_140C65898;
		}
		v58 = *(_QWORD*)(v47 + 5512);
		if (v58)
		{
			v59 = sub_1400518A0(qword_140C63628, 38, 2, 0);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v58 + 80i64))(v58, v59);
			v50 = qword_140C65898;
		}
	}
LABEL_63:
	v60 = *(_QWORD*)(v50 + 120);
	if (v60 == v47 || *(_QWORD*)(v50 + 25744) == v47)
	{
		v61 = *(_BYTE*)(v50 + 28140);
		if (v60)
		{
			if (v61 < 4u)
			{
				v62 = 0i64;
				v63 = 384i64 * v61 + v50 + 2752;
				while (!*(_QWORD*)v63
					|| *(_DWORD*)(*(_QWORD*)v63 + 280i64) != *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 4i64))
				{
					++v62;
					v63 += 8i64;
					if (v62 >= 0x30)
						goto LABEL_74;
				}
				v64 = *(_QWORD*)(v50 + 8 * (v62 + 48i64 * v61) + 2752);
				if (v64)
				{
					sub_1405CAA90(v62, v2, (__int64*)(v64 + 416));
					sub_1405CAA90(v65, v2, (__int64*)(v64 + 408));
				}
			}
		}
	}
LABEL_74:
	sub_140546E60(v2);
	sub_140546C40((__int64*)v2);
	v66 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v66)
	{
		v67 = *(_DWORD*)(v2 + 340);
		if (v67 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64))
		{
			if (*(_BYTE*)(v4 + 20))
				sub_14039C720(v66, 8, v67, *(_DWORD*)(v2 + 304));
		}
	}
	if (v47)
	{
		v68 = *(_DWORD*)(v2 + 400);
		if (v68 == 1 || v114 == 1)
		{
			v69 = *(_QWORD*)(v2 + 312);
			v70 = *(_DWORD*)(v2 + 324) == 0;
			switch (v114)
			{
			case 1:
				if (v68 < *(_DWORD*)(v2 + 416))
					goto LABEL_100;
				break;
			case 2:
			case 6:
				goto LABEL_92;
			case 7:
				if (*(_DWORD*)(*(_QWORD*)(v69 + 112) + 388i64))
					goto LABEL_100;
				v69 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v2 + 112), v47);
				break;
			case 8:
			LABEL_93:
				v71 = *(_QWORD*)(v2 + 312);
				if (*(_QWORD*)(v71 + 88))
				{
					if ((v72 = *(_DWORD*)(v2 + 432)) == 0 && *(_DWORD*)(v2 + 328)
						|| v72 >= *(_DWORD*)(v2 + 416) - 1 && !*(_DWORD*)(v2 + 324) && *(_DWORD*)(v2 + 332))
					{
						sub_14046B1E0(v47, v71, v2);
					}
				}
				goto LABEL_100;
			}
			if (v70)
				sub_14046B1E0(v47, v69, v2);
		}
	LABEL_92:
		if (v114 != 8)
			goto LABEL_100;
		goto LABEL_93;
	}
LABEL_100:
	v73 = 0;
	v74 = 0.0;
	v75 = 0i64;
	v76 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 12), (__m128)0i64);
	v77 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128) * (unsigned int*)(v4 + 8), (__m128) * (unsigned int*)(v4 + 16)), v76);
	*(__m128*)(v2 + 384) = v77;
	if (*(_BYTE*)(v4 + 20))
	{
		v78 = 0i64;
		do
		{
			v79 = (int*)(v78 + *(_QWORD*)(v4 + 24));
			v80 = *v79;
			v110 = (__m128*)sub_1403D90D0(qword_140C65898, *v79);
			if (v110)
			{
				sub_14053D680(v2, (__int64)v79);
				v81 = *(__m128**)(qword_140C65898 + 25744);
				if (v81)
				{
					v82 = v81->m128_i32[2];
					if (v80 == v82
						&& (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 268i64) & 0x4000000) == 0
						&& !v81[16].m128_i32[2]
						&& *(_DWORD*)(v2 + 340) != v82)
					{
						v73 = *(_DWORD*)(v2 + 340);
					}
				}
				v83 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 124i64);
				if ((unsigned int)(v83 - 2) <= 2 || (unsigned int)(v83 - 7) <= 1)
				{
					if (v81)
					{
						if (!v81[16].m128_i32[2])
						{
							v84 = *(_DWORD*)(v2 + 340);
							if (v84 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64) && v80 != v84)
							{
								v85 = _mm_sub_ps(v110[286], v81[286]);
								v76 = _mm_mul_ps(v85, v85);
								v76.m128_f32[0] = (float)(v76.m128_f32[0] + _mm_shuffle_ps(v76, v76, 85).m128_f32[0])
									+ _mm_shuffle_ps(v76, v76, 170).m128_f32[0];
								if (v74 == 0.0 || v76.m128_f32[0] < v74)
								{
									v74 = v76.m128_f32[0];
									v73 = v80;
								}
							}
						}
					}
				}
				if (v80 == *(_DWORD*)(v2 + 344) && v79[2] == 1)
					v46 = 4;
			}
			v4 = a2;
			++v75;
			v78 += 24i64;
		} while (v75 < *(unsigned __int8*)(a2 + 20));
		if (v73)
		{
			v86 = dword_140C45EC0;
			if (*(_DWORD*)qword_140C63750 < dword_140C45EC0)
				v86 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&dword_140C45ED0 + v86))
				sub_14055B0E0(qword_140C65898, v73, *(double*)v76.m128_u64, *(double*)v77.m128_u64);
		}
	}
	sub_1405450F0(v2, v4);
	if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 124i64) == 5)
		sub_140546360(v2);
	else
		sub_140546060(v2, 0);
	sub_140541130(v2, v46, v4);
	if ((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 264i64) & 0x800) != 0)
	{
		v87 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v87)
		{
			if (*(_DWORD*)(v2 + 340) == *(_DWORD*)(v87 + 8))
				sub_14039DAF0(qword_140C65898);
		}
	}
	v88 = *(_DWORD*)(v2 + 840);
	v89 = *(_QWORD**)(qword_140C65B70 + 1624);
	v90 = (_DWORD*)v89[1];
	v91 = v89;
	v92 = v90;
	if (v90)
	{
		while (1)
		{
			if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 24i64) == 8)
			{
				if (!v92[8])
					goto LABEL_147;
			}
			else if (v92[8])
			{
				v91 = v92;
				v92 = (_DWORD*)*((_QWORD*)v92 + 2);
				goto LABEL_148;
			}
			v93 = v92[9];
			if (v88 >= v93)
			{
				if (v88 > v93 || (v94 = v92[10], v94 <= 7) && (v94 < 7 || (v95 = v92[11], v95 <= 2) && (v95 < 2 || !v92[12])))
				{
				LABEL_147:
					v92 = (_DWORD*)*((_QWORD*)v92 + 3);
					goto LABEL_148;
				}
			}
			v91 = v92;
			v92 = (_DWORD*)*((_QWORD*)v92 + 2);
		LABEL_148:
			if (!v92)
			{
				while (1)
				{
					if (v90[8])
					{
						if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 24i64) != 8)
							goto LABEL_159;
					}
					else if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 312) + 112i64) + 24i64) == 8)
					{
						goto LABEL_158;
					}
					v96 = v90[9];
					if (v96 >= v88)
					{
						if (v96 > v88 || (v97 = v90[10], v97 >= 7) && (v97 > 7 || (int)v90[11] >= 2))
						{
						LABEL_159:
							v89 = v90;
							v90 = (_DWORD*)*((_QWORD*)v90 + 2);
							goto LABEL_160;
						}
					}
				LABEL_158:
					v90 = (_DWORD*)*((_QWORD*)v90 + 3);
				LABEL_160:
					if (!v90)
						goto LABEL_161;
				}
			}
		}
	}
LABEL_161:
	v98 = *(__m128**)(v2 + 456);
	v107 = v89;
	v108 = v91;
	if (v98)
	{
		v99 = v108;
		v100 = v107;
		do
		{
			v101 = v98[56].m128_i32[0];
			v102 = *(_QWORD*)(v2 + 72);
			if ((v101 & 0x80u) != 0 && (v101 & 0x200) == 0)
			{
				sub_140622A40(v98);
				sub_140621C30(v98);
				v98[38].m128_i32[0] = 1;
			}
			sub_1406215D0(v98, v102);
			while (v100 != v99)
			{
				sub_1400293C0((__int64)&v98[98], (__int64)&v107, (int*)(v100[7] + 24i64));
				v103 = v100[3];
				if (v103)
				{
					v100 = (_QWORD*)v100[3];
					for (i = *(_QWORD**)(v103 + 16); i; i = (_QWORD*)i[2])
						v100 = i;
				}
				else
				{
					for (j = v100[1]; v100 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v100 = (_QWORD*)j;
					if (v100[3] != j)
						v100 = (_QWORD*)j;
				}
			}
			v98 = (__m128*)v98->m128_u64[1];
		} while (v98);
	}
}
// 14053ED4D: conditional instruction was optimized away because rdx.8!=0
// 14053EF46: conditional instruction was optimized away because rcx.8!=0
// 14053EB21: variable 'v65' is possibly undefined
// 140C45EC0: using guessed type int dword_140C45EC0;
// 140C45ED0: using guessed type int dword_140C45ED0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

