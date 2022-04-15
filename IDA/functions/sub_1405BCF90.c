//----- (00000001405BCF90) ----------------------------------------------------
__int64 __fastcall sub_1405BCF90(_QWORD* a1)
{
	unsigned int v2; // eax
	unsigned int v3; // r15d
	unsigned int i; // r14d
	__int64 v5; // rax
	int* v6; // rbx
	int* v7; // rax
	int* v8; // rsi
	__int64 v9; // r9
	unsigned int v10; // r8d
	__int64 v11; // rdx
	__int64 v12; // rbx
	bool v13; // al
	__int64 v14; // rcx
	__int64 j; // rax
	__int64 v16; // rax
	int* v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rax
	unsigned int v20; // eax
	unsigned int v21; // r14d
	_DWORD* v22; // rsi
	unsigned int v23; // ebx
	__int64 v24; // rax
	__int64 v25; // r8
	unsigned int v26; // r10d
	__int64 v27; // r9
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64* v30; // rax
	unsigned int v31; // ecx
	unsigned int v32; // eax
	unsigned int v33; // r15d
	unsigned int k; // r14d
	__int64 v35; // rax
	__int64 v36; // rsi
	__int64 v37; // rax
	__int64 v38; // r9
	__int64 v39; // r8
	__int64 v40; // rdx
	__int64 v41; // rcx
	__int64* v42; // rcx
	unsigned int v43; // r8d
	__int64 v44; // rbx
	bool v45; // al
	__int64 v46; // rcx
	__int64 m; // rax
	__int64 v48; // rax
	int* v49; // rcx
	__int64 v50; // rax
	__int64 v51; // rax
	_DWORD* v52; // r15
	unsigned int v53; // eax
	unsigned int v54; // r14d
	unsigned int v55; // esi
	__int64 v56; // rax
	__int64 v57; // r13
	unsigned int v58; // edx
	__int64 v59; // r8
	int* v60; // rcx
	__int64 v61; // rax
	__int64* v62; // rax
	__int64 v63; // rax
	int* v64; // rax
	__int64* v65; // rsi
	__int64 v66; // r9
	unsigned int v67; // r8d
	bool v68; // al
	__int64 v69; // rdx
	__int64 v70; // rbx
	__int64 v71; // rcx
	int* v72; // rcx
	__int64 v73; // rax
	__int64 v74; // rax
	__int64 n; // rax
	__int64 v76; // rax
	__int64 v77; // rax
	__int64 v78; // rax
	__int64 v79; // rbx
	int* v80; // rax
	int* v81; // r14
	unsigned int v82; // ebx
	__int64 v83; // rax
	__int64 v84; // r8
	__int64 v85; // rcx
	__int64 v86; // rax
	__int64* v87; // rax
	__int64 v88; // rdx
	unsigned int v89; // r13d
	__int64 result; // rax
	unsigned int v91; // eax
	__int64 v92; // rax
	__int64 v93; // r14
	__int64(__fastcall * v94)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v95; // ebx
	_DWORD* v96; // rax
	int v97; // ecx
	unsigned int v98; // ebx
	_DWORD* v99; // rax
	unsigned int v100; // ecx
	__int64 v101; // rdx
	int* v102; // rbx
	__int64 v103; // rax
	__int64 v104; // rsi
	int* v105; // rax
	int* v106; // r15
	int* v107; // rdx
	__int64 v108; // rcx
	unsigned int v109; // edx
	__int64 v110; // r8
	__int64 v111; // rcx
	__int64 v112; // rax
	__int64* v113; // rax
	__int64 v114; // rax
	int* v115; // rax
	__int64* v116; // rsi
	__int64 v117; // r9
	unsigned int v118; // r8d
	bool v119; // al
	__int64 v120; // rdx
	__int64 v121; // rbx
	__int64 v122; // rcx
	__int64 ii; // rax
	__int64 v124; // rax
	int* v125; // rcx
	__int64 v126; // rax
	__int64 v127; // rax
	__int64 v128; // rsi
	__int64 v129; // r8
	__int64 v130; // rcx
	__int64 v131; // rax
	__int64* v132; // rax
	__int64 v133; // rax
	int* v134; // rax
	__int64* v135; // rbx
	int v136; // eax
	unsigned int v137; // r15d
	_DWORD* v138; // rbx
	unsigned int v139; // esi
	unsigned int v140; // r14d
	unsigned int* v141; // r9
	__int64 v142; // r8
	__int64 v143; // rdx
	__int64 v144; // rcx
	unsigned int v145; // eax
	__int64* v146; // rax
	__int64 v147; // rcx
	__int64 v148; // [rsp+20h] [rbp-49h] BYREF
	__int64 v149; // [rsp+30h] [rbp-39h] BYREF
	__int64 v150; // [rsp+38h] [rbp-31h] BYREF
	__int64 v151; // [rsp+40h] [rbp-29h] BYREF
	__int64 v152; // [rsp+48h] [rbp-21h]
	_QWORD v153[2]; // [rsp+58h] [rbp-11h] BYREF
	int v154; // [rsp+68h] [rbp-1h] BYREF
	__int64 v155; // [rsp+70h] [rbp+7h]
	__int64 v156; // [rsp+78h] [rbp+Fh]
	char v157[64]; // [rsp+80h] [rbp+17h] BYREF
	__int64 v158; // [rsp+D8h] [rbp+6Fh] BYREF
	int* v159; // [rsp+E0h] [rbp+77h] BYREF
	int* v160; // [rsp+E8h] [rbp+7Fh] BYREF

	if (qword_140C63838)
	{
		v2 = qword_140C63838(off_140A6DAF0, qword_140C63858);
	}
	else
	{
		if (dword_140C64D70)
		{
			v3 = 0;
			goto LABEL_9;
		}
		if ((int)sub_140242AE0() < 0)
		{
			v3 = 0;
			goto LABEL_9;
		}
		v2 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64068 + 40i64))(qword_140C64068);
	}
	v3 = v2;
