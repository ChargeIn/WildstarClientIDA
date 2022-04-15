#include "../winhttp.h"

//----- (00000001406ECD40) ----------------------------------------------------
__int64 __fastcall sub_1406ECD40(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // eax
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // r9
	int* v16; // rdx
	__int64 v17; // r10
	unsigned int v18; // edx
	__int64 v19; // r8
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rax
	__int64 v24; // rcx
	_QWORD* v25; // rax
	_QWORD* v26; // rbx
	__int64* v27; // r14
	int* v28; // r13
	__int64 v29; // rcx
	unsigned __int64 v30; // rax
	__int64 v31; // rdi
	__int64 v32; // rax
	int v33; // eax
	int v34; // edi
	int v35; // r15d
	__int64 v36; // r9
	_DWORD* v37; // rdx
	__int64 v38; // rcx
	unsigned __int64* v39; // r12
	unsigned __int64 v40; // r14
	__int64 v41; // rdi
	__int64 v42; // rax
	__int64 v43; // rcx
	__int64 v44; // rax
	__int64* v45; // rax
	__int64 v46; // rdx
	int v47; // edi
	_QWORD* v48; // rax
	__int64 v49; // r11
	unsigned __int64* v50; // r12
	unsigned __int64 v51; // r14
	__int64 v52; // rdi
	__int64 v53; // rax
	__int64 v54; // rax
	__int64* v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rdi
	unsigned __int64 v58; // rax
	__int64 v59; // rax
	__int64 v60; // r8
	__int64 v61; // rcx
	__int64 v62; // rax
	unsigned __int64 v63; // rax
	__int64 v64; // rdi
	__int64 v65; // rax
	__int64 v66; // r9
	__int64 v67; // rdi
	_QWORD* v68; // rax
	__int64 v69; // rdx
	int v70; // r11d
	__int64 v71; // rcx
	__int64 v72; // rdi
	unsigned __int64 v73; // rax
	__int64 v74; // rax
	__int64 v75; // r8
	__int64 v76; // rcx
	__int64 v77; // rax
	unsigned __int64 v78; // rax
	__int64 v79; // rdi
	__int64 v80; // rax
	__int64 v81; // r9
	_DWORD* v82; // r14
	_QWORD* v83; // rax
	__int64 v84; // rcx
	__int64 v85; // rdx
	unsigned __int16* v86; // r11
	__int64 v87; // rcx
	_QWORD* v88; // rax
	__int64 v89; // rcx
	__int64 v90; // rdx
	unsigned __int16* v91; // r11
	__int64 v92; // rdi
	__int64 v93; // rax
	__int64 v94; // rdi
	__int64 v95; // rax
	__int64 v96; // r9
	_QWORD* v97; // rax
	__int64 v98; // r11
	__int64 v99; // rdx
	_QWORD* v100; // rax
	__int64 v101; // rcx
	__int64 v102; // rdx
	int v103; // r11d
	__int64 v104; // rdi
	_QWORD* v105; // rax
	__int64 v106; // rdx
	int v107; // r11d
	_QWORD* v108; // rax
	__int64 v109; // r11
	__int64 v110; // rdx
	__int64 v111; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v114; // r10
	__int64 v115; // r9
	_DWORD* v116; // rcx
	__int64 v117; // r9
	int v118; // r8d
	__int64 v119; // rdx
	__int64 v121; // [rsp+20h] [rbp-A9h] BYREF
	__int128 v122; // [rsp+28h] [rbp-A1h]
	__int64 v123; // [rsp+40h] [rbp-89h]
	int* v124; // [rsp+48h] [rbp-81h]
	__int64 v125; // [rsp+50h] [rbp-79h] BYREF
	__int64 v126; // [rsp+58h] [rbp-71h] BYREF
	__int64(__fastcall * *v127)(); // [rsp+60h] [rbp-69h] BYREF
	int v128; // [rsp+68h] [rbp-61h]
	_QWORD* v129; // [rsp+70h] [rbp-59h]
	int v130; // [rsp+78h] [rbp-51h]
	__int64(__fastcall * *v131)(); // [rsp+80h] [rbp-49h] BYREF
	int v132; // [rsp+88h] [rbp-41h]
	_QWORD* v133; // [rsp+90h] [rbp-39h]
	int v134; // [rsp+98h] [rbp-31h]
	__int64 v135; // [rsp+A0h] [rbp-29h] BYREF
	int v136; // [rsp+A8h] [rbp-21h]
	__int64 v137; // [rsp+B0h] [rbp-19h] BYREF
	int v138; // [rsp+B8h] [rbp-11h]
	__int64 v139; // [rsp+C0h] [rbp-9h] BYREF
	int v140; // [rsp+C8h] [rbp-1h]
	int v141; // [rsp+130h] [rbp+67h]
	int v142; // [rsp+130h] [rbp+67h]
	double v143; // [rsp+130h] [rbp+67h]
	__int64 v144; // [rsp+138h] [rbp+6Fh]
	__int64* v145; // [rsp+140h] [rbp+77h]
	double v146; // [rsp+148h] [rbp+7Fh]

	sub_1406E8880(a1, 1u);
	if ((dword_140DC4BC8 & 1) == 0)
	{
		dword_140DC4BC8 |= 1u;
		v2 = sub_140200220(0x955u);
		if (v2)
			v3 = *(_DWORD*)(v2 + 4);
		else
			v3 = 0;
		dword_140C8B048 = v3;
		v4 = sub_140200220(0x955u);
		if (v4)
			v5 = *(_DWORD*)(v4 + 8);
		else
			v5 = 0;
		dword_140C8B04C = v5;
		v6 = sub_140200220(0x955u);
		if (v6)
			v7 = *(_DWORD*)(v6 + 12);
		else
			v7 = 0;
		dword_140C8B050 = v7;
		v8 = sub_140200220(0x955u);
		if (v8)
			v9 = *(_DWORD*)(v8 + 16);
		else
			v9 = 0;
		dword_140C8B054 = v9;
	}
	v10 = a1[4];
	v129 = a1;
	v11 = *(_QWORD*)(v10 + 112);
	v127 = off_140B569F0;
	v130 = 1;
	if (*(_QWORD*)(v10 + 120) >= v11)
		sub_14005E2C0((__int64)a1);
	v12 = a1[2];
	v13 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	a1[2] += 16i64;
	v14 = sub_1400578C0((__int64)a1);
	v15 = qword_140C659C8;
	v16 = &dword_140C8B048;
	v17 = 4i64;
	v128 = v14;
	v123 = 4i64;
	v124 = &dword_140C8B048;
	do
	{
		v18 = *v16;
		if (v18)
		{
			v19 = *(_QWORD*)(v15 + 16);
			v20 = v19;
			v21 = *(_QWORD*)(v19 + 8);
			while (v21)
			{
				if (*(_DWORD*)(v21 + 32) < v18)
				{
					v21 = *(_QWORD*)(v21 + 24);
				}
				else
				{
					v20 = v21;
					v21 = *(_QWORD*)(v21 + 16);
				}
			}
			if (v20 == v19 || v18 < *(_DWORD*)(v20 + 32))
			{
				v125 = *(_QWORD*)(v15 + 16);
				v22 = &v125;
			}
			else
			{
				v126 = v20;
				v22 = &v126;
			}
			v23 = *v22;
			if (v23 != v19)
			{
				v24 = *(_QWORD*)(v23 + 40);
				v144 = v24;
				if (v24)
				{
					v25 = *(_QWORD**)(v24 + 16);
					v26 = (_QWORD*)v25[2];
					if (v26 != v25)
					{
						do
						{
							v27 = (__int64*)v26[5];
							v145 = v27;
							v28 = (int*)*v27;
							if (*v27)
							{
								v29 = a1[4];
								v131 = off_140B569F0;
								v133 = a1;
								v30 = *(_QWORD*)(v29 + 112);
								v134 = 1;
								if (*(_QWORD*)(v29 + 120) >= v30)
									sub_14005E2C0((__int64)a1);
								v31 = a1[2];
								v32 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v31 + 8) = 5;
								*(_QWORD*)v31 = v32;
								a1[2] += 16i64;
								v33 = sub_1400578C0((__int64)a1);
								v34 = *v28;
								v35 = v33;
								v132 = v33;
								v141 = v34;
								v36 = *(_QWORD*)(a1[4] + 160i64);
								if ((unsigned int)(v33 - 1) >= *(_DWORD*)(v36 + 56))
								{
									if ((double)v33 == 0.0)
									{
										v37 = *(_DWORD**)(v36 + 32);
									}
									else
									{
										v146 = (double)v33;
										v37 = (_DWORD*)(*(_QWORD*)(v36 + 32)
											+ 40
											* ((unsigned int)(LODWORD(v146) + HIDWORD(v146))
												% (((1i64 << *(_BYTE*)(v36 + 11)) - 1) | 1)));
									}
									while (v37[6] != 3 || (double)v33 != *((double*)v37 + 2))
									{
										v37 = (_DWORD*)*((_QWORD*)v37 + 4);
										if (!v37)
										{
											v37 = dword_140A12138;
											break;
										}
									}
								}
								else
								{
									v37 = (_DWORD*)(*(_QWORD*)(v36 + 24) + 16i64 * (v33 - 1));
								}
								v38 = a1[2];
								*(_QWORD*)v38 = *(_QWORD*)v37;
								*(_DWORD*)(v38 + 8) = v37[2];
								a1[2] += 16i64;
								v39 = (unsigned __int64*)sub_14018F0E0(&v121, L"idConversion")[1];
								if (v39)
								{
									v40 = -1i64;
									do
										++v40;
									while (*((_BYTE*)v39 + v40));
									if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
										sub_14005E2C0((__int64)a1);
									v41 = a1[2];
									v42 = sub_140062650((__int64)a1, v39, v40);
									v27 = v145;
									*(_DWORD*)(v41 + 8) = 4;
									*(_QWORD*)v41 = v42;
									v34 = v141;
								}
								else
								{
									*(_DWORD*)(a1[2] + 8i64) = 0;
								}
								v43 = v122;
								a1[2] += 16i64;
								if (v43)
									sub_14018B900(v43, 0);
								v44 = a1[2];
								*(_DWORD*)(v44 + 8) = 3;
								*(double*)v44 = (double)v34;
								a1[2] += 16i64;
								v45 = (__int64*)sub_1400580E0((__int64)a1, -3);
								sub_14005EA50((__int64)a1, v45, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
								a1[2] -= 48i64;
								if (*(_DWORD*)(*v27 + 4) == 4)
								{
									v47 = v28[2];
									v142 = v47;
									v48 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
									*(_QWORD*)v49 = *v48;
									*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
									a1[2] += 16i64;
									v50 = (unsigned __int64*)sub_14018F0E0(&v121, L"idSource")[1];
									if (v50)
									{
										v51 = -1i64;
										do
											++v51;
										while (*((_BYTE*)v50 + v51));
										if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
											sub_14005E2C0((__int64)a1);
										v52 = a1[2];
										v53 = sub_140062650((__int64)a1, v50, v51);
										v27 = v145;
										*(_DWORD*)(v52 + 8) = 4;
										*(_QWORD*)v52 = v53;
										a1[2] += 16i64;
										v47 = v142;
									}
									else
									{
										*(_DWORD*)(a1[2] + 8i64) = 0;
										a1[2] += 16i64;
									}
									if ((_QWORD)v122)
										sub_14018B900(v122, 0);
									v54 = a1[2];
									*(_DWORD*)(v54 + 8) = 3;
									*(double*)v54 = (double)v47;
									a1[2] += 16i64;
									v55 = (__int64*)sub_1400580E0((__int64)a1, -3);
									sub_14005EA50((__int64)a1, v55, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
									a1[2] -= 48i64;
									v56 = a1[4];
									v57 = (unsigned int)v28[3];
									LODWORD(v122) = v28[2];
									v58 = *(_QWORD*)(v56 + 112);
									*(_QWORD*)((char*)&v122 + 4) = 0i64;
									HIDWORD(v122) = 0;
									if (*(_QWORD*)(v56 + 120) >= v58)
										sub_14005E2C0((__int64)a1);
									v59 = a1[5];
									if (v59 == a1[10])
										v60 = a1[15];
									else
										v60 = *(_QWORD*)(**(_QWORD**)(v59 + 8) + 24i64);
									v61 = sub_1400627D0((__int64)a1, 0x18ui64, v60);
									v62 = a1[2];
									*(_QWORD*)v62 = v61;
									*(_DWORD*)(v62 + 8) = 7;
									a1[2] += 16i64;
									v63 = v122;
									*(_QWORD*)(v61 + 48) = v57;
									*(_OWORD*)(v61 + 56) = __PAIR128__(*((unsigned __int64*)&v122 + 1), v63);
									v64 = a1[4];
									v65 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
									v66 = a1[2];
									v135 = v65;
									v136 = 4;
									sub_14005E8E0((__int64)a1, v64 + 160, (int*)&v135, v66);
									a1[2] += 16i64;
									sub_140058BF0((__int64)a1, -2);
									sub_1400FB540((__int64)&v131);
									a1[2] -= 16i64;
									v67 = a1[2];
									if (*(_DWORD*)(*v27 + 4) == 4)
									{
										v68 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
										*(_QWORD*)v67 = *v68;
										*(_DWORD*)(v67 + 8) = *((_DWORD*)v68 + 2);
										a1[2] += 16i64;
										sub_1400F06F0((__int64)a1, v69, L"idTarget", v70);
										a1[2] -= 16i64;
										v71 = a1[4];
										v72 = (unsigned int)v28[5];
										LODWORD(v122) = v28[4];
										v73 = *(_QWORD*)(v71 + 112);
										*(_QWORD*)((char*)&v122 + 4) = 0i64;
										HIDWORD(v122) = 0;
										if (*(_QWORD*)(v71 + 120) >= v73)
											sub_14005E2C0((__int64)a1);
										v74 = a1[5];
										if (v74 == a1[10])
											v75 = a1[15];
										else
											v75 = *(_QWORD*)(**(_QWORD**)(v74 + 8) + 24i64);
										v76 = sub_1400627D0((__int64)a1, 0x18ui64, v75);
										v77 = a1[2];
										*(_QWORD*)v77 = v76;
										*(_DWORD*)(v77 + 8) = 7;
										a1[2] += 16i64;
										v78 = v122;
										*(_QWORD*)(v76 + 48) = v72;
										*(_OWORD*)(v76 + 56) = __PAIR128__(*((unsigned __int64*)&v122 + 1), v78);
										v79 = a1[4];
										v80 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
										v81 = a1[2];
										v139 = v80;
										v140 = 4;
										sub_14005E8E0((__int64)a1, v79 + 160, (int*)&v139, v81);
										a1[2] += 16i64;
										sub_140058BF0((__int64)a1, -2);
										sub_1400FB540((__int64)&v131);
										a1[2] -= 16i64;
										if (*(_DWORD*)(*v27 + 24))
										{
											if (*(_DWORD*)(*v27 + 28))
											{
												v82 = (_DWORD*)sub_1401E87E0(v28[6]);
												if (v82)
												{
													v83 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
													v84 = a1[2];
													*(_QWORD*)v84 = *v83;
													*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
													a1[2] += 16i64;
													sub_1400F0870((__int64)a1, v85, L"surchargeSprite", v86);
													a1[2] -= 16i64;
													sub_14034BDD0(v87, v82[1]);
													v88 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
													v89 = a1[2];
													*(_QWORD*)v89 = *v88;
													*(_DWORD*)(v89 + 8) = *((_DWORD*)v88 + 2);
													a1[2] += 16i64;
													sub_1400F0870((__int64)a1, v90, L"surchargeTooltip", v91);
													a1[2] -= 16i64;
													v92 = (unsigned int)v28[7];
													HIDWORD(v122) = *v82;
													*(_QWORD*)&v122 = 1i64;
													DWORD2(v122) = 0;
													v93 = sub_140059170(a1, 0x18ui64);
													*(_QWORD*)v93 = v92;
													*(_OWORD*)(v93 + 8) = v122;
													v94 = a1[4];
													v95 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
													v96 = a1[2];
													v137 = v95;
													v138 = 4;
													sub_14005E8E0((__int64)a1, v94 + 160, (int*)&v137, v96);
													a1[2] += 16i64;
													sub_140058BF0((__int64)a1, -2);
													sub_1400FB540((__int64)&v131);
													a1[2] -= 16i64;
													LODWORD(v94) = v28[3];
													v97 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
													*(_QWORD*)v98 = *v97;
													*(_DWORD*)(v98 + 8) = *((_DWORD*)v97 + 2);
													a1[2] += 16i64;
													sub_1400F06F0((__int64)a1, v99, L"nSourceCount", v94);
													a1[2] -= 16i64;
													sub_1404AB2B0(v145);
													v100 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
													v101 = a1[2];
													*(_QWORD*)v101 = *v100;
													*(_DWORD*)(v101 + 8) = *((_DWORD*)v100 + 2);
													a1[2] += 16i64;
													sub_1400F06F0((__int64)a1, v102, L"nAvailableCount", v103);
													a1[2] -= 16i64;
													v104 = a1[2];
													v105 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
													*(_QWORD*)v104 = *v105;
													*(_DWORD*)(v104 + 8) = *((_DWORD*)v105 + 2);
													a1[2] += 16i64;
													sub_1400F06F0((__int64)a1, v106, L"eType", v107);
													a1[2] -= 16i64;
													LODWORD(v104) = v28[5];
													v108 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
													*(_QWORD*)v109 = *v108;
													*(_DWORD*)(v109 + 8) = *((_DWORD*)v108 + 2);
													a1[2] += 16i64;
													sub_1400F06F0((__int64)a1, v110, L"nTargetCount", v104);
													a1[2] -= 16i64;
													sub_1400FB1D0((__int64)&v127);
												}
											}
										}
									}
								}
								sub_1400579E0((__int64)a1, v46, v35);
								v24 = v144;
							}
							v111 = v26[3];
							if (v111)
							{
								v26 = (_QWORD*)v26[3];
								for (i = *(_QWORD**)(v111 + 16); i; i = (_QWORD*)i[2])
									v26 = i;
							}
							else
							{
								for (j = v26[1]; v26 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
									v26 = (_QWORD*)j;
								if (v26[3] != j)
									v26 = (_QWORD*)j;
							}
						} while (v26 != *(_QWORD**)(v24 + 16));
						v15 = qword_140C659C8;
						v17 = v123;
					}
				}
			}
		}
		v16 = v124 + 1;
		v123 = --v17;
		++v124;
	} while (v17);
	v114 = (__int64)v129;
	v115 = *(_QWORD*)(v129[4] + 160i64);
	if ((unsigned int)(v128 - 1) >= *(_DWORD*)(v115 + 56))
	{
		if ((double)v128 == 0.0)
		{
			v116 = *(_DWORD**)(v115 + 32);
		}
		else
		{
			v143 = (double)v128;
			v116 = (_DWORD*)(*(_QWORD*)(v115 + 32)
				+ 40
				* ((unsigned int)(LODWORD(v143) + HIDWORD(v143)) % (((1i64 << *(_BYTE*)(v115 + 11)) - 1) | 1)));
		}
		while (v116[6] != 3 || (double)v128 != *((double*)v116 + 2))
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
		v116 = (_DWORD*)(*(_QWORD*)(v115 + 24) + 16i64 * (v128 - 1));
	}
	v117 = v129[2];
	v118 = v128;
	*(_QWORD*)v117 = *(_QWORD*)v116;
	v119 = (unsigned int)v116[2];
	*(_DWORD*)(v117 + 8) = v119;
	*(_QWORD*)(v114 + 16) += 16i64;
	sub_1400579E0(v114, v119, v118);
	return 1i64;
}
// 1406ED10B: variable 'v49' is possibly undefined
// 1406ED311: variable 'v69' is possibly undefined
// 1406ED311: variable 'v70' is possibly undefined
// 1406ED48C: variable 'v85' is possibly undefined
// 1406ED48C: variable 'v86' is possibly undefined
// 1406ED49A: variable 'v87' is possibly undefined
// 1406ED4DB: variable 'v90' is possibly undefined
// 1406ED4DB: variable 'v91' is possibly undefined
// 1406ED5A6: variable 'v98' is possibly undefined
// 1406ED5C3: variable 'v99' is possibly undefined
// 1406ED615: variable 'v102' is possibly undefined
// 1406ED615: variable 'v103' is possibly undefined
// 1406ED65F: variable 'v106' is possibly undefined
// 1406ED65F: variable 'v107' is possibly undefined
// 1406ED697: variable 'v109' is possibly undefined
// 1406ED6A7: variable 'v110' is possibly undefined
// 1406ED6C3: variable 'v46' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B3F670: using guessed type wchar_t aSurchargesprit[16];
// 140B3F6A8: using guessed type wchar_t aIdtarget_1[9];
// 140B3F6D8: using guessed type wchar_t aIdsource_0[9];
// 140B3F6F0: using guessed type wchar_t aIdconversion_0[13];
// 140B3F7E0: using guessed type wchar_t aNtargetcount_1[13];
// 140B3F800: using guessed type wchar_t aEtype_35[6];
// 140B3F810: using guessed type wchar_t aNavailablecoun_3[16];
// 140B3F830: using guessed type wchar_t aNsourcecount_0[13];
// 140B3F870: using guessed type wchar_t aSurchargetoolt[17];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C659C8: using guessed type __int64 qword_140C659C8;
// 140C8B048: using guessed type int dword_140C8B048;
// 140C8B04C: using guessed type int dword_140C8B04C;
// 140C8B050: using guessed type int dword_140C8B050;
// 140C8B054: using guessed type int dword_140C8B054;
// 140DC4BC8: using guessed type int dword_140DC4BC8;

