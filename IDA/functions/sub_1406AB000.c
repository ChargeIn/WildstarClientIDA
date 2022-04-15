//----- (00000001406AB000) ----------------------------------------------------
__int64 __fastcall sub_1406AB000(_QWORD* a1, int a2, __int64 a3, unsigned __int16** a4)
{
	unsigned __int16** v4; // r12
	__int64 v7; // rax
	__int64 v8; // r14
	__int64 v10; // rdi
	__int64 v11; // rcx
	unsigned __int64 v12; // rsi
	_QWORD* v13; // rbx
	__int64 v14; // r8
	__int64 v15; // rdi
	_QWORD* v16; // r8
	unsigned __int16* v17; // rsi
	__int64 v18; // rbx
	unsigned int* v19; // rdi
	__int64 v20; // r12
	unsigned int v21; // ebx
	__int64 v22; // rax
	unsigned int v23; // ecx
	__int64 v24; // rsi
	__int64 v25; // rax
	__int64 v26; // r14
	int* v27; // rbx
	int* v28; // rcx
	__int64 v29; // rcx
	int* v30; // rdx
	__int64 v31; // rax
	unsigned int v32; // r9d
	__int64* v33; // rdx
	int* v34; // rax
	unsigned __int16* v35; // r9
	int v36; // r8d
	__int64 v37; // rdx
	int v38; // eax
	char v39; // r13
	__int64 v40; // rdi
	unsigned int v41; // ebx
	__int64 v42; // rax
	__int64 v43; // rcx
	int* v44; // r12
	__int16* v45; // rax
	int* v46; // r14
	unsigned __int64 v47; // rbx
	int* v48; // rax
	unsigned __int64 v49; // rbx
	unsigned __int64 v50; // rax
	unsigned __int16* v51; // r13
	unsigned __int64 v52; // r12
	unsigned __int64 v53; // r14
	__int64 v54; // rbx
	__int64 v55; // rcx
	unsigned __int64 v56; // rax
	__int64 v57; // rbx
	__int64 v58; // rax
	int v59; // eax
	int v60; // r13d
	__int64 v61; // rcx
	int v62; // r14d
	_QWORD* v63; // rax
	__int64 v64; // rdx
	unsigned __int64* v65; // r12
	unsigned __int64 v66; // r14
	__int64 v67; // rbx
	__int64 v68; // rax
	__int64 v69; // rcx
	__int64 v70; // rax
	__int64* v71; // rax
	int v72; // r13d
	_QWORD* v73; // rax
	__int64 v74; // r10
	unsigned __int64* v75; // r12
	unsigned __int64 v76; // r14
	__int64 v77; // rbx
	__int64 v78; // rax
	__int64 v79; // rcx
	__int64 v80; // rax
	__int64* v81; // rax
	int* v82; // rbx
	int v83; // r13d
	_QWORD* v84; // rax
	__int64 v85; // r10
	unsigned __int64* v86; // r12
	unsigned __int64 v87; // r14
	__int64 v88; // rbx
	__int64 v89; // rax
	__int64 v90; // rcx
	__int64 v91; // rax
	__int64* v92; // rax
	int v93; // r13d
	_QWORD* v94; // rax
	__int64 v95; // r10
	unsigned __int64* v96; // r12
	unsigned __int64 v97; // r14
	__int64 v98; // rbx
	__int64 v99; // rax
	__int64 v100; // rcx
	__int64 v101; // rax
	__int64* v102; // rax
	int v103; // r13d
	_QWORD* v104; // rax
	__int64 v105; // r10
	unsigned __int64* v106; // r12
	unsigned __int64 v107; // r14
	__int64 v108; // rbx
	__int64 v109; // rax
	__int64 v110; // rcx
	__int64 v111; // rax
	__int64* v112; // rax
	_QWORD* v113; // rax
	__int64 v114; // r10
	__int64 v115; // rdx
	int v116; // r13d
	_QWORD* v117; // rax
	__int64 v118; // r10
	unsigned __int64* v119; // r12
	unsigned __int64 v120; // r14
	__int64 v121; // rbx
	__int64 v122; // rax
	__int64 v123; // rcx
	__int64 v124; // rax
	__int64* v125; // rax
	int v126; // r13d
	_QWORD* v127; // rax
	__int64 v128; // r10
	unsigned __int64* v129; // r12
	unsigned __int64 v130; // r14
	__int64 v131; // rbx
	__int64 v132; // rax
	__int64 v133; // rcx
	__int64 v134; // rax
	__int64* v135; // rax
	__int64 v136; // rdx
	__int64 v137; // r14
	int v138; // eax
	int* v139; // rbx
	__int64 v140; // rcx
	int v141; // r12d
	int* v142; // r13
	__int64 v143; // rdx
	__int64 v144; // r14
	__int64 v145; // rax
	_QWORD* v146; // rax
	__int64 v147; // rdx
	int v148; // r10d
	_QWORD* v149; // rax
	__int64 v150; // r10
	__int64 v151; // rdx
	int v152; // r11d
	_QWORD* v153; // rax
	__int64 v154; // r10
	__int64 v155; // rdx
	int v156; // r11d
	__int64 v157; // rdx
	__int64 v158; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v161; // ebx
	__int64 v162; // rdx
	__int64 v163; // rax
	__int64 k; // rax
	__int64 m; // rax
	unsigned __int16* v166; // rcx
	char v167; // [rsp+20h] [rbp-E0h]
	int* v168; // [rsp+28h] [rbp-D8h] BYREF
	__int64 v169; // [rsp+30h] [rbp-D0h] BYREF
	char v170[8]; // [rsp+38h] [rbp-C8h] BYREF
	int* v171; // [rsp+40h] [rbp-C0h]
	__int64 v172; // [rsp+48h] [rbp-B8h]
	int* v173; // [rsp+58h] [rbp-A8h] BYREF
	int* v174; // [rsp+60h] [rbp-A0h] BYREF
	__int64(__fastcall * *v175)(); // [rsp+68h] [rbp-98h] BYREF
	int v176; // [rsp+70h] [rbp-90h]
	_QWORD* v177; // [rsp+78h] [rbp-88h]
	int v178; // [rsp+80h] [rbp-80h]
	__int64 v179; // [rsp+88h] [rbp-78h] BYREF
	__int64 v180; // [rsp+90h] [rbp-70h]
	char v181[8]; // [rsp+A8h] [rbp-58h] BYREF
	int* v182; // [rsp+B0h] [rbp-50h]
	__int64 v183; // [rsp+B8h] [rbp-48h]
	__int64 v184; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v185; // [rsp+D0h] [rbp-30h]
	_QWORD* v186; // [rsp+D8h] [rbp-28h]
	__int64 v187; // [rsp+E0h] [rbp-20h]
	int* v188; // [rsp+E8h] [rbp-18h] BYREF
	int* v189; // [rsp+F0h] [rbp-10h] BYREF
	int* v190; // [rsp+F8h] [rbp-8h] BYREF
	__int64(__fastcall * *v191)(); // [rsp+100h] [rbp+0h] BYREF
	int v192; // [rsp+108h] [rbp+8h]
	_QWORD* v193; // [rsp+110h] [rbp+10h]
	int v194; // [rsp+118h] [rbp+18h]

	v4 = a4;
	v7 = sub_1406A93C0(a1);
	v8 = v7;
	if (!v7)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		if (*v4)
			(*(void(__fastcall**)(unsigned __int16*, _QWORD))(*((_QWORD*)*v4 - 2) + 8i64))(*v4 - 8, 0i64);
		return 1i64;
	}
	v185 = 0i64;
	v186 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v187 = 0i64;
	if (!*(_QWORD*)(v7 + 440))
	{
		if (*v4)
			(*(void(__fastcall**)(unsigned __int16*, _QWORD))(*((_QWORD*)*v4 - 2) + 8i64))(*v4 - 8, 0i64);
		return 1i64;
	}
	v186 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	if (*(_QWORD*)(v7 + 448))
	{
		do
		{
			v14 = *(_QWORD*)(*(_QWORD*)(v8 + 456) + 8 * v12);
			if (v14)
			{
				do
				{
					v15 = *(_QWORD*)(v14 + 8);
					v16 = *(_QWORD**)(v14 + 24);
					if (v16)
					{
						if (v13 == (_QWORD*)v11)
						{
							sub_1400B4C50(&v184, v13, v16);
							v11 = v187;
							v13 = v186;
						}
						else
						{
							if (v13)
							{
								*v13 = *v16;
								v13[1] = v16[1];
							}
							v13 += 2;
							v186 = v13;
						}
					}
					v14 = v15;
				} while (v15);
			}
			++v12;
		} while (v12 < *(_QWORD*)(v8 + 448));
		v10 = v185;
	}
	v17 = 0i64;
	v182 = sub_14018B280(40i64, 0);
	v183 = 0i64;
	*(_BYTE*)v182 = 0;
	*((_QWORD*)v182 + 1) = 0i64;
	*((_QWORD*)v182 + 2) = v182;
	*((_QWORD*)v182 + 3) = v182;
	v172 = 0i64;
	v171 = sub_14018B280(56i64, 0);
	*(_BYTE*)v171 = 0;
	*((_QWORD*)v171 + 1) = 0i64;
	*((_QWORD*)v171 + 2) = v171;
	v18 = ((__int64)v13 - v10) >> 4;
	*((_QWORD*)v171 + 3) = v171;
	if ((_DWORD)v18)
	{
		v19 = (unsigned int*)(v10 + 8);
		v20 = (unsigned int)v18;
		while (1)
		{
			v21 = *v19;
			if (qword_140C63840)
				break;
			if (!dword_140C646A8 && (int)sub_140203B40() >= 0)
			{
				v22 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65008 + 24i64))(qword_140C65008, v21);
				goto LABEL_24;
			}
		LABEL_72:
			v19 += 4;
			if (!--v20)
			{
				v4 = a4;
				goto LABEL_74;
			}
		}
		v22 = qword_140C63840(off_140A6A718, v21, qword_140C63858);
	LABEL_24:
		if (v22 && *(_DWORD*)(v22 + 8) == a2)
		{
			v23 = *v19;
			v24 = *((_QWORD*)v19 - 1);
			v25 = *((_QWORD*)v171 + 1);
			v26 = *(_QWORD*)v19;
			LODWORD(v175) = *v19;
			v27 = v171;
			if (!v25)
				goto LABEL_37;
			do
			{
				v27 = (int*)v25;
				if (v23 >= *(_DWORD*)(v25 + 32))
					v25 = *(_QWORD*)(v25 + 24);
				else
					v25 = *(_QWORD*)(v25 + 16);
			} while (v25);
			if (v27 == v171 || v23 < v27[8])
			{
			LABEL_37:
				v28 = sub_14018B280(56i64, 0);
				if (v28 != (int*)-32i64)
				{
					*((_QWORD*)v28 + 4) = v175;
					*((_QWORD*)v28 + 5) = v24;
					*((_QWORD*)v28 + 6) = v26;
				}
				*((_QWORD*)v27 + 2) = v28;
				if (v27 == v171)
				{
					*((_QWORD*)v171 + 1) = v28;
					*((_QWORD*)v171 + 3) = v28;
				}
				else if (v27 == *((int**)v171 + 2))
				{
					*((_QWORD*)v171 + 2) = v28;
				}
			}
			else
			{
				v28 = sub_14018B280(56i64, 0);
				if (v28 != (int*)-32i64)
				{
					*((_QWORD*)v28 + 4) = v175;
					*((_QWORD*)v28 + 5) = v24;
					*((_QWORD*)v28 + 6) = v26;
				}
				*((_QWORD*)v27 + 3) = v28;
				if (v27 == *((int**)v171 + 3))
					*((_QWORD*)v171 + 3) = v28;
			}
			v17 = 0i64;
			*((_QWORD*)v28 + 1) = v27;
			*((_QWORD*)v28 + 2) = 0i64;
			*((_QWORD*)v28 + 3) = 0i64;
			sub_1400081C0((__int64)v28, (_QWORD*)v171 + 1);
			++v172;
			v29 = *((_QWORD*)v182 + 1);
			v30 = v182;
			v31 = v29;
			if (!v29)
				goto LABEL_52;
			v32 = *v19;
			do
			{
				if (*(_DWORD*)(v31 + 32) < v32)
				{
					v31 = *(_QWORD*)(v31 + 24);
				}
				else
				{
					v30 = (int*)v31;
					v31 = *(_QWORD*)(v31 + 16);
				}
			} while (v31);
			if (v30 == v182 || v32 < v30[8])
			{
			LABEL_52:
				v189 = v182;
				v33 = (__int64*)&v189;
			}
			else
			{
				v190 = v30;
				v33 = (__int64*)&v190;
			}
			v34 = v182;
			if ((int*)*v33 == v171)
			{
				while (v29)
				{
					if (*(_DWORD*)(v29 + 32) < *v19)
					{
						v29 = *(_QWORD*)(v29 + 24);
					}
					else
					{
						v34 = (int*)v29;
						v29 = *(_QWORD*)(v29 + 16);
					}
				}
				if (v34 == v182 || *v19 < v34[8])
				{
					v169 = *v19;
					v174 = v34;
					sub_140032B30((__int64)v181, &v173, (__int64*)&v174, &v169);
					v34 = v173;
				}
				v34[9] = 1;
			}
			else
			{
				while (v29)
				{
					if (*(_DWORD*)(v29 + 32) < *v19)
					{
						v29 = *(_QWORD*)(v29 + 24);
					}
					else
					{
						v34 = (int*)v29;
						v29 = *(_QWORD*)(v29 + 16);
					}
				}
				if (v34 == v182 || *v19 < v34[8])
				{
					v168 = (int*)*v19;
					v174 = v34;
					sub_140032B30((__int64)v181, &v188, (__int64*)&v174, &v168);
					v34 = v188;
				}
				++v34[9];
			}
		}
		goto LABEL_72;
	}
