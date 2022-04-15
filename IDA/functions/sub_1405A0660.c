//----- (00000001405A0660) ----------------------------------------------------
__int64 __fastcall sub_1405A0660(__int64 a1, __int64 a2)
{
	__int64 v2; // r12
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // esi
	unsigned int v9; // edi
	unsigned int v10; // ecx
	_DWORD* v11; // rax
	__int64* v12; // rcx
	__int64 v13; // rdx
	__int64 v14; // rbx
	bool v15; // zf
	__int64 v16; // r15
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v19; // rax
	unsigned __int64 v20; // r13
	int v21; // ebx
	float* v22; // r12
	__int64 v23; // rdi
	__int64 v24; // rbx
	__int64 v25; // rax
	int v26; // eax
	int v27; // r15d
	float v28; // xmm6_4
	_QWORD* v29; // rax
	__int64 v30; // rdx
	unsigned __int64* v31; // rdx
	unsigned __int64 v32; // r8
	__int64 v33; // rax
	__int64* v34; // rax
	int v35; // eax
	__int64* v36; // rax
	_QWORD* v37; // rax
	__int64 v38; // rdx
	unsigned int v39; // ebx
	int v40; // r9d
	float v41; // xmm6_4
	_QWORD* v42; // rax
	__int64 v43; // r10
	unsigned __int64* v44; // rdx
	unsigned __int64 v45; // r8
	__int64 v46; // rax
	__int64* v47; // rax
	float v48; // xmm6_4
	_QWORD* v49; // rax
	__int64 v50; // rdx
	unsigned __int64* v51; // rdx
	unsigned __int64 v52; // r8
	__int64 v53; // rax
	__int64* v54; // rax
	__int64 v55; // rbx
	float v56; // xmm6_4
	_QWORD* v57; // rax
	__int64 v58; // rdx
	unsigned __int64* v59; // rdx
	unsigned __int64 v60; // r8
	__int64 v61; // rax
	__int64* v62; // rax
	_QWORD* v63; // rax
	__int64 v64; // rdx
	int v65; // r10d
	__int64 v66; // rdx
	__int64 v67; // rdx
	__int64 v68; // rsi
	__int64 v69; // rbx
	__int64 v70; // rax
	int v71; // eax
	float v72; // xmm6_4
	int v73; // ebx
	_QWORD* v74; // rax
	__int64 v75; // rdx
	unsigned __int64* v76; // rdx
	unsigned __int64 v77; // r8
	__int64 v78; // rax
	__int64* v79; // rax
	__int64 v80; // rax
	float v81; // xmm6_4
	_QWORD* v82; // rax
	__int64 v83; // r10
	unsigned __int64* v84; // rdx
	unsigned __int64 v85; // r8
	__int64 v86; // rax
	__int64* v87; // rax
	__int64 v88; // r11
	unsigned int v89; // ecx
	int v90; // edx
	_QWORD* v91; // rax
	__int64 v92; // r11
	__int64 v93; // rdx
	int v94; // r10d
	_QWORD* v95; // rax
	__int64 v96; // rdx
	int v97; // r10d
	_QWORD* v98; // rax
	__int64 v99; // r11
	__int64 v100; // rdx
	int v101; // r10d
	unsigned int v102; // edi
	_QWORD* v103; // rax
	unsigned int v104; // r10d
	__int64 v105; // r11
	float v106; // xmm6_4
	_QWORD* v107; // rax
	__int64 v108; // r11
	unsigned __int64* v109; // rdx
	unsigned __int64 v110; // r8
	__int64 v111; // rax
	__int64* v112; // rax
	_QWORD* v113; // rdi
	__int64 v114; // rcx
	unsigned __int64 v115; // rax
	__int64 v116; // rbx
	__int64 v117; // rax
	int v118; // eax
	int v119; // r12d
	__int64 v120; // rbx
	float v121; // xmm6_4
	float v122; // xmm0_4
	__int64 v123; // rax
	float v124; // xmm6_4
	float v125; // xmm1_4
	_QWORD* v126; // rax
	__int64 v127; // rbx
	__int64 v128; // rax
	__int64 v129; // r9
	__int64 v130; // rax
	float v131; // xmm6_4
	_QWORD* v132; // rax
	__int64 v133; // rdx
	unsigned __int64* v134; // rdx
	unsigned __int64 v135; // r8
	__int64 v136; // rax
	__int64* v137; // rax
	float v138; // xmm6_4
	_QWORD* v139; // rax
	__int64 v140; // rdx
	unsigned __int64* v141; // rdx
	__int64 v142; // rax
	__int64* v143; // rax
	float v144; // xmm2_4
	_QWORD* v145; // rax
	__int64 v146; // r10
	__int64 v147; // rdx
	float v148; // xmm2_4
	_QWORD* v149; // rax
	__int64 v150; // r10
	__int64 v151; // rdx
	float v152; // xmm2_4
	_QWORD* v153; // rax
	__int64 v154; // r10
	__int64 v155; // rdx
	__int64 v156; // rcx
	int v157; // ebx
	_QWORD* v158; // rax
	__int64 v159; // r10
	__int64 v160; // rdx
	_QWORD* v161; // rax
	__int64 v162; // r10
	__int64 v163; // rdx
	float v164; // xmm2_4
	_QWORD* v165; // rax
	__int64 v166; // r10
	__int64 v167; // rdx
	float v168; // xmm2_4
	_QWORD* v169; // rax
	__int64 v170; // r10
	__int64 v171; // rdx
	__int64* v172; // rax
	__int64 v173; // r8
	__int64 v174; // rdx
	__int64 v175; // rcx
	__int64 v176; // rdx
	__int64 v177; // rdx
	unsigned int v178; // [rsp+30h] [rbp-D0h]
	int v179; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v180)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v181; // [rsp+48h] [rbp-B8h]
	_QWORD* v182; // [rsp+50h] [rbp-B0h]
	int v183; // [rsp+58h] [rbp-A8h]
	__int64 v184; // [rsp+60h] [rbp-A0h]
	__int64 v185; // [rsp+68h] [rbp-98h]
	__int64 v186; // [rsp+70h] [rbp-90h] BYREF
	int v187; // [rsp+78h] [rbp-88h]
	__int64 v188; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * *v189)(); // [rsp+88h] [rbp-78h] BYREF
	int v190; // [rsp+90h] [rbp-70h]
	__int64 v191; // [rsp+98h] [rbp-68h]
	int v192; // [rsp+A0h] [rbp-60h]
	__int64 v193; // [rsp+A8h] [rbp-58h]
	__int64 v194; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v195; // [rsp+B8h] [rbp-48h]
	__int64 v196; // [rsp+C0h] [rbp-40h]

	v2 = a1;
	v185 = a1;
	result = sub_140245C00(*(_DWORD*)(qword_140C65898 + 6864));
	v188 = result;
	if (result)
	{
		result = (__int64)sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(result + 12), 0i64);
		v5 = result;
		v186 = result;
		if (result)
		{
			v6 = sub_14020AC20(*(_DWORD*)(result + 364));
			v7 = sub_14020A7E0(*(_DWORD*)(v5 + 360));
			if (v6 && v7)
			{
				v8 = 0;
				v9 = 0;
				if (a2)
				{
					v9 = *(_DWORD*)(a2 + 212);
				}
				else
				{
					v10 = 0;
					v11 = (_DWORD*)(v6 + 4);
					do
					{
						if (!*v11)
							break;
						v9 = v10 + 1;
						++v11;
						v10 = v9;
					} while (v9 < 5);
				}
				v178 = v9;
				v194 = 0i64;
				v195 = 0i64;
				LODWORD(v196) = 0;
				v12 = &v194;
				v13 = 5i64;
				v14 = v6 - (_QWORD)&v194;
				do
				{
					v15 = *(_DWORD*)((char*)v12 + v14 + 4) == 4;
					v12 = (__int64*)((char*)v12 + 4);
					*((_DWORD*)v12 - 1) = v15;
					--v13;
				} while (v13);
				v16 = *(_QWORD*)(v2 + 16);
				v192 = 1;
				v17 = *(_QWORD*)(v16 + 32);
				v189 = off_140B569F0;
				v191 = v16;
				if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
					sub_14005E2C0(v16);
				v18 = *(_QWORD*)(v16 + 16);
				v19 = sub_14005C1B0(v16, 0, 0);
				*(_DWORD*)(v18 + 8) = 5;
				*(_QWORD*)v18 = v19;
				*(_QWORD*)(v16 + 16) += 16i64;
				v20 = -1i64;
				v21 = sub_1400578C0(v16);
				v190 = v21;
				if (v9)
				{
					v22 = (float*)(a2 + 792);
					v184 = (__int64)&v194 - a2;
					do
					{
						v23 = *(_QWORD*)(v185 + 16);
						if (*(_QWORD*)(*(_QWORD*)(v23 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v23 + 32) + 112i64))
							sub_14005E2C0(*(_QWORD*)(v185 + 16));
						v24 = *(_QWORD*)(v23 + 16);
						v25 = sub_14005C1B0(v23, 0, 0);
						*(_DWORD*)(v24 + 8) = 5;
						*(_QWORD*)v24 = v25;
						*(_QWORD*)(v23 + 16) += 16i64;
						v26 = sub_1400578C0(v23);
						v27 = v26;
						if (a2)
						{
							if (v8 >= 5)
								v28 = 0.0;
							else
								v28 = v22[5];
							v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v26);
							v30 = *(_QWORD*)(v23 + 16);
							*(_QWORD*)v30 = *v29;
							*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
							*(_QWORD*)(v23 + 16) += 16i64;
							v31 = (unsigned __int64*)sub_14018F0E0(&v180, L"fBudget")[1];
							if (v31)
							{
								v32 = -1i64;
								do
									++v32;
								while (*((_BYTE*)v31 + v32));
								sub_140058710(v23, v31, v32);
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
								*(_QWORD*)(v23 + 16) += 16i64;
							}
							if (v181)
								sub_14018B900(v181, 0);
							v33 = *(_QWORD*)(v23 + 16);
							*(_DWORD*)(v33 + 8) = 3;
							*(double*)v33 = v28;
							*(_QWORD*)(v23 + 16) += 16i64;
							v34 = (__int64*)sub_1400580E0(v23, -3);
							sub_14005EA50(
								v23,
								v34,
								(int*)(*(_QWORD*)(v23 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
							v35 = dword_140C8AF48;
							*(_QWORD*)(v23 + 16) -= 48i64;
							if ((v35 & 1) == 0)
							{
								qword_140C8AF50 = 0i64;
								dword_140C8AF48 = v35 | 1;
							}
							if (*(_DWORD*)(a2 + 212) <= v8)
								v36 = &qword_140C8AF50;
							else
								v36 = (__int64*)(a2 + 8 * (v8 + 36i64));
							v193 = *v36;
							if ((_DWORD)v193 == 1)
							{
								v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
								v38 = *(_QWORD*)(v23 + 16);
								v39 = HIDWORD(v193);
								v40 = HIDWORD(v193);
								*(_QWORD*)v38 = *v37;
								*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
								*(_QWORD*)(v23 + 16) += 16i64;
								sub_1400F06F0(v23, v38, L"eProperty", v40);
								v15 = *(_DWORD*)((char*)v22 + v184 - 792) == 0;
								*(_QWORD*)(v23 + 16) -= 16i64;
								if (!v15)
								{
									if (v8 >= 5)
										v41 = 0.0;
									else
										v41 = *v22;
									v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
									*(_QWORD*)v43 = *v42;
									*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
									*(_QWORD*)(v23 + 16) += 16i64;
									v44 = (unsigned __int64*)sub_14018F0E0(&v180, L"nUsedBudget")[1];
									if (v44)
									{
										v45 = -1i64;
										do
											++v45;
										while (*((_BYTE*)v44 + v45));
										sub_140058710(v23, v44, v45);
									}
									else
									{
										*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
										*(_QWORD*)(v23 + 16) += 16i64;
									}
									if (v181)
										sub_14018B900(v181, 0);
									v46 = *(_QWORD*)(v23 + 16);
									*(_DWORD*)(v46 + 8) = 3;
									*(double*)v46 = v41;
									*(_QWORD*)(v23 + 16) += 16i64;
									v47 = (__int64*)sub_1400580E0(v23, -3);
									sub_14005EA50(
										v23,
										v47,
										(int*)(*(_QWORD*)(v23 + 16) - 32i64),
										(unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
									*(_QWORD*)(v23 + 16) -= 48i64;
									v48 = sub_1405A4800(a2, v8);
									v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
									v50 = *(_QWORD*)(v23 + 16);
									*(_QWORD*)v50 = *v49;
									*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
									*(_QWORD*)(v23 + 16) += 16i64;
									v51 = (unsigned __int64*)sub_14018F0E0(&v180, L"nCraftingBudget")[1];
									if (v51)
									{
										v52 = -1i64;
										do
											++v52;
										while (*((_BYTE*)v51 + v52));
										sub_140058710(v23, v51, v52);
									}
									else
									{
										*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
										*(_QWORD*)(v23 + 16) += 16i64;
									}
									if (v181)
										sub_14018B900(v181, 0);
									v53 = *(_QWORD*)(v23 + 16);
									*(_DWORD*)(v53 + 8) = 3;
									*(double*)v53 = v48;
									*(_QWORD*)(v23 + 16) += 16i64;
									v54 = (__int64*)sub_1400580E0(v23, -3);
									sub_14005EA50(
										v23,
										v54,
										(int*)(*(_QWORD*)(v23 + 16) - 32i64),
										(unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
									*(_QWORD*)(v23 + 16) -= 48i64;
									v55 = sub_1402479C0(v39);
									if (v55)
									{
										v56 = sub_1405A4800(a2, v8) * *(float*)(v55 + 32);
										v57 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
										v58 = *(_QWORD*)(v23 + 16);
										*(_QWORD*)v58 = *v57;
										*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
										*(_QWORD*)(v23 + 16) += 16i64;
										v59 = (unsigned __int64*)sub_14018F0E0(&v180, L"fValue")[1];
										if (v59)
										{
											v60 = -1i64;
											do
												++v60;
											while (*((_BYTE*)v59 + v60));
											sub_140058710(v23, v59, v60);
										}
										else
										{
											*(_DWORD*)(*(_QWORD*)(v23 + 16) + 8i64) = 0;
											*(_QWORD*)(v23 + 16) += 16i64;
										}
										if (v181)
											sub_14018B900(v181, 0);
										v61 = *(_QWORD*)(v23 + 16);
										*(_DWORD*)(v61 + 8) = 3;
										*(double*)v61 = v56;
										*(_QWORD*)(v23 + 16) += 16i64;
										v62 = (__int64*)sub_1400580E0(v23, -3);
										sub_14005EA50(
											v23,
											v62,
											(int*)(*(_QWORD*)(v23 + 16) - 32i64),
											(unsigned int*)(*(_QWORD*)(v23 + 16) - 16i64));
										*(_QWORD*)(v23 + 16) -= 48i64;
									}
								}
							}
						}
						if (*(_DWORD*)((char*)v22 + v184 - 792))
						{
							v63 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v27);
							v64 = *(_QWORD*)(v23 + 16);
							*(_QWORD*)v64 = *v63;
							*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
							*(_QWORD*)(v23 + 16) += 16i64;
							sub_1400F06F0(v23, v64, L"eCraftingGroup", v65);
							*(_QWORD*)(v23 + 16) -= 16i64;
						}
						sub_1400FB1D0((__int64)&v189);
						sub_1400579E0(v23, v66, v27);
						++v8;
						++v22;
					} while (v8 < v178);
					v16 = v191;
					v21 = v190;
					v2 = v185;
				}
				sub_1400FB2A0(v2, (__int64)L"arStats", v21);
				if (a2)
				{
					v68 = *(_QWORD*)(v2 + 16);
					if (*(_QWORD*)(*(_QWORD*)(v68 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v68 + 32) + 112i64))
						sub_14005E2C0(*(_QWORD*)(v2 + 16));
					v69 = *(_QWORD*)(v68 + 16);
					v70 = sub_14005C1B0(v68, 0, 0);
					*(_DWORD*)(v69 + 8) = 5;
					*(_QWORD*)v69 = v70;
					*(_QWORD*)(v68 + 16) += 16i64;
					v71 = sub_1400578C0(v68);
					v72 = *(float*)(a2 + 852);
					v73 = v71;
					v179 = v71;
					v74 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v68 + 32) + 160i64), v71);
					v75 = *(_QWORD*)(v68 + 16);
					*(_QWORD*)v75 = *v74;
					*(_DWORD*)(v75 + 8) = *((_DWORD*)v74 + 2);
					*(_QWORD*)(v68 + 16) += 16i64;
					v76 = (unsigned __int64*)sub_14018F0E0(&v180, L"fApSpSplitIncrement")[1];
					if (v76)
					{
						v77 = -1i64;
						do
							++v77;
						while (*((_BYTE*)v76 + v77));
						sub_140058710(v68, v76, v77);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v68 + 16) + 8i64) = 0;
						*(_QWORD*)(v68 + 16) += 16i64;
					}
					if (v181)
						sub_14018B900(v181, 0);
					v78 = *(_QWORD*)(v68 + 16);
					*(_DWORD*)(v78 + 8) = 3;
					*(double*)v78 = v72;
					*(_QWORD*)(v68 + 16) += 16i64;
					v79 = (__int64*)sub_1400580E0(v68, -3);
					sub_14005EA50(
						v68,
						v79,
						(int*)(*(_QWORD*)(v68 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v68 + 16) - 16i64));
					*(_QWORD*)(v68 + 16) -= 48i64;
					v80 = *(_QWORD*)(a2 + 24);
					if (v80)
						v81 = fabs(*(float*)(v80 + 376));
					else
						v81 = 0.0;
					v82 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v68 + 32) + 160i64), v73);
					*(_QWORD*)v83 = *v82;
					*(_DWORD*)(v83 + 8) = *((_DWORD*)v82 + 2);
					*(_QWORD*)(v68 + 16) += 16i64;
					v84 = (unsigned __int64*)sub_14018F0E0(&v180, L"fApSpSplitCap")[1];
					if (v84)
					{
						v85 = -1i64;
						do
							++v85;
						while (*((_BYTE*)v84 + v85));
						sub_140058710(v68, v84, v85);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v68 + 16) + 8i64) = 0;
						*(_QWORD*)(v68 + 16) += 16i64;
					}
					if (v181)
						sub_14018B900(v181, 0);
					v86 = *(_QWORD*)(v68 + 16);
					*(_DWORD*)(v86 + 8) = 3;
					*(double*)v86 = v81;
					*(_QWORD*)(v68 + 16) += 16i64;
					v87 = (__int64*)sub_1400580E0(v68, -3);
					sub_14005EA50(
						v68,
						v87,
						(int*)(*(_QWORD*)(v68 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v68 + 16) - 16i64));
					v88 = *(_QWORD*)(v68 + 16);
					LODWORD(v184) = 0;
					v89 = 0;
					*(_QWORD*)(v68 + 16) = v88 - 48;
					v90 = *(_DWORD*)(a2 + 852);
					if (v90 < 0)
						v89 = 0x80000000;
					if ((int)abs32(v89 - v90) > 84)
					{
						v91 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v68 + 32) + 160i64), v73);
						*(_QWORD*)v92 = *v91;
						*(_DWORD*)(v92 + 8) = *((_DWORD*)v91 + 2);
						*(_QWORD*)(v68 + 16) += 16i64;
						sub_1400F06F0(v68, v93, L"nApSpSplitMaxDelta", v94);
						*(_QWORD*)(v68 + 16) -= 16i64;
					}
					v95 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v68 + 32) + 160i64), v73);
					v96 = *(_QWORD*)(v68 + 16);
					*(_QWORD*)v96 = *v95;
					*(_DWORD*)(v96 + 8) = *((_DWORD*)v95 + 2);
					*(_QWORD*)(v68 + 16) += 16i64;
					sub_1400F06F0(v68, v96, L"nChargeIncrement", v97);
					*(_QWORD*)(v68 + 16) -= 16i64;
					v98 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v68 + 32) + 160i64), v73);
					*(_QWORD*)v99 = *v98;
					*(_DWORD*)(v99 + 8) = *((_DWORD*)v98 + 2);
					*(_QWORD*)(v68 + 16) += 16i64;
					sub_1400F06F0(v68, v100, L"nChargeCap", v101);
					*(_QWORD*)(v68 + 16) -= 16i64;
					v102 = *(_DWORD*)(a2 + 872);
					if (v102)
					{
						v103 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v68 + 32) + 160i64), v73);
						*(_QWORD*)v105 = *v103;
						*(_DWORD*)(v105 + 8) = *((_DWORD*)v103 + 2);
						*(_QWORD*)(v68 + 16) += 16i64;
						sub_1400F06F0(v68, v104 % v102, L"nChargeMaxDelta", v104 / v102);
						*(_QWORD*)(v68 + 16) -= 16i64;
					}
					v106 = *(float*)(a2 + 868);
					v107 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v68 + 32) + 160i64), v73);
					*(_QWORD*)v108 = *v107;
					*(_DWORD*)(v108 + 8) = *((_DWORD*)v107 + 2);
					*(_QWORD*)(v68 + 16) += 16i64;
					v109 = (unsigned __int64*)sub_14018F0E0(&v180, L"fMismatchPenalty")[1];
					if (v109)
					{
						v110 = -1i64;
						do
							++v110;
						while (*((_BYTE*)v109 + v110));
						sub_140058710(v68, v109, v110);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v68 + 16) + 8i64) = 0;
						*(_QWORD*)(v68 + 16) += 16i64;
					}
					if (v181)
						sub_14018B900(v181, 0);
					v111 = *(_QWORD*)(v68 + 16);
					*(_DWORD*)(v111 + 8) = 3;
					*(double*)v111 = v106;
					*(_QWORD*)(v68 + 16) += 16i64;
					v112 = (__int64*)sub_1400580E0(v68, -3);
					sub_14005EA50(
						v68,
						v112,
						(int*)(*(_QWORD*)(v68 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v68 + 16) - 16i64));
					*(_QWORD*)(v68 + 16) -= 48i64;
					sub_1400FB2A0(v2, (__int64)L"tSettings", v73);
					v113 = *(_QWORD**)(v2 + 16);
					v114 = v113[4];
					v180 = off_140B569F0;
					v182 = v113;
					v115 = *(_QWORD*)(v114 + 112);
					v183 = 1;
					if (*(_QWORD*)(v114 + 120) >= v115)
						sub_14005E2C0((__int64)v113);
					v116 = v113[2];
					v117 = sub_14005C1B0((__int64)v113, 0, 0);
					*(_DWORD*)(v116 + 8) = 5;
					*(_QWORD*)v116 = v117;
					v113[2] += 16i64;
					v118 = sub_1400578C0((__int64)v113);
					v15 = *(_QWORD*)(a2 + 24) == 0i64;
					v119 = v118;
					LODWORD(v181) = v118;
					if (!v15)
					{
						v120 = a2 + 464;
						if (a2 != -464)
						{
							if (*(_DWORD*)(v188 + 28) || (*(_BYTE*)(v188 + 32) & 4) == 0)
							{
								v121 = sub_1405E6140(qword_140C65898 + 5784, 22, *(_DWORD*)(v188 + 8), *(_DWORD*)(v186 + 324)).m128_f32[0];
								v122 = sub_1405A3BE0();
								v123 = 0i64;
								v124 = v121 * v122;
								if (*(_QWORD*)(a2 + 24))
									v123 = a2 + 464;
								v125 = (float)(int)*(_QWORD*)(v123 + 136) * v124;
								v186 = (unsigned int)(int)v125;
								if ((int)v125)
								{
									v195 = 1i64;
									v196 = 0i64;
									v126 = (_QWORD*)sub_140059170(v113, 0x18ui64);
									*v126 = v186;
									v126[1] = v195;
									v126[2] = v196;
									v127 = v113[4];
									v128 = sub_140062650((__int64)v113, (unsigned __int64*)"Game.Money", 0xAui64);
									v129 = v113[2];
									v186 = v128;
									v187 = 4;
									sub_14005E8E0((__int64)v113, v127 + 160, (int*)&v186, v129);
									v113[2] += 16i64;
									sub_140058BF0((__int64)v113, -2);
									sub_1400FB540((__int64)&v180);
									v113[2] -= 16i64;
									v120 = a2 + 464;
								}
							}
							v130 = 0i64;
							if (*(_QWORD*)(a2 + 24))
								v130 = v120;
							v131 = *(float*)(v130 + 20);
							v132 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
							v133 = v113[2];
							*(_QWORD*)v133 = *v132;
							*(_DWORD*)(v133 + 8) = *((_DWORD*)v132 + 2);
							v113[2] += 16i64;
							v134 = (unsigned __int64*)sub_14018F0E0(&v180, L"nBudget")[1];
							if (v134)
							{
								v135 = -1i64;
								do
									++v135;
								while (*((_BYTE*)v134 + v135));
								sub_140058710((__int64)v113, v134, v135);
							}
							else
							{
								*(_DWORD*)(v113[2] + 8i64) = 0;
								v113[2] += 16i64;
							}
							if (v181)
								sub_14018B900(v181, 0);
							v136 = v113[2];
							*(_DWORD*)(v136 + 8) = 3;
							*(double*)v136 = v131;
							v113[2] += 16i64;
							v137 = (__int64*)sub_1400580E0((__int64)v113, -3);
							sub_14005EA50((__int64)v113, v137, (int*)(v113[2] - 32i64), (unsigned int*)(v113[2] - 16i64));
							v113[2] -= 48i64;
						}
					}
					v138 = *(float*)(a2 + 880);
					v139 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
					v140 = v113[2];
					*(_QWORD*)v140 = *v139;
					*(_DWORD*)(v140 + 8) = *((_DWORD*)v139 + 2);
					v113[2] += 16i64;
					v141 = (unsigned __int64*)sub_14018F0E0(&v180, L"fCraftedBudget")[1];
					if (v141)
					{
						do
							++v20;
						while (*((_BYTE*)v141 + v20));
						sub_140058710((__int64)v113, v141, v20);
					}
					else
					{
						*(_DWORD*)(v113[2] + 8i64) = 0;
						v113[2] += 16i64;
					}
					if (v181)
						sub_14018B900(v181, 0);
					v142 = v113[2];
					*(_DWORD*)(v142 + 8) = 3;
					*(double*)v142 = v138;
					v113[2] += 16i64;
					v143 = (__int64*)sub_1400580E0((__int64)v113, -3);
					sub_14005EA50((__int64)v113, v143, (int*)(v113[2] - 32i64), (unsigned int*)(v113[2] - 16i64));
					v113[2] -= 48i64;
					v144 = *(float*)(a2 + 884);
					v145 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
					*(_QWORD*)v146 = *v145;
					*(_DWORD*)(v146 + 8) = *((_DWORD*)v145 + 2);
					v113[2] += 16i64;
					sub_1400F06F0((__int64)v113, v147, L"nFailChance", (int)(float)(v144 * 100.0));
					v113[2] -= 16i64;
					v148 = *(float*)(a2 + 888);
					v149 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
					*(_QWORD*)v150 = *v149;
					*(_DWORD*)(v150 + 8) = *((_DWORD*)v149 + 2);
					v113[2] += 16i64;
					sub_1400F06F0((__int64)v113, v151, L"nUnbuffedFailChance", (int)(float)(v148 * 100.0));
					v113[2] -= 16i64;
					v152 = *(float*)(a2 + 420);
					v153 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
					*(_QWORD*)v154 = *v153;
					*(_DWORD*)(v154 + 8) = *((_DWORD*)v153 + 2);
					v113[2] += 16i64;
					sub_1400F06F0((__int64)v113, v155, L"nFailChanceBuff", (int)(float)(v152 * 100.0));
					v113[2] -= 16i64;
					v156 = *(_QWORD*)(v113[4] + 160i64);
					v157 = *(_DWORD*)(a2 + 892);
					if ((*(_BYTE*)(v188 + 32) & 4) != 0)
					{
						v158 = sub_14005C3C0(v156, v119);
						*(_QWORD*)v159 = *v158;
						*(_DWORD*)(v159 + 8) = *((_DWORD*)v158 + 2);
						v113[2] += 16i64;
						sub_1400F06F0((__int64)v113, v160, L"nFailCap", 0);
						v113[2] -= 16i64;
						v161 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
						*(_QWORD*)v162 = *v161;
						*(_DWORD*)(v162 + 8) = *((_DWORD*)v161 + 2);
						v113[2] += 16i64;
						sub_1400F06F0((__int64)v113, v163, L"nUnbuffedFailCap", 0);
						v113[2] -= 16i64;
						if (*(float*)(a2 + 884) > 0.0)
							v157 = 0;
					}
					else
					{
						v164 = *(float*)(a2 + 860);
						v165 = sub_14005C3C0(v156, v119);
						*(_QWORD*)v166 = *v165;
						*(_DWORD*)(v166 + 8) = *((_DWORD*)v165 + 2);
						v113[2] += 16i64;
						sub_1400F06F0((__int64)v113, v167, L"nFailCap", (int)(float)(v164 * 100.0));
						v113[2] -= 16i64;
						v168 = *(float*)(a2 + 864);
						v169 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
						*(_QWORD*)v170 = *v169;
						*(_DWORD*)(v170 + 8) = *((_DWORD*)v169 + 2);
						v113[2] += 16i64;
						sub_1400F06F0((__int64)v113, v171, L"nUnbuffedFailCap", (int)(float)(v168 * 100.0));
						v113[2] -= 16i64;
						if (*(float*)(a2 + 860) < *(float*)(a2 + 884))
							v157 = 0;
					}
					v172 = sub_14005C3C0(*(_QWORD*)(v113[4] + 160i64), v119);
					v173 = v113[2];
					v174 = *v172;
					*(_QWORD*)v173 = *v172;
					*(_DWORD*)(v173 + 8) = *((_DWORD*)v172 + 2);
					v113[2] += 16i64;
					sub_1400F0630((__int64)v113, v174, L"bIsValidCraft", v157);
					v175 = v185;
					v113[2] -= 16i64;
					sub_1400FB2A0(v175, (__int64)L"tResult", v119);
					sub_1400579E0((__int64)v113, v176, v119);
					sub_1400579E0(v68, v177, v179);
					v21 = v190;
				}
				if (v16)
					sub_1400579E0(v16, v67, v21);
				return 1i64;
			}
			else
			{
				return 0i64;
			}
		}
	}
	return result;
}
// 1405A0A2B: variable 'v43' is possibly undefined
// 1405A0CC9: variable 'v65' is possibly undefined
// 1405A0CE5: variable 'v66' is possibly undefined
// 1405A0E6C: variable 'v83' is possibly undefined
// 1405A0F70: variable 'v92' is possibly undefined
// 1405A0F82: variable 'v93' is possibly undefined
// 1405A0F82: variable 'v94' is possibly undefined
// 1405A0FC7: variable 'v97' is possibly undefined
// 1405A0FFB: variable 'v99' is possibly undefined
// 1405A100D: variable 'v100' is possibly undefined
// 1405A100D: variable 'v101' is possibly undefined
// 1405A104E: variable 'v105' is possibly undefined
// 1405A1042: variable 'v104' is possibly undefined
// 1405A109B: variable 'v108' is possibly undefined
// 1405A14A7: variable 'v146' is possibly undefined
// 1405A14BE: variable 'v147' is possibly undefined
// 1405A14F6: variable 'v150' is possibly undefined
// 1405A150D: variable 'v151' is possibly undefined
// 1405A1545: variable 'v154' is possibly undefined
// 1405A155C: variable 'v155' is possibly undefined
// 1405A159F: variable 'v159' is possibly undefined
// 1405A15B1: variable 'v160' is possibly undefined
// 1405A15DF: variable 'v162' is possibly undefined
// 1405A15F1: variable 'v163' is possibly undefined
// 1405A162D: variable 'v166' is possibly undefined
// 1405A1644: variable 'v167' is possibly undefined
// 1405A167C: variable 'v170' is possibly undefined
// 1405A1693: variable 'v171' is possibly undefined
// 1405A170C: variable 'v176' is possibly undefined
// 1405A1719: variable 'v177' is possibly undefined
// 1405A174C: variable 'v67' is possibly undefined
// 140B202D0: using guessed type wchar_t aArstats_1[8];
// 140B202E0: using guessed type wchar_t aEcraftinggroup_0[15];
// 140B20300: using guessed type wchar_t aFapspsplitcap[14];
// 140B20320: using guessed type wchar_t aFapspsplitincr[20];
// 140B20348: using guessed type wchar_t aNusedbudget[12];
// 140B20360: using guessed type wchar_t aEproperty_1[10];
// 140B20378: using guessed type wchar_t aFvalue[7];
// 140B20388: using guessed type wchar_t aNcraftingbudge[16];
// 140B203E8: using guessed type wchar_t aFbudget[8];
// 140B204A0: using guessed type wchar_t aNunbuffedfailc_0[17];
// 140B204C8: using guessed type wchar_t aNfailcap[9];
// 140B204E0: using guessed type wchar_t aNunbuffedfailc_1[17];
// 140B20508: using guessed type wchar_t aNfailcap_0[9];
// 140B20520: using guessed type wchar_t aNfailchance[12];
// 140B20538: using guessed type wchar_t aFcraftedbudget[15];
// 140B20558: using guessed type wchar_t aNfailchancebuf[16];
// 140B20578: using guessed type wchar_t aNunbuffedfailc[20];
// 140B205A0: using guessed type wchar_t aTsettings[10];
// 140B205B8: using guessed type wchar_t aFmismatchpenal[17];
// 140B205E0: using guessed type wchar_t aNbudget[8];
// 140B20610: using guessed type wchar_t aNchargeincreme[17];
// 140B20638: using guessed type wchar_t aNapspsplitmaxd[19];
// 140B20660: using guessed type wchar_t aNchargemaxdelt[16];
// 140B20680: using guessed type wchar_t aNchargecap[11];
// 140B207D0: using guessed type wchar_t aTresult[8];
// 140B207E0: using guessed type wchar_t aBisvalidcraft[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C8AF48: using guessed type int dword_140C8AF48;
// 140C8AF50: using guessed type __int64 qword_140C8AF50;