LABEL_9:
	for (i = 0; i < v3; ++i)
	{
		if (qword_140C63848)
		{
			v5 = qword_140C63848(off_140A6DAF0, i, qword_140C63858);
		}
		else
		{
			if (dword_140C64D70)
			{
				v6 = 0i64;
				goto LABEL_18;
			}
			if ((int)sub_140242AE0() < 0)
			{
				v6 = 0i64;
				goto LABEL_18;
			}
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64068 + 32i64))(qword_140C64068, i);
		}
		v6 = (int*)v5;
	LABEL_18:
		v7 = sub_14018B280(568i64, 0);
		v8 = v7;
		if (v7)
			sub_1407E4830(v7, 0i64, 0x238ui64);
		else
			v8 = 0i64;
		*v8 = *v6;
		v8[1] = v6[1];
		v8[2] = v6[2];
		v8[4] = v6[3];
		v8[5] = v6[4];
		v8[6] = v6[6];
		v8[128] = v6[7];
		v8[129] = v6[8];
		v8[130] = v6[9];
		v8[131] = v6[10];
		v9 = a1[2];
		v10 = *v6;
		v11 = *(_QWORD*)(v9 + 8);
		LODWORD(v148) = *v6;
		v12 = v9;
		v13 = 1;
		while (v11)
		{
			v12 = v11;
			v13 = v10 < *(_DWORD*)(v11 + 32);
			if (v10 >= *(_DWORD*)(v11 + 32))
				v11 = *(_QWORD*)(v11 + 24);
			else
				v11 = *(_QWORD*)(v11 + 16);
		}
		v14 = v12;
		if (v13)
		{
			if (v12 == *(_QWORD*)(v9 + 16))
				goto LABEL_38;
			if (*(_BYTE*)v12 || *(_QWORD*)(*(_QWORD*)(v12 + 8) + 8i64) != v12)
			{
				v14 = *(_QWORD*)(v12 + 16);
				if (v14)
				{
					for (j = *(_QWORD*)(v14 + 24); j; j = *(_QWORD*)(j + 24))
						v14 = j;
				}
				else
				{
					v14 = *(_QWORD*)(v12 + 8);
					if (v12 == *(_QWORD*)(v14 + 16))
					{
						do
						{
							v16 = v14;
							v14 = *(_QWORD*)(v14 + 8);
						} while (v16 == *(_QWORD*)(v14 + 16));
					}
				}
			}
			else
			{
				v14 = *(_QWORD*)(v12 + 24);
			}
		}
		if (*(_DWORD*)(v14 + 32) < v10)
		{
		LABEL_38:
			if (v12 == v9 || v10 < *(_DWORD*)(v12 + 32))
			{
				v17 = sub_14018B280(48i64, 0);
				if (v17 != (int*)-32i64)
				{
					*((_QWORD*)v17 + 4) = v148;
					*((_QWORD*)v17 + 5) = v8;
				}
				*(_QWORD*)(v12 + 16) = v17;
				v19 = a1[2];
				if (v12 == v19)
				{
					*(_QWORD*)(v19 + 8) = v17;
					*(_QWORD*)(a1[2] + 24i64) = v17;
				}
				else if (v12 == *(_QWORD*)(v19 + 16))
				{
					*(_QWORD*)(v19 + 16) = v17;
				}
			}
			else
			{
				v17 = sub_14018B280(48i64, 0);
				if (v17 != (int*)-32i64)
				{
					*((_QWORD*)v17 + 4) = v148;
					*((_QWORD*)v17 + 5) = v8;
				}
				*(_QWORD*)(v12 + 24) = v17;
				v18 = a1[2];
				if (v12 == *(_QWORD*)(v18 + 24))
					*(_QWORD*)(v18 + 24) = v17;
			}
			*((_QWORD*)v17 + 1) = v12;
			*((_QWORD*)v17 + 2) = 0i64;
			*((_QWORD*)v17 + 3) = 0i64;
			sub_1400081C0((__int64)v17, (_QWORD*)(a1[2] + 8i64));
			++a1[3];
		}
	}
	if (qword_140C63838)
	{
		v20 = qword_140C63838(off_140A6DDC8, qword_140C63858);
	}
	else
	{
		if (dword_140C63E34)
		{
			v21 = 0;
			goto LABEL_60;
		}
		if ((int)sub_140246220() < 0)
		{
			v21 = 0;
			goto LABEL_60;
		}
		v20 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64160 + 40i64))(qword_140C64160);
	}
	v21 = v20;
