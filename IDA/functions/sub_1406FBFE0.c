//----- (00000001406FBFE0) ----------------------------------------------------
__int64 __fastcall sub_1406FBFE0(_QWORD* a1)
{
	__int64 v1; // r13
	unsigned int v2; // eax
	__int64 v3; // r8
	unsigned int v4; // edi
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rsi
	unsigned __int64 v8; // r14
	unsigned __int64 v9; // r12
	unsigned int v10; // edi
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // ebx
	__int64 v16; // rcx
	_QWORD* v17; // rax
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r11
	__int64 v21; // rdx
	int v22; // r10d
	BOOL v23; // esi
	_QWORD* v24; // rax
	__int64 v25; // r10
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	BOOL* v28; // rcx
	__int64* v29; // rax
	__int64* v30; // r15
	__int64 v31; // rbx
	__int64 v32; // rax
	int v33; // esi
	_QWORD* v34; // rax
	__int64 v35; // rdx
	unsigned __int16* v36; // r10
	_QWORD* v37; // rax
	__int64 v38; // r11
	__int64 v39; // rdx
	int v40; // r10d
	unsigned int v41; // ebx
	_QWORD* v42; // rax
	__int64 v43; // rdx
	unsigned __int16* v44; // r10
	__int64 v45; // rcx
	unsigned __int64 v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	unsigned __int64 i; // rbx
	__int64 v50; // r9
	double* v51; // rdx
	__int64 v52; // rcx
	unsigned __int64* v53; // r14
	unsigned __int64 v54; // rsi
	__int64 v55; // rbx
	__int64 v56; // rax
	__int64 v57; // rcx
	__int64 v58; // r9
	double* v59; // rdx
	__int64 v60; // rcx
	__int64 v61; // r8
	__int64 v62; // rcx
	__int64 v63; // rbx
	__int64 v64; // rax
	unsigned __int64 v65; // r12
	int* v66; // rax
	int* v67; // rsi
	int* v68; // rax
	__int64 v69; // rbx
	__int64 v70; // rax
	int* v71; // rax
	__int64 v72; // r14
	int* v73; // rsi
	__int64 v74; // rax
	bool v75; // zf
	__int64 v76; // r15
	__int64 v77; // rcx
	unsigned int v78; // eax
	__int64 v79; // rbx
	_QWORD* v80; // rax
	int* v81; // rdx
	int* v82; // rbx
	int v83; // edx
	__int64 v84; // rcx
	__int64 v85; // rax
	__int64 v86; // r15
	int* v87; // rsi
	__int64 v88; // rax
	__int64 v89; // r14
	__int64 v90; // rcx
	unsigned int v91; // eax
	__int64 v92; // rbx
	_QWORD* v93; // rax
	int* v94; // rdx
	int* v95; // rdx
	__int64 v96; // rax
	int v97; // r12d
	__int64 v98; // r9
	_DWORD* v99; // rdx
	double v100; // xmm0_8
	__int64 v101; // rcx
	unsigned __int64* v102; // r14
	unsigned __int64 v103; // rsi
	__int64 v104; // rbx
	__int64 v105; // rax
	__int64 v106; // rcx
	int v107; // ebx
	__int64 v108; // r9
	_DWORD* v109; // rdx
	__int64 v110; // rcx
	__int64 v111; // r8
	__int64 v112; // rdx
	__int64* v113; // rax
	__int64 v114; // r8
	__int64 v115; // rdx
	char v117[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v118; // [rsp+28h] [rbp-D8h]
	int* v119; // [rsp+30h] [rbp-D0h]
	__int64 v120; // [rsp+38h] [rbp-C8h]
	__int64* v121; // [rsp+40h] [rbp-C0h]
	__int64 v122; // [rsp+48h] [rbp-B8h] BYREF
	int* v123; // [rsp+50h] [rbp-B0h]
	int* v124; // [rsp+58h] [rbp-A8h]
	int* v125; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *v126)(); // [rsp+68h] [rbp-98h] BYREF
	int v127; // [rsp+70h] [rbp-90h]
	__int64 v128; // [rsp+78h] [rbp-88h]
	int v129; // [rsp+80h] [rbp-80h]
	_QWORD* v130; // [rsp+88h] [rbp-78h]
	__int64(__fastcall * *v131)(); // [rsp+90h] [rbp-70h] BYREF
	char v132[8]; // [rsp+98h] [rbp-68h] BYREF
	__int64 v133; // [rsp+A0h] [rbp-60h]
	__int64 v134; // [rsp+B8h] [rbp-48h] BYREF
	int* v135; // [rsp+C0h] [rbp-40h]
	int* v136; // [rsp+C8h] [rbp-38h]
	int* v137; // [rsp+D0h] [rbp-30h]
	__int64 v138; // [rsp+D8h] [rbp-28h]
	unsigned int v139; // [rsp+E0h] [rbp-20h]
	char v140[8]; // [rsp+E8h] [rbp-18h] BYREF
	int* v141; // [rsp+F0h] [rbp-10h]
	int* v142; // [rsp+F8h] [rbp-8h]
	__int128 v143; // [rsp+150h] [rbp+50h]
	int* v144; // [rsp+160h] [rbp+60h]
	__int64(__fastcall * *v145)(); // [rsp+170h] [rbp+70h] BYREF
	int v146; // [rsp+178h] [rbp+78h]
	__int64 v147; // [rsp+180h] [rbp+80h]
	int v148; // [rsp+188h] [rbp+88h]
	__int64(__fastcall * *v149)(); // [rsp+190h] [rbp+90h] BYREF
	int v150; // [rsp+198h] [rbp+98h]
	__int64 v151; // [rsp+1A0h] [rbp+A0h]
	int v152; // [rsp+1A8h] [rbp+A8h]
	__int64 v153; // [rsp+1B0h] [rbp+B0h] BYREF
	__int64 v154; // [rsp+1B8h] [rbp+B8h]
	__int64 v155; // [rsp+1D0h] [rbp+D0h] BYREF
	unsigned __int64 v156; // [rsp+1D8h] [rbp+D8h]
	unsigned __int64 v157; // [rsp+1E0h] [rbp+E0h]
	__int64 v158; // [rsp+248h] [rbp+148h]
	int v159; // [rsp+248h] [rbp+148h]
	double v160; // [rsp+248h] [rbp+148h]
	double v161; // [rsp+248h] [rbp+148h]
	int* v162; // [rsp+250h] [rbp+150h] BYREF
	double v163; // [rsp+258h] [rbp+158h] BYREF

	v1 = (__int64)a1;
	v130 = a1;
	v2 = sub_140056D60(a1, 1u);
	v3 = *(_QWORD*)(qword_140C658D8 + 8);
	v4 = v2;
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v3 || (v158 = v6, v2 < *(_DWORD*)(v6 + 32)))
		v158 = *(_QWORD*)(qword_140C658D8 + 8);
	if (v158 == v3 || (v7 = *(_QWORD*)(v158 + 40)) == 0)
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 0i64;
	}
	sub_1401DDFD0(&v155, v7 + 8);
	v8 = v156;
	v9 = v157;
	if (v156 != v157)
	{
		v11 = *(_QWORD*)(v1 + 32);
		v149 = off_140B569F0;
		v12 = *(_QWORD*)(v11 + 112);
		v151 = v1;
		v152 = 1;
		if (*(_QWORD*)(v11 + 120) >= v12)
			sub_14005E2C0(v1);
		v13 = *(_QWORD*)(v1 + 16);
		v14 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v13 + 8) = 5;
		*(_QWORD*)v13 = v14;
		*(_QWORD*)(v1 + 16) += 16i64;
		v15 = sub_1400578C0(v1);
		v16 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
		v150 = v15;
		v17 = sub_14005C3C0(v16, v15);
		v18 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400F06F0(v1, v18, L"nTutorialId", v4);
		*(_QWORD*)(v1 + 16) -= 16i64;
		v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400F06F0(v1, v21, L"eTutorialCategory", v22);
		*(_QWORD*)(v1 + 16) -= 16i64;
		v23 = sub_140437EA0(qword_140C658D8, v4);
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
		*(_QWORD*)v25 = *v24;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		v26 = (unsigned __int64*)sub_14018F0E0(&v122, L"bIsViewed")[1];
		if (v26)
		{
			v27 = -1i64;
			do
				++v27;
			while (*((_BYTE*)v26 + v27));
			sub_140058710(v1, v26, v27);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			*(_QWORD*)(v1 + 16) += 16i64;
		}
		if (v123)
			sub_14018B900((__int64)v123, 0);
		v28 = *(BOOL**)(v1 + 16);
		v28[2] = 1;
		*v28 = v23;
		*(_QWORD*)(v1 + 16) += 16i64;
		v29 = (__int64*)sub_1400580E0(v1, -3);
		sub_14005EA50(v1, v29, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
		*(_QWORD*)(v1 + 16) -= 48i64;
		v30 = (__int64*)v8;
		v121 = (__int64*)v8;
		if (v8 >= v9)
		{
		LABEL_166:
			v113 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
			v114 = *(_QWORD*)(v1 + 16);
			v115 = *v113;
			v10 = 1;
			*(_QWORD*)v114 = *v113;
			*(_DWORD*)(v114 + 8) = *((_DWORD*)v113 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400579E0(v1, v115, v15);
			goto LABEL_167;
		}
	LABEL_23:
		if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
			sub_14005E2C0(v1);
		v31 = *(_QWORD*)(v1 + 16);
		v32 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v31 + 8) = 5;
		*(_QWORD*)v31 = v32;
		*(_QWORD*)(v1 + 16) += 16i64;
		v33 = sub_1400578C0(v1);
		v159 = v33;
		sub_14034BDD0(*v30, *(_DWORD*)(*v30 + 16));
		v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v33);
		v35 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v35 = *v34;
		*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400F0870(v1, v35, L"strTitle", v36);
		*(_QWORD*)(v1 + 16) -= 16i64;
		v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v33);
		*(_QWORD*)v38 = *v37;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400F06F0(v1, v39, L"nLayoutId", v40);
		*(_QWORD*)(v1 + 16) -= 16i64;
		v41 = *(_DWORD*)(*v30 + 12);
		if (qword_140C63840)
		{
			qword_140C63840(off_140A6DE70, v41, qword_140C63858);
		}
		else if (!dword_140C64114 && (int)sub_140246EE0() >= 0)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65160 + 24i64))(qword_140C65160, v41);
		}
		v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v33);
		v43 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v43 = *v42;
		*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400F0870(v1, v43, L"strLayoutForm", v44);
		*(_QWORD*)(v1 + 16) -= 16i64;
		v45 = *(_QWORD*)(v1 + 32);
		v126 = off_140B569F0;
		v46 = *(_QWORD*)(v45 + 112);
		v128 = v1;
		v129 = 1;
		if (*(_QWORD*)(v45 + 120) >= v46)
			sub_14005E2C0(v1);
		v47 = *(_QWORD*)(v1 + 16);
		v48 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v47 + 8) = 5;
		*(_QWORD*)v47 = v48;
		*(_QWORD*)(v1 + 16) += 16i64;
		v127 = sub_1400578C0(v1);
		for (i = 32i64; i < 0x38; i += 8i64)
			sub_1400FAD30((__int64)&v126);
		v50 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
		if ((unsigned int)(v33 - 1) >= *(_DWORD*)(v50 + 56))
		{
			v163 = (double)v33;
			if ((double)v33 == 0.0)
				v51 = *(double**)(v50 + 32);
			else
				v51 = (double*)(*(_QWORD*)(v50 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v163) + HIDWORD(v163)) % (((1i64 << *(_BYTE*)(v50 + 11)) - 1) | 1)));
			do
			{
				if (*((_DWORD*)v51 + 6) == 3 && (double)v33 == v51[2])
					goto LABEL_43;
				v51 = (double*)*((_QWORD*)v51 + 4);
			} while (v51);
			v51 = (double*)dword_140A12138;
		}
		else
		{
			v51 = (double*)(*(_QWORD*)(v50 + 24) + 16i64 * (v33 - 1));
		}
	LABEL_43:
		v52 = *(_QWORD*)(v1 + 16);
		*(double*)v52 = *v51;
		*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		v53 = (unsigned __int64*)sub_14018F0E0(&v122, L"tSprites")[1];
		if (v53)
		{
			v54 = -1i64;
			do
				++v54;
			while (*((_BYTE*)v53 + v54));
			if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
				sub_14005E2C0(v1);
			v55 = *(_QWORD*)(v1 + 16);
			v56 = sub_140062650(v1, v53, v54);
			*(_DWORD*)(v55 + 8) = 4;
			*(_QWORD*)v55 = v56;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		}
		v57 = (__int64)v123;
		*(_QWORD*)(v1 + 16) += 16i64;
		if (v57)
			sub_14018B900(v57, 0);
		v58 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
		if ((unsigned int)(v127 - 1) >= *(_DWORD*)(v58 + 56))
		{
			v163 = (double)v127;
			if ((double)v127 == 0.0)
				v59 = *(double**)(v58 + 32);
			else
				v59 = (double*)(*(_QWORD*)(v58 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v163) + HIDWORD(v163)) % (((1i64 << *(_BYTE*)(v58 + 11)) - 1) | 1)));
			do
			{
				if (*((_DWORD*)v59 + 6) == 3 && (double)v127 == v59[2])
					goto LABEL_61;
				v59 = (double*)*((_QWORD*)v59 + 4);
			} while (v59);
			v59 = (double*)dword_140A12138;
		}
		else
		{
			v59 = (double*)(*(_QWORD*)(v58 + 24) + 16i64 * (v127 - 1));
		}
	LABEL_61:
		v60 = *(_QWORD*)(v1 + 16);
		*(double*)v60 = *v59;
		*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
		v61 = *(_QWORD*)(v1 + 16) + 16i64;
		*(_QWORD*)(v1 + 16) = v61;
		sub_14005EA50(v1, (__int64*)(v61 - 48), (int*)(v61 - 32), (unsigned int*)(v61 - 16));
		*(_QWORD*)(v1 + 16) -= 48i64;
		v62 = *(_QWORD*)(v1 + 32);
		v147 = v1;
		v148 = 1;
		v145 = off_140B569F0;
		if (*(_QWORD*)(v62 + 120) >= *(_QWORD*)(v62 + 112))
			sub_14005E2C0(v1);
		v63 = *(_QWORD*)(v1 + 16);
		v64 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v63 + 8) = 5;
		*(_QWORD*)v63 = v64;
		*(_QWORD*)(v1 + 16) += 16i64;
		v146 = sub_1400578C0(v1);
		v65 = 20i64;
		while (1)
		{
			sub_1400B6F30((__int64)&v131);
			v131 = off_140B69230;
			v144 = 0i64;
			v143 = 0i64;
			v66 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v143 = v66;
			*((_QWORD*)&v143 + 1) = v66;
			v144 = v66 + 4;
			if (v66)
				*(_WORD*)v66 = 0;
			v67 = (int*)sub_14034BDD0((__int64)(v66 + 4), *(_DWORD*)(v65 + *v30));
			v68 = sub_14018B280(16i64, 0);
			v69 = (__int64)v68;
			v123 = v68;
			v124 = v68;
			v125 = v68 + 4;
			if (v68)
				*(_WORD*)v68 = 0;
			if (!v67)
				goto LABEL_128;
			v70 = 0i64;
			if (*(_WORD*)v67)
			{
				do
					++v70;
				while (*((_WORD*)v67 + v70));
			}
			sub_14001C480((__int64)v132, v67, (int*)((char*)v67 + 2 * v70));
			v71 = sub_14018B280(96i64, 0);
			if (v71)
				v72 = sub_1404DB7E0((__int64)v71, *(_QWORD*)(qword_140C65898 + 120));
			else
				v72 = 0i64;
			v73 = 0i64;
			v118 = 0i64;
			v119 = 0i64;
			v120 = 0i64;
			v74 = 0i64;
			do
				v75 = aUnitself[++v74] == 0;
			while (!v75);
			v76 = (2 * v74) >> 1;
			if ((unsigned __int64)(v76 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v73 = sub_14018B280(2 * (v76 + 1), 0);
				v118 = v73;
				v119 = v73;
				v120 = (__int64)v73 + 2 * v76 + 2;
			}
			sub_1407DB590(v73, (int*)L"unitSelf", 2 * v76);
			v119 = (int*)((char*)v73 + 2 * v76);
			if (v119)
				*((_WORD*)v73 + v76) = 0;
			v77 = v138;
			v78 = v139;
			v163 = *(double*)&v72;
			if (v135 == v136)
				v77 = v72;
			v138 = v77;
			++v139;
			v79 = *(_QWORD*)v72;
			v80 = sub_14018EFA0(&v153, (__int64)L"%d", v78);
			(*(void(__fastcall**)(__int64, _QWORD*))(v79 + 72))(v72, v80);
			if (v154)
				sub_14018B900(v154, 0);
			v81 = v136;
			if (v136 == v137)
			{
				sub_1400B9430(&v134, v136, &v163);
			}
			else
			{
				if (v136)
				{
					*(_QWORD*)v136 = v72;
					v81 = v136;
				}
				v136 = v81 + 2;
			}
			if (v141 != v142)
			{
				*(_WORD*)v141 = 0;
				v142 = v141;
			}
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v72 + 72i64))(v72, v117);
			if (v118)
				sub_14018B900((__int64)v118, 0);
			v82 = sub_14018B280(96i64, 0);
			if (v82)
			{
				v83 = 0;
				v84 = *(_QWORD*)(qword_140C65898 + 25744);
				if (v84)
					v83 = *(_DWORD*)(v84 + 264);
				v85 = sub_1403D90D0(qword_140C65898, v83);
				v86 = sub_1404DB7E0((__int64)v82, v85);
			}
			else
			{
				v86 = 0i64;
			}
			v87 = 0i64;
			v118 = 0i64;
			v119 = 0i64;
			v120 = 0i64;
			v88 = 0i64;
			do
				v75 = aUnittarget_1[++v88] == 0;
			while (!v75);
			v89 = (2 * v88) >> 1;
			if ((unsigned __int64)(v89 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v87 = sub_14018B280(2 * (v89 + 1), 0);
				v118 = v87;
				v119 = v87;
				v120 = (__int64)v87 + 2 * v89 + 2;
			}
			sub_1407DB590(v87, (int*)L"unitTarget", 2 * v89);
			v119 = (int*)((char*)v87 + 2 * v89);
			if (v119)
				*((_WORD*)v87 + v89) = 0;
			v90 = v138;
			v91 = v139;
			v163 = *(double*)&v86;
			if (v135 == v136)
				v90 = v86;
			v138 = v90;
			++v139;
			v92 = *(_QWORD*)v86;
			v93 = sub_14018EFA0(&v153, (__int64)L"%d", v91);
			(*(void(__fastcall**)(__int64, _QWORD*))(v92 + 72))(v86, v93);
			if (v154)
				sub_14018B900(v154, 0);
			v94 = v136;
			if (v136 == v137)
			{
				sub_1400B9430(&v134, v136, &v163);
			}
			else
			{
				if (v136)
				{
					*(_QWORD*)v136 = v86;
					v94 = v136;
				}
				v136 = v94 + 2;
			}
			if (v141 != v142)
			{
				*(_WORD*)v141 = 0;
				v142 = v141;
			}
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v86 + 72i64))(v86, v117);
			if (v118)
				sub_14018B900((__int64)v118, 0);
			v95 = v141;
			if (v141 == v142 && qword_140C63648)
			{
				v162 = 0i64;
				(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), int**))qword_140C63648)(
					qword_140C63648,
					v133,
					&v131,
					&v162);
				if (v162)
				{
					v96 = 0i64;
					if (*(_WORD*)v162)
					{
						do
							++v96;
						while (*((_WORD*)v162 + v96));
					}
					sub_14001C480((__int64)v140, v162, (int*)((char*)v162 + 2 * v96));
					v95 = v141;
					goto LABEL_125;
				}
				v95 = v141;
				if (v141 != v142)
				{
					*(_WORD*)v141 = 0;
					v95 = v141;
					v142 = v141;
				LABEL_125:
					if (v162)
					{
						(*(void(__fastcall**)(int*, int*))(*((_QWORD*)v162 - 2) + 8i64))(v162 - 4, v95);
						v95 = v141;
					}
				}
			}
			sub_14001C480((__int64)&v122, v95, v142);
			v69 = (__int64)v123;
			v30 = v121;
		LABEL_128:
			sub_1400FAD30((__int64)&v145);
			if (v69)
				sub_14018B900(v69, 0);
			if ((_QWORD)v143)
				sub_14018B900(v143, 0);
			sub_1400B7390(&v131);
			v65 += 4i64;
			if (v65 >= 0x20)
			{
				v1 = (__int64)v130;
				v97 = v159;
				v98 = *(_QWORD*)(v130[4] + 160i64);
				if ((unsigned int)(v159 - 1) >= *(_DWORD*)(v98 + 56))
				{
					v100 = (double)v159;
					v160 = (double)v159;
					if (v100 == 0.0)
						v99 = *(_DWORD**)(v98 + 32);
					else
						v99 = (_DWORD*)(*(_QWORD*)(v98 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v160) + HIDWORD(v160)) % (((1i64 << *(_BYTE*)(v98 + 11)) - 1) | 1)));
					while (v99[6] != 3 || v100 != *((double*)v99 + 2))
					{
						v99 = (_DWORD*)*((_QWORD*)v99 + 4);
						if (!v99)
						{
							v99 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v99 = (_DWORD*)(*(_QWORD*)(v98 + 24) + 16i64 * (v159 - 1));
				}
				v101 = v130[2];
				*(_QWORD*)v101 = *(_QWORD*)v99;
				*(_DWORD*)(v101 + 8) = v99[2];
				*(_QWORD*)(v1 + 16) += 16i64;
				v102 = (unsigned __int64*)sub_14018F0E0(&v153, L"tBody")[1];
				if (v102)
				{
					v103 = -1i64;
					do
						++v103;
					while (*((_BYTE*)v102 + v103));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v104 = *(_QWORD*)(v1 + 16);
					v105 = sub_140062650(v1, v102, v103);
					*(_DWORD*)(v104 + 8) = 4;
					*(_QWORD*)v104 = v105;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v106 = v154;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v106)
					sub_14018B900(v106, 0);
				v107 = v146;
				v108 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
				if ((unsigned int)(v146 - 1) >= *(_DWORD*)(v108 + 56))
				{
					if ((double)v146 == 0.0)
					{
						v109 = *(_DWORD**)(v108 + 32);
					}
					else
					{
						v161 = (double)v146;
						v109 = (_DWORD*)(*(_QWORD*)(v108 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v161) + HIDWORD(v161))
								% (((1i64 << *(_BYTE*)(v108 + 11)) - 1) | 1)));
					}
					while (v109[6] != 3 || (double)v146 != *((double*)v109 + 2))
					{
						v109 = (_DWORD*)*((_QWORD*)v109 + 4);
						if (!v109)
						{
							v109 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v109 = (_DWORD*)(*(_QWORD*)(v108 + 24) + 16i64 * (v146 - 1));
				}
				v110 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v110 = *(_QWORD*)v109;
				*(_DWORD*)(v110 + 8) = v109[2];
				v111 = *(_QWORD*)(v1 + 16) + 16i64;
				*(_QWORD*)(v1 + 16) = v111;
				sub_14005EA50(v1, (__int64*)(v111 - 48), (int*)(v111 - 32), (unsigned int*)(v111 - 16));
				*(_QWORD*)(v1 + 16) -= 48i64;
				sub_1400FB1D0((__int64)&v149);
				if (v147)
					sub_1400579E0(v147, v112, v107);
				if (v128)
					sub_1400579E0(v128, v112, v127);
				sub_1400579E0(v1, v112, v97);
				v121 = ++v30;
				if ((unsigned __int64)v30 >= v157)
				{
					v1 = v151;
					v15 = v150;
					v8 = v156;
					goto LABEL_166;
				}
				goto LABEL_23;
			}
		}
	}
	v10 = 0;
	*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
	*(_QWORD*)(v1 + 16) += 16i64;
