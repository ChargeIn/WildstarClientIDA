//----- (000000014074E4F0) ----------------------------------------------------
__int64 __fastcall sub_14074E4F0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebx
	unsigned __int64 v7; // rax
	unsigned int v8; // edx
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // rax
	_DWORD* v13; // rdx
	int v14; // eax
	BOOL v15; // esi
	__int64 v16; // rcx
	__int64 v17; // rcx
	unsigned __int64 v18; // rax
	int* v19; // rdx
	__int64 v20; // r13
	__int64 v21; // r14
	__int64 v22; // rax
	int* v23; // rcx
	unsigned int v24; // ebx
	__int64 v25; // rax
	__int64 v26; // rsi
	__int64 v27; // rbx
	__int64 v28; // rax
	_QWORD* v29; // rax
	__int64 v30; // rdx
	int v31; // r10d
	__int64 v32; // rcx
	_QWORD* v33; // rax
	__int64 v34; // rdx
	unsigned __int16* v35; // r10
	__int64 v36; // rcx
	unsigned __int64 v37; // rax
	__int64 v38; // r12
	__int64 v39; // rbx
	__int64 v40; // rax
	unsigned __int64 v41; // rsi
	int v42; // r15d
	int* v43; // rdx
	__int64 v44; // r15
	__int64 v45; // rax
	__int64 v46; // r14
	int* v47; // rcx
	unsigned int v48; // ebx
	__int64 v49; // rax
	__int64 v50; // rsi
	__int64 v51; // rbx
	__int64 v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // rdx
	int v55; // r10d
	__int64 v56; // rcx
	_QWORD* v57; // rax
	__int64 v58; // rdx
	unsigned __int16* v59; // r10
	__int64 v60; // rcx
	__int64 v61; // r12
	unsigned __int64 v62; // rax
	__int64 v63; // rbx
	__int64 v64; // rax
	int v65; // r15d
	__int64 v66; // rax
	unsigned __int64 v67; // r13
	int* v68; // r8
	__int64 v69; // r15
	__int64 v70; // rdx
	__int64 v71; // rax
	int* v72; // rcx
	unsigned int v73; // ebx
	__int64 v74; // rax
	int* v75; // rsi
	__int64 v76; // rbx
	__int64 v77; // rax
	int v78; // eax
	int v79; // r14d
	int v80; // ebx
	_QWORD* v81; // rax
	__int64 v82; // rdx
	unsigned __int64* v83; // rdx
	unsigned __int64 v84; // r8
	__int64 v85; // rax
	__int64* v86; // rax
	__int64 v87; // rcx
	_QWORD* v88; // rax
	__int64 v89; // rdx
	unsigned __int16* v90; // r10
	__int64 v91; // rdx
	int v92; // ebx
	__int64 v93; // r9
	_DWORD* v94; // rdx
	__int64 v95; // rcx
	unsigned __int64* v96; // r14
	unsigned __int64 v97; // rsi
	__int64 v98; // rbx
	__int64 v99; // rax
	__int64 v100; // rcx
	__int64 v101; // r9
	_DWORD* v102; // rdx
	__int64 v103; // rcx
	__int64 v104; // r8
	__int64 v105; // rdx
	int v106; // ebx
	__int64 v107; // r9
	_DWORD* v108; // rdx
	__int64 v109; // rcx
	unsigned __int64* v110; // r14
	unsigned __int64 v111; // rsi
	__int64 v112; // rbx
	__int64 v113; // rax
	__int64 v114; // rcx
	__int64 v115; // r9
	_DWORD* v116; // rdx
	__int64 v117; // rcx
	__int64 v118; // r8
	__int64 v119; // rdx
	__int64 v120; // r9
	_DWORD* v121; // rcx
	__int64 v122; // r8
	__int64 v123; // rdx
	__int64 v125; // [rsp+28h] [rbp-E0h]
	double v126; // [rsp+28h] [rbp-E0h]
	__int64 v127; // [rsp+30h] [rbp-D8h] BYREF
	int* v128; // [rsp+38h] [rbp-D0h]
	__int64 v129; // [rsp+40h] [rbp-C8h]
	unsigned __int64 v130; // [rsp+50h] [rbp-B8h]
	__int64 v131; // [rsp+58h] [rbp-B0h]
	__int64 v132; // [rsp+60h] [rbp-A8h]
	__int64(__fastcall * *v133)(); // [rsp+68h] [rbp-A0h] BYREF
	__int64 v134; // [rsp+70h] [rbp-98h]
	__int64 v135; // [rsp+78h] [rbp-90h]
	int v136; // [rsp+80h] [rbp-88h]
	__int64(__fastcall * *v137)(); // [rsp+88h] [rbp-80h] BYREF
	int v138; // [rsp+90h] [rbp-78h]
	__int64 v139; // [rsp+98h] [rbp-70h]
	int v140; // [rsp+A0h] [rbp-68h]
	__int64(__fastcall * *v141)(); // [rsp+A8h] [rbp-60h] BYREF
	int v142; // [rsp+B0h] [rbp-58h]
	__int64 v143; // [rsp+B8h] [rbp-50h]
	int v144; // [rsp+C0h] [rbp-48h]
	__int64 v145; // [rsp+C8h] [rbp-40h] BYREF
	__int64 v146; // [rsp+D0h] [rbp-38h]
	int v147; // [rsp+148h] [rbp+40h]
	double v148; // [rsp+148h] [rbp+40h]
	double v149; // [rsp+148h] [rbp+40h]
	double v150; // [rsp+148h] [rbp+40h]
	double v151; // [rsp+148h] [rbp+40h]
	int v152; // [rsp+150h] [rbp+48h]
	__int64 v153; // [rsp+158h] [rbp+50h]
	unsigned __int64 v154; // [rsp+160h] [rbp+58h]

	v1 = a1;
	v139 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v140 = 1;
	v3 = *(_QWORD*)(v2 + 112);
	v137 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v138 = v6;
	v7 = *(_QWORD*)(qword_140C63650 + 768);
	v8 = 0;
	if (v7)
	{
		v9 = *(_QWORD*)(qword_140C63650 + 760);
		v10 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v9 + 8 * v10) + 400i64) != v1)
		{
			v10 = ++v8;
			if (v8 >= v7)
				goto LABEL_7;
		}
		v11 = *(_QWORD*)(v9 + 8i64 * v8);
	}
	else
	{
	LABEL_7:
		v11 = 0i64;
	}
	v12 = *(_QWORD*)(v11 + 400);
	v13 = dword_140A12138;
	if (*(_QWORD*)(v12 + 24) < *(_QWORD*)(v12 + 16))
		v13 = *(_DWORD**)(v12 + 24);
	v14 = v13[2];
	v15 = v14 && (v14 != 1 || *v13);
	v129 = 0i64;
	v128 = sub_14018B280(40i64, 0);
	*(_BYTE*)v128 = 0;
	*((_QWORD*)v128 + 1) = 0i64;
	*((_QWORD*)v128 + 2) = v128;
	*((_QWORD*)v128 + 3) = v128;
	sub_1406449A0(v16, (__int64)&v127, v15);
	v17 = qword_140C65C28;
	v18 = 0i64;
	v131 = qword_140C65C28;
	v130 = 0i64;
	if (*(_QWORD*)(qword_140C65C28 + 152))
	{
		v19 = v128;
		while (1)
		{
			v20 = *(_QWORD*)(v17 + 144);
			v21 = 3 * v18;
			v22 = *((_QWORD*)v19 + 1);
			v132 = v20;
			v23 = v19;
			if (!v22)
				goto LABEL_150;
			v24 = *(_DWORD*)(v20 + 8 * v21);
			do
			{
				if (*(_DWORD*)(v22 + 32) < v24)
				{
					v22 = *(_QWORD*)(v22 + 24);
				}
				else
				{
					v23 = (int*)v22;
					v22 = *(_QWORD*)(v22 + 16);
				}
			} while (v22);
			if (v23 == v19 || v24 < v23[8])
				goto LABEL_150;
			if (qword_140C63840)
				break;
			if (!dword_140C638BC)
			{
				if ((int)sub_1401E9680() >= 0)
				{
					v25 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(qword_140C64768, v24);
					goto LABEL_31;
				}
			LABEL_149:
				v19 = v128;
			}
		LABEL_150:
			v17 = v131;
			v18 = v130 + 1;
			v130 = v18;
			if (v18 >= *(_QWORD*)(v131 + 152))
			{
				v1 = v139;
				v6 = v138;
				goto LABEL_152;
			}
		}
		v25 = qword_140C63840(off_140A69170, v24, qword_140C63858);
	LABEL_31:
		v26 = v25;
		if (v25)
		{
			if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
				sub_14005E2C0(v1);
			v27 = *(_QWORD*)(v1 + 16);
			v28 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v27 + 8) = 5;
			*(_QWORD*)v27 = v28;
			*(_QWORD*)(v1 + 16) += 16i64;
			v152 = sub_1400578C0(v1);
			v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v152);
			v30 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v30 = *v29;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F06F0(v1, v30, L"nCategoryId", v31);
			*(_QWORD*)(v1 + 16) -= 16i64;
			sub_14034BDD0(v32, *(_DWORD*)(v26 + 4));
			v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v152);
			v34 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v34 = *v33;
			*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, v34, L"strCategoryName", v35);
			*(_QWORD*)(v1 + 16) -= 16i64;
			v36 = *(_QWORD*)(v1 + 32);
			v37 = *(_QWORD*)(v36 + 112);
			v141 = off_140B569F0;
			v38 = v1;
			v143 = v1;
			v144 = 1;
			if (*(_QWORD*)(v36 + 120) >= v37)
				sub_14005E2C0(v1);
			v39 = *(_QWORD*)(v1 + 16);
			v40 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v39 + 8) = 5;
			*(_QWORD*)v39 = v40;
			*(_QWORD*)(v1 + 16) += 16i64;
			v41 = 0i64;
			v42 = sub_1400578C0(v1);
			v142 = v42;
			v154 = 0i64;
			if (*(_QWORD*)(v20 + 8 * v21 + 16))
			{
				v43 = v128;
				v44 = 0i64;
				v153 = 0i64;
				while (1)
				{
					v45 = *((_QWORD*)v43 + 1);
					v46 = *(_QWORD*)(v20 + 8 * v21 + 8);
					v47 = v43;
					v125 = v46;
					if (!v45)
						goto LABEL_117;
					v48 = *(_DWORD*)(v44 + v46);
					do
					{
						if (*(_DWORD*)(v45 + 32) < v48)
						{
							v45 = *(_QWORD*)(v45 + 24);
						}
						else
						{
							v47 = (int*)v45;
							v45 = *(_QWORD*)(v45 + 16);
						}
					} while (v45);
					if (v47 == v43 || v48 < v47[8])
						goto LABEL_117;
					if (qword_140C63840)
						break;
					if (!dword_140C638BC)
					{
						if ((int)sub_1401E9680() >= 0)
						{
							v49 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(
								qword_140C64768,
								v48);
						LABEL_51:
							v50 = v49;
							if (v49)
							{
								if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
									sub_14005E2C0(v1);
								v51 = *(_QWORD*)(v1 + 16);
								v52 = sub_14005C1B0(v1, 0, 0);
								*(_DWORD*)(v51 + 8) = 5;
								*(_QWORD*)v51 = v52;
								*(_QWORD*)(v1 + 16) += 16i64;
								v147 = sub_1400578C0(v1);
								v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v147);
								v54 = *(_QWORD*)(v1 + 16);
								*(_QWORD*)v54 = *v53;
								*(_DWORD*)(v54 + 8) = *((_DWORD*)v53 + 2);
								*(_QWORD*)(v1 + 16) += 16i64;
								sub_1400F06F0(v1, v54, L"nGroupId", v55);
								*(_QWORD*)(v1 + 16) -= 16i64;
								sub_14034BDD0(v56, *(_DWORD*)(v50 + 4));
								v57 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v147);
								v58 = *(_QWORD*)(v1 + 16);
								*(_QWORD*)v58 = *v57;
								*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
								*(_QWORD*)(v1 + 16) += 16i64;
								sub_1400F0870(v1, v58, L"strGroupName", v59);
								*(_QWORD*)(v1 + 16) -= 16i64;
								v60 = *(_QWORD*)(v1 + 32);
								v61 = v1;
								v135 = v1;
								v133 = off_140B569F0;
								v62 = *(_QWORD*)(v60 + 112);
								v136 = 1;
								if (*(_QWORD*)(v60 + 120) >= v62)
									sub_14005E2C0(v1);
								v63 = *(_QWORD*)(v1 + 16);
								v64 = sub_14005C1B0(v1, 0, 0);
								*(_DWORD*)(v63 + 8) = 5;
								*(_QWORD*)v63 = v64;
								*(_QWORD*)(v1 + 16) += 16i64;
								v65 = sub_1400578C0(v1);
								LODWORD(v134) = v65;
								v66 = v153;
								v67 = 0i64;
								if (*(_QWORD*)(v153 + v46 + 16))
								{
									v68 = v128;
									v69 = 0i64;
									while (1)
									{
										v70 = *(_QWORD*)(v66 + v46 + 8);
										v71 = *((_QWORD*)v68 + 1);
										v72 = v68;
										if (!v71)
											goto LABEL_83;
										v73 = *(_DWORD*)(v69 + v70);
										do
										{
											if (*(_DWORD*)(v71 + 32) < v73)
											{
												v71 = *(_QWORD*)(v71 + 24);
											}
											else
											{
												v72 = (int*)v71;
												v71 = *(_QWORD*)(v71 + 16);
											}
										} while (v71);
										if (v72 == v68 || v73 < v72[8])
											goto LABEL_83;
										if (qword_140C63840)
											break;
										if (!dword_140C638BC)
										{
											if ((int)sub_1401E9680() >= 0)
											{
												v74 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(
													qword_140C64768,
													v73);
												goto LABEL_71;
											}
										LABEL_82:
											v68 = v128;
										}
									LABEL_83:
										v66 = v153;
										++v67;
										v69 += 24i64;
										if (v67 >= *(_QWORD*)(v153 + v46 + 16))
										{
											v61 = v135;
											v65 = v134;
											goto LABEL_85;
										}
									}
									v74 = qword_140C63840(off_140A69170, v73, qword_140C63858);
								LABEL_71:
									v75 = (int*)v74;
									if (v74)
									{
										if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
											sub_14005E2C0(v1);
										v76 = *(_QWORD*)(v1 + 16);
										v77 = sub_14005C1B0(v1, 0, 0);
										*(_DWORD*)(v76 + 8) = 5;
										*(_QWORD*)v76 = v77;
										*(_QWORD*)(v1 + 16) += 16i64;
										v78 = sub_1400578C0(v1);
										v79 = *v75;
										v80 = v78;
										v81 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v78);
										v82 = *(_QWORD*)(v1 + 16);
										*(_QWORD*)v82 = *v81;
										*(_DWORD*)(v82 + 8) = *((_DWORD*)v81 + 2);
										*(_QWORD*)(v1 + 16) += 16i64;
										v83 = (unsigned __int64*)sub_14018F0E0(&v145, L"nSubGroupId")[1];
										if (v83)
										{
											v84 = -1i64;
											do
												++v84;
											while (*((_BYTE*)v83 + v84));
											sub_140058710(v1, v83, v84);
										}
										else
										{
											*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
											*(_QWORD*)(v1 + 16) += 16i64;
										}
										if (v146)
											sub_14018B900(v146, 0);
										v85 = *(_QWORD*)(v1 + 16);
										*(_DWORD*)(v85 + 8) = 3;
										*(double*)v85 = (double)v79;
										*(_QWORD*)(v1 + 16) += 16i64;
										v86 = (__int64*)sub_1400580E0(v1, -3);
										sub_14005EA50(
											v1,
											v86,
											(int*)(*(_QWORD*)(v1 + 16) - 32i64),
											(unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
										*(_QWORD*)(v1 + 16) -= 48i64;
										sub_14034BDD0(v87, v75[1]);
										v88 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v80);
										v89 = *(_QWORD*)(v1 + 16);
										*(_QWORD*)v89 = *v88;
										*(_DWORD*)(v89 + 8) = *((_DWORD*)v88 + 2);
										*(_QWORD*)(v1 + 16) += 16i64;
										sub_1400F0870(v1, v89, L"strSubGroupName", v90);
										*(_QWORD*)(v1 + 16) -= 16i64;
										sub_1400FB1D0((__int64)&v133);
										sub_1400579E0(v1, v91, v80);
										v46 = v125;
									}
									goto LABEL_82;
								}
							LABEL_85:
								v92 = v147;
								v93 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
								if ((unsigned int)(v147 - 1) >= *(_DWORD*)(v93 + 56))
								{
									if ((double)v147 == 0.0)
									{
										v94 = *(_DWORD**)(v93 + 32);
									}
									else
									{
										v126 = (double)v147;
										v94 = (_DWORD*)(*(_QWORD*)(v93 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v126) + HIDWORD(v126))
												% (((1i64 << *(_BYTE*)(v93 + 11)) - 1) | 1)));
									}
									while (v94[6] != 3 || (double)v147 != *((double*)v94 + 2))
									{
										v94 = (_DWORD*)*((_QWORD*)v94 + 4);
										if (!v94)
										{
											v94 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v94 = (_DWORD*)(*(_QWORD*)(v93 + 24) + 16i64 * (v147 - 1));
								}
								v95 = *(_QWORD*)(v1 + 16);
								*(_QWORD*)v95 = *(_QWORD*)v94;
								*(_DWORD*)(v95 + 8) = v94[2];
								*(_QWORD*)(v1 + 16) += 16i64;
								v96 = (unsigned __int64*)sub_14018F0E0(&v145, L"tSubGroups")[1];
								if (v96)
								{
									v97 = -1i64;
									do
										++v97;
									while (*((_BYTE*)v96 + v97));
									if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
										sub_14005E2C0(v1);
									v98 = *(_QWORD*)(v1 + 16);
									v99 = sub_140062650(v1, v96, v97);
									*(_DWORD*)(v98 + 8) = 4;
									*(_QWORD*)v98 = v99;
									v92 = v147;
								}
								else
								{
									*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
								}
								v100 = v146;
								*(_QWORD*)(v1 + 16) += 16i64;
								if (v100)
									sub_14018B900(v100, 0);
								v101 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
								if ((unsigned int)(v65 - 1) >= *(_DWORD*)(v101 + 56))
								{
									if ((double)v65 == 0.0)
									{
										v102 = *(_DWORD**)(v101 + 32);
									}
									else
									{
										v148 = (double)v65;
										v102 = (_DWORD*)(*(_QWORD*)(v101 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v148) + HIDWORD(v148))
												% (((1i64 << *(_BYTE*)(v101 + 11)) - 1) | 1)));
									}
									while (v102[6] != 3 || (double)v65 != *((double*)v102 + 2))
									{
										v102 = (_DWORD*)*((_QWORD*)v102 + 4);
										if (!v102)
										{
											v102 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v102 = (_DWORD*)(*(_QWORD*)(v101 + 24) + 16i64 * (v65 - 1));
								}
								v103 = *(_QWORD*)(v1 + 16);
								*(_QWORD*)v103 = *(_QWORD*)v102;
								*(_DWORD*)(v103 + 8) = v102[2];
								v104 = *(_QWORD*)(v1 + 16) + 16i64;
								*(_QWORD*)(v1 + 16) = v104;
								sub_14005EA50(v1, (__int64*)(v104 - 48), (int*)(v104 - 32), (unsigned int*)(v104 - 16));
								*(_QWORD*)(v1 + 16) -= 48i64;
								sub_1400FB1D0((__int64)&v141);
								if (v61)
									sub_1400579E0(v61, v105, v65);
								sub_1400579E0(v1, v105, v92);
								v44 = v153;
								v20 = v132;
							}
							v41 = v154;
						}
						v43 = v128;
					}
				LABEL_117:
					++v41;
					v44 += 24i64;
					v21 = 3 * v130;
					v154 = v41;
					v153 = v44;
					if (v41 >= *(_QWORD*)(v20 + 24 * v130 + 16))
					{
						v38 = v143;
						v42 = v142;
						goto LABEL_119;
					}
				}
				v49 = qword_140C63840(off_140A69170, v48, qword_140C63858);
				goto LABEL_51;
			}
		LABEL_119:
			v106 = v152;
			v107 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			if ((unsigned int)(v152 - 1) >= *(_DWORD*)(v107 + 56))
			{
				if ((double)v152 == 0.0)
				{
					v108 = *(_DWORD**)(v107 + 32);
				}
				else
				{
					v149 = (double)v152;
					v108 = (_DWORD*)(*(_QWORD*)(v107 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v149) + HIDWORD(v149)) % (((1i64 << *(_BYTE*)(v107 + 11)) - 1) | 1)));
				}
				while (v108[6] != 3 || (double)v152 != *((double*)v108 + 2))
				{
					v108 = (_DWORD*)*((_QWORD*)v108 + 4);
					if (!v108)
					{
						v108 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v108 = (_DWORD*)(*(_QWORD*)(v107 + 24) + 16i64 * (v152 - 1));
			}
			v109 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v109 = *(_QWORD*)v108;
			*(_DWORD*)(v109 + 8) = v108[2];
			*(_QWORD*)(v1 + 16) += 16i64;
			v110 = (unsigned __int64*)sub_14018F0E0(&v145, L"tGroups")[1];
			if (v110)
			{
				v111 = -1i64;
				do
					++v111;
				while (*((_BYTE*)v110 + v111));
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v112 = *(_QWORD*)(v1 + 16);
				v113 = sub_140062650(v1, v110, v111);
				*(_DWORD*)(v112 + 8) = 4;
				*(_QWORD*)v112 = v113;
				v106 = v152;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			}
			v114 = v146;
			*(_QWORD*)(v1 + 16) += 16i64;
			if (v114)
				sub_14018B900(v114, 0);
			v115 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
			if ((unsigned int)(v42 - 1) >= *(_DWORD*)(v115 + 56))
			{
				if ((double)v42 == 0.0)
				{
					v116 = *(_DWORD**)(v115 + 32);
				}
				else
				{
					v150 = (double)v42;
					v116 = (_DWORD*)(*(_QWORD*)(v115 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v150) + HIDWORD(v150)) % (((1i64 << *(_BYTE*)(v115 + 11)) - 1) | 1)));
				}
				while (v116[6] != 3 || (double)v42 != *((double*)v116 + 2))
				{
					v116 = (_DWORD*)*((_QWORD*)v116 + 4);
					if (!v116)
					{
						v116 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v116 = (_DWORD*)(*(_QWORD*)(v115 + 24) + 16i64 * (v42 - 1));
			}
			v117 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v117 = *(_QWORD*)v116;
			*(_DWORD*)(v117 + 8) = v116[2];
			v118 = *(_QWORD*)(v1 + 16) + 16i64;
			*(_QWORD*)(v1 + 16) = v118;
			sub_14005EA50(v1, (__int64*)(v118 - 48), (int*)(v118 - 32), (unsigned int*)(v118 - 16));
			*(_QWORD*)(v1 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v137);
			if (v38)
				sub_1400579E0(v38, v119, v42);
			sub_1400579E0(v1, v119, v106);
		}
		goto LABEL_149;
	}
