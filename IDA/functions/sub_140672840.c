#include "../winhttp.h"

//----- (0000000140672840) ----------------------------------------------------
__int64 __fastcall sub_140672840(__int64 a1, __int64 a2)
{
	__int64 v2; // r14
	__int64 v3; // rax
	__int64 result; // rax
	__int64 v5; // rsi
	unsigned int v6; // r15d
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rcx
	unsigned int* v14; // rax
	__int64 v15; // rdx
	__int64 v16; // rsi
	_QWORD* v17; // rdi
	__int64 v18; // rdx
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // r12d
	int* v22; // rax
	__int64 v23; // r13
	__int64 v24; // rcx
	unsigned int v25; // ebx
	_QWORD* v26; // rax
	__int64 v27; // rdx
	unsigned __int16* v28; // r9
	__int64 v29; // rax
	_QWORD* v30; // rax
	__int64 v31; // rdx
	unsigned __int16* v32; // r10
	__int64 v33; // rcx
	__int64 v34; // rax
	bool v35; // zf
	int v36; // r14d
	_QWORD* v37; // rax
	__int64 v38; // r10
	unsigned __int64* v39; // rdx
	unsigned __int64 v40; // r8
	_DWORD* v41; // rcx
	__int64* v42; // rax
	int v43; // ebx
	_QWORD* v44; // rax
	__int64 v45; // r10
	unsigned __int64* v46; // rdx
	unsigned __int64 v47; // r8
	_DWORD* v48; // rcx
	__int64* v49; // rax
	unsigned int v50; // ebx
	float* v51; // rax
	float* v52; // rbx
	int v53; // ecx
	int v54; // ecx
	int v55; // ecx
	int v56; // ecx
	_QWORD* v57; // rax
	__int64 v58; // rdx
	int v59; // r10d
	int v60; // r9d
	unsigned __int16* v61; // r8
	__int64 v62; // rdx
	int v63; // ebx
	_QWORD* v64; // rax
	int v65; // r10d
	int v66; // r14d
	_QWORD* v67; // rax
	_DWORD* v68; // rax
	__int64 v69; // rcx
	int v70; // edx
	_QWORD* v71; // rax
	__int64 v72; // rdx
	unsigned __int16* v73; // r10
	unsigned int v74; // edx
	__int64 v75; // rax
	__int64 v76; // rcx
	int v77; // edx
	_QWORD* v78; // rax
	__int64 v79; // rdx
	unsigned __int16* v80; // r10
	__int64 v81; // rax
	__int64 v82; // rcx
	int v83; // edx
	__int64 v84; // rax
	__int64 v85; // rax
	float v86; // xmm6_4
	_QWORD* v87; // rax
	__int64 v88; // rdx
	int v89; // r10d
	_QWORD* v90; // rax
	__int64 v91; // r10
	unsigned __int64* v92; // rdx
	unsigned __int64 v93; // r8
	__int64 v94; // rax
	__int64* v95; // rax
	int v96; // [rsp+28h] [rbp-69h]
	int v97; // [rsp+2Ch] [rbp-65h]
	__int64 v98; // [rsp+30h] [rbp-61h]
	__int64 v99; // [rsp+38h] [rbp-59h] BYREF
	int* v100; // [rsp+40h] [rbp-51h]
	int* v101; // [rsp+48h] [rbp-49h]
	int* v102; // [rsp+50h] [rbp-41h]
	__int64(__fastcall * *v103)(); // [rsp+58h] [rbp-39h] BYREF
	int v104; // [rsp+60h] [rbp-31h]
	__int64 v105; // [rsp+68h] [rbp-29h]
	int v106; // [rsp+70h] [rbp-21h]
	__int64(__fastcall * *v107)(); // [rsp+78h] [rbp-19h] BYREF
	__int64 v108; // [rsp+80h] [rbp-11h]
	_QWORD* v109; // [rsp+88h] [rbp-9h]
	__int128 v110; // [rsp+90h] [rbp-1h]
	int v113; // [rsp+108h] [rbp+77h]
	unsigned int v114; // [rsp+110h] [rbp+7Fh]

	v2 = a1;
	if (!*(_DWORD*)(a1 + 1336))
		return 0i64;
	if (a1 == -192)
		return 0i64;
	if (!*(_DWORD*)(a1 + 1344))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 168);
	if (!v3)
		return 0i64;
	result = sub_14020B060(*(_DWORD*)(v3 + 372));
	v5 = result;
	if (!result)
		return result;
	v6 = 0;
	if (*(_DWORD*)(v2 + 1344))
		v7 = *(_QWORD*)(v2 + 168);
	else
		v7 = 0i64;
	v8 = *(_QWORD*)v2;
	v113 = *(_DWORD*)(v7 + 344);
	v9 = *(_QWORD*)(*(_QWORD*)v2 + 32i64);
	v97 = 0;
	v10 = *(_QWORD*)(v9 + 112);
	v96 = 1;
	v103 = off_140B569F0;
	v105 = v8;
	v106 = 1;
	if (*(_QWORD*)(v9 + 120) >= v10)
		sub_14005E2C0(v8);
	v11 = *(_QWORD*)(v8 + 16);
	v12 = sub_14005C1B0(v8, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	*(_QWORD*)(v8 + 16) += 16i64;
	v104 = sub_1400578C0(v8);
	v14 = (unsigned int*)(v5 + 4);
	v98 = v5 + 4;
	v114 = 0;
	do
	{
		v15 = *v14;
		if (!(_DWORD)v15)
			break;
		v16 = sub_1405A8A40(v13, v15);
		if (v16)
		{
			v17 = *(_QWORD**)v2;
			v97 = 1;
			v107 = off_140B569F0;
			v18 = v17[4];
			v109 = v17;
			LODWORD(v110) = 1;
			if (*(_QWORD*)(v18 + 120) >= *(_QWORD*)(v18 + 112))
				sub_14005E2C0((__int64)v17);
			v19 = v17[2];
			v20 = sub_14005C1B0((__int64)v17, 0, 0);
			*(_DWORD*)(v19 + 8) = 5;
			*(_QWORD*)v19 = v20;
			v17[2] += 16i64;
			v21 = sub_1400578C0((__int64)v17);
			LODWORD(v108) = v21;
			v22 = sub_14018B280(16i64, 0);
			v23 = (__int64)v22;
			v100 = v22;
			v101 = v22;
			v24 = (__int64)(v22 + 4);
			v102 = v22 + 4;
			if (v22)
				*(_WORD*)v22 = 0;
			v25 = 0;
			if (*(_DWORD*)(v16 + 16))
			{
				while ((unsigned int)sub_1405510D0(v16, v25))
				{
					if (++v25 >= *(_DWORD*)(v16 + 16))
						goto LABEL_23;
				}
				sub_140551D40(v16, v25, (__int64)&v99, 1);
				v26 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
				v27 = v17[2];
				v23 = (__int64)v100;
				v28 = (unsigned __int16*)v100;
				*(_QWORD*)v27 = *v26;
				*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
				v17[2] += 16i64;
				sub_1400F0870((__int64)v17, v27, L"strObjective", v28);
				v17[2] -= 16i64;
			}
		LABEL_23:
			v29 = *(_QWORD*)(v16 + 8);
			if (v29)
				sub_14034BDD0(v24, *(_DWORD*)(v29 + 4));
			v30 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
			v31 = v17[2];
			*(_QWORD*)v31 = *v30;
			*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
			v17[2] += 16i64;
			sub_1400F0870((__int64)v17, v31, L"strName", v32);
			v17[2] -= 16i64;
			v33 = v2 + 192;
			v34 = 0i64;
			v35 = *(_DWORD*)(v2 + 1336) == 0;
			v36 = 0;
			if (!v35)
				v34 = v33;
			LOBYTE(v36) = v114 < *(unsigned __int8*)(v34 + 292);
			v37 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
			*(_QWORD*)v38 = *v37;
			*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
			v17[2] += 16i64;
			v39 = (unsigned __int64*)sub_14018F0E0(&v99, L"bComplete")[1];
			if (v39)
			{
				v40 = -1i64;
				do
					++v40;
				while (*((_BYTE*)v39 + v40));
				sub_140058710((__int64)v17, v39, v40);
			}
			else
			{
				*(_DWORD*)(v17[2] + 8i64) = 0;
				v17[2] += 16i64;
			}
			if (v100)
				sub_14018B900((__int64)v100, 0);
			v41 = (_DWORD*)v17[2];
			v41[2] = 1;
			*v41 = v36 != 0;
			v17[2] += 16i64;
			v42 = (__int64*)sub_1400580E0((__int64)v17, -3);
			sub_14005EA50((__int64)v17, v42, (int*)(v17[2] - 32i64), (unsigned int*)(v17[2] - 16i64));
			v17[2] -= 48i64;
			if (!v96 || (v43 = 1, v36))
				v43 = 0;
			v44 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
			*(_QWORD*)v45 = *v44;
			*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
			v17[2] += 16i64;
			v46 = (unsigned __int64*)sub_14018F0E0(&v99, L"bActive")[1];
			if (v46)
			{
				v47 = -1i64;
				do
					++v47;
				while (*((_BYTE*)v46 + v47));
				sub_140058710((__int64)v17, v46, v47);
			}
			else
			{
				*(_DWORD*)(v17[2] + 8i64) = 0;
				v17[2] += 16i64;
			}
			if (v100)
				sub_14018B900((__int64)v100, 0);
			v48 = (_DWORD*)v17[2];
			v48[2] = 1;
			*v48 = v43 != 0;
			v17[2] += 16i64;
			v49 = (__int64*)sub_1400580E0((__int64)v17, -3);
			sub_14005EA50((__int64)v17, v49, (int*)(v17[2] - 32i64), (unsigned int*)(v17[2] - 16i64));
			v17[2] -= 48i64;
			v96 = v36;
			if ((unsigned int)sub_140663030(v17, v16))
			{
				sub_1400FB540((__int64)&v107);
				v17[2] -= 16i64;
			}
			v50 = *(_DWORD*)(v98 + 60);
			if (qword_140C63840)
			{
				v51 = (float*)qword_140C63840(off_140A6AD38, v50, qword_140C63858);
				goto LABEL_51;
			}
			if (dword_140C6480C || (int)sub_14020B240() < 0)
				goto LABEL_60;
			v51 = (float*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644D8 + 24i64))(
				qword_140C644D8,
				v50);
		LABEL_51:
			v52 = v51;
			if (!v51)
				goto LABEL_60;
			v53 = *((_DWORD*)v51 + 1);
			if (v53)
			{
				v54 = v53 - 1;
				if (v54)
				{
					v55 = v54 - 3;
					if (v55)
					{
						v56 = v55 - 1;
						if (v56)
						{
							if (v56 == 1)
							{
								v57 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
								v58 = v17[2];
								v60 = v59;
								v61 = L"nAddedRuneSlots";
								*(_QWORD*)v58 = *v57;
								*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
								v17[2] += 16i64;
								goto LABEL_58;
							}
						LABEL_60:
							v2 = a1;
						LABEL_61:
							sub_1400FB1D0((__int64)&v103);
							if (v23)
								sub_14018B900(v23, 0);
							sub_1400579E0((__int64)v17, v62, v21);
							goto LABEL_64;
						}
						v64 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
						v58 = v17[2];
						v60 = v65;
						v61 = L"nAddedLevels";
						*(_QWORD*)v58 = *v64;
						*(_DWORD*)(v58 + 8) = *((_DWORD*)v64 + 2);
						v17[2] += 16i64;
					}
					else
					{
						v66 = *((_DWORD*)v51 + 3) + v113;
						if (v66 >= 2)
						{
							if (v66 > 7)
								v66 = 7;
						}
						else
						{
							v66 = 2;
						}
						v113 = v66;
						v67 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
						v58 = v17[2];
						v60 = v66;
						v61 = L"eNewQuality";
						*(_QWORD*)v58 = *v67;
						*(_DWORD*)(v58 + 8) = *((_DWORD*)v67 + 2);
						v17[2] += 16i64;
					}
				LABEL_58:
					sub_1400F06F0((__int64)v17, v58, v61, v60);
				}
				else
				{
					v68 = (_DWORD*)sub_14020EBE0(*((_DWORD*)v51 + 2));
					if (!v68)
						goto LABEL_60;
					v70 = v68[2];
					if (v70)
					{
						sub_14034BDD0(v69, v70);
						v71 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
						v72 = v17[2];
						*(_QWORD*)v72 = *v71;
						*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
						v17[2] += 16i64;
						sub_1400F0870((__int64)v17, v72, L"strSpecial", v73);
					}
					else
					{
						v74 = v68[3];
						if (!v74 && !v68[4])
							goto LABEL_60;
						v75 = sub_1403ACD90(qword_140C65B70, v74, *(_QWORD*)(qword_140C65898 + 120));
						if (!v75)
							goto LABEL_60;
						v76 = *(_QWORD*)(v75 + 8);
						if (!v76)
							goto LABEL_60;
						v77 = *(_DWORD*)(v76 + 16);
						if (!v77)
							goto LABEL_60;
						sub_14034BDD0(v76, v77);
						v78 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
						v79 = v17[2];
						*(_QWORD*)v79 = *v78;
						*(_DWORD*)(v79 + 8) = *((_DWORD*)v78 + 2);
						v17[2] += 16i64;
						sub_1400F0870((__int64)v17, v79, L"strSpecial", v80);
					}
				}
				v17[2] -= 16i64;
				goto LABEL_60;
			}
			v81 = sub_1402479C0(*((_DWORD*)v51 + 2));
			v82 = v81;
			if (!v81)
				goto LABEL_60;
			v2 = a1;
			if ((*(_BYTE*)(v81 + 36) & 4) != 0)
			{
				v83 = *(_DWORD*)(v81 + 52);
				if (!v83
					|| (!*(_DWORD*)(a1 + 1344) ? (v84 = 0i64) : (v84 = *(_QWORD*)(a1 + 168)), (v83 & *(_DWORD*)(v84 + 384)) != 0))
				{
					v85 = 0i64;
					if (*(_DWORD*)(a1 + 1336))
						v85 = a1 + 192;
					v86 = (float)(*(float*)(v85 + 24) * *(float*)(v82 + 32)) * v52[4];
					v87 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
					v88 = v17[2];
					*(_QWORD*)v88 = *v87;
					*(_DWORD*)(v88 + 8) = *((_DWORD*)v87 + 2);
					v17[2] += 16i64;
					sub_1400F06F0((__int64)v17, v88, L"eProperty", v89);
					v17[2] -= 16i64;
					v90 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v21);
					*(_QWORD*)v91 = *v90;
					*(_DWORD*)(v91 + 8) = *((_DWORD*)v90 + 2);
					v17[2] += 16i64;
					v92 = (unsigned __int64*)sub_14018F0E0(&v107, L"nValue")[1];
					if (v92)
					{
						v93 = -1i64;
						do
							++v93;
						while (*((_BYTE*)v92 + v93));
						sub_140058710((__int64)v17, v92, v93);
					}
					else
					{
						*(_DWORD*)(v17[2] + 8i64) = 0;
						v17[2] += 16i64;
					}
					if (v108)
						sub_14018B900(v108, 0);
					v94 = v17[2];
					*(_DWORD*)(v94 + 8) = 3;
					*(double*)v94 = v86;
					v17[2] += 16i64;
					v95 = (__int64*)sub_1400580E0((__int64)v17, -3);
					sub_14005EA50((__int64)v17, v95, (int*)(v17[2] - 32i64), (unsigned int*)(v17[2] - 16i64));
					v17[2] -= 48i64;
				}
			}
			goto LABEL_61;
		}
	LABEL_64:
		v13 = v114 + 1;
		v14 = (unsigned int*)(v98 + 4);
		v114 = v13;
		v98 += 4i64;
	} while ((unsigned int)v13 < 0xF);
	v63 = v104;
	if (v97)
	{
		sub_1400FB2A0(a2, (__int64)L"arImbuements", v104);
		v6 = 1;
	}
	if (v105)
		sub_1400579E0(v105, v15, v63);
	return v6;
}
// 14067298C: variable 'v13' is possibly undefined
// 140672AB3: variable 'v24' is possibly undefined
// 140672AF0: variable 'v32' is possibly undefined
// 140672B41: variable 'v38' is possibly undefined
// 140672C0E: variable 'v45' is possibly undefined
// 140672D69: variable 'v59' is possibly undefined
// 140672DB6: variable 'v62' is possibly undefined
// 140672E2E: variable 'v15' is possibly undefined
// 140672E74: variable 'v65' is possibly undefined
// 140672F0A: variable 'v69' is possibly undefined
// 140672F47: variable 'v73' is possibly undefined
// 140672FD7: variable 'v80' is possibly undefined
// 140673088: variable 'v89' is possibly undefined
// 1406730B3: variable 'v91' is possibly undefined
// 140A6AD38: using guessed type wchar_t *off_140A6AD38[2];
// 140B2FA90: using guessed type wchar_t aNaddedruneslot[16];
// 140B2FAB0: using guessed type wchar_t aArimbuements[13];
// 140B2FAD0: using guessed type wchar_t aEnewquality[12];
// 140B2FAE8: using guessed type wchar_t aNaddedlevels[13];
// 140B2FB08: using guessed type wchar_t aStrspecial[11];
// 140B2FB20: using guessed type wchar_t aStrspecial_0[11];
// 140B2FB38: using guessed type wchar_t aEproperty_2[10];
// 140B2FB50: using guessed type wchar_t aNvalue_13[7];
// 140B2FB60: using guessed type wchar_t aBactive_0[8];
// 140B2FB90: using guessed type wchar_t aStrname_64[8];
// 140B2FBA0: using guessed type wchar_t aBcomplete[10];
// 140B2FBD0: using guessed type wchar_t aStrobjective[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C644D8: using guessed type __int64 qword_140C644D8;
// 140C6480C: using guessed type int dword_140C6480C;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