LABEL_167:
	if (v8)
		sub_14018B900(v8, 0);
	return v10;
}
// 1406FC19A: variable 'v20' is possibly undefined
// 1406FC1AC: variable 'v21' is possibly undefined
// 1406FC1AC: variable 'v22' is possibly undefined
// 1406FC1E6: variable 'v25' is possibly undefined
// 1406FC338: variable 'v36' is possibly undefined
// 1406FC36C: variable 'v38' is possibly undefined
// 1406FC37E: variable 'v39' is possibly undefined
// 1406FC37E: variable 'v40' is possibly undefined
// 1406FC436: variable 'v44' is possibly undefined
// 1406FCDE0: variable 'v112' is possibly undefined
// 1409D2FA4: using guessed type wchar_t aD_5[3];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DE70: using guessed type wchar_t *off_140A6DE70[2];
// 140B415D8: using guessed type wchar_t aNlayoutid[10];
// 140B415F0: using guessed type wchar_t aStrtitle_6[9];
// 140B41608: using guessed type wchar_t aBisviewed[10];
// 140B41620: using guessed type wchar_t aEtutorialcateg[18];
// 140B41648: using guessed type wchar_t aNtutorialid[12];
// 140B417C0: using guessed type wchar_t aTbody[6];
// 140B417D0: using guessed type wchar_t aUnittarget_1[11];
// 140B417E8: using guessed type wchar_t aUnitself[9];
// 140B41800: using guessed type wchar_t aTsprites[9];
// 140B41818: using guessed type wchar_t aStrlayoutform[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64114: using guessed type int dword_140C64114;
// 140C65160: using guessed type __int64 qword_140C65160;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 1406FBFE0: using guessed type char var_198[8];
// 1406FBFE0: using guessed type char var_210[8];
// 1406FBFE0: using guessed type char var_148[8];

