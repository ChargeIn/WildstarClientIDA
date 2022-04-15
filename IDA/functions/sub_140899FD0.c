//----- (0000000140899FD0) ----------------------------------------------------
__int64 __fastcall sub_140899FD0(_QWORD* a1, int a2, __int64 a3, __int64* a4)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	__int64 v7; // rcx
	__int64 v8; // rsi
	__int64* v9; // r14
	__int64 v10; // r13
	__int64 v11; // r15
	__int64* v12; // rax
	__int64 v13; // r12
	__int64* v14; // rsi
	__int64* i; // rcx
	__int64* v16; // rax
	__int64 v17; // rdx
	__int128 v18; // xmm0
	__int64* v19; // rax
	__int64 v20; // rcx
	__int64* v21; // rbx
	__int64 v22; // rax
	bool v23; // zf
	__int64* v24; // rax
	__int64 v25; // r12
	__int128* v26; // rax
	__int64 v27; // r14
	__int128* v28; // rbx
	unsigned int* v29; // rax
	unsigned int v30; // edx
	__int64 v31; // rax
	__int64* v32; // r14
	__int64 v33; // rax
	__int64 v34; // rdx
	__int64 v35; // r14
	__int64 v36; // r14
	__int64 v37; // rax
	__int64 v38; // rax
	int v39; // edx
	int v40; // r14d
	unsigned int v41; // r15d
	int v42; // eax
	int v43; // eax
	int v44; // eax
	int v45; // eax
	__int64 v46; // rcx
	_DWORD* v47; // rcx
	unsigned int v48; // eax
	unsigned int v49; // ebx
	unsigned int v50; // r12d
	__int64 v51; // rax
	int v52; // r8d
	int v53; // eax
	int v54; // r14d
	int v55; // edx
	int v56; // r12d
	__int64 v57; // rcx
	int v58; // eax
	__int64 v59; // rbx
	int v60; // eax
	__int64 v61; // rbx
	unsigned int v62; // eax
	int v63; // ecx
	bool v64; // al
	int v65; // r14d
	_QWORD* m; // rcx
	_QWORD* v67; // rax
	__int64 v68; // rdx
	unsigned __int128 v69; // xmm0
	bool v70; // al
	__int16 v71; // cx
	__int64 v72; // rbx
	__int64 v73; // rax
	unsigned int v74; // eax
	int v75; // eax
	__int64 v76; // rax
	__int64* v77; // rax
	_QWORD* v78; // rcx
	__int64 v79; // rbx
	_QWORD* v80; // rax
	__int64 v81; // rdx
	unsigned __int128 v82; // xmm0
	__int64 v83; // rax
	int v85; // ebx
	__int64 v86; // rcx
	__int64 v87; // rbx
	char v88; // al
	int v89; // eax
	__int64 v90; // rcx
	__int64* ii; // rcx
	__int64* v92; // rax
	__int64 v93; // rdx
	unsigned __int128 v94; // xmm0
	__int64 v95; // rbx
	char v96; // al
	int v97; // eax
	__int64 v98; // rcx
	__int64 v99; // rbx
	__int64* v100; // rax
	__int64 v101; // rdi
	unsigned __int128 v102; // xmm0
	__int64(__fastcall * **v103)(_QWORD, _QWORD); // rcx
	__int64 v104; // rcx
	int v105; // r14d
	__int64 v106; // rcx
	int v108; // [rsp+50h] [rbp-B0h]
	__int64* v109; // [rsp+58h] [rbp-A8h] BYREF
	int k; // [rsp+60h] [rbp-A0h]
	unsigned int v111; // [rsp+64h] [rbp-9Ch] BYREF
	__int64 v112; // [rsp+68h] [rbp-98h]
	__int64 v113; // [rsp+70h] [rbp-90h]
	__int64 v114; // [rsp+78h] [rbp-88h]
	__int64 v115; // [rsp+80h] [rbp-80h] BYREF
	__int64 v116; // [rsp+88h] [rbp-78h]
	__int64 v117; // [rsp+90h] [rbp-70h]
	char v118[4]; // [rsp+98h] [rbp-68h] BYREF
	int v119; // [rsp+9Ch] [rbp-64h]
	__int64 v120; // [rsp+A0h] [rbp-60h] BYREF
	unsigned __int128 v121; // [rsp+B0h] [rbp-50h] BYREF
	_QWORD* v122; // [rsp+C0h] [rbp-40h]
	unsigned __int64 v123; // [rsp+C8h] [rbp-38h] BYREF
	unsigned __int64 v124; // [rsp+D0h] [rbp-30h]
	int v125; // [rsp+D8h] [rbp-28h]
	unsigned __int128 v126; // [rsp+E0h] [rbp-20h]
	unsigned __int128 v127; // [rsp+F0h] [rbp-10h]
	unsigned int v128; // [rsp+100h] [rbp+0h]
	int v129; // [rsp+104h] [rbp+4h] BYREF
	__int64 v130; // [rsp+108h] [rbp+8h] BYREF
	__int64 v131; // [rsp+110h] [rbp+10h]
	__int64 v132; // [rsp+118h] [rbp+18h]
	__int64 v133; // [rsp+120h] [rbp+20h] BYREF
	int v134; // [rsp+128h] [rbp+28h] BYREF
	__int128 v135; // [rsp+130h] [rbp+30h] BYREF
	unsigned __int64 v136; // [rsp+140h] [rbp+40h] BYREF
	unsigned __int64 v137; // [rsp+148h] [rbp+48h]
	int v138; // [rsp+150h] [rbp+50h]
	_QWORD* n; // [rsp+158h] [rbp+58h]
	__int64 v140; // [rsp+160h] [rbp+60h]
	char v141[8]; // [rsp+168h] [rbp+68h] BYREF
	unsigned __int128 v142; // [rsp+170h] [rbp+70h]
	unsigned __int128 v143; // [rsp+180h] [rbp+80h]
	char v144[264]; // [rsp+190h] [rbp+90h] BYREF
	__int64 v145; // [rsp+298h] [rbp+198h] BYREF
	int v146; // [rsp+2A8h] [rbp+1A8h]
	char v147; // [rsp+2BAh] [rbp+1BAh]
	char v148[280]; // [rsp+2C0h] [rbp+1C0h] BYREF
	int v149; // [rsp+3D8h] [rbp+2D8h]
	char j; // [rsp+440h] [rbp+340h]

	v4 = a1[13];
	v5 = a1[14];
	v7 = a1[2];
	v8 = *(_QWORD*)(v4 + 8);
	v9 = a4;
	if (v7)
		v5 += sub_14088C230(v7);
	v10 = 0i64;
	v11 = 0i64;
	v113 = 0i64;
	v114 = v8 - v5;
	sub_140890370((__int64)v144, (__int64)a1, 0);
	if (!v145)
	{
		sub_14088B850((__int64(__fastcall***)(_QWORD, _QWORD)) * v9);
		*v9 = 0i64;
		return nullsub_1(v144);
	}
	v12 = (__int64*)a1[23];
	v122 = 0i64;
	v13 = 0i64;
	v14 = 0i64;
	if (v12)
	{
		for (i = (__int64*)a1[20]; i; i = (__int64*)*i)
		{
			if (i == v12)
				break;
		}
		v16 = (__int64*)*i;
		if (*i)
		{
			while (1)
			{
				v17 = *v16;
				v121 = __PAIR128__((unsigned __int64)i, *v16);
				if (v16 == (__int64*)a1[20])
					a1[20] = v17;
				else
					*i = v17;
				if (v16 == (__int64*)a1[21])
					a1[21] = i;
				v18 = v121;
				*v16 = 0i64;
				v135 = v18;
				if (v14)
					*v14 = (__int64)v16;
				else
					v13 = (__int64)v16;
				v14 = v16;
				if (!v17)
					break;
				i = (__int64*)*((_QWORD*)&v135 + 1);
				v16 = (__int64*)v135;
			}
			v122 = (_QWORD*)v13;
		}
		(*(void(__fastcall**)(_QWORD*, char*))(*a1 + 104i64))(a1, v144);
	}
	v19 = sub_140898FD0((__int64)a1);
	v20 = a1[16];
	v21 = v19;
	n = v19;
	if (!*(_BYTE*)(v20 + 296)
		|| *(_QWORD*)a3
		|| ((v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19[1] + 120i64))(v19[1])) == 0
			? (v23 = a2 == 0)
			: (v23 = *(_DWORD*)(v22 + 24) == a2),
			!v23))
	{
		if ((*(unsigned __int8(__fastcall**)(__int64))(*(_QWORD*)v21[1] + 128i64))(v21[1]))
		{
			v24 = (__int64*)a1[20];
			++v146;
			for (j = 1; v24; v24 = (__int64*)*v24)
			{
				if (v24 == v21)
					break;
			}
			v109 = v24;
			if ((__int64*)*sub_140890680((__int64)v144, &v135) != v24)
			{
				sub_140890820((__int64)v144, (__int64*)&v109);
				(*(void(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)v109[1] + 96i64))(v109[1], v144, 0i64);
			}
			--v146;
			v25 = 0i64;
			v133 = 0i64;
			v129 = 0;
			while (1)
			{
				if ((*(_BYTE*)(v145 + 60) & 4) != 0)
				{
				LABEL_169:
					if (j)
					{
						if (v10)
						{
							v86 = v10;
							if (v11)
							{
								sub_140898CA0(v10);
								v86 = v11;
							}
							sub_140898F40(v86);
						}
						if (*v9)
						{
							sub_14088B850((__int64(__fastcall***)(_QWORD, _QWORD)) * v9);
							*v9 = 0i64;
						}
						if ((*(unsigned __int8(__fastcall**)(_QWORD))(**(_QWORD**)(a1[21] + 8i64) + 128i64))(*(_QWORD*)(a1[21] + 8i64)))
						{
							v87 = a1[21];
							v88 = *(_BYTE*)(v87 + 72);
							if ((v88 & 4) == 0 || (v88 & 2) != 0)
							{
								*(_BYTE*)(v87 + 72) = v88 & 0xFD;
							}
							else
							{
								v89 = sub_140899F80((int)v114 - *(_DWORD*)(v87 + 56));
								v90 = *(_QWORD*)(v87 + 8);
								LODWORD(v121) = v89;
								*(_QWORD*)((char*)&v121 + 4) = *(unsigned int*)(v87 + 68);
								sub_14088B940(v90, (int*)&v121);
							}
							*(_BYTE*)(v87 + 72) &= ~4u;
							*(_BYTE*)(v87 + 24) = 0;
						}
					}
					sub_14088DEC0((_QWORD*)a1[13], &v133);
					v13 = (__int64)v122;
					goto LABEL_203;
				}
				v26 = sub_140899180((__int64)a1, (__int64)v144, v9, &v129);
				v27 = *v9;
				v28 = v26;
				if (!v27)
					goto LABEL_168;
				v29 = (unsigned int*)*((_QWORD*)v26 + 12);
				v112 = 0i64;
				if (!v29)
					break;
				v30 = *v29;
				v112 = 0i64;
				v31 = sub_140830F00(qword_140C61BA8, v30, 0);
				v32 = (__int64*)v31;
				if (v31)
				{
					v33 = (*(__int64(__fastcall**)(__int64, _QWORD*, _QWORD, __int64))(*(_QWORD*)v31 + 672i64))(
						v31,
						a1,
						*(_QWORD*)(a1[13] + 56i64),
						a1[13] + 24i64);
					v34 = *v32;
					v25 = v33;
					v112 = v33;
					(*(void(__fastcall**)(__int64*))(v34 + 16))(v32);
				}
				if (!v25)
				{
					v36 = *a4;
					v37 = sub_1408819F0(dword_140C10F20, 80i64);
					v10 = v37;
					if (!v37)
					{
						v10 = 0i64;
					LABEL_168:
						v9 = a4;
						goto LABEL_169;
					}
					*(_QWORD*)v37 = 0i64;
					*(_QWORD*)(v37 + 8) = v36;
					if (v36)
						++* (_DWORD*)(v36 + 80);
					*(_QWORD*)(v37 + 16) = 0i64;
					*(_BYTE*)(v37 + 24) = 0;
					*(_BYTE*)(v37 + 72) &= 0xF8u;
				LABEL_62:
					v9 = a4;
					goto LABEL_63;
				}
				v10 = sub_1408819F0(dword_140C10F20, 80i64);
				if (v10)
				{
					*(_QWORD*)v10 = 0i64;
					*(_QWORD*)(v10 + 8) = v25;
					++* (_DWORD*)(v25 + 80);
					*(_QWORD*)(v10 + 16) = 0i64;
					*(_BYTE*)(v10 + 24) = 0;
					*(_BYTE*)(v10 + 72) &= 0xF8u;
				}
				else
				{
					v10 = 0i64;
				}
				v35 = *a4;
				v11 = sub_1408819F0(dword_140C10F20, 80i64);
				v113 = v11;
				if (v11)
				{
					*(_QWORD*)v11 = 0i64;
					*(_QWORD*)(v11 + 8) = v35;
					if (v35)
						++* (_DWORD*)(v35 + 80);
					*(_QWORD*)(v11 + 16) = 0i64;
					*(_BYTE*)(v11 + 24) = 0;
					*(_BYTE*)(v11 + 72) &= 0xF8u;
				}
				else
				{
					v11 = 0i64;
					v113 = 0i64;
				}
				if (v10)
				{
					if (v11)
						goto LABEL_62;
					sub_140898CA0(v10);
				}
				else
				{
					sub_14088B850((__int64(__fastcall***)(_QWORD, _QWORD))v25);
				}
				v112 = 0i64;
				if (v11)
				{
					sub_140898F40(v11);
					v11 = 0i64;
					v113 = 0i64;
				}
				v9 = a4;
				v10 = sub_140898DA0(*a4);
			LABEL_63:
				if (!v10)
					goto LABEL_169;
				v39 = *((_DWORD*)v28 + 16);
				v40 = *((_DWORD*)v28 + 12);
				v41 = *((_DWORD*)v28 + 14);
				HIDWORD(v136) = *((_DWORD*)v28 + 13);
				v128 = *((_DWORD*)v28 + 15);
				LODWORD(v115) = *((_DWORD*)v28 + 17);
				v42 = *((_DWORD*)v28 + 18);
				LODWORD(v136) = v40;
				HIDWORD(v115) = v42;
				v43 = *((_DWORD*)v28 + 19);
				v137 = __PAIR64__(v128, v41);
				LODWORD(v116) = v43;
				v44 = *((_DWORD*)v28 + 20);
				k = v39;
				HIDWORD(v116) = v44;
				v45 = *((_DWORD*)v28 + 21);
				v138 = v39;
				LODWORD(v117) = v45;
				HIDWORD(v117) = *((_DWORD*)v28 + 22);
				v46 = *((_QWORD*)v28 + 12);
				if (v46)
				{
					v130 = *(_QWORD*)(v46 + 4);
					v131 = *(unsigned int*)(v46 + 12);
					WORD2(v132) &= 0xFFF8u;
					WORD2(v132) = WORD2(v132) & 0xFFE7 | (8 * (*(_WORD*)(*((_QWORD*)v28 + 12) + 28i64) & 1));
					v47 = (_DWORD*)*((_QWORD*)v28 + 12);
					v48 = v47[5];
					v49 = v47[4];
					v50 = v47[6];
					LODWORD(v47) = v47[7];
					v123 = __PAIR64__(v48, v49);
					v124 = v50;
					v119 = v125 & 0xFFFFFFC7 | (16 * ((unsigned __int8)v47 & 2)) | 7;
					v125 = v119;
				}
				else
				{
					v132 = v117;
					v119 = v39;
					v130 = v115;
					v125 = v39;
					v131 = v116;
					v123 = v136;
					v49 = v136;
					v124 = v137;
					v50 = v137;
				}
				if (*(_BYTE*)(a3 + 8))
					WORD2(v117) ^= (*(_WORD*)(a3 + 12) ^ WORD2(v117)) & 7;
				LODWORD(v120) = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD, _QWORD, char*, _DWORD))(*(_QWORD*)*a4 + 88i64))(
					*a4,
					&v115,
					0i64,
					*(_QWORD*)a3,
					v118,
					0);
				*(_QWORD*)&v135 = 0i64;
				sub_1408903F0((__int64)v148, 1);
				if (v113)
				{
					v108 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD, _QWORD, char*, _DWORD))(*(_QWORD*)v112 + 88i64))(
						v112,
						&v130,
						0i64,
						0i64,
						v141,
						0);
					v51 = sub_14088C260(v112, 0i64);
					if (v51)
						v52 = sub_140891630(v51);
					else
						v52 = 0;
					v53 = v108;
					v54 = dword_140C110B4 / 0x3E8u * v40 - v41;
					if (v54 > v108)
						v53 = v54;
					v55 = v49 * (dword_140C110B4 / 0x3E8u) - v50;
					v56 = v120;
					v57 = v114 + v53;
					v58 = v120;
					if (v55 > (int)v120)
						v58 = v55;
					v59 = v58 - (__int64)v52;
					v60 = v120;
					v61 = v114 + v59;
					if (v57 > v61)
						v61 = v57;
					if (v55 > (int)v120)
						v60 = v55;
					v140 = v114 + v60;
				}
				else
				{
					v56 = v120;
					v140 = 0i64;
					v62 = v120;
					v108 = v120;
					if ((int)(v40 * (dword_140C110B4 / 0x3E8u) - v41) > (int)v120)
						v62 = v40 * (dword_140C110B4 / 0x3E8u) - v41;
					v61 = v114 + (int)v62;
				}
				v11 = v113;
				v134 = 0;
				v63 = k & 0x1F;
				for (k = v63; ; v63 = k)
				{
					v111 = v128;
					v64 = (BYTE4(v117) & 7) == 1
						|| (v117 & 0x1000000000i64) != 0 && (unsigned __int16)((BYTE4(v117) & 7) - 2) <= 1u;
					v65 = sub_140890530((__int64)v144, v61, v63, &v111, v64, 1, (__int64*)&v109);
					if (v65 == 3 && v147)
					{
						for (m = (_QWORD*)a1[20]; m; m = (_QWORD*)*m)
						{
							if (m == n)
								break;
						}
						v67 = (_QWORD*)*m;
						if (*m)
						{
							while (1)
							{
								v68 = *v67;
								v143 = __PAIR128__((unsigned __int64)m, *v67);
								if (v67 == (_QWORD*)a1[20])
									a1[20] = v68;
								else
									*m = v68;
								if (v67 == (_QWORD*)a1[21])
									a1[21] = m;
								v69 = v143;
								*v67 = 0i64;
								v142 = v69;
								if (v14)
									*v14 = (__int64)v67;
								else
									v122 = v67;
								v14 = v67;
								if (!v68)
									break;
								m = (_QWORD*)*((_QWORD*)&v142 + 1);
								v67 = (_QWORD*)v142;
							}
						}
						(*(void(__fastcall**)(_QWORD*, char*))(*a1 + 104i64))(a1, v144);
						v70 = (BYTE4(v117) & 7) == 1
							|| (v117 & 0x1000000000i64) != 0 && (unsigned __int16)((BYTE4(v117) & 7) - 2) <= 1u;
						v65 = sub_140890530((__int64)v144, v61, k, &v111, v70, 1, (__int64*)&v109);
					}
					if (v11 && v65 == 1)
					{
						*(_QWORD*)(*(_QWORD*)(v10 + 8) + 112i64) = v109;
						++v149;
						v120 = v10;
						sub_140890820((__int64)v148, &v120);
						(*(void(__fastcall**)(_QWORD, char*, _QWORD))(**(_QWORD**)(v120 + 8) + 96i64))(
							*(_QWORD*)(v120 + 8),
							v148,
							0i64);
						--v149;
						v65 = sub_140890530((__int64)v148, v140, v119 & 0x1F, &v134, 1, 1, (__int64*)&v135);
					}
					v71 = BYTE4(v117) & 7;
					if (v71 != 1 && ((v117 & 0x1000000000i64) == 0 || (unsigned __int16)(v71 - 2) > 1u))
						break;
					if (v65 != 1)
						goto LABEL_159;
					if (*(_QWORD*)a3 || !*(_QWORD*)(v145 + 24))
						goto LABEL_137;
					if (v71 == 1)
					{
						v72 = (__int64)v109;
						v73 = sub_1408904A0((__int64)v144, 0);
						v74 = sub_14088FAE0(&v145, v72 - v73);
						v75 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD, _QWORD, char*, _DWORD))(*(_QWORD*)*a4 + 88i64))(
							*a4,
							&v115,
							v74,
							0i64,
							v118,
							0);
					}
					else
					{
						v75 = (*(__int64(__fastcall**)(__int64, __int64*, _QWORD, _QWORD, char*, unsigned int))(*(_QWORD*)*a4 + 88i64))(
							*a4,
							&v115,
							0i64,
							0i64,
							v118,
							v111);
					}
					v56 = v75;
					if (v11)
					{
						v76 = sub_14088C260(v112, 0i64);
						if (v76)
						{
							v75 = v56 - sub_140891630(v76);
							if (v75 < v108)
								v75 = v108;
						}
						else
						{
							v75 = v56;
							if (v56 < v108)
								v75 = v108;
						}
					}
					else
					{
						v108 = v75;
					}
					if (v75 <= (__int64)v109 - v114)
						goto LABEL_137;
					v61 = v75 + v114;
				}
				if (v65 != 1)
				{
				LABEL_159:
					if (v11)
					{
						sub_140898CA0(v10);
						sub_140898F40(v11);
						v11 = 0i64;
						v113 = 0i64;
					}
					else
					{
						sub_140898F40(v10);
					}
					(*(void(__fastcall**)(_QWORD*, char*, _QWORD))(*a1 + 96i64))(a1, v144, 0i64);
					goto LABEL_163;
				}
			LABEL_137:
				++v146;
				v77 = sub_140890680((__int64)v144, &v121);
				v78 = (_QWORD*)a1[20];
				v79 = *v77;
				--v146;
				for (n = (_QWORD*)v79; v78; v78 = (_QWORD*)*v78)
				{
					if (v78 == (_QWORD*)v79)
						break;
				}
				v80 = (_QWORD*)*v78;
				if (*v78)
				{
					while (1)
					{
						v81 = *v80;
						v126 = __PAIR128__((unsigned __int64)v78, *v80);
						if (v80 == (_QWORD*)a1[20])
							a1[20] = v81;
						else
							*v78 = v81;
						if (v80 == (_QWORD*)a1[21])
							a1[21] = v78;
						v82 = v126;
						*v80 = 0i64;
						v127 = v82;
						if (v14)
							*v14 = (__int64)v80;
						else
							v122 = v80;
						v14 = v80;
						if (!v81)
							break;
						v78 = (_QWORD*)*((_QWORD*)&v127 + 1);
						v80 = (_QWORD*)v127;
					}
				}
				(*(void(__fastcall**)(_QWORD*, char*))(*a1 + 104i64))(a1, v144);
				if (*(_BYTE*)(a1[16] + 296i64) && !*(_QWORD*)a3)
				{
					v83 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v79 + 8) + 120i64))(*(_QWORD*)(v79 + 8));
					if (v83 ? *(_DWORD*)(v83 + 24) == a2 : a2 == 0)
					{
						nullsub_1(v148);
						goto LABEL_168;
					}
				}
				a1[23] = v79;
				v85 = v114;
				j = 0;
				sub_14089AE40(a1, v114, v10, (__int64)&v136, &v130, (__int64)v144, v108, (__int64)v109, 0, &v133);
				if (v11)
					sub_14089AE40(a1, v85, v11, (__int64)&v123, &v115, (__int64)v148, v56, v135, 1, &v133);
			LABEL_163:
				nullsub_1(v148);
				v23 = v65 == 1;
				v9 = a4;
				if (v23)
					goto LABEL_169;
				v25 = 0i64;
			}
			v38 = sub_1408819F0(dword_140C10F20, 80i64);
			v10 = v38;
			if (!v38)
			{
				v10 = 0i64;
				goto LABEL_168;
			}
			*(_QWORD*)v38 = 0i64;
			*(_QWORD*)(v38 + 8) = v27;
			++* (_DWORD*)(v27 + 80);
			*(_QWORD*)(v38 + 16) = 0i64;
			*(_BYTE*)(v38 + 24) = 0;
			*(_BYTE*)(v38 + 72) &= 0xF8u;
			goto LABEL_62;
		}
	}
	for (ii = (__int64*)a1[20]; ii; ii = (__int64*)*ii)
	{
		if (ii == v21)
			break;
	}
	v92 = (__int64*)*ii;
	if (*ii)
	{
		while (1)
		{
			v93 = *v92;
			v127 = __PAIR128__((unsigned __int64)ii, *v92);
			if (v92 == (__int64*)a1[20])
				a1[20] = v93;
			else
				*ii = v93;
			if (v92 == (__int64*)a1[21])
				a1[21] = ii;
			v94 = v127;
			*v92 = 0i64;
			v126 = v94;
			if (v14)
				*v14 = (__int64)v92;
			else
				v13 = (__int64)v92;
			v14 = v92;
			if (!v93)
				break;
			ii = (__int64*)*((_QWORD*)&v126 + 1);
			v92 = (__int64*)v126;
		}
	}
	(*(void(__fastcall**)(_QWORD*, char*))(*a1 + 104i64))(a1, v144);
	sub_14088B850((__int64(__fastcall***)(_QWORD, _QWORD)) * v9);
	*v9 = 0i64;
	if ((*(unsigned __int8(__fastcall**)(_QWORD))(**(_QWORD**)(a1[21] + 8i64) + 128i64))(*(_QWORD*)(a1[21] + 8i64)))
	{
		v95 = a1[21];
		v96 = *(_BYTE*)(v95 + 72);
		if ((v96 & 4) == 0 || (v96 & 2) != 0)
		{
			*(_BYTE*)(v95 + 72) = v96 & 0xFD;
		}
		else
		{
			v97 = sub_140899F80((int)v114 - *(_DWORD*)(v95 + 56));
			v98 = *(_QWORD*)(v95 + 8);
			LODWORD(v121) = v97;
			*(_QWORD*)((char*)&v121 + 4) = *(unsigned int*)(v95 + 68);
			sub_14088B940(v98, (int*)&v121);
		}
		*(_BYTE*)(v95 + 72) &= ~4u;
		*(_BYTE*)(v95 + 24) = 0;
	}