LABEL_60:
	v22 = 0i64;
	v23 = 0;
	if (v21)
	{
		while (!qword_140C63848)
		{
			if (dword_140C63E34)
			{
				v25 = 0i64;
			}
			else
			{
				if ((int)sub_140246220() >= 0)
				{
					v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64160 + 32i64))(qword_140C64160, v23);
					goto LABEL_68;
				}
				v25 = 0i64;
			}
		LABEL_69:
			v26 = *(_DWORD*)(v25 + 8);
			if (v26)
			{
				if (!v22 || *v22 != *(_DWORD*)(v25 + 4))
				{
					v27 = a1[2];
					v28 = v27;
					v29 = *(_QWORD*)(v27 + 8);
					while (v29)
					{
						if (*(_DWORD*)(v29 + 32) < *(_DWORD*)(v25 + 4))
						{
							v29 = *(_QWORD*)(v29 + 24);
						}
						else
						{
							v28 = v29;
							v29 = *(_QWORD*)(v29 + 16);
						}
					}
					if (v28 == v27 || *(_DWORD*)(v25 + 4) < *(_DWORD*)(v28 + 32))
					{
						v159 = (int*)a1[2];
						v30 = (__int64*)&v159;
					}
					else
					{
						v158 = v28;
						v30 = &v158;
					}
					v22 = *(_DWORD**)(*v30 + 40);
				}
				if (v26 <= 0xA)
				{
					v22[12 * v26 - 4] = *(_DWORD*)(v25 + 12);
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 9] = *(_DWORD*)(v25 + 16);
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 10] = *(_DWORD*)(v25 + 20);
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 11] = *(_DWORD*)(v25 + 32);
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 12] = *(_DWORD*)(v25 + 28);
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 13] = *(_DWORD*)(v25 + 36);
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 14] = -1;
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 15] = *(_DWORD*)(v25 + 40);
					v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 16] = *(_DWORD*)(v25 + 56);
					*(_QWORD*)&v22[12 * (*(_DWORD*)(v25 + 8) - 1) + 18] = *(_QWORD*)(v25 + 48);
					v31 = v22[3];
					if (v31 < *(_DWORD*)(v25 + 8))
						v31 = *(_DWORD*)(v25 + 8);
					v22[3] = v31;
				}
			}
			if (++v23 >= v21)
				goto LABEL_87;
		}
		v24 = qword_140C63848(off_140A6DDC8, v23, qword_140C63858);
	LABEL_68:
		v25 = v24;
		goto LABEL_69;
	}
LABEL_87:
	if (qword_140C63838)
	{
		v32 = qword_140C63838(off_140A6DB60, qword_140C63858);
	}
	else
	{
		if (dword_140C63D5C)
		{
			v33 = 0;
			goto LABEL_95;
		}
		if ((int)sub_140243360() < 0)
		{
			v33 = 0;
			goto LABEL_95;
		}
		v32 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C643A0 + 40i64))(qword_140C643A0);
	}
	v33 = v32;
