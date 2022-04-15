//----- (000000014056C320) ----------------------------------------------------
__int64 __fastcall sub_14056C320(_QWORD* a1, __int64 a2, int a3)
{
	__int64* v7; // rax
	unsigned int v8; // r12d
	__int64 v9; // rcx
	__int64* v10; // rax
	__int64 v11; // rdx
	unsigned int* v12; // rbx
	__int64 v13; // r15
	unsigned int v14; // edx
	unsigned int* v15; // rsi
	__int64 v16; // rbx
	__int64 v17; // rax
	unsigned int* v18; // rsi
	__int64 v19; // rbx
	unsigned int* v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	unsigned int v23; // r14d
	unsigned int* v24; // rbx
	__int64 v25; // rax
	unsigned int v26; // r15d
	unsigned int* v27; // rbx
	unsigned int v28; // edx
	unsigned int v29; // r14d
	int* v30; // rdx
	__int64 v31; // rax
	float v32; // xmm6_4
	__int64 v33; // r13
	unsigned int v34; // ebx
	__int64 v35; // r14
	unsigned int* v36; // r15
	__m128 v37; // xmm7
	__int64 v38; // rax
	__m128 v39; // xmm1
	__m128 v40; // xmm2
	float v41; // xmm2_4
	unsigned int v42; // edx
	int v43; // r14d
	bool v44; // zf
	unsigned int v45; // r15d
	unsigned int* v46; // rbx
	unsigned int v47; // edx
	unsigned int v48; // r14d
	int* v49; // rdx
	__int64 v50; // rax
	__int64 v51; // r14
	int v52; // ebx
	unsigned int v53; // edx
	__int64 v54; // rax
	__int64 v55; // r13
	_QWORD* v56; // rcx
	_QWORD* v57; // rbx
	unsigned int* v58; // r15
	unsigned int v59; // edx
	int v60; // r14d
	int* v61; // rdx
	__int64 v62; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v65; // rax
	__int64 v66; // rcx
	__int64 v67; // r15
	_QWORD* v68; // rbx
	__int64 v69; // rax
	unsigned int v70; // edx
	_QWORD* v71; // rsi
	__int64 v72; // rcx
	__int64 v73; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v76; // r15
	__int64 v77; // rax
	_QWORD* v78; // r14
	unsigned int v79; // ebx
	__int64 v80; // rax
	__int64 v81; // r15
	__int64 v82; // rax
	unsigned int* v83; // rsi
	__int64 v84; // rbx
	__int64 v85; // rax
	__int64 v86; // rcx
	__int64 v87; // r13
	__int64 v88; // rcx
	__int64 v89; // rcx
	__int64 v90; // rax
	int v91; // eax
	__int64 v92; // rax
	__int64 v93; // rcx
	int* v94; // r14
	__int64 v95; // rbx
	unsigned __int64 v96; // rax
	unsigned int v97; // edx
	int v98; // r13d
	unsigned __int64 v99; // r13
	int* v100; // rax
	__int64 v101; // rax
	__int64 n; // rax
	int* v103; // rcx
	unsigned __int64 v104; // r8
	__int64 ii; // rax
	__int64 v106; // rax
	__int64 v107; // rbx
	__int64 v108; // r15
	unsigned int v109; // edx
	int v110; // r14d
	int* v111; // rdx
	__int64 v112; // rax
	__int64 jj; // rax
	__int64 kk; // rax
	int v115; // [rsp+30h] [rbp-29h] BYREF
	unsigned __int64 v116; // [rsp+38h] [rbp-21h]
	__int64 v117; // [rsp+40h] [rbp-19h]
	unsigned __int64 v118; // [rsp+48h] [rbp-11h]
	__int128 v119; // [rsp+50h] [rbp-9h] BYREF
	int* v121; // [rsp+D8h] [rbp+7Fh] BYREF

	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 0i64;
	v7 = (__int64*)a1[6];
	v8 = 0;
	v9 = *v7;
	if (*(_DWORD*)(*v7 + 80))
	{
		LODWORD(v121) = sub_14056CFF0((__int64)a1, *(_DWORD*)(v9 + 80), 0i64, 0, 0i64);
		if ((_DWORD)v121)
		{
			sub_140003460((__int64*)a2, (int*)&v121);
			return 1i64;
		}
	}
	v10 = (__int64*)a1[6];
	v11 = *v10;
	v12 = (unsigned int*)(*v10 + 36);
	switch (*(_DWORD*)(*v10 + 12))
	{
	case 0:
		if ((*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 208i64))(a1) != 3)
			goto LABEL_142;
		v20 = v12 + 1;
		v21 = 3i64;
		do
		{
			sub_14056C1A0((__int64*)a2, *v20++);
			--v21;
		} while (v21);
		goto LABEL_209;
	case 2:
	case 0xE:
		if (((*(__int64(__fastcall**)(_QWORD*))(*a1 + 88i64))(a1) & 1) != 0)
			goto LABEL_8;
		goto LABEL_209;
	case 3:
	case 0xF:
	case 0x1B:
		if (a3)
		{
			if ((*(unsigned int(__fastcall**)(_QWORD*))(*a1 + 56i64))(a1))
				goto LABEL_209;
			v50 = sub_14077CCE0((_QWORD**)a1, 0i64);
			v51 = v50;
			if (!v50)
				goto LABEL_209;
			v52 = 0;
			v53 = *(_DWORD*)(*(_QWORD*)v50 + 8i64);
			LODWORD(v121) = 0;
			if (sub_1403F8270(qword_140C65898, v53, 0))
			{
				v52 = *(_DWORD*)(*(_QWORD*)v51 + 8i64);
				LODWORD(v121) = v52;
			}
			v115 = sub_14056CFF0((__int64)a1, *(_DWORD*)(*(_QWORD*)v51 + 20i64), (unsigned int*)&v121, 1u, 0i64);
			if (!v115)
			{
				v44 = v52 == 0;
				goto LABEL_62;
			}
			goto LABEL_60;
		}
		v54 = sub_140721EF0(v9, *(_DWORD*)(v11 + 20));
		v55 = v54;
		if (!v54)
			goto LABEL_211;
		v56 = *(_QWORD**)(v54 + 16);
		v57 = (_QWORD*)v56[2];
		if (v57 == v56)
			goto LABEL_211;
		while (1)
		{
			v58 = (unsigned int*)v57[5];
			if (!(*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*a1 + 80i64))(a1, v58[2]))
			{
				v59 = *(_DWORD*)(*(_QWORD*)v58 + 8i64);
				v60 = 0;
				LODWORD(v121) = 0;
				if (sub_1403F8270(qword_140C65898, v59, 0))
				{
					v60 = *(_DWORD*)(*(_QWORD*)v58 + 8i64);
					LODWORD(v121) = v60;
				}
				v115 = sub_14056CFF0((__int64)a1, *(_DWORD*)(*(_QWORD*)v58 + 20i64), (unsigned int*)&v121, 1u, 0i64);
				if (v115)
				{
					v61 = &v115;
				LABEL_93:
					sub_140003460((__int64*)a2, v61);
					goto LABEL_94;
				}
				if (v60)
				{
					v61 = (int*)&v121;
					goto LABEL_93;
				}
			}
		LABEL_94:
			v62 = v57[3];
			if (v62)
			{
				v57 = (_QWORD*)v57[3];
				for (i = *(_QWORD**)(v62 + 16); i; i = (_QWORD*)i[2])
					v57 = i;
			}
			else
			{
				for (j = v57[1]; v57 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v57 = (_QWORD*)j;
				if (v57[3] != j)
					v57 = (_QWORD*)j;
			}
			if (v57 == *(_QWORD**)(v55 + 16))
				goto LABEL_211;
		}
	case 4:
	case 5:
	case 6:
	case 7:
		if (((*(__int64(__fastcall**)(_QWORD*))(*a1 + 88i64))(a1) & 1) == 0)
			goto LABEL_142;
		v15 = v12 + 1;
		v16 = 3i64;
		do
		{
			sub_14056C1A0((__int64*)a2, *v15++);
			--v16;
		} while (v16);
		goto LABEL_209;
	case 8:
	case 9:
	case 0xA:
	case 0xB:
	case 0x11:
	case 0x13:
	case 0x16:
	case 0x1A:
	LABEL_8:
		v13 = 4i64;
		do
		{
			v14 = *v12;
			LODWORD(v121) = v14;
			if (v14 && sub_1403F8270(qword_140C65898, v14, 0))
				sub_140003460((__int64*)a2, (int*)&v121);
			++v12;
			--v13;
		} while (v13);
		goto LABEL_209;
	case 0xC:
		v65 = sub_14021D600(*(_DWORD*)(v11 + 20));
		if (v65)
		{
			if ((unsigned int)sub_1403C92E0(v66, *(_DWORD*)(v65 + 4)))
			{
				v67 = 4i64;
				do
				{
					sub_14056C1A0((__int64*)a2, *v12++);
					--v67;
				} while (v67);
			}
			else
			{
				v68 = *(_QWORD**)(qword_140C65978 + 48);
				v69 = v68[1];
				v70 = *(_DWORD*)(*(_QWORD*)a1[6] + 20i64);
				v71 = v68;
				v72 = v69;
				if (v69)
				{
					do
					{
						if (v70 >= *(_DWORD*)(v72 + 32))
						{
							v72 = *(_QWORD*)(v72 + 24);
						}
						else
						{
							v71 = (_QWORD*)v72;
							v72 = *(_QWORD*)(v72 + 16);
						}
					} while (v72);
					do
					{
						if (*(_DWORD*)(v69 + 32) < v70)
						{
							v69 = *(_QWORD*)(v69 + 24);
						}
						else
						{
							v68 = (_QWORD*)v69;
							v69 = *(_QWORD*)(v69 + 16);
						}
					} while (v69);
				}
				while (v68 != v71)
				{
					sub_14056C1A0((__int64*)a2, *(_DWORD*)(*(_QWORD*)(v68[5] + 8i64) + 24i64));
					v73 = v68[3];
					if (v73)
					{
						v68 = (_QWORD*)v68[3];
						for (k = *(_QWORD**)(v73 + 16); k; k = (_QWORD*)k[2])
							v68 = k;
					}
					else
					{
						for (m = v68[1]; v68 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
							v68 = (_QWORD*)m;
						if (v68[3] != m)
							v68 = (_QWORD*)m;
					}
				}
			}
		}
		goto LABEL_209;
	case 0xD:
		if (((*(__int64(__fastcall**)(_QWORD*))(*a1 + 88i64))(a1) & 0x40000000) != 0)
		{
			v77 = sub_140721F50(*(_QWORD*)a1[6], *(_DWORD*)(*(_QWORD*)a1[6] + 20i64));
			v78 = (_QWORD*)v77;
			if (v77)
			{
				v79 = 0;
				if ((unsigned int)((__int64)(*(_QWORD*)(v77 + 32) - *(_QWORD*)(v77 + 24)) >> 3))
				{
					do
					{
						v80 = sub_1407209F0(v78, v79);
						v81 = v80;
						if (v80
							&& !(*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*a1 + 80i64))(a1, *(unsigned int*)(v80 + 8)))
						{
							sub_14056C1A0((__int64*)a2, *(_DWORD*)(*(_QWORD*)(v81 + 16) + 24i64));
						}
						++v79;
					} while (v79 < (unsigned int)((__int64)(v78[4] - v78[3]) >> 3));
				}
			}
		}
		else
		{
			v76 = 4i64;
			do
			{
				sub_14056C1A0((__int64*)a2, *v12++);
				--v76;
			} while (v76);
		}
		goto LABEL_209;
	case 0x10:
	case 0x18:
		v85 = sub_140220080(*(_DWORD*)(v11 + 20));
		if (!v85)
			goto LABEL_209;
		v87 = sub_1404A85E0(v86, *(_DWORD*)(v85 + 4));
		v117 = v87;
		if (!v87)
			goto LABEL_209;
		v88 = *(_QWORD*)(qword_140C65898 + 25744);
		if (!v88)
		{
			v88 = *(_QWORD*)(qword_140C65898 + 120);
			if (!v88)
				goto LABEL_209;
		}
		v119 = *(_OWORD*)(v88 + 4576);
		v89 = *(_QWORD*)(qword_140C65898 + 29256);
		if (!v89)
			goto LABEL_209;
		v90 = (*(__int64(__fastcall**)(__int64, __int128*))(*(_QWORD*)v89 + 456i64))(v89, &v119);
		if (!v90 || (v44 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v90 + 24i64))(v90) == 0, v91 = 1, !v44))
			v91 = 0;
		if (a3 && v91)
		{
			v92 = *(_QWORD*)(v87 + 8);
			v93 = 0i64;
			v94 = 0i64;
			v95 = *(_QWORD*)(v92 + 16);
			v116 = 0i64;
			if (v95 == v92)
			{
			LABEL_186:
				if (!*(_QWORD*)(a2 + 8))
					sub_1400291A0((__int64*)a2, v94, v93);
				if (v94)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v94 - 2) + 8i64))(v94 - 4);
				goto LABEL_209;
			}
			while (1)
			{
				if (!(unsigned int)sub_1404A7F50(qword_140C659B0, ***(_DWORD***)(v95 + 40)))
				{
					v96 = **(_QWORD**)(v95 + 40);
					v118 = v96;
					if (v96)
					{
						v97 = *(_DWORD*)(v96 + 60);
						v98 = 0;
						LODWORD(v121) = 0;
						if (sub_1403F8270(qword_140C65898, v97, 0))
						{
							v98 = *(_DWORD*)(v118 + 60);
							LODWORD(v121) = v98;
						}
						LODWORD(v121) = sub_14056CFF0((__int64)a1, *(_DWORD*)(v118 + 64), (unsigned int*)&v121, 1u, &v115);
						if ((_DWORD)v121)
						{
							if (v115)
							{
								v99 = v116++;
								v100 = sub_14018DB00((__int64)v94, v116, 4i64);
								v118 = (unsigned __int64)v100;
								v100[v99] = (int)v121;
								if (v94 != v100)
								{
									sub_1407DB590(v100, v94, 4 * v99);
									if (v94)
										(*(void(__fastcall**)(int*))(*((_QWORD*)v94 - 2) + 8i64))(v94 - 4);
									v94 = (int*)v118;
								}
								v93 = v116;
								v87 = v117;
								goto LABEL_171;
							}
							sub_140003460((__int64*)a2, (int*)&v121);
						}
						else if (v98)
						{
							v118 = v116 + 1;
							v103 = sub_14018DB00((__int64)v94, v116 + 1, 4i64);
							v121 = v103;
							v104 = 4 * v116;
							v103[v116] = v98;
							if (v94 != v103)
							{
								sub_1407DB590(v103, v94, v104);
								if (v94)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v94 - 2) + 8i64))(v94 - 4);
								v94 = v121;
							}
							v93 = v118;
							v87 = v117;
							v116 = v118;
							goto LABEL_171;
						}
						v87 = v117;
					}
				}
				v93 = v116;
			LABEL_171:
				v101 = *(_QWORD*)(v95 + 24);
				if (v101)
				{
					v95 = *(_QWORD*)(v95 + 24);
					for (n = *(_QWORD*)(v101 + 16); n; n = *(_QWORD*)(n + 16))
						v95 = n;
				}
				else
				{
					for (ii = *(_QWORD*)(v95 + 8); v95 == *(_QWORD*)(ii + 24); ii = *(_QWORD*)(ii + 8))
						v95 = ii;
					if (*(_QWORD*)(v95 + 24) != ii)
						v95 = ii;
				}
				if (v95 == *(_QWORD*)(v87 + 8))
					goto LABEL_186;
			}
		}
		v106 = *(_QWORD*)(v87 + 8);
		v107 = *(_QWORD*)(v106 + 16);
		if (v107 == v106)
			goto LABEL_209;
		while (1)
		{
			if ((unsigned int)sub_1404A7F50(qword_140C659B0, ***(_DWORD***)(v107 + 40)))
				goto LABEL_200;
			v108 = **(_QWORD**)(v107 + 40);
			if (!v108)
				goto LABEL_200;
			v109 = *(_DWORD*)(v108 + 60);
			v110 = 0;
			LODWORD(v121) = 0;
			if (sub_1403F8270(qword_140C65898, v109, 0))
			{
				v110 = *(_DWORD*)(v108 + 60);
				LODWORD(v121) = v110;
			}
			v115 = sub_14056CFF0((__int64)a1, *(_DWORD*)(v108 + 64), (unsigned int*)&v121, 1u, 0i64);
			if (v115)
				break;
			if (v110)
			{
				v111 = (int*)&v121;
				goto LABEL_199;
			}
		LABEL_200:
			v112 = *(_QWORD*)(v107 + 24);
			if (v112)
			{
				v107 = *(_QWORD*)(v107 + 24);
				for (jj = *(_QWORD*)(v112 + 16); jj; jj = *(_QWORD*)(jj + 16))
					v107 = jj;
			}
			else
			{
				for (kk = *(_QWORD*)(v107 + 8); v107 == *(_QWORD*)(kk + 24); kk = *(_QWORD*)(kk + 8))
					v107 = kk;
				if (*(_QWORD*)(v107 + 24) != kk)
					v107 = kk;
			}
			if (v107 == *(_QWORD*)(v87 + 8))
				goto LABEL_209;
		}
		v111 = &v115;
	LABEL_199:
		sub_140003460((__int64*)a2, v111);
		goto LABEL_200;
	case 0x12:
		v17 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*a1 + 120i64))(a1, 1347241296i64);
		if (!v17)
			goto LABEL_209;
		if (!*(_DWORD*)(v17 + 24))
			goto LABEL_142;
		v18 = v12 + 1;
		v19 = 3i64;
		do
		{
			sub_14056C1A0((__int64*)a2, *v18++);
			--v19;
		} while (v19);
		goto LABEL_209;
	case 0x14:
		v22 = sub_140220D40(*(_DWORD*)(v11 + 20));
		if (v22)
		{
			v23 = 0;
			v24 = (unsigned int*)(v22 + 48);
			do
			{
				if (*v24 && !(*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*a1 + 80i64))(a1, v23))
					sub_14056C1A0((__int64*)a2, *v24);
				++v23;
				++v24;
			} while (v23 < 8);
		}
		goto LABEL_209;
	case 0x15:
		v82 = sub_1403D2D60(v9, *(_DWORD*)(v11 + 20));
		if (!v82)
			goto LABEL_209;
		if (*(_DWORD*)(v82 + 16))
		{
			v83 = v12 + 1;
			v84 = 3i64;
			do
			{
				sub_14056C1A0((__int64*)a2, *v83++);
				--v84;
			} while (v84);
		}
		else
		{
		LABEL_142:
			sub_14056C1A0((__int64*)a2, *v12);
		}
		goto LABEL_209;
	case 0x17:
		v25 = sub_140221180(*(_DWORD*)(v11 + 20));
		if (!v25)
			goto LABEL_209;
		v26 = 0;
		v27 = (unsigned int*)(v25 + 44);
		while (1)
		{
			if (!(*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*a1 + 80i64))(a1, v26))
			{
				v28 = *v27;
				v29 = 0;
				LODWORD(v121) = 0;
				if (sub_1403F8270(qword_140C65898, v28, 0))
				{
					v29 = *v27;
					LODWORD(v121) = *v27;
				}
				v115 = sub_14056CFF0((__int64)a1, v27[20], (unsigned int*)&v121, 1u, 0i64);
				if (v115)
				{
					v30 = &v115;
				LABEL_44:
					sub_140003460((__int64*)a2, v30);
					goto LABEL_45;
				}
				if (v29)
				{
					v30 = (int*)&v121;
					goto LABEL_44;
				}
			}
		LABEL_45:
			++v26;
			++v27;
			if (v26 >= 0xA)
				goto LABEL_209;
		}
	case 0x19:
		v31 = sub_140222B00(*(_DWORD*)(v11 + 20));
		v118 = v31;
		if (!v31)
			goto LABEL_209;
		if (!a3)
		{
			v45 = 0;
			v46 = (unsigned int*)(v31 + 36);
			while (1)
			{
				if ((*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*a1 + 80i64))(a1, v45)
					|| !*v46
					|| !sub_14024B980(*v46))
				{
					goto LABEL_75;
				}
				v47 = *v46;
				v48 = 0;
				LODWORD(v121) = 0;
				if (sub_1403F8270(qword_140C65898, v47, 0))
				{
					v48 = *v46;
					LODWORD(v121) = *v46;
				}
				v115 = sub_14056CFF0((__int64)a1, v46[8], (unsigned int*)&v121, 1u, 0i64);
				if (v115)
					break;
				if (v48)
				{
					v49 = (int*)&v121;
					goto LABEL_74;
				}
			LABEL_75:
				++v45;
				++v46;
				if (v45 >= 8)
					goto LABEL_211;
			}
			v49 = &v115;
		LABEL_74:
			sub_140003460((__int64*)a2, v49);
			goto LABEL_75;
		}
		v32 = 3.4028235e38;
		v33 = -1i64;
		v34 = 0;
		v35 = 0i64;
		v36 = (unsigned int*)(v31 + 36);
		v37 = *(__m128*)(*(_QWORD*)(qword_140C65898 + 120) + 4576i64);
		do
		{
			if (!(*(unsigned int(__fastcall**)(_QWORD*, _QWORD))(*a1 + 80i64))(a1, v34))
			{
				if (*v36)
				{
					v38 = sub_14024B980(*v36);
					if (v38)
					{
						v39 = _mm_sub_ps(
							v37,
							_mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v38 + 12), (__m128) * (unsigned int*)(v38 + 20)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(v38 + 16), (__m128)0i64)));
						v40 = _mm_mul_ps(v39, v39);
						v41 = fsqrt(
							(float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
							+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0])
							- *(float*)(v38 + 4);
						if (v41 < v32)
						{
							v32 = v41;
							v33 = v35;
						}
					}
				}
			}
			++v34;
			++v35;
			++v36;
		} while (v34 < 8);
		if (v33 != -1)
		{
			v42 = *(_DWORD*)(v118 + 4 * v33 + 36);
			v43 = 0;
			LODWORD(v121) = 0;
			if (sub_1403F8270(qword_140C65898, v42, 0))
			{
				v43 = *(_DWORD*)(v118 + 4 * v33 + 36);
				LODWORD(v121) = v43;
			}
			v115 = sub_14056CFF0((__int64)a1, *(_DWORD*)(v118 + 4 * v33 + 68), (unsigned int*)&v121, 1u, 0i64);
			if (v115)
			{
			LABEL_60:
				sub_140003460((__int64*)a2, &v115);
				goto LABEL_209;
			}
			v44 = v43 == 0;
		LABEL_62:
			if (!v44)
				sub_140003460((__int64*)a2, (int*)&v121);
		}
	LABEL_209:
		if (a3)
			sub_1401C3280(
				(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_14056C1E0,
				*(unsigned int**)a2,
				*(_QWORD*)(a2 + 8),
				0i64);
	LABEL_211:
		LOBYTE(v8) = *(_QWORD*)(a2 + 8) != 0i64;
		return v8;
	default:
		goto LABEL_209;
	}
}
// 14056C9EA: conditional instruction was optimized away because rax.8!=0
// 14056C869: variable 'v9' is possibly undefined
// 14056C978: variable 'v66' is possibly undefined
// 14056CB8C: variable 'v86' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65978: using guessed type __int64 qword_140C65978;
// 140C659B0: using guessed type __int64 qword_140C659B0;