LABEL_203:
	v99 = v13;
	v100 = 0i64;
	if (v13)
	{
		while (1)
		{
			v101 = *(_QWORD*)v99;
			*((_QWORD*)&v127 + 1) = v100;
			*(_QWORD*)&v127 = v101;
			if (v99 == v13)
				v13 = v101;
			else
				*v100 = v101;
			v102 = v127;
			v103 = *(__int64(__fastcall****)(_QWORD, _QWORD))(v99 + 8);
			if ((__int64*)v99 == v14)
				v14 = v100;
			*(_BYTE*)(v99 + 72) &= 0xFCu;
			v126 = v102;
			sub_14088B850(v103);
			v104 = *(_QWORD*)(v99 + 8);
			v105 = dword_140C10F20;
			*(_QWORD*)(v99 + 8) = 0i64;
			if (v104)
				sub_14088B630(v104);
			v106 = *(_QWORD*)(v99 + 8);
			if (v106)
			{
				sub_14088B630(v106);
				*(_QWORD*)(v99 + 8) = 0i64;
			}
			sub_140881720(v105, v99);
			if (!v101)
				break;
			v100 = (__int64*)*((_QWORD*)&v126 + 1);
			v99 = v126;
		}
	}
	return nullsub_1(v144);
}
// 14089A3E4: conditional instruction was optimized away because r14.8!=0
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;
// 140C110B4: using guessed type int dword_140C110B4;
// 140899FD0: using guessed type char var_2C8[8];

