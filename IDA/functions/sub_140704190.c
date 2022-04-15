#include "../winhttp.h"

//----- (0000000140704190) ----------------------------------------------------
__int64 __fastcall sub_140704190(_QWORD* a1)
{
	unsigned int v3; // eax
	__int64 v4; // rcx
	unsigned int v5; // ebx
	__int64 v6; // rcx
	__int64 v7; // r14
	unsigned int** v8; // r15
	unsigned int v9; // eax
	__int64 v10; // rcx
	__int64(__fastcall * **v11)(_QWORD); // rax
	unsigned int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rdx
	unsigned __int64 v16; // rcx
	__int64 v17; // rdi
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rcx
	int v21; // ebx
	_QWORD* v22; // rax
	__int64 v23; // rdx
	unsigned __int16* v24; // r10
	__int64 v25; // rcx
	unsigned __int64 v26; // rax
	__int64 v27; // rbx
	__int64 v28; // rax
	unsigned int v29; // edi
	int v30; // r14d
	__int64 v31; // r12
	int v32; // r13d
	int v33; // ebp
	__int64 v34; // rbx
	__int64 v35; // rax
	_QWORD* v36; // rax
	__int64 v37; // rdx
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	int v41; // r13d
	__int64 v42; // rdx
	unsigned int v43; // edi
	int v44; // ebx
	int v45; // ebp
	int v46; // eax
	__int64 v47; // rcx
	__int64* v48; // rax
	__int64 v49; // rdi
	int v50; // r14d
	__int64 v51; // rax
	int v52; // edx
	int v53; // r12d
	__int64 v54; // rbx
	__int64 v55; // rax
	_QWORD* v56; // rax
	__int64 v57; // rdx
	_QWORD* v58; // rax
	__int64 v59; // r10
	__int64 v60; // rdx
	__int64 v61; // rcx
	int v62; // edi
	unsigned int v63; // ebp
	unsigned int v64; // r14d
	__int64 v65; // rax
	__int64 v66; // rbx
	int* v67; // r15
	int v68; // eax
	int v69; // ecx
	__int64 v70; // rax
	int v71; // ecx
	__int64 v72; // rbx
	__int64 v73; // rax
	int v74; // r15d
	_QWORD* v75; // rax
	__int64 v76; // rdx
	unsigned __int64* v77; // rdx
	unsigned __int64 v78; // r8
	_DWORD* v79; // rcx
	__int64* v80; // rax
	_QWORD* v81; // rax
	__int64 v82; // r10
	__int64 v83; // rdx
	_QWORD* v84; // rax
	__int64 v85; // r10
	__int64 v86; // rdx
	_QWORD* v87; // rax
	__int64 v88; // r10
	__int64 v89; // rdx
	__int64 v90; // rbx
	__int64 v91; // rax
	_QWORD* v92; // rax
	__int64 v93; // rdx
	_QWORD* v94; // rax
	__int64 v95; // r10
	__int64 v96; // rdx
	_QWORD* v97; // rax
	__int64 v98; // r10
	__int64 v99; // rdx
	int v100; // edi
	_QWORD* v101; // rax
	__int64 v102; // rdx
	__int64 v103; // rdx
	__int64 v104; // rdx
	__int64 v105; // rdx
	__int64(__fastcall * *v106)(); // [rsp+20h] [rbp-98h] BYREF
	int v107; // [rsp+28h] [rbp-90h]
	_QWORD* v108; // [rsp+30h] [rbp-88h]
	int v109; // [rsp+38h] [rbp-80h]
	__int64(__fastcall * *v110)(); // [rsp+40h] [rbp-78h] BYREF
	int v111; // [rsp+48h] [rbp-70h]
	_QWORD* v112; // [rsp+50h] [rbp-68h]
	int v113; // [rsp+58h] [rbp-60h]
	__int64 v114; // [rsp+60h] [rbp-58h] BYREF
	__int64 v115; // [rsp+68h] [rbp-50h]
	int v116; // [rsp+C8h] [rbp+10h]
	int v117; // [rsp+C8h] [rbp+10h]
	int v118; // [rsp+C8h] [rbp+10h]
	__int64(__fastcall * **v119)(_QWORD); // [rsp+D0h] [rbp+18h]
	int v120; // [rsp+D0h] [rbp+18h]
	int v121; // [rsp+D8h] [rbp+20h]

	if (!qword_140C65970)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v3 = sub_140056D60(a1, 1u);
	v5 = v3;
	if (!qword_140C658F8 || (v7 = sub_140448420(v4, v3), (v119 = (__int64(__fastcall***)(_QWORD))v7) == 0i64))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v8 = (unsigned int**)sub_1404CEEA0(v6, v5);
	if (v8)
	{
	LABEL_9:
		v14 = sub_14024DB80((*v8)[1]);
		v15 = a1[4];
		v16 = *(_QWORD*)(v15 + 112);
		v17 = v14;
		v106 = off_140B569F0;
		v108 = a1;
		v109 = 1;
		if (*(_QWORD*)(v15 + 120) >= v16)
			sub_14005E2C0((__int64)a1);
		v18 = a1[2];
		v19 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v18 + 8) = 5;
		*(_QWORD*)v18 = v19;
		a1[2] += 16i64;
		v21 = sub_1400578C0((__int64)a1);
		v107 = v21;
		if (v17)
			sub_14034BDD0(v20, *(_DWORD*)(v17 + 4));
		v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v21);
		v23 = a1[2];
		*(_QWORD*)v23 = *v22;
		*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v23, L"strZoneName", v24);
		a1[2] -= 16i64;
		v25 = a1[4];
		v116 = 0;
		v26 = *(_QWORD*)(v25 + 112);
		v110 = off_140B569F0;
		v112 = a1;
		v113 = 1;
		if (*(_QWORD*)(v25 + 120) >= v26)
			sub_14005E2C0((__int64)a1);
		v27 = a1[2];
		v28 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v27 + 8) = 5;
		*(_QWORD*)v27 = v28;
		a1[2] += 16i64;
		v29 = 0;
		v111 = sub_1400578C0((__int64)a1);
		v30 = 0;
		v31 = 3i64;
		do
		{
			v32 = *(_DWORD*)((char*)v8 + v31 * 4 - 4);
			v33 = (*v8)[v31];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v34 = a1[2];
			v35 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v34 + 8) = 5;
			*(_QWORD*)v34 = v35;
			a1[2] += 16i64;
			LODWORD(v34) = sub_1400578C0((__int64)a1);
			v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
			v37 = a1[2];
			*(_QWORD*)v37 = *v36;
			*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v37, L"nComplete", v32);
			a1[2] -= 16i64;
			v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v34);
			*(_QWORD*)v39 = *v38;
			*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v40, L"nGoal", v33);
			a1[2] -= 16i64;
			sub_1400FB1D0((__int64)&v110);
			v30 += v32;
			v41 = v33 + v116;
			v116 += v33;
			sub_1400579E0((__int64)a1, v42, v34);
			++v29;
			++v31;
		} while (v29 < 7);
		v117 = v30;
		sub_1400FB2A0((__int64)&v106, (__int64)L"tZoneValues", v111);
		v43 = (*v8)[1];
		v44 = *(_DWORD*)(qword_140C65970 + 8);
		v45 = 0;
		v46 = (*v119)[6](v119);
		v48 = sub_140491A20(v47, v44, v43, v46);
		v49 = (__int64)v48;
		if (v48)
		{
			v50 = sub_1404A1AA0(*v48, *(_DWORD*)*v48, 0);
			v51 = sub_1404CF4F0(v49, (__int64)&v114, *(_QWORD*)(qword_140C65898 + 120));
			v52 = -1;
			if (*(_DWORD*)(v51 + 16) != -1)
				v52 = *(_DWORD*)(v51 + 16);
			if (v52)
				v45 = v52;
			sub_140008410((__int64)&v114);
			sub_14018B900(v115, 0);
			v53 = v50 + v117;
			v41 += v45;
		}
		else
		{
			v53 = v30;
			v50 = 0;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v54 = a1[2];
		v55 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v54 + 8) = 5;
		*(_QWORD*)v54 = v55;
		a1[2] += 16i64;
		v121 = sub_1400578C0((__int64)a1);
		v56 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v121);
		v57 = a1[2];
		*(_QWORD*)v57 = *v56;
		*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v57, L"nComplete", v50);
		a1[2] -= 16i64;
		v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v121);
		*(_QWORD*)v59 = *v58;
		*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v60, L"nGoal", v45);
		a1[2] -= 16i64;
		sub_1400FB2A0((__int64)&v106, (__int64)L"tPathValues", v121);
		v62 = 0;
		v63 = 0;
		v64 = 100;
		v120 = 0;
		v118 = 0;
		if (!qword_140C658F8)
			goto LABEL_49;
		v65 = sub_140448420(v61, **v8);
		v66 = v65;
		if (!v65)
			goto LABEL_49;
		v67 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v65 + 168i64))(v65);
		if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v66 + 64i64))(v66) & 1) != 0)
		{
			v118 = 1;
		LABEL_49:
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v72 = a1[2];
			v73 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v72 + 8) = 5;
			*(_QWORD*)v72 = v73;
			a1[2] += 16i64;
			v74 = sub_1400578C0((__int64)a1);
			v75 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v74);
			v76 = a1[2];
			*(_QWORD*)v76 = *v75;
			*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
			a1[2] += 16i64;
			v77 = (unsigned __int64*)sub_14018F0E0(&v114, L"bHideExploration")[1];
			if (v77)
			{
				v78 = -1i64;
				do
					++v78;
				while (*((_BYTE*)v77 + v78));
				sub_140058710((__int64)a1, v77, v78);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v115)
				sub_14018B900(v115, 0);
			v79 = (_DWORD*)a1[2];
			v79[2] = 1;
			*v79 = v118 != 0;
			a1[2] += 16i64;
			v80 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v80, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v81 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v74);
			*(_QWORD*)v82 = *v81;
			*(_DWORD*)(v82 + 8) = *((_DWORD*)v81 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v83, L"nComplete", v120);
			a1[2] -= 16i64;
			v84 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v74);
			*(_QWORD*)v85 = *v84;
			*(_DWORD*)(v85 + 8) = *((_DWORD*)v84 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v86, L"nGoal", v62);
			a1[2] -= 16i64;
			v87 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v74);
			*(_QWORD*)v88 = *v87;
			*(_DWORD*)(v88 + 8) = *((_DWORD*)v87 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v89, L"nPercent", v63);
			a1[2] -= 16i64;
			sub_1400FB2A0((__int64)&v106, (__int64)L"tExplorationValues", v74);
			if (v53 && v41)
			{
				if (v53 != v41)
				{
					v64 = (int)(float)((float)((float)v53 / (float)v41) * 100.0);
					if (v64)
					{
						if (v64 > 0x63)
							v64 = 99;
					}
					else
					{
						v64 = 1;
					}
				}
			}
			else
			{
				v64 = 0;
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v90 = a1[2];
			v91 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v90 + 8) = 5;
			*(_QWORD*)v90 = v91;
			a1[2] += 16i64;
			LODWORD(v90) = sub_1400578C0((__int64)a1);
			v92 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v90);
			v93 = a1[2];
			*(_QWORD*)v93 = *v92;
			*(_DWORD*)(v93 + 8) = *((_DWORD*)v92 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v93, L"nComplete", v53);
			a1[2] -= 16i64;
			v94 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v90);
			*(_QWORD*)v95 = *v94;
			*(_DWORD*)(v95 + 8) = *((_DWORD*)v94 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v96, L"nGoal", v41);
			a1[2] -= 16i64;
			v97 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v90);
			*(_QWORD*)v98 = *v97;
			*(_DWORD*)(v98 + 8) = *((_DWORD*)v97 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v99, L"nPercent", v64);
			a1[2] -= 16i64;
			sub_1400FB2A0((__int64)&v106, (__int64)L"tOverallValues", v90);
			v100 = v107;
			v101 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v107);
			v102 = a1[2];
			*(_QWORD*)v102 = *v101;
			*(_DWORD*)(v102 + 8) = *((_DWORD*)v101 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v102, v90);
			sub_1400579E0((__int64)a1, v103, v74);
			sub_1400579E0((__int64)a1, v104, v121);
			if (v112)
				sub_1400579E0((__int64)v112, v105, v111);
			sub_1400579E0((__int64)a1, v105, v100);
			return 1i64;
		}
		v68 = *v67;
		if (*v67)
		{
			v69 = v67[1];
			if (v69)
			{
				if (v68 == v69)
				{
					v63 = 100;
				}
				else
				{
					v63 = (int)(float)((float)((float)v68 / (float)v69) * 100.0);
					if (v63)
					{
						if (v63 > 0x63)
							v63 = 99;
					}
					else
					{
						v63 = 1;
					}
				}
			}
		}
		if ((dword_140DC4C44 & 1) != 0)
		{
			v62 = dword_140DC4C48;
			goto LABEL_48;
		}
		dword_140DC4C44 |= 1u;
		v70 = sub_140200220(0x3F7u);
		if (v70)
		{
			v71 = *(_DWORD*)(v70 + 4);
			if (v71 <= 0)
			{
				dword_140DC4C48 = 0;
			LABEL_48:
				v53 += v63 * v62 / 0x64;
				v41 += v62;
				v120 = v63 * v62 / 0x64;
				goto LABEL_49;
			}
		}
		else
		{
			v71 = 5;
		}
		v62 = v71;
		dword_140DC4C48 = v71;
		goto LABEL_48;
	}
	while (1)
	{
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 32i64))(v7);
		if (!qword_140C658F8)
			break;
		v11 = (__int64(__fastcall***)(_QWORD))sub_140448420(v10, v9);
		v7 = (__int64)v11;
		v119 = v11;
		if (!v11)
			break;
		v12 = (**v11)(v11);
		v8 = (unsigned int**)sub_1404CEEA0(v13, v12);
		if (v8)
			goto LABEL_9;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 1407043F3: conditional instruction was optimized away because edi.4<7u