LABEL_152:
	v120 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v120 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v121 = *(_DWORD**)(v120 + 32);
		}
		else
		{
			v151 = (double)v6;
			v121 = (_DWORD*)(*(_QWORD*)(v120 + 32)
				+ 40
				* ((unsigned int)(LODWORD(v151) + HIDWORD(v151)) % (((1i64 << *(_BYTE*)(v120 + 11)) - 1) | 1)));
		}
		while (v121[6] != 3 || (double)v6 != *((double*)v121 + 2))
		{
			v121 = (_DWORD*)*((_QWORD*)v121 + 4);
			if (!v121)
			{
				v121 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v121 = (_DWORD*)(*(_QWORD*)(v120 + 24) + 16i64 * (v6 - 1));
	}
	v122 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v122 = *(_QWORD*)v121;
	*(_DWORD*)(v122 + 8) = v121[2];
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_140008410((__int64)&v127);
	sub_14018B900((__int64)v128, 0);
	sub_1400579E0(v1, v123, v6);
	return 1i64;
}
// 14074E626: variable 'v16' is possibly undefined
// 14074E78D: variable 'v31' is possibly undefined
// 14074E79A: variable 'v32' is possibly undefined
// 14074E7D6: variable 'v35' is possibly undefined
// 14074E969: variable 'v55' is possibly undefined
// 14074E976: variable 'v56' is possibly undefined
// 14074E9B2: variable 'v59' is possibly undefined
// 14074EBDE: variable 'v87' is possibly undefined
// 14074EC1A: variable 'v90' is possibly undefined
// 14074EC36: variable 'v91' is possibly undefined
// 14074EE58: variable 'v105' is possibly undefined
// 14074F098: variable 'v119' is possibly undefined
// 14074F1BF: variable 'v123' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140B4AB18: using guessed type wchar_t aTgroups_0[8];
// 140B4AB28: using guessed type wchar_t aTsubgroups[11];
// 140B4AB40: using guessed type wchar_t aStrsubgroupnam[16];
// 140B4AB60: using guessed type wchar_t aNsubgroupid[12];
// 140B4AB78: using guessed type wchar_t aStrgroupname_0[13];
// 140B4AB98: using guessed type wchar_t aNgroupid[9];
// 140B4ABB0: using guessed type wchar_t aStrcategorynam_3[16];
// 140B4ABD0: using guessed type wchar_t aNcategoryid_6[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;
// 140C65C28: using guessed type __int64 qword_140C65C28;

