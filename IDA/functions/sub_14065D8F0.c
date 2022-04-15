//----- (000000014065D8F0) ----------------------------------------------------
__int64 __fastcall sub_14065D8F0(__int64 a1)
{
	__int64 v1; // rsi
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64 v6; // rdi
	__int64 result; // rax
	int* v8; // rax
	__int64 v9; // rcx
	bool v10; // zf
	int* v11; // r12
	int* v12; // rax
	char* v13; // r15
	__int64 v14; // rax
	__int64 v15; // rcx
	unsigned int v16; // edx
	__int64 v17; // rcx
	unsigned __int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // eax
	_QWORD* v22; // rcx
	int v23; // r10d
	_QWORD* v24; // rbx
	char* v25; // rax
	unsigned int** v26; // r15
	__int64 v27; // rcx
	int v28; // ecx
	unsigned int* v29; // rdx
	unsigned int v30; // eax
	float* v31; // r13
	__int64 v32; // rdx
	unsigned __int64 v33; // rcx
	__int64 v34; // rdi
	__int64 v35; // rax
	__int64 v36; // rcx
	_QWORD* v37; // rax
	__int64 v38; // rdx
	int v39; // r10d
	_QWORD* v40; // rax
	__int64 v41; // r11
	__int64 v42; // rdx
	int v43; // r10d
	__int64 v44; // rcx
	_QWORD* v45; // rax
	__int64 v46; // rdx
	unsigned __int16* v47; // r10
	int v48; // edi
	_QWORD* v49; // rax
	__int64 v50; // rdx
	unsigned __int64* v51; // rdx
	unsigned __int64 v52; // r8
	_DWORD* v53; // rcx
	__int64* v54; // rax
	_QWORD* v55; // rax
	__int64 v56; // r11
	__int64 v57; // rdx
	int v58; // r10d
	_QWORD* v59; // rax
	__int64 v60; // r11
	__int64 v61; // rdx
	int v62; // r10d
	int v63; // edi
	unsigned int v64; // r15d
	_QWORD* v65; // rax
	__int64 v66; // r10
	unsigned __int64* v67; // rdx
	unsigned __int64 v68; // r8
	_DWORD* v69; // rcx
	__int64* v70; // rax
	__int64 v71; // rdi
	__int64 v72; // rax
	int v73; // eax
	float v74; // xmm6_4
	int v75; // edi
	_QWORD* v76; // rax
	__int64 v77; // rdx
	unsigned __int64* v78; // rdx
	unsigned __int64 v79; // r8
	__int64 v80; // rax
	__int64* v81; // rax
	float v82; // xmm6_4
	_QWORD* v83; // rax
	__int64 v84; // r10
	unsigned __int64* v85; // rdx
	unsigned __int64 v86; // r8
	__int64 v87; // rax
	__int64* v88; // rax
	float v89; // xmm6_4
	_QWORD* v90; // rax
	__int64 v91; // r10
	unsigned __int64* v92; // rdx
	unsigned __int64 v93; // r8
	__int64 v94; // rax
	__int64* v95; // rax
	__int64 v96; // rdx
	__int64 v97; // rdx
	__int64* v98; // rax
	__int64 v99; // r8
	__int64 v100; // rdx
	int v101; // r10d
	int* v102; // rbx
	__int64 v103; // rcx
	char v104[8]; // [rsp+20h] [rbp-59h] BYREF
	int* v105; // [rsp+28h] [rbp-51h]
	__int64(__fastcall * *v106)(); // [rsp+30h] [rbp-49h] BYREF
	int v107; // [rsp+38h] [rbp-41h]
	__int64 v108; // [rsp+40h] [rbp-39h]
	int v109; // [rsp+48h] [rbp-31h]
	__int64(__fastcall * *v110)(); // [rsp+50h] [rbp-29h] BYREF
	int v111; // [rsp+58h] [rbp-21h]
	__int64 v112; // [rsp+60h] [rbp-19h]
	int v113; // [rsp+68h] [rbp-11h]
	__int64 v114; // [rsp+70h] [rbp-9h] BYREF
	__int64 v115; // [rsp+78h] [rbp-1h]
	char* v116; // [rsp+E8h] [rbp+6Fh]
	int** v117; // [rsp+F0h] [rbp+77h]

	v1 = a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2
		|| (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0
		|| (v4 = *(_QWORD*)(v3 + 24)) == 0
		|| (v5 = *(_DWORD*)(v4 + 116)) == 0)
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
	v6 = sub_1404806A0(qword_140C659D0, v5);
	v117 = (int**)v6;
	if (!v6)
	{
		result = 1i64;
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return result;
	}
	v8 = sub_14018B280(24i64, 0);
	*(_QWORD*)v8 = v8;
	*((_QWORD*)v8 + 1) = v8;
	v9 = *(_QWORD*)v6;
	v10 = (*(_BYTE*)(*(_QWORD*)v6 + 12i64) & 4) == 0;
	v11 = v8;
	v105 = v8;
	if (v10)
	{
		v14 = sub_14024B980(*(_DWORD*)(v9 + 24));
		v16 = 0;
		if (v14)
			v16 = *(_DWORD*)(v14 + 40);
		v13 = (char*)sub_1404ACAC0(v15, v16);
		v116 = v13;
		if (!v13)
			goto LABEL_82;
	}
	else
	{
		if ((int)sub_1404ACBA0(v6, (__int64)v104) < 0)
			goto LABEL_82;
		v12 = sub_14018B280(24i64, 0);
		if (v12 != (int*)-16i64)
			*((_QWORD*)v12 + 2) = v6;
		*(_QWORD*)v12 = v11;
		v13 = v104;
		*((_QWORD*)v12 + 1) = *((_QWORD*)v11 + 1);
		v116 = v104;
		**((_QWORD**)v11 + 1) = v12;
		*((_QWORD*)v11 + 1) = v12;
	}
	if (**((_QWORD**)v13 + 1) != *((_QWORD*)v13 + 1))
	{
		v17 = *(_QWORD*)(v1 + 32);
		v112 = v1;
		v110 = off_140B569F0;
		v18 = *(_QWORD*)(v17 + 112);
		v113 = 1;
		if (*(_QWORD*)(v17 + 120) >= v18)
			sub_14005E2C0(v1);
		v19 = *(_QWORD*)(v1 + 16);
		v20 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v19 + 8) = 5;
		*(_QWORD*)v19 = v20;
		*(_QWORD*)(v1 + 16) += 16i64;
		v21 = sub_1400578C0(v1);
		v22 = (_QWORD*)*((_QWORD*)v13 + 1);
		v23 = v21;
		v111 = v21;
		v24 = (_QWORD*)*v22;
		if ((_QWORD*)*v22 != v22)
		{
			v25 = v116;
			do
			{
				v26 = (unsigned int**)v24[2];
				if (v26)
				{
					if ((~((*v26)[3] >> 1) & 1) != 0)
					{
						v27 = *(_QWORD*)(qword_140C65898 + 7152);
						v28 = v27 ? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 24i64))(v27) : 0;
						if ((v29 = *v26, (v30 = (*v26)[5]) == 0) || v30 == 1 && v28 == 167 || v30 == 2 && v28 == 166)
						{
							if ((*(_BYTE*)(*(_QWORD*)v6 + 12i64) & 4) != 0 || (v29[3] & 4) == 0)
							{
								v31 = (float*)sub_14024B980(v29[6]);
								if (v31)
								{
									v32 = *(_QWORD*)(v1 + 32);
									v106 = off_140B569F0;
									v108 = v1;
									v33 = *(_QWORD*)(v32 + 112);
									v109 = 1;
									if (*(_QWORD*)(v32 + 120) >= v33)
										sub_14005E2C0(v1);
									v34 = *(_QWORD*)(v1 + 16);
									v35 = sub_14005C1B0(v1, 0, 0);
									*(_DWORD*)(v34 + 8) = 5;
									*(_QWORD*)v34 = v35;
									*(_QWORD*)(v1 + 16) += 16i64;
									LODWORD(v34) = sub_1400578C0(v1);
									v36 = *(_QWORD*)(v1 + 32);
									v107 = v34;
									v37 = sub_14005C3C0(*(_QWORD*)(v36 + 160), v34);
									v38 = *(_QWORD*)(v1 + 16);
									*(_QWORD*)v38 = *v37;
									*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F06F0(v1, v38, L"idNode", v39);
									*(_QWORD*)(v1 + 16) -= 16i64;
									v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v34);
									*(_QWORD*)v41 = *v40;
									*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F06F0(v1, v42, L"eType", v43);
									*(_QWORD*)(v1 + 16) -= 16i64;
									sub_14034BDD0(v44, (*v26)[1]);
									v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v34);
									v46 = *(_QWORD*)(v1 + 16);
									*(_QWORD*)v46 = *v45;
									*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F0870(v1, v46, L"strName", v47);
									*(_QWORD*)(v1 + 16) -= 16i64;
									if (((*v117)[3] & 4) != 0 && ((*v26)[3] & 4) != 0 || (v48 = 0, sub_1404AD9B0(qword_140C659D0, **v26)))
										v48 = 1;
									v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v107);
									v50 = *(_QWORD*)(v1 + 16);
									*(_QWORD*)v50 = *v49;
									*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									v51 = (unsigned __int64*)sub_14018F0E0(&v114, L"bUnlocked")[1];
									if (v51)
									{
										v52 = -1i64;
										do
											++v52;
										while (*((_BYTE*)v51 + v52));
										sub_140058710(v1, v51, v52);
									}
									else
									{
										*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
										*(_QWORD*)(v1 + 16) += 16i64;
									}
									if (v115)
										sub_14018B900(v115, 0);
									v53 = *(_DWORD**)(v1 + 16);
									v53[2] = 1;
									*v53 = v48 != 0;
									*(_QWORD*)(v1 + 16) += 16i64;
									v54 = (__int64*)sub_1400580E0(v1, -3);
									sub_14005EA50(
										v1,
										v54,
										(int*)(*(_QWORD*)(v1 + 16) - 32i64),
										(unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
									*(_QWORD*)(v1 + 16) -= 48i64;
									v55 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v107);
									*(_QWORD*)v56 = *v55;
									*(_DWORD*)(v56 + 8) = *((_DWORD*)v55 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F06F0(v1, v57, L"nRecommendedMinLevel", v58);
									*(_QWORD*)(v1 + 16) -= 16i64;
									v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v107);
									*(_QWORD*)v60 = *v59;
									*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									sub_1400F06F0(v1, v61, L"nRecommendedMaxLevel", v62);
									*(_QWORD*)(v1 + 16) -= 16i64;
									v63 = **v117;
									v64 = **v26;
									v65 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v107);
									*(_QWORD*)v66 = *v65;
									*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									v67 = (unsigned __int64*)sub_14018F0E0(&v114, L"bOrigin")[1];
									if (v67)
									{
										v68 = -1i64;
										do
											++v68;
										while (*((_BYTE*)v67 + v68));
										sub_140058710(v1, v67, v68);
									}
									else
									{
										*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
										*(_QWORD*)(v1 + 16) += 16i64;
									}
									if (v115)
										sub_14018B900(v115, 0);
									v69 = *(_DWORD**)(v1 + 16);
									v69[2] = 1;
									*v69 = v63 == v64;
									*(_QWORD*)(v1 + 16) += 16i64;
									v70 = (__int64*)sub_1400580E0(v1, -3);
									sub_14005EA50(
										v1,
										v70,
										(int*)(*(_QWORD*)(v1 + 16) - 32i64),
										(unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
									*(_QWORD*)(v1 + 16) -= 48i64;
									if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
										sub_14005E2C0(v1);
									v71 = *(_QWORD*)(v1 + 16);
									v72 = sub_14005C1B0(v1, 0, 0);
									*(_DWORD*)(v71 + 8) = 5;
									*(_QWORD*)v71 = v72;
									*(_QWORD*)(v1 + 16) += 16i64;
									v73 = sub_1400578C0(v1);
									v74 = v31[3];
									v75 = v73;
									v76 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v73);
									v77 = *(_QWORD*)(v1 + 16);
									*(_QWORD*)v77 = *v76;
									*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									v78 = (unsigned __int64*)sub_14018F0E0(&v114, (unsigned __int16*)"x")[1];
									if (v78)
									{
										v79 = -1i64;
										do
											++v79;
										while (*((_BYTE*)v78 + v79));
										sub_140058710(v1, v78, v79);
									}
									else
									{
										*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
										*(_QWORD*)(v1 + 16) += 16i64;
									}
									if (v115)
										sub_14018B900(v115, 0);
									v80 = *(_QWORD*)(v1 + 16);
									*(_DWORD*)(v80 + 8) = 3;
									*(double*)v80 = v74;
									*(_QWORD*)(v1 + 16) += 16i64;
									v81 = (__int64*)sub_1400580E0(v1, -3);
									sub_14005EA50(
										v1,
										v81,
										(int*)(*(_QWORD*)(v1 + 16) - 32i64),
										(unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
									*(_QWORD*)(v1 + 16) -= 48i64;
									v82 = v31[4];
									v83 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v75);
									*(_QWORD*)v84 = *v83;
									*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									v85 = (unsigned __int64*)sub_14018F0E0(&v114, (unsigned __int16*)"y")[1];
									if (v85)
									{
										v86 = -1i64;
										do
											++v86;
										while (*((_BYTE*)v85 + v86));
										sub_140058710(v1, v85, v86);
									}
									else
									{
										*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
										*(_QWORD*)(v1 + 16) += 16i64;
									}
									if (v115)
										sub_14018B900(v115, 0);
									v87 = *(_QWORD*)(v1 + 16);
									*(_DWORD*)(v87 + 8) = 3;
									*(double*)v87 = v82;
									*(_QWORD*)(v1 + 16) += 16i64;
									v88 = (__int64*)sub_1400580E0(v1, -3);
									sub_14005EA50(
										v1,
										v88,
										(int*)(*(_QWORD*)(v1 + 16) - 32i64),
										(unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
									*(_QWORD*)(v1 + 16) -= 48i64;
									v89 = v31[5];
									v90 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v75);
									*(_QWORD*)v91 = *v90;
									*(_DWORD*)(v91 + 8) = *((_DWORD*)v90 + 2);
									*(_QWORD*)(v1 + 16) += 16i64;
									v92 = (unsigned __int64*)sub_14018F0E0(&v114, (unsigned __int16*)"z")[1];
									if (v92)
									{
										v93 = -1i64;
										do
											++v93;
										while (*((_BYTE*)v92 + v93));
										sub_140058710(v1, v92, v93);
									}
									else
									{
										*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
										*(_QWORD*)(v1 + 16) += 16i64;
									}
									if (v115)
										sub_14018B900(v115, 0);
									v94 = *(_QWORD*)(v1 + 16);
									*(_DWORD*)(v94 + 8) = 3;
									*(double*)v94 = v89;
									*(_QWORD*)(v1 + 16) += 16i64;
									v95 = (__int64*)sub_1400580E0(v1, -3);
									sub_14005EA50(
										v1,
										v95,
										(int*)(*(_QWORD*)(v1 + 16) - 32i64),
										(unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
									*(_QWORD*)(v1 + 16) -= 48i64;
									sub_1400FB2A0((__int64)&v106, (__int64)L"tLocation", v75);
									sub_1400FB1D0((__int64)&v110);
									sub_1400579E0(v1, v96, v75);
									sub_1400579E0(v1, v97, v107);
									v6 = (__int64)v117;
								}
							}
						}
					}
					v25 = v116;
				}
				v24 = (_QWORD*)*v24;
			} while (v24 != *((_QWORD**)v25 + 1));
			v1 = v112;
			v23 = v111;
			v11 = v105;
		}
		v98 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v23);
		v99 = *(_QWORD*)(v1 + 16);
		v100 = *v98;
		*(_QWORD*)v99 = *v98;
		*(_DWORD*)(v99 + 8) = *((_DWORD*)v98 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v100, v101);
		goto LABEL_83;
	}
