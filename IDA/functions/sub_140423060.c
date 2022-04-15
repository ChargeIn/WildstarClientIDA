//----- (0000000140423060) ----------------------------------------------------
_QWORD* __fastcall sub_140423060(__int64 a1, _QWORD* a2, int a3, __int64 a4)
{
	int* v5; // r15
	int v6; // r12d
	__int64 v7; // rdi
	int* v8; // rsi
	int* v9; // rax
	bool v10; // zf
	__int64 v11; // rax
	__int64 v12; // rax
	int* v13; // rsi
	unsigned int v14; // r15d
	int* v15; // rcx
	__int64 v16; // rax
	int* v17; // r12
	__int64 v18; // rbx
	signed __int64 v19; // rbx
	int* v20; // rsi
	unsigned __int64 v21; // rbx
	int* v22; // rax
	__int64 v23; // rcx
	int v24; // eax
	unsigned __int64 v25; // rcx
	__int64* v26; // rax
	int* v27; // r8
	__int64 v28; // r9
	__int64 v29; // rax
	int* v30; // rsi
	unsigned __int64 v31; // rbx
	__int64 v32; // rbx
	int* v33; // rdx
	signed __int64 v34; // rcx
	__int64 v35; // rcx
	unsigned __int16* v36; // r15
	unsigned __int16 v37; // cx
	__int16 v38; // ax
	int* v39; // rbx
	__int16 v40; // cx
	unsigned __int64 v41; // rbx
	__int64* v42; // rax
	__int64 v43; // rcx
	__int64* v44; // rax
	__int64 v45; // r13
	int* v46; // rax
	__int64 v47; // rdx
	_WORD* v48; // rcx
	__int64 v49; // rsi
	int* v50; // rbx
	__int16 v51; // cx
	unsigned __int64 v52; // rbx
	__int64* v53; // rax
	__int64 v54; // rcx
	__int64* v55; // rax
	__int64 v56; // r13
	int* v57; // rax
	__int64 v58; // rdx
	_WORD* v59; // rcx
	__int64 v60; // rsi
	int* v61; // rbx
	__int16 v62; // cx
	unsigned __int64 v63; // rbx
	__int64* v64; // rax
	__int64 v65; // rcx
	__int64* v66; // rax
	__int64 v67; // r13
	int* v68; // rax
	__int64 v69; // rdx
	_WORD* v70; // rcx
	__int64 v71; // rsi
	int* v72; // rbx
	__int16 v73; // cx
	unsigned __int64 v74; // rbx
	__int64* v75; // rax
	__int64 v76; // rcx
	__int64* v77; // rax
	__int64 v78; // r13
	int* v79; // rax
	__int64 v80; // rdx
	_WORD* v81; // rcx
	__int64 v82; // rsi
	int* v83; // rbx
	__int16 v84; // cx
	unsigned __int64 v85; // rbx
	__int64* v86; // rax
	__int64 v87; // rcx
	__int64* v88; // rax
	__int64 v89; // r13
	int* v90; // rax
	__int64 v91; // rdx
	_WORD* v92; // rcx
	__int64 v93; // rsi
	int* v94; // rbx
	__int16 v95; // cx
	unsigned __int64 v96; // rbx
	__int64* v97; // rax
	__int64 v98; // rcx
	__int64* v99; // rax
	__int64 v100; // r13
	int* v101; // rax
	__int64 v102; // rdx
	_WORD* v103; // rcx
	__int64 v104; // rsi
	int* v105; // rbx
	__int16 v106; // cx
	unsigned __int64 v107; // rbx
	__int64* v108; // rax
	__int64 v109; // rcx
	__int64* v110; // rax
	__int64 v111; // r13
	int* v112; // rax
	__int64 v113; // rdx
	_WORD* v114; // rcx
	__int64 v115; // rsi
	int* v116; // rbx
	__int16 v117; // r13
	unsigned __int64 v118; // rbx
	__int64* v119; // rax
	__int64 v120; // rcx
	__int64* v121; // rax
	int* v122; // rax
	__int64 v123; // rdx
	_WORD* v124; // rcx
	__int64 v125; // rsi
	__int16 v126; // ax
	__int16 v127; // ax
	__int16 v128; // ax
	__int16 v129; // ax
	__int16 v130; // ax
	__int16 v131; // ax
	__int16 v132; // ax
	__int16 v133; // ax
	__int64 v134; // rax
	int* v135; // rdx
	__int64 v136; // rax
	__int64 v137; // rax
	int* v138; // rdx
	__int64 v139; // rax
	__int64 v140; // rax
	__int64 v141; // rax
	int* v142; // rdx
	__int64 v143; // rax
	int* v145; // rbx
	void* v146; // r8
	int* v147; // rdx
	__int64 v148; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v149; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v150; // [rsp+50h] [rbp-B0h] BYREF
	int v151; // [rsp+58h] [rbp-A8h]
	__int64 v152; // [rsp+60h] [rbp-A0h] BYREF
	int* v153; // [rsp+68h] [rbp-98h]
	int* v154; // [rsp+70h] [rbp-90h]
	int* v155; // [rsp+78h] [rbp-88h]
	int* v156; // [rsp+80h] [rbp-80h]
	const wchar_t* v157; // [rsp+88h] [rbp-78h] BYREF
	const wchar_t* v158; // [rsp+90h] [rbp-70h]
	const wchar_t* v159; // [rsp+98h] [rbp-68h]
	const wchar_t* v160; // [rsp+A0h] [rbp-60h]
	int v161[132]; // [rsp+B0h] [rbp-50h] BYREF

	v5 = (int*)a4;
	v156 = (int*)a4;
	v6 = a3;
	v151 = a3;
	v7 = 0i64;
	v8 = sub_14018B280(16i64, 0);
	v153 = v8;
	v154 = v8;
	v155 = v8 + 4;
	if (v8)
		*(_WORD*)v8 = 0;
	if (!v5 || (unsigned int)v6 > 3)
	{
		a2[1] = v8;
		a2[2] = v8;
		a2[3] = v8 + 4;
		return a2;
	}
	if ((int)sub_14001B370(
		v161,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"AddonSaveData") >= 0
		&& LOWORD(v161[0]))
	{
		v9 = v161;
		do
		{
			v10 = *((_WORD*)v9 + 1) == 0;
			v9 = (int*)((char*)v9 + 2);
		} while (!v10);
	}
	v11 = 0i64;
	if (LOWORD(v161[0]))
	{
		do
			++v11;
		while (*((_WORD*)v161 + v11));
	}
	if ((2 * v11) >> 1)
		sub_14001C310(&v152, v161, (int*)((char*)v161 + 2 * v11));
	else
		sub_1407DB590(v8, v161, 0i64);
	v12 = 0i64;
	do
		v10 = *((_WORD*)&unk_1409E8C74 + ++v12) == 0;
	while (!v10);
	sub_14001C310(&v152, (int*)&unk_1409E8C74, (int*)((char*)&unk_1409E8C74 + 2 * v12));
	if (v6 >= 1)
	{
		v13 = *(int**)(qword_140C635F0 + 5744);
		v14 = *(_DWORD*)(qword_140C635F0 + 5736);
		if (!v13 || !*(_WORD*)v13)
		{
			a2[1] = 0i64;
			a2[2] = 0i64;
			a2[3] = 0i64;
			v145 = sub_14018B280(2i64, 0);
			a2[1] = v145;
			a2[2] = v145;
			a2[3] = (char*)v145 + 2;
			sub_1407DB590(v145, dword_1409E8C44, 0i64);
			a2[2] = v145;
			if (v145)
				*(_WORD*)v145 = 0;
			goto LABEL_225;
		}
		if ((dword_140DC2810 & 1) == 0)
		{
			qword_140DC2820 = 0i64;
			qword_140DC2828 = 0i64;
			qword_140DC2830 = 0i64;
			dword_140DC2810 |= 1u;
			v15 = sub_14018B280(16i64, 0);
			qword_140DC2820 = (__int64)v15;
			qword_140DC2828 = (__int64)v15;
			qword_140DC2830 = (__int64)(v15 + 4);
			if (v15)
				*(_WORD*)v15 = 0;
			sub_1407DD89C(sub_140950C40);
		}
		if (dword_140C8AC40 != v14)
		{
			v16 = 0i64;
			dword_140C8AC40 = v14;
			v17 = 0i64;
			if (*(_WORD*)v13)
			{
				do
					++v16;
				while (*((_WORD*)v13 + v16));
			}
			v18 = (2 * v16) >> 1;
			if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				v17 = sub_14018B280(2 * (v18 + 1), 0);
			v19 = 2 * v18;
			sub_1407DB590(v17, v13, v19);
			v20 = (int*)((char*)v17 + v19);
			if ((int*)((char*)v17 + v19))
				*(_WORD*)v20 = 0;
			v21 = v19 >> 1;
			if (!(((char*)v20 - (char*)v17) >> 1)
				|| (WORD1(v150) = 64, v22 = (int*)sub_14002C8A0(v17, (__int64)v20, v150), v22 == v20))
			{
				LODWORD(v23) = -1;
			}
			else
			{
				v23 = ((char*)v22 - (char*)v17) >> 1;
			}
			v24 = 3;
			if ((int)v23 < 3)
				v24 = v23;
			v25 = v24;
			if (v21 >= v24)
			{
				v150 = ((char*)v20 - (char*)v17) >> 1;
				v26 = &v150;
				v149 = v25;
				v27 = 0i64;
				if (v21 >= v25)
					v26 = (__int64*)&v149;
				v28 = 0i64;
				v29 = *v26;
				v30 = (int*)((char*)v17 + 2 * v29);
				v31 = ((2 * v29) >> 1) + 1;
				if (v31 <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v32 = 2 * v31;
					v27 = sub_14018B280(v32, 0);
					v28 = (__int64)v27 + v32;
				}
				v33 = v27;
				if (v17 != v30)
				{
					v34 = (char*)v17 - (char*)v27;
					do
					{
						if (v33)
							*(_WORD*)v33 = *(_WORD*)((char*)v33 + v34);
						v33 = (int*)((char*)v33 + 2);
					} while ((int*)((char*)v33 + v34) != v30);
				}
				if (v33)
					*(_WORD*)v33 = 0;
				v35 = qword_140DC2820;
				qword_140DC2828 = (__int64)v33;
				qword_140DC2830 = v28;
				qword_140DC2820 = (__int64)v27;
				if (v35)
					sub_14018B900(v35, 0);
			}
			else
			{
				sub_14001C480((__int64)&qword_140DC2818, v17, v20);
			}
			sub_14018EFA0(&v157, (__int64)L"%08x", v14);
			v36 = (unsigned __int16*)v158;
			v37 = v158[7];
			if (v37 == 48)
			{
				v38 = sub_140011B20(v158[6]);
				v39 = (int*)qword_140DC2828;
				v40 = v38;
				LOWORD(v150) = v38;
				if (qword_140DC2828 + 2 == qword_140DC2830)
				{
					v149 = 1i64;
					v41 = (qword_140DC2828 - qword_140DC2820) >> 1;
					v42 = (__int64*)&v149;
					v148 = v41;
					if (v41)
						v42 = &v148;
					v43 = *v42;
					v44 = &v148;
					v148 = (qword_140DC2828 - qword_140DC2820) >> 1;
					v149 = v41 + v43;
					if (v41 + v43 >= v41)
						v44 = (__int64*)&v149;
					v45 = 2 * (*v44 + 1);
					v46 = sub_14018B280(v45, 0);
					v47 = qword_140DC2828;
					v48 = (_WORD*)qword_140DC2820;
					v49 = (__int64)v46;
					v39 = v46;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v39)
								*(_WORD*)v39 = *v48;
							++v48;
							v39 = (int*)((char*)v39 + 2);
						} while (v48 != (_WORD*)v47);
						v48 = (_WORD*)qword_140DC2820;
					}
					if (v39)
					{
						*(_WORD*)v39 = 0;
						v48 = (_WORD*)qword_140DC2820;
					}
					if (v48)
						sub_14018B900((__int64)v48, 0);
					v40 = v150;
					qword_140DC2820 = v49;
					qword_140DC2830 = v49 + v45;
					qword_140DC2828 = (__int64)v39;
				}
				if (v39 != (int*)-2i64)
				{
					*((_WORD*)v39 + 1) = 0;
					v39 = (int*)qword_140DC2828;
				}
				*(_WORD*)v39 = v40;
				qword_140DC2828 += 2i64;
				v50 = (int*)qword_140DC2828;
				v51 = sub_140011B20(*v36);
				LOWORD(v150) = v51;
				if ((int*)((char*)v50 + 2) == (int*)qword_140DC2830)
				{
					v148 = 1i64;
					v52 = ((__int64)v50 - qword_140DC2820) >> 1;
					v53 = &v148;
					v149 = v52;
					if (v52)
						v53 = (__int64*)&v149;
					v54 = *v53;
					v55 = &v148;
					v148 = v52;
					v149 = v52 + v54;
					if (v52 + v54 >= v52)
						v55 = (__int64*)&v149;
					v56 = 2 * (*v55 + 1);
					v57 = sub_14018B280(v56, 0);
					v58 = qword_140DC2828;
					v59 = (_WORD*)qword_140DC2820;
					v60 = (__int64)v57;
					v50 = v57;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v50)
								*(_WORD*)v50 = *v59;
							++v59;
							v50 = (int*)((char*)v50 + 2);
						} while (v59 != (_WORD*)v58);
						v59 = (_WORD*)qword_140DC2820;
					}
					if (v50)
					{
						*(_WORD*)v50 = 0;
						v59 = (_WORD*)qword_140DC2820;
					}
					if (v59)
						sub_14018B900((__int64)v59, 0);
					v51 = v150;
					qword_140DC2820 = v60;
					qword_140DC2830 = v60 + v56;
					qword_140DC2828 = (__int64)v50;
				}
				if (v50 != (int*)-2i64)
				{
					*((_WORD*)v50 + 1) = 0;
					v50 = (int*)qword_140DC2828;
				}
				*(_WORD*)v50 = v51;
				qword_140DC2828 += 2i64;
				v61 = (int*)qword_140DC2828;
				v62 = sub_140011B20(v36[2]);
				LOWORD(v150) = v62;
				if ((int*)((char*)v61 + 2) == (int*)qword_140DC2830)
				{
					v148 = 1i64;
					v63 = ((__int64)v61 - qword_140DC2820) >> 1;
					v64 = &v148;
					v149 = v63;
					if (v63)
						v64 = (__int64*)&v149;
					v65 = *v64;
					v66 = &v148;
					v148 = v63;
					v149 = v63 + v65;
					if (v63 + v65 >= v63)
						v66 = (__int64*)&v149;
					v67 = 2 * (*v66 + 1);
					v68 = sub_14018B280(v67, 0);
					v69 = qword_140DC2828;
					v70 = (_WORD*)qword_140DC2820;
					v71 = (__int64)v68;
					v61 = v68;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v61)
								*(_WORD*)v61 = *v70;
							++v70;
							v61 = (int*)((char*)v61 + 2);
						} while (v70 != (_WORD*)v69);
						v70 = (_WORD*)qword_140DC2820;
					}
					if (v61)
					{
						*(_WORD*)v61 = 0;
						v70 = (_WORD*)qword_140DC2820;
					}
					if (v70)
						sub_14018B900((__int64)v70, 0);
					v62 = v150;
					qword_140DC2820 = v71;
					qword_140DC2830 = v71 + v67;
					qword_140DC2828 = (__int64)v61;
				}
				if (v61 != (int*)-2i64)
				{
					*((_WORD*)v61 + 1) = 0;
					v61 = (int*)qword_140DC2828;
				}
				*(_WORD*)v61 = v62;
				qword_140DC2828 += 2i64;
				v72 = (int*)qword_140DC2828;
				v73 = sub_140011B20(v36[1]);
				LOWORD(v150) = v73;
				if ((int*)((char*)v72 + 2) == (int*)qword_140DC2830)
				{
					v148 = 1i64;
					v74 = ((__int64)v72 - qword_140DC2820) >> 1;
					v75 = &v148;
					v149 = v74;
					if (v74)
						v75 = (__int64*)&v149;
					v76 = *v75;
					v77 = &v148;
					v148 = v74;
					v149 = v74 + v76;
					if (v74 + v76 >= v74)
						v77 = (__int64*)&v149;
					v78 = 2 * (*v77 + 1);
					v79 = sub_14018B280(v78, 0);
					v80 = qword_140DC2828;
					v81 = (_WORD*)qword_140DC2820;
					v82 = (__int64)v79;
					v72 = v79;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v72)
								*(_WORD*)v72 = *v81;
							++v81;
							v72 = (int*)((char*)v72 + 2);
						} while (v81 != (_WORD*)v80);
						v81 = (_WORD*)qword_140DC2820;
					}
					if (v72)
					{
						*(_WORD*)v72 = 0;
						v81 = (_WORD*)qword_140DC2820;
					}
					if (v81)
						sub_14018B900((__int64)v81, 0);
					v73 = v150;
					qword_140DC2820 = v82;
					qword_140DC2830 = v82 + v78;
					qword_140DC2828 = (__int64)v72;
				}
				if (v72 != (int*)-2i64)
				{
					*((_WORD*)v72 + 1) = 0;
					v72 = (int*)qword_140DC2828;
				}
				*(_WORD*)v72 = v73;
				qword_140DC2828 += 2i64;
				v83 = (int*)qword_140DC2828;
				v84 = sub_140011B20(v36[7]);
				LOWORD(v150) = v84;
				if ((int*)((char*)v83 + 2) == (int*)qword_140DC2830)
				{
					v148 = 1i64;
					v85 = ((__int64)v83 - qword_140DC2820) >> 1;
					v86 = &v148;
					v149 = v85;
					if (v85)
						v86 = (__int64*)&v149;
					v87 = *v86;
					v88 = &v148;
					v148 = v85;
					v149 = v85 + v87;
					if (v85 + v87 >= v85)
						v88 = (__int64*)&v149;
					v89 = 2 * (*v88 + 1);
					v90 = sub_14018B280(v89, 0);
					v91 = qword_140DC2828;
					v92 = (_WORD*)qword_140DC2820;
					v93 = (__int64)v90;
					v83 = v90;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v83)
								*(_WORD*)v83 = *v92;
							++v92;
							v83 = (int*)((char*)v83 + 2);
						} while (v92 != (_WORD*)v91);
						v92 = (_WORD*)qword_140DC2820;
					}
					if (v83)
					{
						*(_WORD*)v83 = 0;
						v92 = (_WORD*)qword_140DC2820;
					}
					if (v92)
						sub_14018B900((__int64)v92, 0);
					v84 = v150;
					qword_140DC2820 = v93;
					qword_140DC2830 = v93 + v89;
					qword_140DC2828 = (__int64)v83;
				}
				if (v83 != (int*)-2i64)
				{
					*((_WORD*)v83 + 1) = 0;
					v83 = (int*)qword_140DC2828;
				}
				*(_WORD*)v83 = v84;
				qword_140DC2828 += 2i64;
				v94 = (int*)qword_140DC2828;
				v95 = sub_140011B20(v36[3]);
				LOWORD(v150) = v95;
				if ((int*)((char*)v94 + 2) == (int*)qword_140DC2830)
				{
					v148 = 1i64;
					v96 = ((__int64)v94 - qword_140DC2820) >> 1;
					v97 = &v148;
					v149 = v96;
					if (v96)
						v97 = (__int64*)&v149;
					v98 = *v97;
					v99 = &v148;
					v148 = v96;
					v149 = v96 + v98;
					if (v96 + v98 >= v96)
						v99 = (__int64*)&v149;
					v100 = 2 * (*v99 + 1);
					v101 = sub_14018B280(v100, 0);
					v102 = qword_140DC2828;
					v103 = (_WORD*)qword_140DC2820;
					v104 = (__int64)v101;
					v94 = v101;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v94)
								*(_WORD*)v94 = *v103;
							++v103;
							v94 = (int*)((char*)v94 + 2);
						} while (v103 != (_WORD*)v102);
						v103 = (_WORD*)qword_140DC2820;
					}
					if (v94)
					{
						*(_WORD*)v94 = 0;
						v103 = (_WORD*)qword_140DC2820;
					}
					if (v103)
						sub_14018B900((__int64)v103, 0);
					v95 = v150;
					qword_140DC2820 = v104;
					qword_140DC2830 = v104 + v100;
					qword_140DC2828 = (__int64)v94;
				}
				if (v94 != (int*)-2i64)
				{
					*((_WORD*)v94 + 1) = 0;
					v94 = (int*)qword_140DC2828;
				}
				*(_WORD*)v94 = v95;
				qword_140DC2828 += 2i64;
				v105 = (int*)qword_140DC2828;
				v106 = sub_140011B20(v36[5]);
				LOWORD(v150) = v106;
				if ((int*)((char*)v105 + 2) == (int*)qword_140DC2830)
				{
					v148 = 1i64;
					v107 = ((__int64)v105 - qword_140DC2820) >> 1;
					v108 = &v148;
					v149 = v107;
					if (v107)
						v108 = (__int64*)&v149;
					v109 = *v108;
					v110 = &v148;
					v148 = v107;
					v149 = v107 + v109;
					if (v107 + v109 >= v107)
						v110 = (__int64*)&v149;
					v111 = 2 * (*v110 + 1);
					v112 = sub_14018B280(v111, 0);
					v113 = qword_140DC2828;
					v114 = (_WORD*)qword_140DC2820;
					v115 = (__int64)v112;
					v105 = v112;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v105)
								*(_WORD*)v105 = *v114;
							++v114;
							v105 = (int*)((char*)v105 + 2);
						} while (v114 != (_WORD*)v113);
						v114 = (_WORD*)qword_140DC2820;
					}
					if (v105)
					{
						*(_WORD*)v105 = 0;
						v114 = (_WORD*)qword_140DC2820;
					}
					if (v114)
						sub_14018B900((__int64)v114, 0);
					v106 = v150;
					qword_140DC2820 = v115;
					qword_140DC2830 = v115 + v111;
					qword_140DC2828 = (__int64)v105;
				}
				if (v105 != (int*)-2i64)
				{
					*((_WORD*)v105 + 1) = 0;
					v105 = (int*)qword_140DC2828;
				}
				*(_WORD*)v105 = v106;
				qword_140DC2828 += 2i64;
				v116 = (int*)qword_140DC2828;
				v117 = sub_140011B20(v36[4]);
				if ((int*)((char*)v116 + 2) == (int*)qword_140DC2830)
				{
					v148 = 1i64;
					v118 = ((__int64)v116 - qword_140DC2820) >> 1;
					v119 = &v148;
					v149 = v118;
					if (v118)
						v119 = (__int64*)&v149;
					v120 = *v119;
					v148 = v118;
					v121 = &v148;
					v149 = v118 + v120;
					if (v118 + v120 >= v118)
						v121 = (__int64*)&v149;
					v148 = 2 * (*v121 + 1);
					v122 = sub_14018B280(v148, 0);
					v123 = qword_140DC2828;
					v124 = (_WORD*)qword_140DC2820;
					v125 = (__int64)v122;
					v116 = v122;
					if (qword_140DC2820 != qword_140DC2828)
					{
						do
						{
							if (v116)
								*(_WORD*)v116 = *v124;
							++v124;
							v116 = (int*)((char*)v116 + 2);
						} while (v124 != (_WORD*)v123);
						v124 = (_WORD*)qword_140DC2820;
					}
					if (v116)
					{
						*(_WORD*)v116 = 0;
						v124 = (_WORD*)qword_140DC2820;
					}
					if (v124)
						sub_14018B900((__int64)v124, 0);
					qword_140DC2820 = v125;
					qword_140DC2828 = (__int64)v116;
					qword_140DC2830 = v125 + v148;
				}
				if (v116 != (int*)-2i64)
				{
					*((_WORD*)v116 + 1) = 0;
					v116 = (int*)qword_140DC2828;
				}
				*(_WORD*)v116 = v117;
				qword_140DC2828 += 2i64;
			}
			else
			{
				v126 = sub_140011B20(v37);
				sub_1400A7EA0(&qword_140DC2818, v126);
				v127 = sub_140011B20(*v36);
				sub_1400A7EA0(&qword_140DC2818, v127);
				v128 = sub_140011B20(v36[2]);
				sub_1400A7EA0(&qword_140DC2818, v128);
				v129 = sub_140011B20(v36[1]);
				sub_1400A7EA0(&qword_140DC2818, v129);
				v130 = sub_140011B20(v36[6]);
				sub_1400A7EA0(&qword_140DC2818, v130);
				v131 = sub_140011B20(v36[3]);
				sub_1400A7EA0(&qword_140DC2818, v131);
				v132 = sub_140011B20(v36[5]);
				sub_1400A7EA0(&qword_140DC2818, v132);
				v133 = sub_140011B20(v36[4]);
				sub_1400A7EA0(&qword_140DC2818, v133);
			}
			sub_14018B900((__int64)v36, 0);
			if (v17)
				sub_14018B900((__int64)v17, 0);
			v6 = v151;
		}
		sub_14001C310(&v152, (int*)qword_140DC2820, (int*)qword_140DC2828);
		v134 = 0i64;
		do
			v10 = *((_WORD*)&unk_1409E8DA4 + ++v134) == 0;
		while (!v10);
		sub_14001C310(&v152, (int*)&unk_1409E8DA4, (int*)((char*)&unk_1409E8DA4 + 2 * v134));
		v5 = v156;
	}
	if (v6 < 2)
		goto LABEL_204;
	v135 = *(int**)(qword_140C635F0 + 5752);
	if (v135 && *(_WORD*)v135)
	{
		v136 = 0i64;
		do
			v10 = *((_WORD*)v135 + ++v136) == 0;
		while (!v10);
		sub_14001C310(&v152, v135, (int*)((char*)v135 + 2 * v136));
		v137 = 0i64;
		do
			v10 = *(_WORD*)&asc_1409E8C94[2 * v137++ + 2] == 0;
		while (!v10);
		sub_14001C310(&v152, (int*)"\\", (int*)&asc_1409E8C94[2 * v137]);
	LABEL_204:
		if (v6 < 3)
		{
		LABEL_212:
			v157 = L"_Gen";
			v158 = L"_Acct";
			v159 = L"_Rlm";
			v160 = L"_Char";
			v141 = 0i64;
			if (*(_WORD*)v5)
			{
				do
					++v141;
				while (*((_WORD*)v5 + v141));
			}
			sub_14001C310(&v152, v5, (int*)((char*)v5 + 2 * v141));
			v142 = (int*)(&v157)[v6];
			v143 = 0i64;
			if (*(_WORD*)v142)
			{
				do
					++v143;
				while (*((_WORD*)v142 + v143));
			}
			sub_14001C310(&v152, v142, (int*)((char*)v142 + 2 * v143));
			do
				v10 = aXml[++v7] == 0;
			while (!v10);
			sub_14001C310(&v152, (int*)L".xml", (int*)&aXml[v7]);
			a2[1] = v153;
			a2[2] = v154;
			a2[3] = v155;
			return a2;
		}
		v138 = *(int**)(qword_140C65898 + 136);
		if (v138 && *(_WORD*)v138)
		{
			v139 = 0i64;
			do
				v10 = *((_WORD*)v138 + ++v139) == 0;
			while (!v10);
			sub_14001C310(&v152, v138, (int*)((char*)v138 + 2 * v139));
			v140 = 0i64;
			do
				v10 = *(_WORD*)&asc_1409E8BEC[2 * v140++ + 2] == 0;
			while (!v10);
			sub_14001C310(&v152, (int*)"\\", (int*)&asc_1409E8BEC[2 * v140]);
			goto LABEL_212;
		}
		v146 = &unk_1409E8C1C;
		v147 = (int*)&unk_1409E8C1C;
		goto LABEL_224;
	}
	v146 = &unk_1409E8CE4;
	v147 = (int*)&unk_1409E8CE4;
LABEL_224:
	a2[3] = 0i64;
	a2[2] = 0i64;
	a2[1] = 0i64;
	sub_14001C1B0(a2, v147, (__int64)v146);
LABEL_225:
	if (v153)
		sub_14018B900((__int64)v153, 0);
	return a2;
}
// 1409E8C44: using guessed type int dword_1409E8C44[12];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B00598: using guessed type wchar_t aAcct[6];
// 140B005A8: using guessed type wchar_t aGen[5];
// 140B005D8: using guessed type wchar_t aXml[5];
// 140B005E8: using guessed type wchar_t aChar[6];
// 140B005F8: using guessed type wchar_t aRlm[5];
// 140B00608: using guessed type wchar_t aAddonsavedata[14];
// 140B00650: using guessed type wchar_t a08x_8[5];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AC40: using guessed type int dword_140C8AC40;
// 140DC2810: using guessed type int dword_140DC2810;
// 140DC2818: using guessed type _QWORD qword_140DC2818;
// 140DC2820: using guessed type __int64 qword_140DC2820;
// 140DC2828: using guessed type __int64 qword_140DC2828;
// 140DC2830: using guessed type __int64 qword_140DC2830;