LABEL_95:
	for (k = 0; k < v33; ++k)
	{
		if (qword_140C63848)
		{
			v35 = qword_140C63848(off_140A6DB60, k, qword_140C63858);
		}
		else
		{
			if (dword_140C63D5C)
			{
				v36 = 0i64;
				goto LABEL_104;
			}
			if ((int)sub_140243360() < 0)
			{
				v36 = 0i64;
				goto LABEL_104;
			}
			v35 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643A0 + 32i64))(qword_140C643A0, k);
		}
		v36 = v35;
	LABEL_104:
		v37 = a1[6];
		v38 = v37;
		v39 = v37;
		v40 = *(_QWORD*)(v37 + 8);
		v41 = v40;
		while (v41)
		{
			if (*(_DWORD*)(v41 + 32) < *(_DWORD*)(v36 + 4))
			{
				v41 = *(_QWORD*)(v41 + 24);
			}
			else
			{
				v39 = v41;
				v41 = *(_QWORD*)(v41 + 16);
			}
		}
		if (v39 == v37 || *(_DWORD*)(v36 + 4) < *(_DWORD*)(v39 + 32))
		{
			v159 = (int*)a1[6];
			v42 = (__int64*)&v159;
		}
		else
		{
			v158 = v39;
			v42 = &v158;
		}
		if (*v42 != v37)
			continue;
		v43 = *(_DWORD*)(v36 + 4);
		v44 = v37;
		v45 = 1;
		LODWORD(v148) = v43;
		while (v40)
		{
			v44 = v40;
			v45 = v43 < *(_DWORD*)(v40 + 32);
			if (v43 >= *(_DWORD*)(v40 + 32))
				v40 = *(_QWORD*)(v40 + 24);
			else
				v40 = *(_QWORD*)(v40 + 16);
		}
		v46 = v44;
		if (v45)
		{
			if (v44 == *(_QWORD*)(v38 + 16))
				goto LABEL_131;
			if (*(_BYTE*)v44 || *(_QWORD*)(*(_QWORD*)(v44 + 8) + 8i64) != v44)
			{
				v46 = *(_QWORD*)(v44 + 16);
				if (v46)
				{
					for (m = *(_QWORD*)(v46 + 24); m; m = *(_QWORD*)(m + 24))
						v46 = m;
				}
				else
				{
					v46 = *(_QWORD*)(v44 + 8);
					if (v44 == *(_QWORD*)(v46 + 16))
					{
						do
						{
							v48 = v46;
							v46 = *(_QWORD*)(v46 + 8);
						} while (v48 == *(_QWORD*)(v46 + 16));
					}
				}
			}
			else
			{
				v46 = *(_QWORD*)(v44 + 24);
			}
		}
		if (*(_DWORD*)(v46 + 32) < v43)
		{
		LABEL_131:
			if (v44 == v38 || v43 < *(_DWORD*)(v44 + 32))
			{
				v49 = sub_14018B280(48i64, 0);
				if (v49 != (int*)-32i64)
				{
					*((_QWORD*)v49 + 4) = v148;
					*((_QWORD*)v49 + 5) = v36;
				}
				*(_QWORD*)(v44 + 16) = v49;
				v51 = a1[6];
				if (v44 == v51)
				{
					*(_QWORD*)(v51 + 8) = v49;
					*(_QWORD*)(a1[6] + 24i64) = v49;
				}
				else if (v44 == *(_QWORD*)(v51 + 16))
				{
					*(_QWORD*)(v51 + 16) = v49;
				}
			}
			else
			{
				v49 = sub_14018B280(48i64, 0);
				if (v49 != (int*)-32i64)
				{
					*((_QWORD*)v49 + 4) = v148;
					*((_QWORD*)v49 + 5) = v36;
				}
				*(_QWORD*)(v44 + 24) = v49;
				v50 = a1[6];
				if (v44 == *(_QWORD*)(v50 + 24))
					*(_QWORD*)(v50 + 24) = v49;
			}
			*((_QWORD*)v49 + 1) = v44;
			*((_QWORD*)v49 + 2) = 0i64;
			*((_QWORD*)v49 + 3) = 0i64;
			sub_1400081C0((__int64)v49, (_QWORD*)(a1[6] + 8i64));
			++a1[7];
		}
	}
	v52 = 0i64;
	if (qword_140C63838)
	{
		v53 = qword_140C63838(off_140A6DBD0, qword_140C63858);
	LABEL_152:
		v54 = v53;
		goto LABEL_153;
	}
	if (dword_140C65174)
	{
		v54 = 0;
	}
	else
	{
		if ((int)sub_140243BE0() >= 0)
		{
			v53 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64E30 + 40i64))(qword_140C64E30);
			goto LABEL_152;
		}
		v54 = 0;
	}
