//----- (0000000140677950) ----------------------------------------------------
void __fastcall sub_140677950(__int64* a1, __int64 a2, int a3, unsigned int a4, char a5)
{
	_QWORD* v5; // rdi
	__int64 v7; // r10
	unsigned __int64 v9; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // r13d
	__int64 v14; // rcx
	_QWORD* v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rcx
	int* v18; // r12
	unsigned __int64 v19; // r14
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int64* v22; // rdx
	unsigned __int64 v23; // r8
	_DWORD* v24; // rax
	__int64* v25; // rax
	_QWORD* v26; // rax
	__int64 v27; // rdx
	int v28; // r10d
	float v29; // xmm6_4
	int v30; // ebx
	bool v31; // zf
	_QWORD* v32; // rax
	__int64 v33; // rdx
	__int64 v34; // rsi
	__int64 v35; // rcx
	unsigned __int64 v36; // rax
	__int64 v37; // rbx
	__int64 v38; // rax
	int* v39; // rax
	unsigned int v40; // r13d
	int* v41; // r12
	__int64 v42; // rsi
	__int64 v43; // rcx
	unsigned __int64 v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	int v47; // eax
	float v48; // xmm3_4
	int v49; // r8d
	__int64 v50; // rcx
	__int64 v51; // rdx
	int* v52; // rax
	int* v53; // r13
	unsigned int v54; // edx
	int* v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rsi
	__int64 v58; // rcx
	__int64 v59; // rbx
	__int64 v60; // rax
	__int64 v61; // rsi
	__int64 v62; // rcx
	__int64 v63; // rbx
	__int64 v64; // rax
	int v65; // eax
	__int64 v66; // rdx
	unsigned int v67; // r12d
	int v68; // ebx
	__int64 v69; // rax
	unsigned int* v70; // r12
	__int64 v71; // rsi
	__int64 v72; // rbx
	__int64 v73; // rax
	int v74; // ebx
	__int64 v75; // rcx
	_QWORD* v76; // rax
	__int64 v77; // rdx
	unsigned __int16* v78; // r10
	int v79; // r13d
	_QWORD* v80; // rax
	__int64 v81; // r10
	unsigned __int64* v82; // rdx
	__int64 v83; // rax
	__int64* v84; // rax
	__int64 v85; // r8
	__int64 v86; // rax
	__int64 v87; // rcx
	unsigned int v88; // eax
	_QWORD* v89; // rax
	__int64 v90; // r11
	__int64 v91; // rdx
	int v92; // r10d
	__int64 v93; // r8
	__int64 v94; // rcx
	__int64 v95; // rax
	unsigned int v96; // eax
	_QWORD* v97; // rax
	__int64 v98; // rdx
	int v99; // r10d
	__int64 v100; // rdx
	__int64 v101; // rdx
	__int64 v102; // rdx
	int* v103; // [rsp+40h] [rbp-C0h] BYREF
	int v104; // [rsp+48h] [rbp-B8h]
	int* v105; // [rsp+50h] [rbp-B0h] BYREF
	__int64(__fastcall * *v106)(); // [rsp+58h] [rbp-A8h] BYREF
	__int64 v107; // [rsp+60h] [rbp-A0h]
	__int64 v108; // [rsp+68h] [rbp-98h]
	int v109; // [rsp+70h] [rbp-90h]
	__int64(__fastcall * *v110)(); // [rsp+78h] [rbp-88h] BYREF
	int v111; // [rsp+80h] [rbp-80h]
	_QWORD* v112; // [rsp+88h] [rbp-78h]
	int v113; // [rsp+90h] [rbp-70h]
	char v114[8]; // [rsp+98h] [rbp-68h] BYREF
	int* v115; // [rsp+A0h] [rbp-60h]
	__int64 v116; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v117)(); // [rsp+B8h] [rbp-48h] BYREF
	int v118; // [rsp+C0h] [rbp-40h]
	__int64 v119; // [rsp+C8h] [rbp-38h]
	int v120; // [rsp+D0h] [rbp-30h]
	__int64(__fastcall * *v121)(); // [rsp+D8h] [rbp-28h] BYREF
	int v122; // [rsp+E0h] [rbp-20h]
	__int64 v123; // [rsp+E8h] [rbp-18h]
	int v124; // [rsp+F0h] [rbp-10h]
	__int64 v125; // [rsp+F8h] [rbp-8h] BYREF
	__int64 v126; // [rsp+100h] [rbp+0h]
	__int64 v127; // [rsp+190h] [rbp+90h] BYREF
	__int64 v128; // [rsp+198h] [rbp+98h]

	v128 = a2;
	v5 = (_QWORD*)*a1;
	v7 = *(_QWORD*)(*a1 + 32);
	v110 = off_140B569F0;
	v9 = *(_QWORD*)(v7 + 112);
	v112 = v5;
	v113 = 1;
	if (*(_QWORD*)(v7 + 120) >= v9)
		sub_14005E2C0((__int64)v5);
	v11 = v5[2];
	v12 = sub_14005C1B0((__int64)v5, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	v5[2] += 16i64;
	v13 = sub_1400578C0((__int64)v5);
	v14 = *(_QWORD*)(v5[4] + 160i64);
	v111 = v13;
	v15 = sub_14005C3C0(v14, v13);
	v16 = v5[2];
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	v5[2] += 16i64;
	sub_1400F06F0((__int64)v5, v16, L"eElement", a3);
	v17 = qword_140C658F0;
	v5[2] -= 16i64;
	v18 = sub_1400B5DF0(v17, a4, 0i64);
	v105 = v18;
	if (v18)
	{
		v19 = -1i64;
		if (*((_DWORD*)a1 + 334) && a1 != (__int64*)-192i64 && ((unsigned __int8)(1 << a5) & *((_BYTE*)a1 + 501)) == 0)
		{
			v20 = sub_14005C3C0(*(_QWORD*)(v5[4] + 160i64), v13);
			v21 = v5[2];
			*(_QWORD*)v21 = *v20;
			*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
			v5[2] += 16i64;
			v22 = (unsigned __int64*)sub_14018F0E0(&v106, L"bDisabled")[1];
			if (v22)
			{
				v23 = -1i64;
				do
					++v23;
				while (*((_BYTE*)v22 + v23));
				sub_140058710((__int64)v5, v22, v23);
			}
			else
			{
				*(_DWORD*)(v5[2] + 8i64) = 0;
				v5[2] += 16i64;
			}
			if (v107)
				sub_14018B900(v107, 0);
			v24 = (_DWORD*)v5[2];
			*v24 = 1;
			v24[2] = 1;
			v5[2] += 16i64;
			v25 = (__int64*)sub_1400580E0((__int64)v5, -3);
			sub_14005EA50((__int64)v5, v25, (int*)(v5[2] - 32i64), (unsigned int*)(v5[2] - 16i64));
			v5[2] -= 48i64;
		}
		v26 = sub_14005C3C0(*(_QWORD*)(v5[4] + 160i64), v13);
		v27 = v5[2];
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
		v5[2] += 16i64;
		sub_1400F06F0((__int64)v5, v27, L"nItemLevel", v28);
		v29 = 1.0;
		v5[2] -= 16i64;
		v30 = v18[5];
		LODWORD(v103) = 1065353216;
		v31 = *(_QWORD*)(qword_140C65898 + 120) == 0i64;
		v104 = v30;
		LODWORD(v127) = v30;
		if (!v31)
		{
			sub_140445210((__int64)&v106);
			sub_14040F710(qword_140C658F0, (float*)&v103, (unsigned int*)&v127, v18[5], (int*)&v106, 1);
			v32 = sub_14005C3C0(*(_QWORD*)(v5[4] + 160i64), v13);
			v33 = v5[2];
			*(_QWORD*)v33 = *v32;
			*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
			LODWORD(v32) = v127;
			v5[2] += 16i64;
			v104 = (int)v32;
			sub_1400F06F0((__int64)v5, v33, L"nEffectiveLevel", (int)v32);
			v5[2] -= 16i64;
			v29 = *(float*)&v103;
		}
		if ((unsigned int)sub_140415C70(v5, (__int64)v18))
		{
			sub_1400FB540((__int64)&v110);
			v5[2] -= 16i64;
		}
		v34 = *a1;
		v120 = 1;
		v35 = *(_QWORD*)(v34 + 32);
		LODWORD(v127) = 0;
		v117 = off_140B569F0;
		v36 = *(_QWORD*)(v35 + 112);
		v119 = v34;
		if (*(_QWORD*)(v35 + 120) >= v36)
			sub_14005E2C0(v34);
		v37 = *(_QWORD*)(v34 + 16);
		v38 = sub_14005C1B0(v34, 0, 0);
		*(_DWORD*)(v37 + 8) = 5;
		*(_QWORD*)v37 = v38;
		*(_QWORD*)(v34 + 16) += 16i64;
		v118 = sub_1400578C0(v34);
		v39 = v18 + 39;
		v40 = 0;
		v103 = v18 + 39;
		v41 = v18 + 39;
		while (v39)
		{
			v42 = *a1;
			LODWORD(v127) = 1;
			v43 = *(_QWORD*)(v42 + 32);
			v106 = off_140B569F0;
			v109 = 1;
			v44 = *(_QWORD*)(v43 + 112);
			v108 = v42;
			if (*(_QWORD*)(v43 + 120) >= v44)
				sub_14005E2C0(v42);
			v45 = *(_QWORD*)(v42 + 16);
			v46 = sub_14005C1B0(v42, 0, 0);
			*(_DWORD*)(v45 + 8) = 5;
			*(_QWORD*)v45 = v46;
			*(_QWORD*)(v42 + 16) += 16i64;
			v47 = sub_1400578C0(v42);
			v48 = v29 * *((float*)v41 + 15);
			v49 = *v41;
			LODWORD(v45) = v47;
			LODWORD(v107) = v47;
			sub_1406769C0(v50, (__int64)&v106, v49, v48, 1.0, 0, 0.0);
			sub_1400FB1D0((__int64)&v117);
			sub_1400579E0(v42, v51, v45);
			v39 = v103;
			++v40;
			++v41;
			if (v40 >= 0xF)
				goto LABEL_28;
		}
		if (!(_DWORD)v127)
			goto LABEL_29;
	LABEL_28:
		sub_1400FB2A0((__int64)&v110, (__int64)L"arProperties", v118);
	LABEL_29:
		v52 = sub_14018B280(40i64, 0);
		v53 = v105;
		v115 = v52;
		v116 = 0i64;
		*(_BYTE*)v52 = 0;
		*((_QWORD*)v115 + 1) = 0i64;
		*((_QWORD*)v115 + 2) = v115;
		*((_QWORD*)v115 + 3) = v115;
		v54 = v53[72];
		if (v54)
		{
			v55 = v115;
			v56 = *((_QWORD*)v115 + 1);
			while (v56)
			{
				if (*(_DWORD*)(v56 + 32) < v54)
				{
					v56 = *(_QWORD*)(v56 + 24);
				}
				else
				{
					v55 = (int*)v56;
					v56 = *(_QWORD*)(v56 + 16);
				}
			}
			if (v55 == v115 || v54 < v55[8])
			{
				v127 = v54;
				v105 = v55;
				sub_140032B30((__int64)v114, &v103, (__int64*)&v105, &v127);
				v55 = v103;
			}
			v55[9] = 1;
		}
		v57 = *a1;
		v124 = 1;
		v58 = *(_QWORD*)(v57 + 32);
		v121 = off_140B569F0;
		v123 = v57;
		if (*(_QWORD*)(v58 + 120) >= *(_QWORD*)(v58 + 112))
			sub_14005E2C0(v57);
		v59 = *(_QWORD*)(v57 + 16);
		v60 = sub_14005C1B0(v57, 0, 0);
		*(_DWORD*)(v59 + 8) = 5;
		*(_QWORD*)v59 = v60;
		*(_QWORD*)(v57 + 16) += 16i64;
		v122 = sub_1400578C0(v57);
		if ((unsigned int)sub_1406759B0(a1, (__int64)&v121, (__int64)v114, v104))
			sub_1400FB2A0((__int64)&v110, (__int64)L"arSpells", v122);
		v61 = *a1;
		v106 = off_140B569F0;
		v109 = 1;
		v62 = *(_QWORD*)(v61 + 32);
		v108 = v61;
		if (*(_QWORD*)(v62 + 120) >= *(_QWORD*)(v62 + 112))
			sub_14005E2C0(v61);
		v63 = *(_QWORD*)(v61 + 16);
		v64 = sub_14005C1B0(v61, 0, 0);
		*(_DWORD*)(v63 + 8) = 5;
		*(_QWORD*)v63 = v64;
		*(_QWORD*)(v61 + 16) += 16i64;
		v65 = sub_1400578C0(v61);
		v67 = v53[73];
		v68 = v65;
		LODWORD(v107) = v65;
		if (qword_140C63840)
		{
			v69 = qword_140C63840(off_140A6AEC0, v67, qword_140C63858);
		}
		else
		{
			if (dword_140C63F84 || (int)sub_14020D000() < 0)
			{
			LABEL_80:
				if (v61)
					sub_1400579E0(v61, v66, v68);
				if (v123)
					sub_1400579E0(v123, v66, v122);
				sub_140008410((__int64)v114);
				sub_14018B900((__int64)v115, 0);
				if (v119)
					sub_1400579E0(v119, v101, v118);
				v13 = v111;
				goto LABEL_87;
			}
			v69 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64608 + 24i64))(qword_140C64608, v67);
		}
		v70 = (unsigned int*)v69;
		if (v69)
		{
			v71 = *a1;
			if (*(_QWORD*)(*(_QWORD*)(*a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(*a1 + 32) + 112i64))
				sub_14005E2C0(*a1);
			v72 = *(_QWORD*)(v71 + 16);
			v73 = sub_14005C1B0(v71, 0, 0);
			*(_DWORD*)(v72 + 8) = 5;
			*(_QWORD*)v72 = v73;
			*(_QWORD*)(v71 + 16) += 16i64;
			v74 = sub_1400578C0(v71);
			sub_14034BDD0(v75, v70[1]);
			v76 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v71 + 32) + 160i64), v74);
			v77 = *(_QWORD*)(v71 + 16);
			*(_QWORD*)v77 = *v76;
			*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
			*(_QWORD*)(v71 + 16) += 16i64;
			sub_1400F0870(v71, v77, L"strName", v78);
			*(_QWORD*)(v71 + 16) -= 16i64;
			v79 = v53[74];
			v80 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v71 + 32) + 160i64), v74);
			*(_QWORD*)v81 = *v80;
			*(_DWORD*)(v81 + 8) = *((_DWORD*)v80 + 2);
			*(_QWORD*)(v71 + 16) += 16i64;
			v82 = (unsigned __int64*)sub_14018F0E0(&v125, L"nRunePower")[1];
			if (v82)
			{
				do
					++v19;
				while (*((_BYTE*)v82 + v19));
				sub_140058710(v71, v82, v19);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v71 + 16) + 8i64) = 0;
				*(_QWORD*)(v71 + 16) += 16i64;
			}
			if (v126)
				sub_14018B900(v126, 0);
			v83 = *(_QWORD*)(v71 + 16);
			*(_DWORD*)(v83 + 8) = 3;
			*(double*)v83 = (double)v79;
			*(_QWORD*)(v71 + 16) += 16i64;
			v84 = (__int64*)sub_1400580E0(v71, -3);
			sub_14005EA50(v71, v84, (int*)(*(_QWORD*)(v71 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v71 + 16) - 16i64));
			*(_QWORD*)(v71 + 16) -= 48i64;
			v85 = a1[12];
			v86 = *(_QWORD*)(v85 + 8);
			v87 = v85;
			while (v86)
			{
				if (*(_DWORD*)(v86 + 32) < *v70)
				{
					v86 = *(_QWORD*)(v86 + 24);
				}
				else
				{
					v87 = v86;
					v86 = *(_QWORD*)(v86 + 16);
				}
			}
			if (v87 == v85 || (v88 = *(_DWORD*)(v87 + 32), v127 = v87, *v70 < v88))
				v127 = v85;
			if (v127 != v85)
			{
				v89 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v71 + 32) + 160i64), v74);
				*(_QWORD*)v90 = *v89;
				*(_DWORD*)(v90 + 8) = *((_DWORD*)v89 + 2);
				*(_QWORD*)(v71 + 16) += 16i64;
				sub_1400F06F0(v71, v91, L"nTotalPower", v92);
				*(_QWORD*)(v71 + 16) -= 16i64;
			}
			v93 = a1[16];
			v94 = v93;
			v95 = *(_QWORD*)(v93 + 8);
			while (v95)
			{
				if (*(_DWORD*)(v95 + 32) < *v70)
				{
					v95 = *(_QWORD*)(v95 + 24);
				}
				else
				{
					v94 = v95;
					v95 = *(_QWORD*)(v95 + 16);
				}
			}
			if (v94 == v93 || (v96 = *(_DWORD*)(v94 + 32), v127 = v94, *v70 < v96))
				v127 = v93;
			if (v127 != v93)
			{
				v97 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v71 + 32) + 160i64), v74);
				v98 = *(_QWORD*)(v71 + 16);
				*(_QWORD*)v98 = *v97;
				*(_DWORD*)(v98 + 8) = *((_DWORD*)v97 + 2);
				*(_QWORD*)(v71 + 16) += 16i64;
				sub_1400F06F0(v71, v98, L"nMaxPower", v99);
				*(_QWORD*)(v71 + 16) -= 16i64;
			}
			sub_1400FB1D0((__int64)&v106);
			sub_1400579E0(v71, v100, v74);
			v68 = v107;
			sub_1400FB2A0((__int64)&v110, (__int64)L"arSets", v107);
			v61 = v108;
		}
		goto LABEL_80;
	}
