//----- (000000014048E2B0) ----------------------------------------------------
__int64 __fastcall sub_14048E2B0(__int64 a1, __int64 a2)
{
	__int64 v2; // r13
	unsigned int v5; // esi
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 v10; // rcx
	_DWORD* v11; // r15
	__int64 v12; // rcx
	__int64 v13; // rcx
	int* v14; // rdx
	__int64 v15; // rax
	__int64 v16; // rax
	int v17; // eax
	_BYTE* v18; // r8
	int v19; // eax
	char* v20; // rdx
	unsigned int v21; // r14d
	int* v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // rcx
	int* v25; // rdx
	__int64 v26; // rax
	__int64 v27; // rax
	int v28; // eax
	__int64 v29; // rax
	__int64 v30; // rcx
	int* v31; // rax
	_QWORD* v32; // rbx
	_QWORD* v33; // rax
	__int64 v34; // rcx
	int* v35; // rdx
	__int64 v36; // rcx
	__int64 v37; // rax
	int* v38; // rdx
	__int64 v39; // rcx
	__int64 v40; // rax
	int* v41; // rdx
	__int64 v42; // rcx
	__int64 v43; // rax
	int* v44; // rdx
	__int64 v45; // rax
	__int64 v46; // rcx
	int* v47; // rdx
	__int64 v48; // rax
	int* v49; // rax
	__int64 v50; // rax
	int v51; // eax
	__int64 v52; // rbx
	__int64 v53; // rax
	__int64 v54; // rcx
	int* v55; // rdx
	__int64 v56; // rcx
	__int64 v57; // rax
	int* v58; // rdx
	__int64 v59; // rax
	int* v60; // rax
	__int64 v61; // rcx
	int* v62; // rdx
	_QWORD* v63; // rax
	int* v64; // rax
	__int64 v65; // rbx
	_QWORD* v66; // rax
	__int64 v67; // rcx
	int* v68; // rdx
	__int64 v69; // rcx
	__int64 v70; // rax
	int* v71; // rax
	__int64 v72; // rax
	int v73; // eax
	__int64 v74; // rbx
	__int64 v75; // rax
	int* v76; // rax
	_QWORD* v77; // rax
	__int64 v78; // rcx
	int* v79; // rdx
	__int64 v80; // rax
	int* v81; // rax
	__int64 v82; // rbx
	_QWORD* v83; // rax
	__int64 v84; // rcx
	int* v85; // rdx
	__int64 v86; // rcx
	__int64 v87; // rax
	int* v88; // rax
	__int64 v89; // rax
	int v90; // eax
	__int64 v91; // rbx
	__int64 v92; // rax
	__int64 v93; // rcx
	int* v94; // rdx
	__int64 v95; // rcx
	__int64 v96; // rax
	int* v97; // rdx
	__int64 v98; // rax
	int* v99; // rax
	__int64 v100; // rcx
	int* v101; // rdx
	_QWORD* v102; // rax
	int* v103; // rax
	__int64 v104; // rbx
	_QWORD* v105; // rax
	__int64 v106; // rcx
	int* v107; // rdx
	__int64 v108; // rcx
	__int64 v109; // rax
	int* v110; // rax
	__int64 v111; // rax
	int v112; // eax
	__int64 v113; // rbx
	__int64 v114; // rax
	int* v115; // rcx
	__int16* v116; // r14
	int* v117; // rax
	__int64 v118; // rbx
	_QWORD* v119; // rax
	__int64 v120; // rcx
	int* v121; // rax
	__int64 v122; // rax
	int v123; // eax
	__int64 v124; // rax
	__int16* v125; // r14
	int* v126; // rax
	__int64 v127; // rbx
	_QWORD* v128; // rax
	__int64 v129; // rcx
	int* v130; // rax
	__int64 v131; // rax
	int v132; // eax
	__int64 v133; // rax
	unsigned int v134; // ecx
	unsigned int* v135; // rax
	__int64 v136; // rax
	int v137; // eax
	__int16* v138; // rbx
	__int64 v139; // rcx
	__int16* v140; // rax
	bool v141; // zf
	__int64 v142; // rcx
	__int64 v143; // [rsp+30h] [rbp-D0h]
	__m128 v144; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v145; // [rsp+50h] [rbp-B0h] BYREF
	char v146[8]; // [rsp+58h] [rbp-A8h] BYREF
	_WORD* v147; // [rsp+60h] [rbp-A0h]
	_WORD* v148; // [rsp+68h] [rbp-98h]
	__int64 v149; // [rsp+110h] [rbp+10h]
	__int64 v150; // [rsp+130h] [rbp+30h] BYREF
	char v151[8]; // [rsp+138h] [rbp+38h] BYREF
	_WORD* v152; // [rsp+140h] [rbp+40h]
	_WORD* v153; // [rsp+148h] [rbp+48h]
	__int64 v154; // [rsp+1F0h] [rbp+F0h]
	__int64 v155; // [rsp+210h] [rbp+110h] BYREF
	char v156[8]; // [rsp+218h] [rbp+118h] BYREF
	_WORD* v157; // [rsp+220h] [rbp+120h]
	_WORD* v158; // [rsp+228h] [rbp+128h]
	__int64 v159; // [rsp+2D0h] [rbp+1D0h]
	__int64 v160; // [rsp+2F0h] [rbp+1F0h] BYREF
	char v161[8]; // [rsp+2F8h] [rbp+1F8h] BYREF
	_WORD* v162; // [rsp+300h] [rbp+200h]
	_WORD* v163; // [rsp+308h] [rbp+208h]
	__int64 v164; // [rsp+3B0h] [rbp+2B0h]
	__int64 v165; // [rsp+3D0h] [rbp+2D0h] BYREF
	char v166[8]; // [rsp+3D8h] [rbp+2D8h] BYREF
	_WORD* v167; // [rsp+3E0h] [rbp+2E0h]
	_WORD* v168; // [rsp+3E8h] [rbp+2E8h]
	__int64 v169; // [rsp+490h] [rbp+390h]
	__int64 v170; // [rsp+4B0h] [rbp+3B0h] BYREF
	char v171[8]; // [rsp+4B8h] [rbp+3B8h] BYREF
	_WORD* v172; // [rsp+4C0h] [rbp+3C0h]
	_WORD* v173; // [rsp+4C8h] [rbp+3C8h]
	__int64 v174; // [rsp+570h] [rbp+470h]
	__int64 v175; // [rsp+590h] [rbp+490h] BYREF
	char v176[8]; // [rsp+598h] [rbp+498h] BYREF
	_WORD* v177; // [rsp+5A0h] [rbp+4A0h]
	_WORD* v178; // [rsp+5A8h] [rbp+4A8h]
	__int64 v179; // [rsp+650h] [rbp+550h]
	__int64 v180; // [rsp+670h] [rbp+570h] BYREF
	char v181[8]; // [rsp+678h] [rbp+578h] BYREF
	_WORD* v182; // [rsp+680h] [rbp+580h]
	_WORD* v183; // [rsp+688h] [rbp+588h]
	__int64 v184; // [rsp+730h] [rbp+630h]
	__int64 v185; // [rsp+750h] [rbp+650h] BYREF
	char v186[8]; // [rsp+758h] [rbp+658h] BYREF
	_WORD* v187; // [rsp+760h] [rbp+660h]
	_WORD* v188; // [rsp+768h] [rbp+668h]
	__int64 v189; // [rsp+810h] [rbp+710h]
	__int64 v190; // [rsp+830h] [rbp+730h] BYREF
	char v191[8]; // [rsp+838h] [rbp+738h] BYREF
	_WORD* v192; // [rsp+840h] [rbp+740h]
	_WORD* v193; // [rsp+848h] [rbp+748h]
	__int64 v194; // [rsp+8F0h] [rbp+7F0h]
	__int64 v195; // [rsp+910h] [rbp+810h] BYREF
	char v196[8]; // [rsp+918h] [rbp+818h] BYREF
	_WORD* v197; // [rsp+920h] [rbp+820h]
	_WORD* v198; // [rsp+928h] [rbp+828h]
	__int64 v199; // [rsp+9D0h] [rbp+8D0h]
	__int64 v200; // [rsp+9F0h] [rbp+8F0h] BYREF
	char v201[8]; // [rsp+9F8h] [rbp+8F8h] BYREF
	_WORD* v202; // [rsp+A00h] [rbp+900h]
	_WORD* v203; // [rsp+A08h] [rbp+908h]
	__int64 v204; // [rsp+AB0h] [rbp+9B0h]
	__int64 v205; // [rsp+B00h] [rbp+A00h]

	v2 = qword_140C65948;
	if (!a2)
		return 2147500037i64;
	v5 = *(_DWORD*)a2;
	v6 = *(_QWORD*)(qword_140C65948 + 16);
	v7 = *(_QWORD*)(v6 + 8);
	v8 = v6;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < v5)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == v6 || (v205 = v8, v5 < *(_DWORD*)(v8 + 32)))
		v205 = *(_QWORD*)(qword_140C65948 + 16);
	if (v205 == v6 || (v9 = *(_QWORD*)(v205 + 40)) == 0)
	{
		if (*(_BYTE*)(a2 + 4) == 13)
		{
			sub_14048D060(qword_140C65948);
			return 0i64;
		}
		else
		{
			return 2147500037i64;
		}
	}
	else
	{
		v11 = (_DWORD*)sub_14048D370(qword_140C65948, v5);
		if (v11)
		{
			switch (*(_BYTE*)(a2 + 4))
			{
			case 0:
				sub_14034BDD0(v10, 145629);
				sub_14034BDD0(v12, *(_DWORD*)(v9 + 68));
				sub_1404DDE90(&v195);
				v14 = (int*)sub_14034BDD0(v13, *(_DWORD*)(v9 + 72));
				if (v14)
				{
					v15 = 0i64;
					if (*(_WORD*)v14)
					{
						do
							++v15;
						while (*((_WORD*)v14 + v15));
					}
					sub_14001C480((__int64)v196, v14, (int*)((char*)v14 + 2 * v15));
				}
				else if (v197 != v198)
				{
					*v197 = 0;
					v198 = v197;
				}
				sub_1400B7660(&v195);
				if ((dword_140DC3080 & 1) == 0)
				{
					dword_140DC3080 |= 1u;
					v16 = sub_140200220(0x14Bu);
					if (v16)
						v17 = *(_DWORD*)(v16 + 4);
					else
						v17 = 5000;
					dword_140DC3084 = v17;
				}
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeUnlocked", byte_1409E952C, v9);
				sub_140437A10((_QWORD*)qword_140C658D8, 0x44u, 0, 0i64, 0, 0, 1);
				if (v199)
					sub_14018B900(v199, 0);
				sub_1400B7390(&v195);
				goto LABEL_280;
			case 1:
				sub_14048DDE0(v2, v5, 0);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeActivate", byte_1409E945C, v9);
				goto LABEL_280;
			case 3:
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeAbandon", byte_1409E9514, v5, &unk_1409F05F4);
				sub_14048D7A0(v2, v5);
				goto LABEL_280;
			case 4:
				sub_1404DDE90(&v170);
				sub_1404DDE90(&v165);
				if (v11[8])
				{
					v55 = (int*)sub_14034BDD0(v54, *(_DWORD*)(v9 + 68));
					if (v55)
					{
						v57 = 0i64;
						if (*(_WORD*)v55)
						{
							do
								++v57;
							while (*((_WORD*)v55 + v57));
						}
						sub_14001C480((__int64)v171, v55, (int*)((char*)v55 + 2 * v57));
					}
					else if (v172 != v173)
					{
						*v172 = 0;
						v173 = v172;
					}
					v58 = (int*)sub_14034BDD0(v56, 195986);
					if (v58)
					{
						v59 = 0i64;
						if (*(_WORD*)v58)
						{
							do
								++v59;
							while (*((_WORD*)v58 + v59));
						}
						sub_14001C480((__int64)v166, v58, (int*)((char*)v58 + 2 * v59));
					}
					else if (v167 != v168)
					{
						*v167 = 0;
						v168 = v167;
					}
					v60 = sub_14018B280(96i64, 0);
					if (v60)
					{
						v61 = (unsigned int)v11[9];
						v62 = (int*)&unk_1409F060C;
						if ((unsigned int)v61 <= 2)
							v62 = *(int**)(v2 + 8 * v61 + 232);
						v63 = (_QWORD*)sub_1404DDB40((__int64)v60, v62);
					}
					else
					{
						v63 = 0i64;
					}
					sub_1400B7480((__int64)&v165, v63);
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeCompletedSound", byte_1409E9784, v5);
					sub_140437A10((_QWORD*)qword_140C658D8, 0x46u, 0, 0i64, 0, 0, 1);
				}
				else
				{
					v64 = sub_14018B280(96i64, 0);
					v65 = 0i64;
					if (v64)
						v66 = (_QWORD*)sub_1404DDAF0((__int64)v64, *(_DWORD*)(v9 + 68));
					else
						v66 = 0i64;
					sub_1400B7480((__int64)&v170, v66);
					v68 = (int*)sub_14034BDD0(v67, 145630);
					if (v68)
					{
						v70 = 0i64;
						if (*(_WORD*)v68)
						{
							do
								++v70;
							while (*((_WORD*)v68 + v70));
						}
						sub_14001C480((__int64)v171, v68, (int*)((char*)v68 + 2 * v70));
					}
					else if (v172 != v173)
					{
						*v172 = 0;
						v173 = v172;
					}
					v71 = (int*)sub_14034BDD0(v69, 145585);
					if (v71)
					{
						if (*(_WORD*)v71)
						{
							do
								++v65;
							while (*((_WORD*)v71 + v65));
						}
						sub_14001C480((__int64)v166, v71, (int*)((char*)v71 + 2 * v65));
					}
					else if (v167 != v168)
					{
						*v167 = 0;
						v168 = v167;
					}
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeFailSound", byte_1409E975C, v5);
				}
				if ((dword_140DC3080 & 8) == 0)
				{
					dword_140DC3080 |= 8u;
					v72 = sub_140200220(0x14Eu);
					if (v72)
						v73 = *(_DWORD*)(v72 + 4);
					else
						v73 = 5000;
					dword_140DC3090 = v73;
				}
				v74 = *(_QWORD*)(sub_1400B7660(&v165) + 8);
				v75 = sub_1400B7660(&v170);
				LODWORD(v143) = dword_140DC3090;
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ChallengeFailTime",
					"$SSi",
					v9,
					*(_QWORD*)(v75 + 8),
					v74,
					v143);
				sub_14048D7A0(v2, v5);
				if (v169)
					sub_14018B900(v169, 0);
				sub_1400B7390(&v165);
				if (v174)
					sub_14018B900(v174, 0);
				sub_1400B7390(&v170);
				goto LABEL_280;
			case 5:
				sub_1404DDE90(&v155);
				sub_1404DDE90(&v200);
				if (v11[8])
				{
					v76 = sub_14018B280(96i64, 0);
					if (v76)
						v77 = (_QWORD*)sub_1404DDAF0((__int64)v76, *(_DWORD*)(v9 + 68));
					else
						v77 = 0i64;
					sub_1400B7480((__int64)&v155, v77);
					v79 = (int*)sub_14034BDD0(v78, 145632);
					if (v79)
					{
						v80 = 0i64;
						if (*(_WORD*)v79)
						{
							do
								++v80;
							while (*((_WORD*)v79 + v80));
						}
						sub_14001C480((__int64)v156, v79, (int*)((char*)v79 + 2 * v80));
					}
					else if (v157 != v158)
					{
						*v157 = 0;
						v158 = v157;
					}
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeCompletedSound", byte_1409E9784, v5);
					sub_140437A10((_QWORD*)qword_140C658D8, 0x46u, 0, 0i64, 0, 0, 1);
				}
				else
				{
					v81 = sub_14018B280(96i64, 0);
					v82 = 0i64;
					if (v81)
						v83 = (_QWORD*)sub_1404DDAF0((__int64)v81, *(_DWORD*)(v9 + 68));
					else
						v83 = 0i64;
					sub_1400B7480((__int64)&v155, v83);
					v85 = (int*)sub_14034BDD0(v84, 145630);
					if (v85)
					{
						v87 = 0i64;
						if (*(_WORD*)v85)
						{
							do
								++v87;
							while (*((_WORD*)v85 + v87));
						}
						sub_14001C480((__int64)v156, v85, (int*)((char*)v85 + 2 * v87));
					}
					else if (v157 != v158)
					{
						*v157 = 0;
						v158 = v157;
					}
					v88 = (int*)sub_14034BDD0(v86, 150714);
					if (v88)
					{
						if (*(_WORD*)v88)
						{
							do
								++v82;
							while (*((_WORD*)v88 + v82));
						}
						sub_14001C480((__int64)v201, v88, (int*)((char*)v88 + 2 * v82));
					}
					else if (v202 != v203)
					{
						*v202 = 0;
						v203 = v202;
					}
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeFailSound", byte_1409E975C, v5);
				}
				if ((dword_140DC3080 & 0x10) == 0)
				{
					dword_140DC3080 |= 0x10u;
					v89 = sub_140200220(0x14Eu);
					if (v89)
						v90 = *(_DWORD*)(v89 + 4);
					else
						v90 = 5000;
					dword_140DC3094 = v90;
				}
				v91 = *(_QWORD*)(sub_1400B7660(&v200) + 8);
				v92 = sub_1400B7660(&v155);
				LODWORD(v143) = dword_140DC3094;
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ChallengeFailArea",
					"$SSi",
					v9,
					*(_QWORD*)(v92 + 8),
					v91,
					v143);
				sub_14048D7A0(v2, v5);
				if (v204)
					sub_14018B900(v204, 0);
				sub_1400B7390(&v200);
				if (v159)
					sub_14018B900(v159, 0);
				sub_1400B7390(&v155);
				goto LABEL_280;
			case 6:
				sub_1404DDE90(&v150);
				sub_1404DDE90(&v145);
				if (*(_DWORD*)(a2 + 8))
				{
					v31 = sub_14018B280(96i64, 0);
					v32 = 0i64;
					if (v31)
						v33 = (_QWORD*)sub_1404DDAF0((__int64)v31, *(_DWORD*)(v9 + 68));
					else
						v33 = 0i64;
					sub_1400B7480((__int64)&v150, v33);
					v35 = (int*)sub_14034BDD0(v34, 145630);
					if (v35)
					{
						v37 = 0i64;
						if (*(_WORD*)v35)
						{
							do
								++v37;
							while (*((_WORD*)v35 + v37));
						}
						sub_14001C480((__int64)v151, v35, (int*)((char*)v35 + 2 * v37));
					}
					else if (v152 != v153)
					{
						*v152 = 0;
						v153 = v152;
					}
					v38 = (int*)sub_14034BDD0(v36, *(_DWORD*)(a2 + 8));
					if (v38)
					{
						v40 = 0i64;
						if (*(_WORD*)v38)
						{
							do
								++v40;
							while (*((_WORD*)v38 + v40));
						}
					LABEL_76:
						sub_14001C480((__int64)v146, v38, (int*)((char*)v38 + 2 * v40));
						goto LABEL_77;
					}
				}
				else
				{
					v32 = 0i64;
					v41 = (int*)sub_14034BDD0(v30, *(_DWORD*)(v9 + 68));
					if (v41)
					{
						v43 = 0i64;
						if (*(_WORD*)v41)
						{
							do
								++v43;
							while (*((_WORD*)v41 + v43));
						}
						sub_14001C480((__int64)v151, v41, (int*)((char*)v41 + 2 * v43));
					}
					else if (v152 != v153)
					{
						*v152 = 0;
						v153 = v152;
					}
					v38 = (int*)sub_14034BDD0(v42, 145630);
					if (v38)
					{
						v40 = 0i64;
						if (*(_WORD*)v38)
						{
							do
								++v40;
							while (*((_WORD*)v38 + v40));
						}
						goto LABEL_76;
					}
				}
				if (v147 != v148)
				{
					*v147 = 0;
					v148 = v147;
				}
			LABEL_77:
				if (v11[8])
				{
					v44 = (int*)sub_14034BDD0(v39, *(_DWORD*)(v9 + 68));
					if (v44)
					{
						v45 = 0i64;
						if (*(_WORD*)v44)
						{
							do
								++v45;
							while (*((_WORD*)v44 + v45));
						}
						sub_14001C480((__int64)v151, v44, (int*)((char*)v44 + 2 * v45));
					}
					else if (v152 != v153)
					{
						*v152 = 0;
						v153 = v152;
					}
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeCompletedSound", byte_1409E9784, v5);
					sub_140437A10((_QWORD*)qword_140C658D8, 0x46u, 0, 0i64, 0, 0, 1);
					if (!*(_DWORD*)(a2 + 8))
					{
						v47 = (int*)sub_14034BDD0(v46, 145632);
						if (v47)
						{
							v48 = 0i64;
							if (*(_WORD*)v47)
							{
								do
									++v48;
								while (*((_WORD*)v47 + v48));
							}
							sub_14001C480((__int64)v146, v47, (int*)((char*)v47 + 2 * v48));
						}
						else if (v147 != v148)
						{
							*v147 = 0;
							v148 = v147;
						}
						v49 = sub_14018B280(96i64, 0);
						if (v49)
							v32 = (_QWORD*)sub_1404DDAF0((__int64)v49, *(_DWORD*)(v9 + 68));
						sub_1400B7480((__int64)&v145, v32);
					}
				}
				else
				{
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeFailSound", byte_1409E975C, v5);
				}
				if ((dword_140DC3080 & 4) == 0)
				{
					dword_140DC3080 |= 4u;
					v50 = sub_140200220(0x14Eu);
					if (v50)
						v51 = *(_DWORD*)(v50 + 4);
					else
						v51 = 5000;
					dword_140DC308C = v51;
				}
				v52 = *(_QWORD*)(sub_1400B7660(&v145) + 8);
				v53 = sub_1400B7660(&v150);
				LODWORD(v143) = dword_140DC308C;
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ChallengeFailGeneric",
					"$SSi",
					v9,
					*(_QWORD*)(v53 + 8),
					v52,
					v143);
				sub_14048D7A0(v2, v5);
				if (v149)
					sub_14018B900(v149, 0);
				sub_1400B7390(&v145);
				if (v154)
					sub_14018B900(v154, 0);
				sub_1400B7390(&v150);
			LABEL_280:
				v141 = qword_140C65B78 == 0;
				v142 = qword_140C65898;
				*(_DWORD*)(qword_140C65898 + 28568) = 1;
				if (!v141)
				{
					sub_140575DD0();
					v142 = qword_140C65898;
				}
				sub_1400EA3E0(*(_QWORD*)(v142 + 29504), "ChallengeUpdated", byte_1409E965C, v5);
				break;
			case 7:
				v125 = sub_14034BDD0(v10, *(_DWORD*)(v9 + 68));
				sub_1404DDE90(&v185);
				v126 = sub_14018B280(96i64, 0);
				v127 = 0i64;
				if (v126)
					v128 = (_QWORD*)sub_1404DDAF0((__int64)v126, *(_DWORD*)(v9 + 76));
				else
					v128 = 0i64;
				sub_1400B7480((__int64)&v185, v128);
				v130 = (int*)sub_14034BDD0(v129, 148346);
				if (v130)
				{
					if (*(_WORD*)v130)
					{
						do
							++v127;
						while (*((_WORD*)v130 + v127));
					}
					sub_14001C480((__int64)v186, v130, (int*)((char*)v130 + 2 * v127));
				}
				else if (v187 != v188)
				{
					*v187 = 0;
					v188 = v187;
				}
				if ((dword_140DC3080 & 0x80u) == 0)
				{
					dword_140DC3080 |= 0x80u;
					v131 = sub_140200220(0x14Du);
					if (v131)
						v132 = *(_DWORD*)(v131 + 4);
					else
						v132 = 5000;
					dword_140DC30A0 = v132;
				}
				v133 = sub_1400B7660(&v185);
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ChallengeAreaRestriction",
					"iSSf",
					v5,
					v125,
					*(_QWORD*)(v133 + 8),
					(float)((float)dword_140DC30A0 * 0.001));
				v134 = *(_DWORD*)(v9 + 36);
				if (v134)
				{
					v135 = (unsigned int*)sub_14024B980(v134);
					v144 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128)v135[3], (__m128)v135[5]),
						_mm_unpacklo_ps((__m128)v135[4], (__m128)0i64));
					if ((dword_140DC3080 & 0x100) == 0)
					{
						dword_140DC3080 |= 0x100u;
						v136 = sub_140200220(0x1B3u);
						if (v136)
							v137 = *(_DWORD*)(v136 + 4);
						else
							v137 = 30000;
						dword_140DC30A4 = v137;
					}
					sub_1404262A0(*(_QWORD*)(qword_140C65898 + 29504), v5, (__int64)v125, v144.m128_f32);
				}
				if (v189)
					sub_14018B900(v189, 0);
				sub_1400B7390(&v185);
				goto LABEL_280;
			case 8:
				v21 = *(_DWORD*)(a2 + 8) + 1;
				sub_14048DDE0(v2, v5, v21);
				sub_1404DDE90(&v180);
				v22 = sub_14018B280(96i64, 0);
				if (v22)
					v23 = (_QWORD*)sub_1404DDAF0((__int64)v22, *(_DWORD*)(v9 + 68));
				else
					v23 = 0i64;
				sub_1400B7480((__int64)&v180, v23);
				v25 = (int*)sub_14034BDD0(v24, 145632);
				if (v25)
				{
					v26 = 0i64;
					if (*(_WORD*)v25)
					{
						do
							++v26;
						while (*((_WORD*)v25 + v26));
					}
					sub_14001C480((__int64)v181, v25, (int*)((char*)v25 + 2 * v26));
				}
				else if (v182 != v183)
				{
					*v182 = 0;
					v183 = v182;
				}
				if ((dword_140DC3080 & 2) == 0)
				{
					dword_140DC3080 |= 2u;
					v27 = sub_140200220(0x14Fu);
					if (v27)
						v28 = *(_DWORD*)(v27 + 4);
					else
						v28 = 10000;
					dword_140DC3088 = v28;
				}
				if (((*(_BYTE*)(v9 + 12) & 8) != 0 || v21 >= *(_DWORD*)(v9 + 40)) && *(_DWORD*)(v9 + 40) > 1u)
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeTierAchieved", byte_1409E97E4, v5, v21);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeCompletedSound", byte_1409E9784, v5);
				v29 = sub_1400B7660(&v180);
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ChallengeCompleted",
					"iSSi",
					v5,
					*(_QWORD*)(v29 + 8),
					&unk_1409F05B4,
					dword_140DC3088);
				sub_140437A10((_QWORD*)qword_140C658D8, 0x46u, 0, 0i64, 0, 0, 1);
				sub_14048D7A0(v2, v5);
				if (v184)
					sub_14018B900(v184, 0);
				sub_1400B7390(&v180);
				goto LABEL_280;
			case 9:
				sub_14048DDE0(v2, v5, *(_DWORD*)(a2 + 8) + 1);
				v18 = byte_1409E97E4;
				v19 = *(_DWORD*)(a2 + 8) + 1;
				v20 = "ChallengeTierAchieved";
				goto LABEL_234;
			case 0xA:
				v115 = *(int**)(v2 + 8i64 * (int)v11[1] + 104);
				if (v115)
				{
					v19 = *v115;
					v18 = &unk_1409E94FC;
					v20 = "ChallengeTypeAlreadyActive";
				LABEL_234:
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), v20, v18, v5, v19);
				}
				goto LABEL_280;
			case 0xB:
				v116 = sub_14034BDD0(v10, *(_DWORD*)(v9 + 68));
				sub_1404DDE90(&v190);
				v117 = sub_14018B280(96i64, 0);
				v118 = 0i64;
				if (v117)
					v119 = (_QWORD*)sub_1404DDAF0((__int64)v117, *(_DWORD*)(v9 + 68));
				else
					v119 = 0i64;
				sub_1400B7480((__int64)&v190, v119);
				v121 = (int*)sub_14034BDD0(v120, 148321);
				if (v121)
				{
					if (*(_WORD*)v121)
					{
						do
							++v118;
						while (*((_WORD*)v121 + v118));
					}
					sub_14001C480((__int64)v191, v121, (int*)((char*)v121 + 2 * v118));
				}
				else if (v192 != v193)
				{
					*v192 = 0;
					v193 = v192;
				}
				if ((dword_140DC3080 & 0x40) == 0)
				{
					dword_140DC3080 |= 0x40u;
					v122 = sub_140200220(0x152u);
					if (v122)
						v123 = *(_DWORD*)(v122 + 4);
					else
						v123 = 5000;
					dword_140DC309C = v123;
				}
				v124 = sub_1400B7660(&v190);
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ChallengeCooldownActive",
					"iSSi",
					v5,
					v116,
					*(_QWORD*)(v124 + 8),
					dword_140DC309C);
				if (v194)
					sub_14018B900(v194, 0);
				sub_1400B7390(&v190);
				goto LABEL_280;
			case 0xC:
				v138 = sub_14034BDD0(v10, *(_DWORD*)(v9 + 68));
				v140 = sub_14034BDD0(v139, 148347);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeLeftArea", "iSSb", v5, v138, v140, v11[14]);
				goto LABEL_280;
			case 0x10:
				sub_14048D120(v2, v5);
				goto LABEL_280;
			case 0x11:
				sub_1404DDE90(&v175);
				sub_1404DDE90(&v160);
				if (v11[8])
				{
					v94 = (int*)sub_14034BDD0(v93, *(_DWORD*)(v9 + 68));
					if (v94)
					{
						v96 = 0i64;
						if (*(_WORD*)v94)
						{
							do
								++v96;
							while (*((_WORD*)v94 + v96));
						}
						sub_14001C480((__int64)v176, v94, (int*)((char*)v94 + 2 * v96));
					}
					else if (v177 != v178)
					{
						*v177 = 0;
						v178 = v177;
					}
					v97 = (int*)sub_14034BDD0(v95, 667105);
					if (v97)
					{
						v98 = 0i64;
						if (*(_WORD*)v97)
						{
							do
								++v98;
							while (*((_WORD*)v97 + v98));
						}
						sub_14001C480((__int64)v161, v97, (int*)((char*)v97 + 2 * v98));
					}
					else if (v162 != v163)
					{
						*v162 = 0;
						v163 = v162;
					}
					v99 = sub_14018B280(96i64, 0);
					if (v99)
					{
						v100 = (unsigned int)v11[9];
						v101 = (int*)&unk_1409F060C;
						if ((unsigned int)v100 <= 2)
							v101 = *(int**)(v2 + 8 * v100 + 232);
						v102 = (_QWORD*)sub_1404DDB40((__int64)v99, v101);
					}
					else
					{
						v102 = 0i64;
					}
					sub_1400B7480((__int64)&v160, v102);
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeCompletedSound", byte_1409E9784, v5);
					sub_140437A10((_QWORD*)qword_140C658D8, 0x46u, 0, 0i64, 0, 0, 1);
				}
				else
				{
					v103 = sub_14018B280(96i64, 0);
					v104 = 0i64;
					if (v103)
						v105 = (_QWORD*)sub_1404DDAF0((__int64)v103, *(_DWORD*)(v9 + 68));
					else
						v105 = 0i64;
					sub_1400B7480((__int64)&v175, v105);
					v107 = (int*)sub_14034BDD0(v106, 145630);
					if (v107)
					{
						v109 = 0i64;
						if (*(_WORD*)v107)
						{
							do
								++v109;
							while (*((_WORD*)v107 + v109));
						}
						sub_14001C480((__int64)v176, v107, (int*)((char*)v107 + 2 * v109));
					}
					else if (v177 != v178)
					{
						*v177 = 0;
						v178 = v177;
					}
					v110 = (int*)sub_14034BDD0(v108, 667102);
					if (v110)
					{
						if (*(_WORD*)v110)
						{
							do
								++v104;
							while (*((_WORD*)v110 + v104));
						}
						sub_14001C480((__int64)v161, v110, (int*)((char*)v110 + 2 * v104));
					}
					else if (v162 != v163)
					{
						*v162 = 0;
						v163 = v162;
					}
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeFailSound", byte_1409E975C, v5);
				}
				if ((dword_140DC3080 & 0x20) == 0)
				{
					dword_140DC3080 |= 0x20u;
					v111 = sub_140200220(0x14Eu);
					if (v111)
						v112 = *(_DWORD*)(v111 + 4);
					else
						v112 = 5000;
					dword_140DC3098 = v112;
				}
				v113 = *(_QWORD*)(sub_1400B7660(&v160) + 8);
				v114 = sub_1400B7660(&v175);
				LODWORD(v143) = dword_140DC3098;
				sub_1400EA3E0(
					*(_QWORD*)(qword_140C65898 + 29504),
					"ChallengeFailTime",
					"$SSi",
					v9,
					*(_QWORD*)(v114 + 8),
					v113,
					v143);
				sub_14048D7A0(v2, v5);
				if (v164)
					sub_14018B900(v164, 0);
				sub_1400B7390(&v160);
				if (v179)
					sub_14018B900(v179, 0);
				sub_1400B7390(&v175);
				goto LABEL_280;
			default:
				goto LABEL_280;
			}
		}
		return 0i64;
	}
}
// 14048E3A7: variable 'v10' is possibly undefined
// 14048E3AF: variable 'v12' is possibly undefined
// 14048E3C3: variable 'v13' is possibly undefined
// 14048E544: variable 'v24' is possibly undefined
// 14048E71D: variable 'v34' is possibly undefined
// 14048E76A: variable 'v36' is possibly undefined
// 14048E794: variable 'v30' is possibly undefined
// 14048E7DD: variable 'v42' is possibly undefined
// 14048E835: variable 'v39' is possibly undefined
// 14048E8D3: variable 'v46' is possibly undefined
// 14048E9EC: variable 'v143' is possibly undefined
// 14048EA5C: variable 'v54' is possibly undefined
// 14048EAB4: variable 'v56' is possibly undefined
// 14048EBD0: variable 'v67' is possibly undefined
// 14048EC2E: variable 'v69' is possibly undefined
// 14048EDCF: variable 'v78' is possibly undefined
// 14048EE9F: variable 'v84' is possibly undefined
// 14048EEF5: variable 'v86' is possibly undefined
// 14048F06E: variable 'v93' is possibly undefined
// 14048F0CE: variable 'v95' is possibly undefined
// 14048F1E6: variable 'v106' is possibly undefined
// 14048F23E: variable 'v108' is possibly undefined
// 14048F48A: variable 'v120' is possibly undefined
// 14048F5C7: variable 'v129' is possibly undefined
// 14048F75C: variable 'v139' is possibly undefined
// 1409E945C: using guessed type _BYTE byte_1409E945C[32];
// 1409E9514: using guessed type _BYTE byte_1409E9514[24];
// 1409E952C: using guessed type _BYTE byte_1409E952C[24];
// 1409E965C: using guessed type _BYTE byte_1409E965C[256];
// 1409E975C: using guessed type _BYTE byte_1409E975C[40];
// 1409E9784: using guessed type _BYTE byte_1409E9784[96];
// 1409E97E4: using guessed type _BYTE byte_1409E97E4[24];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65948: using guessed type __int64 qword_140C65948;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140DC3080: using guessed type int dword_140DC3080;
// 140DC3084: using guessed type int dword_140DC3084;
// 140DC3088: using guessed type int dword_140DC3088;
// 140DC308C: using guessed type int dword_140DC308C;
// 140DC3090: using guessed type int dword_140DC3090;
// 140DC3094: using guessed type int dword_140DC3094;
// 140DC3098: using guessed type int dword_140DC3098;
// 140DC309C: using guessed type int dword_140DC309C;
// 140DC30A0: using guessed type int dword_140DC30A0;
// 140DC30A4: using guessed type int dword_140DC30A4;
// 14048E2B0: using guessed type char var_1D8[8];
// 14048E2B0: using guessed type char var_478[8];
// 14048E2B0: using guessed type char var_9B8[8];
// 14048E2B0: using guessed type char var_A98[8];
// 14048E2B0: using guessed type char var_638[8];
// 14048E2B0: using guessed type char var_718[8];
// 14048E2B0: using guessed type char var_8D8[8];
// 14048E2B0: using guessed type char var_F8[8];
// 14048E2B0: using guessed type char var_558[8];
// 14048E2B0: using guessed type char var_7F8[8];
// 14048E2B0: using guessed type char var_2B8[8];
// 14048E2B0: using guessed type char var_398[8];