LABEL_153:
	LODWORD(v158) = v54;
	v55 = 0;
	LODWORD(v159) = 0;
	while (v55 < v54)
	{
		if (qword_140C63848)
		{
			v56 = qword_140C63848(off_140A6DBD0, v55, qword_140C63858);
		}
		else
		{
			if (dword_140C65174)
			{
				v57 = 0i64;
				goto LABEL_162;
			}
			if ((int)sub_140243BE0() < 0)
			{
				v57 = 0i64;
				goto LABEL_162;
			}
			v56 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E30 + 32i64))(qword_140C64E30, v55);
		}
		v57 = v56;
	LABEL_162:
		v58 = *(_DWORD*)(v57 + 8);
		if (!v58)
			goto LABEL_225;
		v59 = a1[10];
		v60 = (int*)v59;
		v61 = *(_QWORD*)(v59 + 8);
		while (v61)
		{
			if (*(_DWORD*)(v61 + 32) < v58)
			{
				v61 = *(_QWORD*)(v61 + 24);
			}
			else
			{
				v60 = (int*)v61;
				v61 = *(_QWORD*)(v61 + 16);
			}
		}
		if (v60 == (int*)v59 || v58 < v60[8])
		{
			v151 = a1[10];
			v62 = &v151;
		}
		else
		{
			v160 = v60;
			v62 = (__int64*)&v160;
		}
		v63 = *v62;
		if (v63 != v59)
		{
			v65 = *(__int64**)(v63 + 40);
			goto LABEL_220;
		}
		v64 = sub_14018B280(16i64, 0);
		v65 = (__int64*)v64;
		if (v64)
		{
			*((_QWORD*)v64 + 1) = 0i64;
			*(_QWORD*)v64 = 0i64;
		}
		else
		{
			v65 = 0i64;
		}
		v66 = a1[10];
		v67 = *(_DWORD*)(v57 + 8);
		v68 = 1;
		v69 = *(_QWORD*)(v66 + 8);
		LODWORD(v148) = v67;
		v70 = v66;
		while (v69)
		{
			v70 = v69;
			v68 = v67 < *(_DWORD*)(v69 + 32);
			if (v67 >= *(_DWORD*)(v69 + 32))
				v69 = *(_QWORD*)(v69 + 24);
			else
				v69 = *(_QWORD*)(v69 + 16);
		}
		v71 = v70;
		if (v68)
		{
			if (v70 == *(_QWORD*)(v66 + 16))
			{
				if (v70 == v66 || v67 < *(_DWORD*)(v70 + 32))
				{
					v72 = sub_14018B280(48i64, 0);
					if (v72 != (int*)-32i64)
					{
						*((_QWORD*)v72 + 4) = v148;
						*((_QWORD*)v72 + 5) = v65;
					}
					*(_QWORD*)(v70 + 16) = v72;
					v74 = a1[10];
					if (v70 == v74)
					{
						*(_QWORD*)(v74 + 8) = v72;
						*(_QWORD*)(a1[10] + 24i64) = v72;
					}
					else if (v70 == *(_QWORD*)(v74 + 16))
					{
						*(_QWORD*)(v74 + 16) = v72;
					}
				}
				else
				{
					v72 = sub_14018B280(48i64, 0);
					if (v72 != (int*)-32i64)
					{
						*((_QWORD*)v72 + 4) = v148;
						*((_QWORD*)v72 + 5) = v65;
					}
					*(_QWORD*)(v70 + 24) = v72;
					v73 = a1[10];
					if (v70 == *(_QWORD*)(v73 + 24))
						*(_QWORD*)(v73 + 24) = v72;
				}
				goto LABEL_195;
			}
			if (*(_BYTE*)v70 || *(_QWORD*)(*(_QWORD*)(v70 + 8) + 8i64) != v70)
			{
				v71 = *(_QWORD*)(v70 + 16);
				if (v71)
				{
					for (n = *(_QWORD*)(v71 + 24); n; n = *(_QWORD*)(n + 24))
						v71 = n;
				}
				else
				{
					v71 = *(_QWORD*)(v70 + 8);
					if (v70 == *(_QWORD*)(v71 + 16))
					{
						do
						{
							v76 = v71;
							v71 = *(_QWORD*)(v71 + 8);
						} while (v76 == *(_QWORD*)(v71 + 16));
					}
				}
			}
			else
			{
				v71 = *(_QWORD*)(v70 + 24);
			}
		}
		if (*(_DWORD*)(v71 + 32) >= v67)
			goto LABEL_220;
		if (v70 == v66 || v67 < *(_DWORD*)(v70 + 32))
		{
			v72 = sub_14018B280(48i64, 0);
			if (v72 != (int*)-32i64)
			{
				*((_QWORD*)v72 + 4) = v148;
				*((_QWORD*)v72 + 5) = v65;
			}
			*(_QWORD*)(v70 + 16) = v72;
			v78 = a1[10];
			if (v70 == v78)
			{
				*(_QWORD*)(v78 + 8) = v72;
				*(_QWORD*)(a1[10] + 24i64) = v72;
			}
			else if (v70 == *(_QWORD*)(v78 + 16))
			{
				*(_QWORD*)(v78 + 16) = v72;
			}
		}
		else
		{
			v72 = sub_14018B280(48i64, 0);
			if (v72 != (int*)-32i64)
			{
				*((_QWORD*)v72 + 4) = v148;
				*((_QWORD*)v72 + 5) = v65;
			}
			*(_QWORD*)(v70 + 24) = v72;
			v77 = a1[10];
			if (v70 == *(_QWORD*)(v77 + 24))
				*(_QWORD*)(v77 + 24) = v72;
		}
	LABEL_195:
		*((_QWORD*)v72 + 1) = v70;
		*((_QWORD*)v72 + 2) = 0i64;
		*((_QWORD*)v72 + 3) = 0i64;
		sub_1400081C0((__int64)v72, (_QWORD*)(a1[10] + 8i64));
		++a1[11];
	LABEL_220:
		v79 = v65[1];
		v80 = sub_14018DB00(*v65, v79 + 1, 8i64);
		v81 = v80;
		*(_QWORD*)&v80[2 * v79] = v57;
		if ((int*)*v65 != v80)
		{
			sub_1407DB590(v80, (int*)*v65, 8 * v65[1]);
			if (*v65)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v65 - 16) + 8i64))(*v65 - 16);
			*v65 = (__int64)v81;
		}
		v54 = v158;
		v65[1] = v79 + 1;
		v55 = (unsigned int)v159;
	LABEL_225:
		if (!v52 || *(_DWORD*)(v57 + 4) != *v52)
		{
			v82 = *(_DWORD*)(v57 + 4);
			if (qword_140C63840)
			{
				v83 = qword_140C63840(off_140A6DDC8, v82, qword_140C63858);
				goto LABEL_234;
			}
			if (dword_140C63E34)
			{
				v52 = 0i64;
			}
			else
			{
				if ((int)sub_140246220() >= 0)
				{
					v83 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64160 + 24i64))(qword_140C64160, v82);
				LABEL_234:
					v52 = (_DWORD*)v83;
					if (v83)
					{
						v84 = a1[2];
						v85 = v84;
						v86 = *(_QWORD*)(v84 + 8);
						while (v86)
						{
							if (*(_DWORD*)(v86 + 32) < v52[1])
							{
								v86 = *(_QWORD*)(v86 + 24);
							}
							else
							{
								v85 = v86;
								v86 = *(_QWORD*)(v86 + 16);
							}
						}
						if (v85 == v84 || v52[1] < *(_DWORD*)(v85 + 32))
						{
							v149 = a1[2];
							v87 = &v149;
						}
						else
						{
							v150 = v85;
							v87 = &v150;
						}
						v88 = *(_QWORD*)(*v87 + 40);
						if (v88)
							*(_DWORD*)(v88 + 48i64 * (unsigned int)(v52[2] - 1) + 56) = v55;
					}
					goto LABEL_246;
				}
				v52 = 0i64;
			}
		}
	LABEL_246:
		LODWORD(v159) = ++v55;
	}
	v89 = 0;
	while (1)
	{
		result = (__int64)qword_140C63838;
		if (qword_140C63838)
		{
			v91 = qword_140C63838(off_140A6DD58, qword_140C63858);
			goto LABEL_253;
		}
		if (dword_140C654F8)
			goto LABEL_362;
		if ((int)sub_1402459A0() < 0)
			break;
		v91 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63868 + 40i64))(qword_140C63868);
	LABEL_253:
		if (v89 >= v91)
			break;
		if (qword_140C63848)
		{
			v92 = qword_140C63848(off_140A6DD58, v89, qword_140C63858);
		}
		else
		{
			if (dword_140C654F8)
			{
				v93 = 0i64;
				goto LABEL_262;
			}
			if ((int)sub_1402459A0() < 0)
			{
				v93 = 0i64;
				goto LABEL_262;
			}
			v92 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 32i64))(qword_140C63868, v89);
		}
		v93 = v92;
	LABEL_262:
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v95 = *(_DWORD*)(v93 + 12);
		v158 = v93;
		if (qword_140C63840)
		{
			v96 = (_DWORD*)qword_140C63840(off_140A6ABB0, v95, qword_140C63858);
		LABEL_267:
			if (v96 && (v96[36] && v96[34] != 1 || v96[37] && v96[35] != 1))
				goto LABEL_359;
			goto LABEL_272;
		}
		v97 = dword_140C649FC;
		if (dword_140C649FC)
			goto LABEL_273;
		if ((int)sub_140209480() >= 0)
		{
			v96 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640E8 + 24i64))(
				qword_140C640E8,
				v95);
			goto LABEL_267;
		}
	LABEL_272:
		v94 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v97 = dword_140C649FC;
	LABEL_273:
		v98 = *(_DWORD*)(v93 + 96);
		if (v94)
		{
			v99 = (_DWORD*)v94(off_140A6ABB0, v98, qword_140C63858);
		LABEL_278:
			if (v99 && (v99[36] && v99[34] != 1 || v99[37] && v99[35] != 1))
				goto LABEL_359;
			goto LABEL_283;
		}
		if (!v97 && (int)sub_140209480() >= 0)
		{
			v99 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C640E8 + 24i64))(
				qword_140C640E8,
				v98);
			goto LABEL_278;
		}
	LABEL_283:
		if ((*(_BYTE*)(v93 + 32) & 4) != 0)
		{
			v100 = *(_DWORD*)(v93 + 36);
			if (v100)
			{
				v101 = a1[22];
				v102 = (int*)v101;
				v103 = *(_QWORD*)(v101 + 8);
				while (v103)
				{
					if (*(_DWORD*)(v103 + 32) < v100)
					{
						v103 = *(_QWORD*)(v103 + 24);
					}
					else
					{
						v102 = (int*)v103;
						v103 = *(_QWORD*)(v103 + 16);
					}
				}
				if (v102 == (int*)v101 || v100 < v102[8])
				{
					v154 = *(_DWORD*)(v93 + 36);
					v156 = 0i64;
					v155 = 0i64;
					v159 = v102;
					sub_140494520((__int64)(a1 + 21), &v160, (__int64*)&v159, &v154);
					v102 = v160;
				}
				v104 = *((_QWORD*)v102 + 6);
				v105 = sub_14018DB00(*((_QWORD*)v102 + 5), v104 + 1, 8i64);
				v106 = v105;
				*(_QWORD*)&v105[2 * v104] = v93;
				v107 = (int*)*((_QWORD*)v102 + 5);
				if (v107 != v105)
				{
					sub_1407DB590(v105, v107, 8i64 * *((_QWORD*)v102 + 6));
					v108 = *((_QWORD*)v102 + 5);
					if (v108)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v108 - 16) + 8i64))(v108 - 16);
					*((_QWORD*)v102 + 5) = v106;
				}
				*((_QWORD*)v102 + 6) = v104 + 1;
			}
		}
		v109 = *(_DWORD*)(v93 + 76);
		if (v109)
		{
			v110 = a1[18];
			v111 = v110;
			v112 = *(_QWORD*)(v110 + 8);
			while (v112)
			{
				if (*(_DWORD*)(v112 + 32) < v109)
				{
					v112 = *(_QWORD*)(v112 + 24);
				}
				else
				{
					v111 = v112;
					v112 = *(_QWORD*)(v112 + 16);
				}
			}
			if (v111 == v110 || v109 < *(_DWORD*)(v111 + 32))
			{
				v150 = a1[18];
				v113 = &v150;
			}
			else
			{
				v149 = v111;
				v113 = &v149;
			}
			v114 = *v113;
			if (v114 != v110)
			{
				v116 = *(__int64**)(v114 + 40);
				goto LABEL_343;
			}
			v115 = sub_14018B280(16i64, 0);
			v116 = (__int64*)v115;
			if (v115)
			{
				*((_QWORD*)v115 + 1) = 0i64;
				*(_QWORD*)v115 = 0i64;
			}
			else
			{
				v116 = 0i64;
			}
			v117 = a1[18];
			v118 = *(_DWORD*)(v93 + 76);
			v119 = 1;
			v120 = *(_QWORD*)(v117 + 8);
			LODWORD(v152) = v118;
			v121 = v117;
			while (v120)
			{
				v121 = v120;
				v119 = v118 < *(_DWORD*)(v120 + 32);
				if (v118 >= *(_DWORD*)(v120 + 32))
					v120 = *(_QWORD*)(v120 + 24);
				else
					v120 = *(_QWORD*)(v120 + 16);
			}
			v122 = v121;
			if (!v119)
				goto LABEL_328;
			if (v121 != *(_QWORD*)(v117 + 16))
			{
				if (*(_BYTE*)v121 || *(_QWORD*)(*(_QWORD*)(v121 + 8) + 8i64) != v121)
				{
					v122 = *(_QWORD*)(v121 + 16);
					if (v122)
					{
						for (ii = *(_QWORD*)(v122 + 24); ii; ii = *(_QWORD*)(ii + 24))
							v122 = ii;
					}
					else
					{
						v122 = *(_QWORD*)(v121 + 8);
						if (v121 == *(_QWORD*)(v122 + 16))
						{
							do
							{
								v124 = v122;
								v122 = *(_QWORD*)(v122 + 8);
							} while (v124 == *(_QWORD*)(v122 + 16));
						}
					}
				}
				else
				{
					v122 = *(_QWORD*)(v121 + 24);
				}
			LABEL_328:
				if (*(_DWORD*)(v122 + 32) >= v118)
					goto LABEL_343;
			}
			if (v121 == v117 || v118 < *(_DWORD*)(v121 + 32))
			{
				v125 = sub_14018B280(48i64, 0);
				if (v125 != (int*)-32i64)
				{
					*((_QWORD*)v125 + 4) = v152;
					*((_QWORD*)v125 + 5) = v116;
				}
				*(_QWORD*)(v121 + 16) = v125;
				v127 = a1[18];
				if (v121 == v127)
				{
					*(_QWORD*)(v127 + 8) = v125;
					*(_QWORD*)(a1[18] + 24i64) = v125;
				}
				else if (v121 == *(_QWORD*)(v127 + 16))
				{
					*(_QWORD*)(v127 + 16) = v125;
				}
			}
			else
			{
				v125 = sub_14018B280(48i64, 0);
				if (v125 != (int*)-32i64)
				{
					*((_QWORD*)v125 + 4) = v152;
					*((_QWORD*)v125 + 5) = v116;
				}
				*(_QWORD*)(v121 + 24) = v125;
				v126 = a1[18];
				if (v121 == *(_QWORD*)(v126 + 24))
					*(_QWORD*)(v126 + 24) = v125;
			}
			*((_QWORD*)v125 + 1) = v121;
			*((_QWORD*)v125 + 2) = 0i64;
			*((_QWORD*)v125 + 3) = 0i64;
			sub_1400081C0((__int64)v125, (_QWORD*)(a1[18] + 8i64));
			++a1[19];
		LABEL_343:
			sub_140033260(v116, &v158);
			v128 = v158;
			if ((*(_BYTE*)(v158 + 32) & 2) == 0)
				goto LABEL_359;
			v129 = a1[14];
			v130 = v129;
			v131 = *(_QWORD*)(v129 + 8);
			while (v131)
			{
				if (*(_DWORD*)(v131 + 32) < *(_DWORD*)(v158 + 76))
				{
					v131 = *(_QWORD*)(v131 + 24);
				}
				else
				{
					v130 = v131;
					v131 = *(_QWORD*)(v131 + 16);
				}
			}
			if (v130 == v129 || *(_DWORD*)(v158 + 76) < *(_DWORD*)(v130 + 32))
			{
				v148 = a1[14];
				v132 = &v148;
			}
			else
			{
				v151 = v130;
				v132 = &v151;
			}
			v133 = *v132;
			if (v133 != v129)
			{
				sub_140033260(*(__int64**)(v133 + 40), &v158);
				goto LABEL_359;
			}
			v134 = sub_14018B280(16i64, 0);
			v135 = (__int64*)v134;
			if (v134)
			{
				*((_QWORD*)v134 + 1) = 0i64;
				*(_QWORD*)v134 = 0i64;
			}
			else
			{
				v135 = 0i64;
			}
			v136 = *(_DWORD*)(v128 + 76);
			v153[1] = v135;
			LODWORD(v153[0]) = v136;
			sub_140055F80((__int64)(a1 + 13), (__int64)v157, v153);
			sub_140033260(v135, &v158);
			++v89;
		}
		else
		{
		LABEL_359:
			++v89;
		}
	}
	result = (__int64)qword_140C63838;
	if (qword_140C63838)
	{
		result = qword_140C63838(off_140A6DD90, qword_140C63858);
		goto LABEL_367;
	}
