//----- (000000014044B750) ----------------------------------------------------
__int64 __fastcall sub_14044B750(__int64 a1, unsigned int* a2)
{
	__int64* v2; // r15
	unsigned int* v3; // rsi
	bool v4; // zf
	unsigned __int64 v6; // rbx
	int* v7; // r12
	int* v8; // rax
	__int64 v9; // rax
	unsigned __int64 v10; // rcx
	__int64 v11; // r13
	unsigned int v12; // r9d
	__int64 v13; // r14
	unsigned __int64 v14; // rdx
	unsigned __int64 v15; // rbx
	unsigned int v16; // r8d
	unsigned __int64 v17; // r14
	int* v18; // rdi
	int* v19; // rdx
	__int64 v20; // rcx
	unsigned int* v21; // rbx
	__int64 v22; // r14
	int* v23; // rsi
	__int64 v24; // rbx
	int* v25; // rax
	int* v26; // rdi
	unsigned __int64 v27; // rbx
	__int64 v28; // r14
	int* v29; // rsi
	__int64 v30; // rbx
	int* v31; // rax
	int* v32; // rdi
	unsigned __int64 v33; // rbx
	unsigned __int64 v34; // rcx
	__int64 v35; // rdx
	__int64 v36; // r13
	__int64 v37; // rax
	__int64 v38; // rcx
	__int128 v39; // xmm1
	__int128 v40; // xmm1
	int* v41; // rax
	__int64 v42; // rsi
	__int64 v43; // rbx
	int* v44; // rax
	int* v45; // rdi
	int* v46; // rdx
	__int64 v47; // rcx
	int v48; // eax
	int* v49; // r14
	__int64 v50; // r15
	__int64 v51; // rbx
	int* v52; // rax
	int* v53; // rdi
	unsigned __int64 v54; // rbx
	int* v55; // r14
	__int64 v56; // r15
	__int64 v57; // rbx
	int* v58; // rax
	int* v59; // rdi
	unsigned __int64 v60; // rbx
	unsigned __int64 v61; // rdi
	char v62; // al
	__int64 v63; // r8
	bool v64; // al
	_QWORD* v65; // rdx
	_QWORD* v66; // rbx
	_QWORD* v67; // rcx
	_QWORD* i; // rax
	_QWORD* v69; // rax
	int* v70; // rcx
	__int64 v71; // rax
	_QWORD* v72; // rax
	__int64 v73; // r12
	__int64 v74; // r14
	__int64 v75; // rbx
	int* v76; // rax
	int* v77; // rdx
	int* v78; // rdi
	__int64 v79; // rcx
	__int64 v80; // rbx
	__int64 v81; // r12
	_DWORD* v82; // rdi
	__int64 v83; // rbx
	int* v84; // rax
	int* v85; // rdx
	int* v86; // r14
	__int64 v87; // rcx
	_DWORD* v88; // rbx
	int v89; // ecx
	int v90; // ecx
	int v91; // eax
	__int64 v92; // rbx
	int* v93; // rax
	int* v94; // rdi
	int* v95; // rdx
	__int64 v96; // rcx
	__int64 v97; // rcx
	__int64 v98; // rdx
	unsigned __int64 v99; // rax
	unsigned __int64 v100; // r15
	__int64 v101; // rcx
	__int64 v102; // r13
	unsigned __int64 v103; // r8
	unsigned __int64 v104; // rdx
	unsigned int v105; // r10d
	__int64 v106; // rdi
	unsigned __int64 v107; // rcx
	__int64 v108; // rax
	__int64 v109; // rdi
	__int64 v110; // rbx
	int* v111; // rax
	int* v112; // rsi
	int* v113; // rdx
	__int64 v114; // rcx
	unsigned __int64 v115; // rbx
	__int64 v116; // rcx
	__int64 v117; // r8
	__int64 v118; // r9
	__int64 v119; // rcx
	int* v120; // rax
	unsigned __int64 v121; // rax
	__int64 v123; // [rsp+28h] [rbp-61h] BYREF
	__int64 v124; // [rsp+30h] [rbp-59h]
	__int64* v125; // [rsp+38h] [rbp-51h]
	__int64 v126; // [rsp+40h] [rbp-49h] BYREF
	int* v127; // [rsp+48h] [rbp-41h]
	unsigned __int64 v128; // [rsp+50h] [rbp-39h]
	int* v129; // [rsp+58h] [rbp-31h] BYREF
	__int128 v130; // [rsp+60h] [rbp-29h]
	__int128 v131; // [rsp+70h] [rbp-19h]
	__int128 v132; // [rsp+80h] [rbp-9h]
	__int128 v133; // [rsp+90h] [rbp+7h]
	__int128 v134; // [rsp+A0h] [rbp+17h]
	char v135[16]; // [rsp+B0h] [rbp+27h] BYREF

	v2 = (__int64*)qword_140C65908;
	v3 = a2;
	v4 = *(_DWORD*)(qword_140C65908 + 8) == 0;
	v125 = (__int64*)qword_140C65908;
	if (v4)
		return 1i64;
	v6 = 0i64;
	v128 = 0i64;
	if (!*a2)
		return 0i64;
	do
	{
		v7 = sub_14018B280(96i64, 0);
		v127 = v7;
		if (v7)
		{
			v8 = sub_14018B280(40i64, 0);
			*((_QWORD*)v7 + 4) = 0i64;
			*((_QWORD*)v7 + 3) = v8;
			*(_BYTE*)v8 = 0;
			*(_QWORD*)(*((_QWORD*)v7 + 3) + 8i64) = 0i64;
			*(_QWORD*)(*((_QWORD*)v7 + 3) + 16i64) = *((_QWORD*)v7 + 3);
			*(_QWORD*)(*((_QWORD*)v7 + 3) + 24i64) = *((_QWORD*)v7 + 3);
			*((_QWORD*)v7 + 6) = 0i64;
			*((_QWORD*)v7 + 7) = 0i64;
			*((_QWORD*)v7 + 9) = 0i64;
			*((_QWORD*)v7 + 8) = 0i64;
			*((_QWORD*)v7 + 11) = 0i64;
			*((_QWORD*)v7 + 10) = 0i64;
		}
		else
		{
			v7 = 0i64;
			v127 = 0i64;
		}
		v9 = *((_QWORD*)v3 + 1);
		v10 = 0i64;
		v11 = v6 << 6;
		v124 = v6 << 6;
		v12 = *(_DWORD*)((v6 << 6) + v9);
		*v7 = v12;
		v13 = v2[12];
		v14 = v13;
		if (v13)
		{
			do
			{
				v15 = v10 + ((v14 - v10) >> 1);
				v16 = **(_DWORD**)(v2[11] + 8 * v15);
				if (v12 < v16)
				{
					v14 = v10 + ((v14 - v10) >> 1);
				}
				else
				{
					if (v12 <= v16)
						goto LABEL_14;
					v10 = v15 + 1;
				}
			} while (v10 < v14);
		}
		v15 = v10;
	LABEL_14:
		v17 = v13 + 1;
		v18 = sub_14018DB00(v2[11], v17, 8i64);
		sub_1407DB590(&v18[2 * v15 + 2], (int*)(8 * v15 + v2[11]), 8 * (v2[12] - v15));
		*(_QWORD*)&v18[2 * v15] = v7;
		v19 = (int*)v2[11];
		if (v19 != v18)
		{
			sub_1407DB590(v18, v19, 8 * v15);
			v20 = v2[11];
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			v2[11] = (__int64)v18;
		}
		v21 = a2;
		v2[12] = v17;
		v7[2] = *(_DWORD*)(*((_QWORD*)a2 + 1) + v11 + 4);
		v22 = *((_QWORD*)v7 + 6);
		v23 = *(int**)(*((_QWORD*)a2 + 1) + v11 + 8);
		if (v23)
		{
			v24 = 0i64;
			if (*(_WORD*)v23)
			{
				do
					++v24;
				while (*((_WORD*)v23 + v24));
			}
			v25 = sub_14018B280(2 * v24 + 18, 0);
			if (v25)
			{
				*((_QWORD*)v25 + 1) = v24;
				*(_QWORD*)v25 = off_140B55060;
			}
			else
			{
				v25 = 0i64;
			}
			v26 = v25 + 4;
			v27 = 2 * v24;
			sub_1407DB590(v25 + 4, v23, v27);
			*(_WORD*)((char*)v26 + v27) = 0;
			v21 = a2;
			*((_QWORD*)v7 + 6) = v26;
		}
		else
		{
			*((_QWORD*)v7 + 6) = 0i64;
		}
		if (v22)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
		v28 = *((_QWORD*)v7 + 7);
		v29 = *(int**)(*((_QWORD*)v21 + 1) + v11 + 16);
		if (v29)
		{
			v30 = 0i64;
			if (*(_WORD*)v29)
			{
				do
					++v30;
				while (*((_WORD*)v29 + v30));
			}
			v31 = sub_14018B280(2 * v30 + 18, 0);
			if (v31)
			{
				*((_QWORD*)v31 + 1) = v30;
				*(_QWORD*)v31 = off_140B55060;
			}
			else
			{
				v31 = 0i64;
			}
			v32 = v31 + 4;
			v33 = 2 * v30;
			sub_1407DB590(v31 + 4, v29, v33);
			*(_WORD*)((char*)v32 + v33) = 0;
			*((_QWORD*)v7 + 7) = v32;
		}
		else
		{
			*((_QWORD*)v7 + 7) = 0i64;
		}
		if (v28)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
		v3 = a2;
		v7[1] = *(_DWORD*)(*((_QWORD*)a2 + 1) + v11 + 24);
		v34 = 0i64;
		v35 = v11 + *((_QWORD*)a2 + 1);
		v123 = 0i64;
		if (*(_DWORD*)(v35 + 28))
		{
			v36 = (__int64)(v2 + 43);
			while (1)
			{
				v37 = *(_QWORD*)(v35 + 32);
				v38 = 10 * v34;
				v39 = *(_OWORD*)(v37 + 8 * v38 + 16);
				v130 = *(_OWORD*)(v37 + 8 * v38);
				v131 = v39;
				v40 = *(_OWORD*)(v37 + 8 * v38 + 48);
				v132 = *(_OWORD*)(v37 + 8 * v38 + 32);
				v133 = v40;
				v134 = *(_OWORD*)(v37 + 8 * v38 + 64);
				v41 = sub_14018B280(104i64, 0);
				v42 = (__int64)v41;
				if (v41)
				{
					*((_QWORD*)v41 + 2) = 0i64;
					*((_QWORD*)v41 + 1) = 0i64;
					*((_QWORD*)v41 + 5) = 0i64;
					*((_QWORD*)v41 + 4) = 0i64;
					*((_QWORD*)v41 + 9) = 0i64;
					*((_QWORD*)v41 + 10) = 0i64;
					*((_QWORD*)v41 + 12) = 0i64;
					*((_QWORD*)v41 + 11) = 0i64;
				}
				else
				{
					v42 = 0i64;
				}
				v43 = v2[14];
				v44 = sub_14018DB00(v2[13], v43 + 1, 8i64);
				v45 = v44;
				*(_QWORD*)&v44[2 * v43] = v42;
				v46 = (int*)v2[13];
				if (v46 != v44)
				{
					sub_1407DB590(v44, v46, 8 * v2[14]);
					v47 = v2[13];
					if (v47)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v47 - 16) + 8i64))(v47 - 16);
					v2[13] = (__int64)v45;
				}
				v48 = v130;
				v2[14] = v43 + 1;
				v49 = (int*)*((_QWORD*)&v130 + 1);
				*(_DWORD*)v42 = v48;
				v50 = *(_QWORD*)(v42 + 72);
				if (v49)
				{
					v51 = 0i64;
					if (*(_WORD*)v49)
					{
						do
							++v51;
						while (*((_WORD*)v49 + v51));
					}
					v52 = sub_14018B280(2 * v51 + 18, 0);
					if (v52)
					{
						*((_QWORD*)v52 + 1) = v51;
						*(_QWORD*)v52 = off_140B55060;
					}
					else
					{
						v52 = 0i64;
					}
					v53 = v52 + 4;
					v54 = 2 * v51;
					sub_1407DB590(v52 + 4, v49, v54);
					*(_WORD*)((char*)v53 + v54) = 0;
					*(_QWORD*)(v42 + 72) = v53;
				}
				else
				{
					*(_QWORD*)(v42 + 72) = 0i64;
				}
				if (v50)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v50 - 16) + 8i64))(v50 - 16);
				v55 = (int*)v131;
				v56 = *(_QWORD*)(v42 + 80);
				if ((_QWORD)v131)
				{
					v57 = 0i64;
					if (*(_WORD*)v131)
					{
						do
							++v57;
						while (*(_WORD*)(v131 + 2 * v57));
					}
					v58 = sub_14018B280(2 * v57 + 18, 0);
					if (v58)
					{
						*((_QWORD*)v58 + 1) = v57;
						*(_QWORD*)v58 = off_140B55060;
					}
					else
					{
						v58 = 0i64;
					}
					v59 = v58 + 4;
					v60 = 2 * v57;
					sub_1407DB590(v58 + 4, v55, v60);
					*(_WORD*)((char*)v59 + v60) = 0;
					*(_QWORD*)(v42 + 80) = v59;
				}
				else
				{
					*(_QWORD*)(v42 + 80) = 0i64;
				}
				if (v56)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v56 - 16) + 8i64))(v56 - 16);
				v61 = *((_QWORD*)&v132 + 1);
				*(_DWORD*)(v42 + 48) = v132;
				v62 = v133;
				*(_QWORD*)(v42 + 56) = v61;
				*(_BYTE*)(v42 + 64) = v62;
				*(_QWORD*)(v42 + 24) = *((_QWORD*)&v131 + 1);
				v63 = *(_QWORD*)(v36 + 8);
				v64 = 1;
				v65 = *(_QWORD**)(v63 + 8);
				v66 = (_QWORD*)v63;
				while (v65)
				{
					v66 = v65;
					v64 = v61 < v65[4];
					if (v61 >= v65[4])
						v65 = (_QWORD*)v65[3];
					else
						v65 = (_QWORD*)v65[2];
				}
				v67 = v66;
				if (v64)
				{
					if (v66 == *(_QWORD**)(v63 + 16))
						goto LABEL_84;
					if (*(_BYTE*)v66 || *(_QWORD**)(v66[1] + 8i64) != v66)
					{
						v67 = (_QWORD*)v66[2];
						if (v67)
						{
							for (i = (_QWORD*)v67[3]; i; i = (_QWORD*)i[3])
								v67 = i;
						}
						else
						{
							v67 = (_QWORD*)v66[1];
							if (v66 == (_QWORD*)v67[2])
							{
								do
								{
									v69 = v67;
									v67 = (_QWORD*)v67[1];
								} while (v69 == (_QWORD*)v67[2]);
							}
						}
					}
					else
					{
						v67 = (_QWORD*)v66[3];
					}
				}
				if (v67[4] < v61)
				{
				LABEL_84:
					if (v66 == (_QWORD*)v63 || v61 < v66[4])
					{
						v70 = sub_14018B280(40i64, 0);
						if (v70 != (int*)-32i64)
							*((_QWORD*)v70 + 4) = v61;
						v66[2] = v70;
						v72 = *(_QWORD**)(v36 + 8);
						if (v66 == v72)
						{
							v72[1] = v70;
							*(_QWORD*)(*(_QWORD*)(v36 + 8) + 24i64) = v70;
						}
						else if (v66 == (_QWORD*)v72[2])
						{
							v72[2] = v70;
						}
					}
					else
					{
						v70 = sub_14018B280(40i64, 0);
						if (v70 != (int*)-32i64)
							*((_QWORD*)v70 + 4) = v61;
						v66[3] = v70;
						v71 = *(_QWORD*)(v36 + 8);
						if (v66 == *(_QWORD**)(v71 + 24))
							*(_QWORD*)(v71 + 24) = v70;
					}
					*((_QWORD*)v70 + 1) = v66;
					*((_QWORD*)v70 + 2) = 0i64;
					*((_QWORD*)v70 + 3) = 0i64;
					sub_1400081C0((__int64)v70, (_QWORD*)(*(_QWORD*)(v36 + 8) + 8i64));
					++* (_QWORD*)(v36 + 16);
				}
				v73 = DWORD1(v133);
				if (DWORD1(v133))
				{
					v74 = *((_QWORD*)&v133 + 1) + 12i64;
					do
					{
						v75 = *(_QWORD*)(v42 + 40);
						v76 = sub_14018DB00(*(_QWORD*)(v42 + 32), v75 + 1, 32i64);
						v77 = *(int**)(v42 + 32);
						v78 = v76;
						if (v77 != v76)
						{
							sub_1407DB590(v76, v77, 32i64 * *(_QWORD*)(v42 + 40));
							v79 = *(_QWORD*)(v42 + 32);
							if (v79)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v79 - 16) + 8i64))(v79 - 16);
							*(_QWORD*)(v42 + 32) = v78;
						}
						*(_QWORD*)(v42 + 40) = v75 + 1;
						v80 = *(_QWORD*)(v42 + 32) + 32 * v75;
						*(_DWORD*)v80 = *(_DWORD*)(v74 - 12);
						*(_DWORD*)(v80 + 8) = *(_DWORD*)(v74 - 4);
						*(_DWORD*)(v80 + 12) = *(_DWORD*)v74;
						*(_QWORD*)(v80 + 16) = *(_QWORD*)(v74 + 4);
						*(_QWORD*)(v80 + 24) = *(_QWORD*)(v74 + 12);
						*(_DWORD*)(v80 + 4) = *(_DWORD*)(v74 - 8);
						sub_140007810(v36, (__int64)v135, (unsigned __int64*)(v74 + 12));
						v74 += 32i64;
						--v73;
					} while (v73);
				}
				v81 = (unsigned int)v134;
				if ((_DWORD)v134)
				{
					v82 = (_DWORD*)(*((_QWORD*)&v134 + 1) + 4i64);
					do
					{
						v83 = *(_QWORD*)(v42 + 16);
						v84 = sub_14018DB00(*(_QWORD*)(v42 + 8), v83 + 1, 16i64);
						v85 = *(int**)(v42 + 8);
						v86 = v84;
						if (v85 != v84)
						{
							sub_1407DB590(v84, v85, 16i64 * *(_QWORD*)(v42 + 16));
							v87 = *(_QWORD*)(v42 + 8);
							if (v87)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v87 - 16) + 8i64))(v87 - 16);
							*(_QWORD*)(v42 + 8) = v86;
						}
						*(_QWORD*)(v42 + 16) = v83 + 1;
						v88 = (_DWORD*)(*(_QWORD*)(v42 + 8) + 16 * v83);
						*v88 = *(v82 - 1);
						v89 = *(v82 - 1);
						if (!v89)
							goto LABEL_113;
						v90 = v89 - 1;
						if (!v90)
						{
							v88[1] = *v82;
							v88[2] = v82[1];
							goto LABEL_114;
						}
						if (v90 == 1)
							LABEL_113:
						v88[1] = *v82;
					LABEL_114:
						v91 = v82[2];
						v82 += 4;
						v88[3] = v91;
						--v81;
					} while (v81);
				}
				v2 = v125;
				sub_14044D0A0((__int64)v125, (__int64*)(v42 + 88), v42);
				v7 = v127;
				v92 = *((_QWORD*)v127 + 9);
				v93 = sub_14018DB00(*((_QWORD*)v127 + 8), v92 + 1, 8i64);
				v94 = v93;
				*(_QWORD*)&v93[2 * v92] = v42;
				v95 = (int*)*((_QWORD*)v7 + 8);
				if (v95 != v93)
				{
					sub_1407DB590(v93, v95, 8i64 * *((_QWORD*)v7 + 9));
					v96 = *((_QWORD*)v7 + 8);
					if (v96)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v96 - 16) + 8i64))(v96 - 16);
					*((_QWORD*)v7 + 8) = v94;
				}
				v97 = v123;
				v3 = a2;
				v98 = v124;
				*((_QWORD*)v7 + 9) = v92 + 1;
				v35 = *((_QWORD*)a2 + 1) + v98;
				v34 = v97 + 1;
				v99 = *(unsigned int*)(v35 + 28);
				v123 = v34;
				if (v34 >= v99)
				{
					v11 = v124;
					break;
				}
			}
		}
		v100 = 0i64;
		v101 = v11 + *((_QWORD*)v3 + 1);
		if (!*(_DWORD*)(v101 + 40))
			goto LABEL_139;
		v102 = (__int64)v125;
		do
		{
			v103 = *(_QWORD*)(v102 + 80);
			v104 = 0i64;
			v105 = *(_DWORD*)(*(_QWORD*)(v101 + 48) + 4 * v100);
			if (!v103)
				goto LABEL_137;
			while (1)
			{
				v107 = v104 + ((v103 - v104) >> 1);
				v106 = *(_QWORD*)(v102 + 72);
				v108 = *(_QWORD*)(v106 + 8 * v107);
				if (v105 < *(_DWORD*)v108)
				{
					v103 = v104 + ((v103 - v104) >> 1);
					goto LABEL_129;
				}
				if (v105 <= *(_DWORD*)v108)
					break;
				v104 = v107 + 1;
			LABEL_129:
				if (v104 >= v103)
					goto LABEL_137;
			}
			v109 = *(_QWORD*)(v106 + 8 * v107);
			if (v108)
			{
				v110 = *(_QWORD*)(v108 + 40);
				v111 = sub_14018DB00(*(_QWORD*)(v108 + 32), v110 + 1, 8i64);
				v112 = v111;
				*(_QWORD*)&v111[2 * v110] = v7;
				v113 = *(int**)(v109 + 32);
				if (v113 != v111)
				{
					sub_1407DB590(v111, v113, 8i64 * *(_QWORD*)(v109 + 40));
					v114 = *(_QWORD*)(v109 + 32);
					if (v114)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v114 - 16) + 8i64))(v114 - 16);
					*(_QWORD*)(v109 + 32) = v112;
				}
				v3 = a2;
				*(_QWORD*)(v109 + 40) = v110 + 1;
			}
		LABEL_137:
			++v100;
			v101 = *((_QWORD*)v3 + 1) + v124;
		} while (v100 < *(unsigned int*)(v101 + 40));
		v11 = v124;
	LABEL_139:
		v115 = 0i64;
		v116 = v11 + *((_QWORD*)v3 + 1);
		if (*(_DWORD*)(v116 + 40))
		{
			do
			{
				v117 = *((_QWORD*)v7 + 3);
				v118 = *(_QWORD*)(v116 + 48);
				v119 = *(_QWORD*)(v117 + 8);
				v120 = (int*)v117;
				while (v119)
				{
					if (*(_DWORD*)(v119 + 32) < *(_DWORD*)(v118 + 4 * v115))
					{
						v119 = *(_QWORD*)(v119 + 24);
					}
					else
					{
						v120 = (int*)v119;
						v119 = *(_QWORD*)(v119 + 16);
					}
				}
				if (v120 == (int*)v117 || *(_DWORD*)(v118 + 4 * v115) < (unsigned int)v120[8])
				{
					v126 = *(unsigned int*)(v118 + 4 * v115);
					v123 = (__int64)v120;
					sub_140032B30((__int64)(v7 + 4), &v129, &v123, &v126);
					v120 = v129;
				}
				++v115;
				v120[9] = *(_DWORD*)(*(_QWORD*)(*((_QWORD*)v3 + 1) + v11 + 56) + 4 * v115 - 4);
				v116 = v11 + *((_QWORD*)v3 + 1);
			} while (v115 < *(unsigned int*)(v116 + 40));
		}
		v121 = *v3;
		v2 = v125;
		v6 = v128 + 1;
		v128 = v6;
	} while (v6 < v121);
	return 0i64;
}
// 14044BCEF: conditional instruction was optimized away because rdx.8==0
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65908: using guessed type __int64 qword_140C65908;
// 14044B750: using guessed type char var_30[16];