LABEL_87:
	sub_1400FB1D0(v128);
	sub_1400579E0((__int64)v5, v102, v13);
}
// 140677B7C: variable 'v28' is possibly undefined
// 140677D7B: variable 'v50' is possibly undefined
// 140677D91: variable 'v51' is possibly undefined
// 140678013: variable 'v75' is possibly undefined
// 14067804F: variable 'v78' is possibly undefined
// 140678080: variable 'v81' is possibly undefined
// 14067819B: variable 'v90' is possibly undefined
// 1406781AD: variable 'v91' is possibly undefined
// 1406781AD: variable 'v92' is possibly undefined
// 14067824A: variable 'v99' is possibly undefined
// 140678266: variable 'v100' is possibly undefined
// 140678293: variable 'v66' is possibly undefined
// 1406782CB: variable 'v101' is possibly undefined
// 140678303: variable 'v102' is possibly undefined
// 140A6AEC0: using guessed type wchar_t *off_140A6AEC0[2];
// 140B30180: using guessed type wchar_t aEelement[9];
// 140B302B8: using guessed type wchar_t aArsets_0[7];
// 140B302C8: using guessed type wchar_t aNtotalpower[12];
// 140B302E0: using guessed type wchar_t aNmaxpower_0[10];
// 140B302F8: using guessed type wchar_t aStrname_68[8];
// 140B30308: using guessed type wchar_t aNrunepower[11];
// 140B30320: using guessed type wchar_t aArproperties_0[13];
// 140B30340: using guessed type wchar_t aArspells_0[9];
// 140B30358: using guessed type wchar_t aNeffectiveleve_2[16];
// 140B30390: using guessed type wchar_t aBdisabled_0[10];
// 140B303A8: using guessed type wchar_t aNitemlevel_1[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F84: using guessed type int dword_140C63F84;
// 140C64608: using guessed type __int64 qword_140C64608;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140677950: using guessed type char var_E8[8];