LABEL_362:
	if (dword_140C64D74)
	{
		v137 = 0;
		goto LABEL_368;
	}
	result = sub_140245DE0();
	if ((int)result < 0)
	{
		v137 = 0;
		goto LABEL_368;
	}
	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B08 + 40i64))(qword_140C63B08);
LABEL_367:
	v137 = result;
LABEL_368:
	v138 = 0i64;
	v139 = 0;
	v140 = 0;
	if (v137)
	{
		while (2)
		{
			result = sub_1402460A0(v140);
			v141 = (unsigned int*)result;
			if (v138 && *v138 == *(_DWORD*)(result + 4))
				goto LABEL_383;
			v142 = a1[2];
			v143 = v142;
			v144 = *(_QWORD*)(v142 + 8);
			if (v144)
			{
				v145 = *(_DWORD*)(result + 4);
				do
				{
					if (*(_DWORD*)(v144 + 32) < v145)
					{
						v144 = *(_QWORD*)(v144 + 24);
					}
					else
					{
						v143 = v144;
						v144 = *(_QWORD*)(v144 + 16);
					}
				} while (v144);
			}
			if (v143 == v142 || v141[1] < *(_DWORD*)(v143 + 32))
			{
				v159 = (int*)a1[2];
				v146 = (__int64*)&v159;
			}
			else
			{
				v158 = v143;
				v146 = &v158;
			}
			result = *v146;
			if (result != v142)
			{
				v138 = *(_DWORD**)(result + 40);
				v139 = 0;
			LABEL_383:
				if (v138 && v139 < 0xA)
				{
					result = *v141;
					v147 = v139++;
					v138[v147 + 132] = result;
				}
			}
			if (++v140 >= v137)
				return result;
			continue;
		}
	}
	return result;
}
// 1405BD17F: conditional instruction was optimized away because rdx.8==0
// 1405BD5EF: conditional instruction was optimized away because rdx.8==0
// 1405BD82A: conditional instruction was optimized away because rdx.8==0
// 1405BD92F: conditional instruction was optimized away because rdx.8==0
// 1405BDEAF: conditional instruction was optimized away because rdx.8==0
// 140A6ABB0: using guessed type wchar_t *off_140A6ABB0[2];
// 140A6DAF0: using guessed type wchar_t *off_140A6DAF0[2];
// 140A6DB60: using guessed type wchar_t *off_140A6DB60[2];
// 140A6DBD0: using guessed type wchar_t *off_140A6DBD0[2];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140A6DD90: using guessed type wchar_t *off_140A6DD90[2];
// 140A6DDC8: using guessed type wchar_t *off_140A6DDC8[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C63B08: using guessed type __int64 qword_140C63B08;
// 140C63D5C: using guessed type int dword_140C63D5C;
// 140C63E34: using guessed type int dword_140C63E34;
// 140C64068: using guessed type __int64 qword_140C64068;
// 140C640E8: using guessed type __int64 qword_140C640E8;
// 140C64160: using guessed type __int64 qword_140C64160;
// 140C643A0: using guessed type __int64 qword_140C643A0;
// 140C649FC: using guessed type int dword_140C649FC;
// 140C64D70: using guessed type int dword_140C64D70;
// 140C64D74: using guessed type int dword_140C64D74;
// 140C64E30: using guessed type __int64 qword_140C64E30;
// 140C65174: using guessed type int dword_140C65174;
// 140C654F8: using guessed type int dword_140C654F8;
// 1405BCF90: using guessed type char var_40[64];