// 140704402: conditional instruction was optimized away because edi.4<7u
// 140704794: conditional instruction was optimized away because ecx.4>=1
// 140704799: conditional instruction was optimized away because eax.4>=1
// 1407041F0: variable 'v4' is possibly undefined
// 140704213: variable 'v6' is possibly undefined
// 140704239: variable 'v10' is possibly undefined
// 14070425C: variable 'v13' is possibly undefined
// 1407042FC: variable 'v20' is possibly undefined
// 140704377: variable 'v24' is possibly undefined
// 1407044B0: variable 'v39' is possibly undefined
// 1407044C2: variable 'v40' is possibly undefined
// 1407044F4: variable 'v42' is possibly undefined
// 140704551: variable 'v47' is possibly undefined
// 140704670: variable 'v59' is possibly undefined
// 140704682: variable 'v60' is possibly undefined
// 1407046CC: variable 'v61' is possibly undefined
// 1407048F3: variable 'v82' is possibly undefined
// 140704905: variable 'v83' is possibly undefined
// 140704933: variable 'v85' is possibly undefined
// 140704945: variable 'v86' is possibly undefined
// 140704973: variable 'v88' is possibly undefined
// 140704985: variable 'v89' is possibly undefined
// 140704AA2: variable 'v95' is possibly undefined
// 140704AB4: variable 'v96' is possibly undefined
// 140704AE1: variable 'v98' is possibly undefined
// 140704AF3: variable 'v99' is possibly undefined
// 140704B4D: variable 'v103' is possibly undefined
// 140704B5D: variable 'v104' is possibly undefined
// 140704B81: variable 'v105' is possibly undefined
// 140B41C48: using guessed type wchar_t aNcomplete_1[10];
// 140B41C60: using guessed type wchar_t aBhideexplorati[17];
// 140B41C88: using guessed type wchar_t aTpathvalues[12];
// 140B41CA0: using guessed type wchar_t aNgoal_0[6];
// 140B41CB0: using guessed type wchar_t aNcomplete_0[10];
// 140B41CC8: using guessed type wchar_t aTzonevalues[12];
// 140B41CE0: using guessed type wchar_t aNgoal[6];
// 140B41CF0: using guessed type wchar_t aNcomplete[10];
// 140B41D08: using guessed type wchar_t aStrzonename_2[12];
// 140B41E18: using guessed type wchar_t aToverallvalues[15];
// 140B41E38: using guessed type wchar_t aNpercent_2[9];
// 140B41E50: using guessed type wchar_t aNgoal_2[6];
// 140B41E60: using guessed type wchar_t aNcomplete_2[10];
// 140B41E78: using guessed type wchar_t aTexplorationva[19];
// 140B41EA0: using guessed type wchar_t aNpercent_1[9];
// 140B41EB8: using guessed type wchar_t aNgoal_1[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC4C44: using guessed type int dword_140DC4C44;
// 140DC4C48: using guessed type int dword_140DC4C48;

