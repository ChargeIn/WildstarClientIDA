#include "../winhttp.h"

//----- (00000001403BBB90) ----------------------------------------------------
__int64 __fastcall sub_1403BBB90(__int64 a1, _QWORD* a2, unsigned int a3, int a4)
{
	__int64 v8; // r9
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 result; // rax
	__int64 v12; // r9
	unsigned __int8 v13; // dl
	unsigned int v14; // r14d
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	_DWORD* i; // rax
	_QWORD* v19; // r15
	__int64 v20; // rcx
	unsigned __int64 v21; // rax
	__int64 v22; // rdi
	__int64 v23; // rax
	int v24; // r12d
	__int64 v25; // rcx
	_QWORD* v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rcx
	_QWORD* v29; // rax
	__int64 v30; // rdx
	unsigned __int16* v31; // r10
	_QWORD* v32; // rax
	__int64 v33; // r10
	__int64 v34; // rdx
	int v35; // r11d
	BOOL v36; // edi
	_QWORD* v37; // rax
	__int64 v38; // r10
	unsigned __int64* v39; // rdx
	unsigned __int64 v40; // r8
	BOOL* v41; // rcx
	__int64* v42; // rax
	_QWORD* v43; // rax
	__int64 v44; // r10
	unsigned __int64* v45; // rdx
	unsigned __int64 v46; // r8
	_DWORD* v47; // rax
	__int64* v48; // rax
	__int64 v49; // rdx
	__int64 v50; // rax
	__int64 v51; // rcx
	_QWORD* v52; // rax
	unsigned __int8 v53; // r11
	__int64 v54; // r10
	__int64 v55; // rdx
	__int64 v56; // rcx
	int v57; // eax
	__int64 v58; // rcx
	int* v59; // rdx
	__int64 v60; // rax
	_QWORD* v61; // rax
	__int64 v62; // rdx
	unsigned __int16* v63; // r10
	__int64 v64; // rcx
	int* v65; // rdx
	__int64 v66; // rax
	_QWORD* v67; // rax
	__int64 v68; // rdx
	unsigned __int16* v69; // r10
	int* v70; // rdi
	__int64 v71; // rcx
	unsigned __int64 v72; // r12
	__int64 v73; // rax
	int v74; // edx
	__int64 v75; // rax
	unsigned int v76; // ecx
	__int64 v77; // rax
	int v78; // edi
	__int64 v79; // rcx
	int* v80; // rdx
	__int64 v81; // rax
	__int64 v82; // rax
	__int64 v83; // rcx
	__int64 v84; // rsi
	unsigned __int64 v85; // rax
	__int64 v86; // rdi
	__int64 v87; // rax
	int v88; // eax
	bool v89; // zf
	int v90; // edi
	__int64 v91; // r8
	unsigned int v92; // r14d
	__int64 v93; // rax
	__int64 v94; // rsi
	__int64 v95; // rdx
	unsigned __int8 v96; // r15
	unsigned __int64 v97; // rcx
	__int64 v98; // rdi
	__int64 v99; // rax
	int v100; // eax
	__int64 v101; // rcx
	int v102; // edi
	_QWORD* v103; // rax
	__int64 v104; // rdx
	unsigned __int16* v105; // r10
	_QWORD* v106; // rax
	__int64 v107; // r10
	__int64 v108; // rdx
	_QWORD* v109; // rax
	__int64 v110; // r10
	__int64 v111; // rdx
	_QWORD* v112; // rax
	__int64 v113; // r11
	__int64 v114; // rdx
	int v115; // r10d
	_QWORD* v116; // rax
	__int64 v117; // r11
	__int64 v118; // rdx
	int v119; // r10d
	int v120; // esi
	_QWORD* v121; // rax
	__int64 v122; // rdx
	unsigned __int64* v123; // rdx
	unsigned __int64 v124; // r8
	_DWORD* v125; // rcx
	__int64* v126; // rax
	_QWORD* v127; // rax
	__int64 v128; // r10
	unsigned __int64* v129; // rdx
	unsigned __int64 v130; // r8
	BOOL* v131; // rcx
	BOOL v132; // eax
	__int64* v133; // rax
	_QWORD* v134; // rax
	unsigned __int16* v135; // r9
	__int64 v136; // r10
	__int64 v137; // rdx
	int v138; // eax
	__int64 v139; // rcx
	_QWORD* v140; // rax
	__int64 v141; // r11
	__int64 v142; // rdx
	int v143; // r10d
	_QWORD* v144; // rax
	__int64 v145; // r10
	__int64 v146; // rdx
	__int64 v147; // rcx
	int* v148; // rdx
	__int64 v149; // rax
	_QWORD* v150; // rax
	__int64 v151; // rdx
	unsigned __int16* v152; // r10
	__int64 v153; // rdx
	int v154; // r14d
	__int64* v155; // rax
	__int64 v156; // r8
	__int64 v157; // rdx
	__int64 v158; // rdx
	__int64 v159; // [rsp+20h] [rbp-E0h]
	__int64 v160; // [rsp+20h] [rbp-E0h]
	__int64 v161; // [rsp+28h] [rbp-D8h] BYREF
	int v162; // [rsp+30h] [rbp-D0h]
	__int64 v163; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v164)(); // [rsp+40h] [rbp-C0h] BYREF
	__int64 v165; // [rsp+48h] [rbp-B8h]
	_QWORD* v166; // [rsp+50h] [rbp-B0h]
	int v167; // [rsp+58h] [rbp-A8h]
	_QWORD* v168; // [rsp+60h] [rbp-A0h]
	__int64(__fastcall * *v169)(); // [rsp+68h] [rbp-98h] BYREF
	int v170; // [rsp+70h] [rbp-90h]
	_QWORD* v171; // [rsp+78h] [rbp-88h]
	int v172; // [rsp+80h] [rbp-80h]
	char v173[8]; // [rsp+88h] [rbp-78h] BYREF
	int* v174; // [rsp+90h] [rbp-70h]
	int* v175; // [rsp+98h] [rbp-68h]
	__int64 v176; // [rsp+A0h] [rbp-60h]
	__int64(__fastcall * *v177)(); // [rsp+A8h] [rbp-58h] BYREF
	int v178; // [rsp+B0h] [rbp-50h]
	_QWORD* v179; // [rsp+B8h] [rbp-48h]
	int v180; // [rsp+C0h] [rbp-40h]
	__int64 v181; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v182; // [rsp+D0h] [rbp-30h]
	__int64 v183; // [rsp+F0h] [rbp-10h] BYREF
	char v184[8]; // [rsp+F8h] [rbp-8h] BYREF
	_WORD* v185; // [rsp+100h] [rbp+0h]
	_WORD* v186; // [rsp+108h] [rbp+8h]
	__int64 v187; // [rsp+1B0h] [rbp+B0h]
	__int64 v188; // [rsp+1D0h] [rbp+D0h] BYREF
	char v189[8]; // [rsp+1D8h] [rbp+D8h] BYREF
	_WORD* v190; // [rsp+1E0h] [rbp+E0h]
	_WORD* v191; // [rsp+1E8h] [rbp+E8h]
	__int64 v192; // [rsp+290h] [rbp+190h]
	unsigned __int8 v194; // [rsp+308h] [rbp+208h]

	if ((unsigned int)(a4 - 3) <= 2 || a4 == 10)
		return sub_1403BC9A0(a1, (__int64)a2, a3, a4);
	v8 = *(_QWORD*)(a1 + 2728);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < a3)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v159 = v9, a3 < *(_DWORD*)(v9 + 32)))
		v159 = *(_QWORD*)(a1 + 2728);
	if (v159 == v8)
		return 0i64;
	v12 = *(_QWORD*)(v159 + 40);
	v13 = *(_BYTE*)(a1 + 28140);
	if (v13 > (unsigned __int8)(*(_BYTE*)(v12 + 8) - 1))
		v13 = *(_BYTE*)(v12 + 8) - 1;
	v163 = *(_QWORD*)(*(_QWORD*)v12 + 8i64 * v13);
	v14 = sub_1407A1440(v13, a3, 1u);
	v15 = sub_1403ACD90(qword_140C65B70, v14, *(_QWORD*)(a1 + 120));
	v160 = v15;
	if (!v15)
		return 0i64;
	v16 = *(_QWORD*)(v15 + 112);
	if ((*(_DWORD*)(v16 + 264) & 0x40000000) != 0)
		return 0i64;
	v17 = 0i64;
	if (a4)
	{
		for (i = (_DWORD*)(v16 + 408); *i != a4; ++i)
		{
			if ((unsigned __int64)++v17 >= 5)
				return 0i64;
		}
	}
	result = sub_1407A1500(qword_140C65B70, a3);
	v19 = (_QWORD*)result;
	v168 = (_QWORD*)result;
	if (result)
	{
		v20 = a2[4];
		v177 = off_140B569F0;
		v21 = *(_QWORD*)(v20 + 112);
		v179 = a2;
		v180 = 1;
		if (*(_QWORD*)(v20 + 120) >= v21)
			sub_14005E2C0((__int64)a2);
		v22 = a2[2];
		v23 = sub_14005C1B0((__int64)a2, 0, 0);
		*(_DWORD*)(v22 + 8) = 5;
		*(_QWORD*)v22 = v23;
		a2[2] += 16i64;
		v24 = sub_1400578C0((__int64)a2);
		v25 = *(_QWORD*)(a2[4] + 160i64);
		v178 = v24;
		v26 = sub_14005C3C0(v25, v24);
		v27 = a2[2];
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
		a2[2] += 16i64;
		sub_1400F06F0((__int64)a2, v27, L"nId", a3);
		a2[2] -= 16i64;
		sub_14034BDD0(v28, *(_DWORD*)(*(_QWORD*)(v160 + 8) + 16i64));
		v29 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v24);
		v30 = a2[2];
		*(_QWORD*)v30 = *v29;
		*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
		a2[2] += 16i64;
		sub_1400F0870((__int64)a2, v30, L"strName", v31);
		a2[2] -= 16i64;
		v32 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v24);
		*(_QWORD*)v33 = *v32;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
		a2[2] += 16i64;
		sub_1400F06F0((__int64)a2, v34, L"nMaxTiers", v35);
		a2[2] -= 16i64;
		v36 = *(_BYTE*)(v163 + 8) != 0;
		v37 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v24);
		*(_QWORD*)v38 = *v37;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
		a2[2] += 16i64;
		v39 = (unsigned __int64*)sub_14018F0E0(&v164, L"bIsActive")[1];
		if (v39)
		{
			v40 = -1i64;
			do
				++v40;
			while (*((_BYTE*)v39 + v40));
			sub_140058710((__int64)a2, v39, v40);
		}
		else
		{
			*(_DWORD*)(a2[2] + 8i64) = 0;
			a2[2] += 16i64;
		}
		if (v165)
			sub_14018B900(v165, 0);
		v41 = (BOOL*)a2[2];
		v41[2] = 1;
		*v41 = v36;
		a2[2] += 16i64;
		v42 = (__int64*)sub_1400580E0((__int64)a2, -3);
		sub_14005EA50((__int64)a2, v42, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
		a2[2] -= 48i64;
		v43 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v24);
		*(_QWORD*)v44 = *v43;
		*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
		a2[2] += 16i64;
		v45 = (unsigned __int64*)sub_14018F0E0(&v164, L"bCanUseOnSecondaryBars")[1];
		if (v45)
		{
			v46 = -1i64;
			do
				++v46;
			while (*((_BYTE*)v45 + v46));
			sub_140058710((__int64)a2, v45, v46);
		}
		else
		{
			*(_DWORD*)(a2[2] + 8i64) = 0;
			a2[2] += 16i64;
		}
		if (v165)
			sub_14018B900(v165, 0);
		v47 = (_DWORD*)a2[2];
		*v47 = 0;
		v47[2] = 1;
		a2[2] += 16i64;
		v48 = (__int64*)sub_1400580E0((__int64)a2, -3);
		sub_14005EA50((__int64)a2, v48, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
		a2[2] -= 48i64;
		v49 = *(_QWORD*)(a1 + 5216);
		v50 = *(_QWORD*)(v49 + 8);
		v194 = *(_BYTE*)(v163 + 8);
		v51 = v49;
		while (v50)
		{
			if (*(_DWORD*)(v50 + 32) < a3)
			{
				v50 = *(_QWORD*)(v50 + 24);
			}
			else
			{
				v51 = v50;
				v50 = *(_QWORD*)(v50 + 16);
			}
		}
		if (v51 == v49 || (v161 = v51, a3 < *(_DWORD*)(v51 + 32)))
			v161 = v49;
		if (v161 != v49)
			v194 = *(_BYTE*)(v161 + 36);
		v52 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v24);
		*(_QWORD*)v54 = *v52;
		*(_DWORD*)(v54 + 8) = *((_DWORD*)v52 + 2);
		a2[2] += 16i64;
		sub_1400F06F0((__int64)a2, v55, L"nCurrentTier", v53);
		a2[2] -= 16i64;
		sub_1404DDE90(&v183);
		v57 = sub_140564760(v56, v14);
		v59 = (int*)sub_14034BDD0(v58, v57);
		if (v59)
		{
			v60 = 0i64;
			if (*(_WORD*)v59)
			{
				do
					++v60;
				while (*((_WORD*)v59 + v60));
			}
			sub_14001C480((__int64)v184, v59, (int*)((char*)v59 + 2 * v60));
		}
		else if (v185 != v186)
		{
			*v185 = 0;
			v186 = v185;
		}
		sub_1400B7660(&v183);
		v61 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v24);
		v62 = a2[2];
		*(_QWORD*)v62 = *v61;
		*(_DWORD*)(v62 + 8) = *((_DWORD*)v61 + 2);
		a2[2] += 16i64;
		sub_1400F0870((__int64)a2, v62, L"strAbilityDescription", v63);
		a2[2] -= 16i64;
		v65 = (int*)sub_14034BDD0(v64, *(_DWORD*)(*(_QWORD*)(v160 + 8) + 56i64));
		if (v65)
		{
			v66 = 0i64;
			if (*(_WORD*)v65)
			{
				do
					++v66;
				while (*((_WORD*)v65 + v66));
			}
			sub_14001C480((__int64)v184, v65, (int*)((char*)v65 + 2 * v66));
		}
		else if (v185 != v186)
		{
			*v185 = 0;
			v186 = v185;
		}
		sub_1400B7660(&v183);
		v67 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v24);
		v68 = a2[2];
		*(_QWORD*)v68 = *v67;
		*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
		a2[2] += 16i64;
		sub_1400F0870((__int64)a2, v68, L"strAbilityPerTierPointDescription", v69);
		a2[2] -= 16i64;
		v162 = 0;
		v70 = sub_14018B280(2i64, 0);
		v174 = v70;
		v176 = (__int64)v70 + 2;
		sub_1407DB590(v70, dword_1409E7CB4, 0i64);
		v72 = 0i64;
		v175 = v70;
		if (v70)
			*(_WORD*)v70 = 0;
		v73 = *(_QWORD*)(a1 + 120);
		if (v73)
			v74 = *(_DWORD*)(v73 + 220);
		else
			v74 = 23;
		v75 = sub_1407A1630(v71, v74, v14);
		if (v75)
		{
			v76 = *(_DWORD*)(v75 + 16);
			if (v76)
			{
				v162 = 1;
				v77 = sub_1402259C0(v76);
				if (v77)
				{
					v78 = *(_DWORD*)(v77 + 56);
					if (v78)
					{
						sub_1404DDE90(&v188);
						v80 = (int*)sub_14034BDD0(v79, v78);
						if (v80)
						{
							v81 = 0i64;
							if (*(_WORD*)v80)
							{
								do
									++v81;
								while (*((_WORD*)v80 + v81));
							}
							sub_14001C480((__int64)v189, v80, (int*)((char*)v80 + 2 * v81));
						}
						else if (v190 != v191)
						{
							*v190 = 0;
							v191 = v190;
						}
						v82 = sub_1400B7660(&v188);
						if ((char*)v82 != v173)
							sub_14001C480((__int64)v173, *(int**)(v82 + 8), *(int**)(v82 + 16));
						if (v192)
							sub_14018B900(v192, 0);
						sub_1400B7390(&v188);
					}
				}
			}
		}
		v83 = a2[4];
		v84 = (__int64)a2;
		v169 = off_140B569F0;
		v85 = *(_QWORD*)(v83 + 112);
		v171 = a2;
		v172 = 1;
		if (*(_QWORD*)(v83 + 120) >= v85)
			sub_14005E2C0((__int64)a2);
		v86 = a2[2];
		v87 = sub_14005C1B0((__int64)a2, 0, 0);
		*(_DWORD*)(v86 + 8) = 5;
		*(_QWORD*)v86 = v87;
		a2[2] += 16i64;
		v88 = sub_1400578C0((__int64)a2);
		v89 = v19[1] == 0i64;
		v90 = v88;
		v170 = v88;
		if (!v89)
		{
			do
			{
				v91 = *(_QWORD*)(a1 + 120);
				v92 = *(_DWORD*)(*v19 + 4 * v72);
				LODWORD(v161) = v92;
				v93 = sub_1403ACD90(qword_140C65B70, v92, v91);
				v94 = v93;
				if (v93)
				{
					v95 = a2[4];
					v96 = *(_BYTE*)(*(_QWORD*)(v93 + 112) + 8i64);
					v97 = *(_QWORD*)(v95 + 112);
					v164 = off_140B569F0;
					v166 = a2;
					v167 = 1;
					if (*(_QWORD*)(v95 + 120) >= v97)
						sub_14005E2C0((__int64)a2);
					v98 = a2[2];
					v99 = sub_14005C1B0((__int64)a2, 0, 0);
					*(_DWORD*)(v98 + 8) = 5;
					*(_QWORD*)v98 = v99;
					a2[2] += 16i64;
					v100 = sub_1400578C0((__int64)a2);
					v101 = *(_QWORD*)(v94 + 8);
					v102 = v100;
					LODWORD(v165) = v100;
					sub_14034BDD0(v101, *(_DWORD*)(v101 + 16));
					v103 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					v104 = a2[2];
					*(_QWORD*)v104 = *v103;
					*(_DWORD*)(v104 + 8) = *((_DWORD*)v103 + 2);
					a2[2] += 16i64;
					sub_1400F0870((__int64)a2, v104, L"strName", v105);
					a2[2] -= 16i64;
					v106 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					*(_QWORD*)v107 = *v106;
					*(_DWORD*)(v107 + 8) = *((_DWORD*)v106 + 2);
					a2[2] += 16i64;
					sub_1400F06F0((__int64)a2, v108, L"nId", a3);
					a2[2] -= 16i64;
					v109 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					*(_QWORD*)v110 = *v109;
					*(_DWORD*)(v110 + 8) = *((_DWORD*)v109 + 2);
					a2[2] += 16i64;
					sub_1400F06F0((__int64)a2, v111, L"nTier", v96);
					a2[2] -= 16i64;
					v112 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					*(_QWORD*)v113 = *v112;
					*(_DWORD*)(v113 + 8) = *((_DWORD*)v112 + 2);
					a2[2] += 16i64;
					sub_1400F06F0((__int64)a2, v114, L"nTrainingCost", v115);
					a2[2] -= 16i64;
					v116 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					*(_QWORD*)v117 = *v116;
					*(_DWORD*)(v117 + 8) = *((_DWORD*)v116 + 2);
					a2[2] += 16i64;
					sub_1400F06F0((__int64)a2, v118, L"nTierPointCost", v119);
					a2[2] -= 16i64;
					v120 = sub_1403BB040(a1, v92);
					v121 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					v122 = a2[2];
					*(_QWORD*)v122 = *v121;
					*(_DWORD*)(v122 + 8) = *((_DWORD*)v121 + 2);
					a2[2] += 16i64;
					v123 = (unsigned __int64*)sub_14018F0E0(&v181, L"bCanPurchase")[1];
					if (v123)
					{
						v124 = -1i64;
						do
							++v124;
						while (*((_BYTE*)v123 + v124));
						sub_140058710((__int64)a2, v123, v124);
					}
					else
					{
						*(_DWORD*)(a2[2] + 8i64) = 0;
						a2[2] += 16i64;
					}
					if (v182)
						sub_14018B900(v182, 0);
					v125 = (_DWORD*)a2[2];
					v125[2] = 1;
					*v125 = v120 != 0;
					a2[2] += 16i64;
					v126 = (__int64*)sub_1400580E0((__int64)a2, -3);
					sub_14005EA50((__int64)a2, v126, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
					a2[2] -= 48i64;
					v127 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					*(_QWORD*)v128 = *v127;
					*(_DWORD*)(v128 + 8) = *((_DWORD*)v127 + 2);
					a2[2] += 16i64;
					v129 = (unsigned __int64*)sub_14018F0E0(&v181, L"bPrereqLocked")[1];
					if (v129)
					{
						v130 = -1i64;
						do
							++v130;
						while (*((_BYTE*)v129 + v130));
						sub_140058710((__int64)a2, v129, v130);
					}
					else
					{
						*(_DWORD*)(a2[2] + 8i64) = 0;
						a2[2] += 16i64;
					}
					if (v182)
						sub_14018B900(v182, 0);
					v131 = (BOOL*)a2[2];
					v132 = v162 != 0;
					v131[2] = 1;
					*v131 = v132;
					a2[2] += 16i64;
					v133 = (__int64*)sub_1400580E0((__int64)a2, -3);
					sub_14005EA50((__int64)a2, v133, (int*)(a2[2] - 32i64), (unsigned int*)(a2[2] - 16i64));
					a2[2] -= 48i64;
					v134 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					v135 = (unsigned __int16*)v174;
					*(_QWORD*)v136 = *v134;
					*(_DWORD*)(v136 + 8) = *((_DWORD*)v134 + 2);
					a2[2] += 16i64;
					sub_1400F0870((__int64)a2, v137, L"strPrereqFailure", v135);
					a2[2] -= 16i64;
					v138 = sub_1403C9F10(a1);
					sub_1407A1630(v139, v138, v92);
					v140 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					*(_QWORD*)v141 = *v140;
					*(_DWORD*)(v141 + 8) = *((_DWORD*)v140 + 2);
					a2[2] += 16i64;
					sub_1400F06F0((__int64)a2, v142, L"nLevelReq", v143);
					a2[2] -= 16i64;
					v144 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					*(_QWORD*)v145 = *v144;
					*(_DWORD*)(v145 + 8) = *((_DWORD*)v144 + 2);
					a2[2] += 16i64;
					sub_1400F0630((__int64)a2, v146, L"bIsActive", v96 <= v194);
					a2[2] -= 16i64;
					v148 = (int*)sub_14034BDD0(v147, *(_DWORD*)(*(_QWORD*)(v160 + 8) + 52i64));
					if (v148)
					{
						v149 = 0i64;
						if (*(_WORD*)v148)
						{
							do
								++v149;
							while (*((_WORD*)v148 + v149));
						}
						sub_14001C480((__int64)v184, v148, (int*)((char*)v148 + 2 * v149));
					}
					else if (v185 != v186)
					{
						*v185 = 0;
						v186 = v185;
					}
					sub_1400B7660(&v183);
					v150 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v102);
					v151 = a2[2];
					*(_QWORD*)v151 = *v150;
					*(_DWORD*)(v151 + 8) = *((_DWORD*)v150 + 2);
					a2[2] += 16i64;
					sub_1400F0870((__int64)a2, v151, L"strTierBonusDescription", v152);
					a2[2] -= 16i64;
					sub_1403D3470(a2, (int*)&v161);
					sub_1400FB540((__int64)&v164);
					a2[2] -= 16i64;
					sub_1400FB1D0((__int64)&v169);
					sub_1400579E0((__int64)a2, v153, v102);
					v19 = v168;
				}
				++v72;
			} while (v72 < v19[1]);
			v84 = (__int64)v171;
			v90 = v170;
		}
		sub_1400FB2A0((__int64)&v177, (__int64)L"tTiers", v90);
		v154 = v178;
		v155 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v178);
		v156 = a2[2];
		v157 = *v155;
		*(_QWORD*)v156 = *v155;
		*(_DWORD*)(v156 + 8) = *((_DWORD*)v155 + 2);
		a2[2] += 16i64;
		if (v84)
			sub_1400579E0(v84, v157, v90);
		if (v174)
			sub_14018B900((__int64)v174, 0);
		if (v187)
			sub_14018B900(v187, 0);
		sub_1400B7390(&v183);
		sub_1400579E0((__int64)a2, v158, v154);
		return 1i64;
	}
	return result;
}
// 1403BBDA7: variable 'v28' is possibly undefined
// 1403BBDE4: variable 'v31' is possibly undefined
// 1403BBE1C: variable 'v33' is possibly undefined
// 1403BBE2E: variable 'v34' is possibly undefined
// 1403BBE2E: variable 'v35' is possibly undefined
// 1403BBE6A: variable 'v38' is possibly undefined
// 1403BBF26: variable 'v44' is possibly undefined
// 1403BC04D: variable 'v54' is possibly undefined
// 1403BC05F: variable 'v55' is possibly undefined
// 1403BC046: variable 'v53' is possibly undefined
// 1403BC075: variable 'v56' is possibly undefined
// 1403BC07C: variable 'v58' is possibly undefined
// 1403BC109: variable 'v63' is possibly undefined
// 1403BC11F: variable 'v64' is possibly undefined
// 1403BC1A9: variable 'v69' is possibly undefined
// 1403BC20B: variable 'v71' is possibly undefined
// 1403BC253: variable 'v79' is possibly undefined
// 1403BC434: variable 'v105' is possibly undefined
// 1403BC465: variable 'v107' is possibly undefined
// 1403BC477: variable 'v108' is possibly undefined
// 1403BC4A5: variable 'v110' is possibly undefined
// 1403BC4B7: variable 'v111' is possibly undefined
// 1403BC4EF: variable 'v113' is possibly undefined
// 1403BC501: variable 'v114' is possibly undefined
// 1403BC501: variable 'v115' is possibly undefined
// 1403BC53F: variable 'v117' is possibly undefined
// 1403BC551: variable 'v118' is possibly undefined
// 1403BC551: variable 'v119' is possibly undefined
// 1403BC644: variable 'v128' is possibly undefined
// 1403BC70D: variable 'v136' is possibly undefined
// 1403BC71F: variable 'v137' is possibly undefined
// 1403BC73A: variable 'v139' is possibly undefined
// 1403BC78E: variable 'v141' is possibly undefined
// 1403BC7A0: variable 'v142' is possibly undefined
// 1403BC7A0: variable 'v143' is possibly undefined
// 1403BC7CD: variable 'v145' is possibly undefined
// 1403BC7EA: variable 'v146' is possibly undefined
// 1403BC800: variable 'v147' is possibly undefined
// 1403BC888: variable 'v152' is possibly undefined
// 1403BC8C7: variable 'v153' is possibly undefined
// 1403BC974: variable 'v158' is possibly undefined
// 1409E7CB4: using guessed type int dword_1409E7CB4[8];
// 140AF5C48: using guessed type wchar_t aStrname_7[8];
// 140AF5C58: using guessed type wchar_t aNid_0[4];
// 140AF5C60: using guessed type wchar_t aStrabilitypert[34];
// 140AF5CA8: using guessed type wchar_t aNcurrenttier[13];
// 140AF5CC8: using guessed type wchar_t aStrabilitydesc[22];
// 140AF5CF8: using guessed type wchar_t aNtier[6];
// 140AF5D08: using guessed type wchar_t aNtrainingcost[14];
// 140AF5D78: using guessed type wchar_t aNid[4];
// 140AF5DD8: using guessed type wchar_t aBisactive[10];
// 140AF5DF0: using guessed type wchar_t aBcanuseonsecon[23];
// 140AF5E20: using guessed type wchar_t aStrname_6[8];
// 140AF5E30: using guessed type wchar_t aNmaxtiers[10];
// 140AF5E70: using guessed type wchar_t aTtiers[7];
// 140AF5F20: using guessed type wchar_t aBprereqlocked[14];
// 140AF5F40: using guessed type wchar_t aStrprereqfailu[17];
// 140AF5F68: using guessed type wchar_t aNtierpointcost[15];
// 140AF5F88: using guessed type wchar_t aBcanpurchase[13];
// 140AF5FA8: using guessed type wchar_t aStrtierbonusde[24];
// 140AF5FF0: using guessed type wchar_t aNlevelreq[10];
// 140AF6008: using guessed type wchar_t aBisactive_0[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1403BBB90: using guessed type char var_1E8[8];
// 1403BBB90: using guessed type char var_108[8];
// 1403BBB90: using guessed type char var_258[8];