LABEL_74:
	v35 = *v4;
	if (*v4 != word_1409F6764)
	{
		if (!v35 || (LOWORD(v36) = *v35, v37 = 0i64, *v35))
		{
		LABEL_79:
			v39 = 1;
			goto LABEL_81;
		}
		while ((_WORD)v36)
		{
			v36 = v35[v37 + 1];
			v38 = word_1409F6764[++v37];
			if (v36 != v38)
				goto LABEL_79;
		}
	}
	v39 = 0;
LABEL_81:
	v167 = v39;
	v40 = *((_QWORD*)v182 + 2);
	if ((int*)v40 == v182)
	{
	LABEL_212:
		sub_140008410((__int64)v170);
		sub_14018B900((__int64)v171, 0);
		sub_140008410((__int64)v181);
		sub_14018B900((__int64)v182, 0);
		if (v185)
			sub_14018B900(v185, 0);
		v166 = *v4;
		goto LABEL_215;
	}
	while (1)
	{
		v41 = *(_DWORD*)(v40 + 32);
		if (qword_140C63840)
		{
			v42 = qword_140C63840(off_140A6A718, v41, qword_140C63858);
			goto LABEL_87;
		}
		if (dword_140C646A8 || (int)sub_140203B40() < 0)
			break;
		v42 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65008 + 24i64))(qword_140C65008, v41);
	LABEL_87:
		v44 = (int*)v42;
		v168 = (int*)v42;
		if (!v42)
			break;
		v45 = sub_14034BDD0(v43, *(_DWORD*)(v42 + 12));
		v46 = (int*)v45;
		if (v45)
		{
			v47 = 0i64;
			if (*v45)
			{
				do
					++v47;
				while (v45[v47]);
			}
			v48 = sub_14018B280(2 * v47 + 18, 0);
			if (v48)
			{
				*((_QWORD*)v48 + 1) = v47;
				*(_QWORD*)v48 = off_140B55060;
			}
			else
			{
				v48 = 0i64;
			}
			v17 = (unsigned __int16*)(v48 + 4);
			v49 = v47;
			sub_1407DB590(v48 + 4, v46, v49 * 2);
			v17[v49] = 0;
		}
		if (v39)
		{
			v50 = *((_QWORD*)v17 - 1);
			v51 = *a4;
			v52 = *((_QWORD*)*a4 - 1);
			if (v50 < v52)
				goto LABEL_196;
			v53 = 0i64;
			v54 = (__int64)v17;
			v173 = (int*)(v50 - v52);
			while ((unsigned int)sub_14018E3E0(v54, v51, v52) || v51[v52])
			{
				++v53;
				v54 += 2i64;
				if (v53 > (unsigned __int64)v173)
					goto LABEL_196;
			}
			v44 = v168;
		}
		v55 = a1[4];
		v177 = a1;
		v175 = off_140B569F0;
		v56 = *(_QWORD*)(v55 + 112);
		v178 = 1;
		if (*(_QWORD*)(v55 + 120) >= v56)
			sub_14005E2C0((__int64)a1);
		v57 = a1[2];
		v58 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v57 + 8) = 5;
		*(_QWORD*)v57 = v58;
		a1[2] += 16i64;
		v59 = sub_1400578C0((__int64)a1);
		v60 = *v44;
		v61 = *(_QWORD*)(a1[4] + 160i64);
		v62 = v59;
		v176 = v59;
		v63 = sub_14005C3C0(v61, v59);
		v64 = a1[2];
		*(_QWORD*)v64 = *v63;
		*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
		a1[2] += 16i64;
		v65 = (unsigned __int64*)sub_14018F0E0(&v179, L"nId")[1];
		if (v65)
		{
			v66 = -1i64;
			do
				++v66;
			while (*((_BYTE*)v65 + v66));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v67 = a1[2];
			v68 = sub_140062650((__int64)a1, v65, v66);
			v62 = v176;
			*(_DWORD*)(v67 + 8) = 4;
			*(_QWORD*)v67 = v68;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v69 = v180;
		a1[2] += 16i64;
		if (v69)
			sub_14018B900(v69, 0);
		v70 = a1[2];
		*(_DWORD*)(v70 + 8) = 3;
		*(double*)v70 = (double)v60;
		a1[2] += 16i64;
		v71 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v71, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v72 = *(_DWORD*)(v40 + 36);
		v73 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
		*(_QWORD*)v74 = *v73;
		*(_DWORD*)(v74 + 8) = *((_DWORD*)v73 + 2);
		a1[2] += 16i64;
		v75 = (unsigned __int64*)sub_14018F0E0(&v179, L"nCount")[1];
		if (v75)
		{
			v76 = -1i64;
			do
				++v76;
			while (*((_BYTE*)v75 + v76));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v77 = a1[2];
			v78 = sub_140062650((__int64)a1, v75, v76);
			v62 = v176;
			*(_DWORD*)(v77 + 8) = 4;
			*(_QWORD*)v77 = v78;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v79 = v180;
		a1[2] += 16i64;
		if (v79)
			sub_14018B900(v79, 0);
		v80 = a1[2];
		*(_DWORD*)(v80 + 8) = 3;
		*(double*)v80 = (double)v72;
		a1[2] += 16i64;
		v81 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v81, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v82 = v168;
		v83 = v168[6];
		v84 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
		*(_QWORD*)v85 = *v84;
		*(_DWORD*)(v85 + 8) = *((_DWORD*)v84 + 2);
		a1[2] += 16i64;
		v86 = (unsigned __int64*)sub_14018F0E0(&v179, L"nCost")[1];
		if (v86)
		{
			v87 = -1i64;
			do
				++v87;
			while (*((_BYTE*)v86 + v87));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v88 = a1[2];
			v89 = sub_140062650((__int64)a1, v86, v87);
			v62 = v176;
			*(_DWORD*)(v88 + 8) = 4;
			*(_QWORD*)v88 = v89;
			v82 = v168;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v90 = v180;
		a1[2] += 16i64;
		if (v90)
			sub_14018B900(v90, 0);
		v91 = a1[2];
		*(_DWORD*)(v91 + 8) = 3;
		*(double*)v91 = (double)v83;
		a1[2] += 16i64;
		v92 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v92, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v93 = v82[5];
		v94 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
		*(_QWORD*)v95 = *v94;
		*(_DWORD*)(v95 + 8) = *((_DWORD*)v94 + 2);
		a1[2] += 16i64;
		v96 = (unsigned __int64*)sub_14018F0E0(&v179, L"nHookAssetId")[1];
		if (v96)
		{
			v97 = -1i64;
			do
				++v97;
			while (*((_BYTE*)v96 + v97));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v98 = a1[2];
			v99 = sub_140062650((__int64)a1, v96, v97);
			v62 = v176;
			*(_DWORD*)(v98 + 8) = 4;
			*(_QWORD*)v98 = v99;
			v82 = v168;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v100 = v180;
		a1[2] += 16i64;
		if (v100)
			sub_14018B900(v100, 0);
		v101 = a1[2];
		*(_DWORD*)(v101 + 8) = 3;
		*(double*)v101 = (double)v93;
		a1[2] += 16i64;
		v102 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v102, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v103 = v82[4];
		v104 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
		*(_QWORD*)v105 = *v104;
		*(_DWORD*)(v105 + 8) = *((_DWORD*)v104 + 2);
		a1[2] += 16i64;
		v106 = (unsigned __int64*)sub_14018F0E0(&v179, L"nFlags")[1];
		if (v106)
		{
			v107 = -1i64;
			do
				++v107;
			while (*((_BYTE*)v106 + v107));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v108 = a1[2];
			v109 = sub_140062650((__int64)a1, v106, v107);
			v62 = v176;
			*(_DWORD*)(v108 + 8) = 4;
			*(_QWORD*)v108 = v109;
			v82 = v168;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v110 = v180;
		a1[2] += 16i64;
		if (v110)
			sub_14018B900(v110, 0);
		v111 = a1[2];
		*(_DWORD*)(v111 + 8) = 3;
		*(double*)v111 = (double)v103;
		a1[2] += 16i64;
		v112 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v112, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v113 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
		*(_QWORD*)v114 = *v113;
		*(_DWORD*)(v114 + 8) = *((_DWORD*)v113 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v115, L"strName", v17);
		a1[2] -= 16i64;
		v116 = sub_1406A9170(v82[2]);
		v117 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
		*(_QWORD*)v118 = *v117;
		*(_DWORD*)(v118 + 8) = *((_DWORD*)v117 + 2);
		a1[2] += 16i64;
		v119 = (unsigned __int64*)sub_14018F0E0(&v179, L"eHookType")[1];
		if (v119)
		{
			v120 = -1i64;
			do
				++v120;
			while (*((_BYTE*)v119 + v120));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v121 = a1[2];
			v122 = sub_140062650((__int64)a1, v119, v120);
			v62 = v176;
			*(_DWORD*)(v121 + 8) = 4;
			*(_QWORD*)v121 = v122;
			v82 = v168;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v123 = v180;
		a1[2] += 16i64;
		if (v123)
			sub_14018B900(v123, 0);
		v124 = a1[2];
		*(_DWORD*)(v124 + 8) = 3;
		*(double*)v124 = (double)v116;
		a1[2] += 16i64;
		v125 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v125, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v126 = v82[1];
		v127 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
		*(_QWORD*)v128 = *v127;
		*(_DWORD*)(v128 + 8) = *((_DWORD*)v127 + 2);
		a1[2] += 16i64;
		v129 = (unsigned __int64*)sub_14018F0E0(&v179, L"eDecorType")[1];
		if (v129)
		{
			v130 = -1i64;
			do
				++v130;
			while (*((_BYTE*)v129 + v130));
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v131 = a1[2];
			v132 = sub_140062650((__int64)a1, v129, v130);
			*(_DWORD*)(v131 + 8) = 4;
			*(_QWORD*)v131 = v132;
			v82 = v168;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
		}
		v133 = v180;
		a1[2] += 16i64;
		if (v133)
			sub_14018B900(v133, 0);
		v134 = a1[2];
		*(_DWORD*)(v134 + 8) = 3;
		*(double*)v134 = (double)v126;
		a1[2] += 16i64;
		v135 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v135, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		if (sub_1403ACD90(qword_140C65B70, v82[10], *(_QWORD*)(qword_140C65898 + 25744)))
		{
			LODWORD(v169) = v82[10];
			if ((unsigned int)sub_1403D3470(a1, (int*)&v169))
			{
				sub_1400FB540((__int64)&v175);
				a1[2] -= 16i64;
			}
		}
		v137 = (__int64)a1;
		v193 = a1;
		v194 = 1;
		v191 = off_140B569F0;
		sub_140058900((__int64)a1, v136, 0);
		v138 = sub_1400578C0((__int64)a1);
		v139 = v171;
		v140 = *((_QWORD*)v171 + 1);
		v141 = v138;
		v192 = v138;
		v142 = v171;
		v143 = v140;
		if (v140)
		{
			do
			{
				if ((unsigned int)*v168 >= *(_DWORD*)(v143 + 32))
				{
					v143 = *(_QWORD*)(v143 + 24);
				}
				else
				{
					v142 = (int*)v143;
					v143 = *(_QWORD*)(v143 + 16);
				}
			} while (v143);
			do
			{
				if (*(_DWORD*)(v140 + 32) < (unsigned int)*v168)
				{
					v140 = *(_QWORD*)(v140 + 24);
				}
				else
				{
					v139 = (int*)v140;
					v140 = *(_QWORD*)(v140 + 16);
				}
			} while (v140);
		}
		if (v139 != v142)
		{
			do
			{
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v144 = a1[2];
				v145 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v144 + 8) = 5;
				*(_QWORD*)v144 = v145;
				a1[2] += 16i64;
				LODWORD(v144) = sub_1400578C0((__int64)a1);
				v146 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v144);
				v147 = a1[2];
				*(_QWORD*)v147 = *v146;
				*(_DWORD*)(v147 + 8) = *((_DWORD*)v146 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v147, L"nDecorId", v148);
				a1[2] -= 16i64;
				v149 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v144);
				*(_QWORD*)v150 = *v149;
				*(_DWORD*)(v150 + 8) = *((_DWORD*)v149 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v151, L"nDecorIdHi", v152);
				a1[2] -= 16i64;
				v153 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v144);
				*(_QWORD*)v154 = *v153;
				*(_DWORD*)(v154 + 8) = *((_DWORD*)v153 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v155, L"idColorShift", v156);
				a1[2] -= 16i64;
				sub_1400FB1D0((__int64)&v191);
				sub_1400579E0((__int64)a1, v157, v144);
				v158 = *((_QWORD*)v139 + 3);
				if (v158)
				{
					v139 = (int*)*((_QWORD*)v139 + 3);
					for (i = *(_QWORD*)(v158 + 16); i; i = *(_QWORD*)(i + 16))
						v139 = (int*)i;
				}
				else
				{
					for (j = *((_QWORD*)v139 + 1); v139 == *(int**)(j + 24); j = *(_QWORD*)(j + 8))
						v139 = (int*)j;
					if (*((_QWORD*)v139 + 3) != j)
						v139 = (int*)j;
				}
			} while (v139 != v142);
			v137 = (__int64)v193;
			v141 = v192;
		}
		sub_1400FB2A0((__int64)&v175, (__int64)L"tDecorItems", v141);
		v161 = v176;
		sub_1400FB1D0(a3);
		if (v137)
			sub_1400579E0(v137, v162, v141);
		sub_1400579E0((__int64)a1, v162, v161);
	LABEL_196:
		if (v17)
			(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 8);
		v163 = *(_QWORD*)(v40 + 24);
		if (v163)
		{
			v40 = *(_QWORD*)(v40 + 24);
			for (k = *(_QWORD*)(v163 + 16); k; k = *(_QWORD*)(k + 16))
				v40 = k;
		}
		else
		{
			for (m = *(_QWORD*)(v40 + 8); v40 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
				v40 = m;
			if (*(_QWORD*)(v40 + 24) != m)
				v40 = m;
		}
		if ((int*)v40 == v182)
		{
			v4 = a4;
			goto LABEL_212;
		}
		v39 = v167;
		v17 = 0i64;
	}
	sub_140008410((__int64)v170);
	sub_14018B900((__int64)v171, 0);
	sub_140008410((__int64)v181);
	sub_14018B900((__int64)v182, 0);
	if (v185)
		sub_14018B900(v185, 0);
	v166 = *a4;
LABEL_215:
	if (v166)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v166 - 2) + 8i64))(v166 - 8);
	return 1i64;
}
// 1406ABDAB: conditional instruction was optimized away because rcx.8!=0
// 1406AB4D0: variable 'v43' is possibly undefined
// 1406AB707: variable 'v74' is possibly undefined
// 1406AB7FC: variable 'v85' is possibly undefined
// 1406AB8F6: variable 'v95' is possibly undefined
// 1406AB9EB: variable 'v105' is possibly undefined
// 1406ABAE5: variable 'v114' is possibly undefined
// 1406ABAF7: variable 'v115' is possibly undefined
// 1406ABB2D: variable 'v118' is possibly undefined
// 1406ABC26: variable 'v128' is possibly undefined
// 1406ABD60: variable 'v136' is possibly undefined
// 1406ABE4A: variable 'v148' is possibly undefined
// 1406ABE80: variable 'v150' is possibly undefined
// 1406ABE92: variable 'v151' is possibly undefined
// 1406ABE92: variable 'v152' is possibly undefined
// 1406ABEC4: variable 'v154' is possibly undefined
// 1406ABED6: variable 'v155' is possibly undefined
// 1406ABED6: variable 'v156' is possibly undefined
// 1406ABEF2: variable 'v157' is possibly undefined
// 1406ABF84: variable 'v162' is possibly undefined
// 1409F6764: using guessed type unsigned __int16 word_1409F6764[88];
// 140A6A718: using guessed type wchar_t *off_140A6A718[2];
// 140B36460: using guessed type wchar_t aNflags_0[7];
// 140B36470: using guessed type wchar_t aStrname_79[8];
// 140B36480: using guessed type wchar_t aNcost_2[6];
// 140B36490: using guessed type wchar_t aNhookassetid[13];
// 140B364B0: using guessed type wchar_t aNid_27[4];
// 140B364B8: using guessed type wchar_t aNcount_45[7];
// 140B36608: using guessed type wchar_t aTdecoritems[12];
// 140B36620: using guessed type wchar_t aNdecoridhi[11];
// 140B36638: using guessed type wchar_t aIdcolorshift[13];
// 140B36668: using guessed type wchar_t aNdecorid[9];
// 140B36680: using guessed type wchar_t aEhooktype[10];
// 140B36698: using guessed type wchar_t aEdecortype[11];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646A8: using guessed type int dword_140C646A8;
// 140C65008: using guessed type __int64 qword_140C65008;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1406AB000: using guessed type char var_A8[8];
// 1406AB000: using guessed type char var_118[8];