LABEL_82:
	*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
	*(_QWORD*)(v1 + 16) += 16i64;
LABEL_83:
	v102 = *(int**)v11;
	while (v102 != v11)
	{
		v103 = (__int64)v102;
		v102 = *(int**)v102;
		sub_14018B900(v103, 0);
	}
	*(_QWORD*)v11 = v11;
	*((_QWORD*)v11 + 1) = v11;
	sub_14018B900((__int64)v11, 0);
	return 1i64;
}
// 14065DA29: variable 'v15' is possibly undefined
// 14065DBEF: variable 'v39' is possibly undefined
// 14065DC23: variable 'v41' is possibly undefined
// 14065DC35: variable 'v42' is possibly undefined
// 14065DC35: variable 'v43' is possibly undefined
// 14065DC45: variable 'v44' is possibly undefined
// 14065DC81: variable 'v47' is possibly undefined
// 14065DDA1: variable 'v56' is possibly undefined
// 14065DDB3: variable 'v57' is possibly undefined
// 14065DDB3: variable 'v58' is possibly undefined
// 14065DDE8: variable 'v60' is possibly undefined
// 14065DDFA: variable 'v61' is possibly undefined
// 14065DDFA: variable 'v62' is possibly undefined
// 14065DE34: variable 'v66' is possibly undefined
// 14065DFFB: variable 'v84' is possibly undefined
// 14065E0BB: variable 'v91' is possibly undefined
// 14065E17A: variable 'v96' is possibly undefined
// 14065E186: variable 'v97' is possibly undefined
// 14065E1EB: variable 'v101' is possibly undefined
// 140B2D5C0: using guessed type wchar_t aIdnode[7];
// 140B2D5D0: using guessed type wchar_t aEtype_13[6];
// 140B2D7F8: using guessed type wchar_t aTlocation_0[10];
// 140B2D828: using guessed type wchar_t aBorigin[8];
// 140B2D838: using guessed type wchar_t aNrecommendedmi[21];
// 140B2D868: using guessed type wchar_t aNrecommendedma[21];
// 140B2D898: using guessed type wchar_t aStrname_49[8];
// 140B2D8A8: using guessed type wchar_t aBunlocked_2[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 14065D8F0: using guessed type char var_B0[8];

