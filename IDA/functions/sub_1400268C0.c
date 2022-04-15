#include "../winhttp.h"

//----- (00000001400268C0) ----------------------------------------------------
__int64 __fastcall sub_1400268C0(_QWORD* a1)
{
	__int64 v1; // rbx
	_QWORD* v2; // rdi
	_DWORD* v3; // rax
	_DWORD* v4; // rax
	int v5; // eax
	_DWORD* v6; // rax
	int v7; // eax
	_DWORD* v8; // rax
	int v9; // r12d
	_DWORD* v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // eax
	__int64 v19; // rcx
	int v20; // r13d
	unsigned __int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	int v24; // r15d
	unsigned int v25; // esi
	unsigned int v26; // eax
	unsigned int v27; // r14d
	int v28; // edi
	__int64 v29; // rax
	_DWORD* v30; // rbx
	__int64 v31; // rax
	__int64 v32; // r8
	__int64 v33; // rdx
	__int64* v34; // r8
	BOOL v35; // eax
	__int64(__fastcall * **v36)(); // rcx
	int v37; // ebx
	__int64 v38; // r9
	unsigned int v39; // r12d
	_DWORD* v40; // rdx
	__int64 v41; // rcx
	unsigned __int64* v42; // r14
	unsigned __int64 v43; // rsi
	__int64 v44; // rbx
	__int64 v45; // rax
	__int64 v46; // rcx
	__int64 v47; // r9
	_DWORD* v48; // rdx
	__int64 v49; // rcx
	__int64 v50; // r8
	__int64 v51; // rax
	__int64 v52; // r10
	__int64 v53; // r9
	_DWORD* v54; // rcx
	unsigned __int64* v55; // r14
	unsigned __int64 v56; // rsi
	__int64 v57; // rbx
	__int64 v58; // rax
	__int64 v59; // rcx
	__int64 v60; // r9
	_DWORD* v61; // rdx
	__int64 v62; // rcx
	__int64 v63; // r8
	__int64 v64; // rax
	__int64 v65; // r10
	__int64 v66; // r9
	_DWORD* v67; // rcx
	unsigned __int64* v68; // rsi
	unsigned __int64 v69; // r14
	__int64 v70; // rbx
	__int64 v71; // rax
	__int64 v72; // rcx
	__int64 v73; // rax
	__int64* v74; // rax
	__int64 v75; // rdx
	__int64 v76; // rax
	__int64 v77; // r10
	__int64 v78; // r9
	_DWORD* v79; // rcx
	int v80; // eax
	__int64 v81; // rcx
	int v83; // [rsp+20h] [rbp-79h]
	int v84; // [rsp+24h] [rbp-75h]
	__int64 v85; // [rsp+28h] [rbp-71h] BYREF
	__int64 v86; // [rsp+30h] [rbp-69h] BYREF
	__int64(__fastcall * *v87)(); // [rsp+38h] [rbp-61h] BYREF
	int v88; // [rsp+40h] [rbp-59h]
	_QWORD* v89; // [rsp+48h] [rbp-51h]
	int v90; // [rsp+50h] [rbp-49h]
	__int64(__fastcall * *v91)(); // [rsp+58h] [rbp-41h] BYREF
	int v92; // [rsp+60h] [rbp-39h]
	_QWORD* v93; // [rsp+68h] [rbp-31h]
	int v94; // [rsp+70h] [rbp-29h]
	__int64 v95; // [rsp+78h] [rbp-21h] BYREF
	__int64 v96; // [rsp+80h] [rbp-19h]
	double v98; // [rsp+100h] [rbp+67h]
	double v99; // [rsp+100h] [rbp+67h]
	double v100; // [rsp+100h] [rbp+67h]
	double v101; // [rsp+100h] [rbp+67h]
	double v102; // [rsp+100h] [rbp+67h]
	double v103; // [rsp+100h] [rbp+67h]
	int v104; // [rsp+108h] [rbp+6Fh]
	int v105; // [rsp+110h] [rbp+77h]
	int v106; // [rsp+118h] [rbp+7Fh]

	v1 = qword_140C66DA8;
	v2 = a1;
	if (!*(_QWORD*)(qword_140C66DA8 + 312))
		sub_140021BB0((_QWORD*)qword_140C66DA8);
	if (!*(_QWORD*)(v1 + 344))
		sub_140021D40(v1);
	v3 = (_DWORD*)v2[3];
	if ((unsigned __int64)v3 >= v2[2] || v3 == dword_140A12138 || (int)v3[2] <= 0)
		v106 = -1;
	else
		v106 = sub_140056D60(v2, 1u);
	v4 = (_DWORD*)(v2[3] + 16i64);
	if ((unsigned __int64)v4 >= v2[2] || v4 == dword_140A12138 || *(int*)(v2[3] + 24i64) <= 0)
		v5 = -1;
	else
		v5 = sub_140056D60(v2, 2u);
	v84 = v5;
	v6 = (_DWORD*)(v2[3] + 32i64);
	if ((unsigned __int64)v6 >= v2[2] || v6 == dword_140A12138 || *(int*)(v2[3] + 40i64) <= 0)
		v7 = -1;
	else
		v7 = sub_140056D60(v2, 3u);
	LODWORD(v85) = v7;
	v8 = (_DWORD*)(v2[3] + 48i64);
	if ((unsigned __int64)v8 >= v2[2] || v8 == dword_140A12138 || *(int*)(v2[3] + 56i64) <= 0)
		v9 = -1;
	else
		v9 = sub_140056D60(v2, 4u);
	v10 = (_DWORD*)(v2[3] + 64i64);
	if ((unsigned __int64)v10 >= v2[2] || v10 == dword_140A12138 || *(int*)(v2[3] + 72i64) <= 0)
		v105 = -1;
	else
		v105 = sub_140056D60(v2, 5u);
	if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
		sub_14005E2C0((__int64)v2);
	v11 = v2[2];
	v12 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	v2[2] += 16i64;
	v13 = sub_1400578C0((__int64)v2);
	v14 = v2[4];
	v104 = v13;
	v15 = *(_QWORD*)(v14 + 112);
	v87 = off_140B569F0;
	v89 = v2;
	v90 = 1;
	if (*(_QWORD*)(v14 + 120) >= v15)
		sub_14005E2C0((__int64)v2);
	v16 = v2[2];
	v17 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	v2[2] += 16i64;
	v18 = sub_1400578C0((__int64)v2);
	v19 = v2[4];
	v20 = v18;
	v88 = v18;
	v21 = *(_QWORD*)(v19 + 112);
	v91 = off_140B569F0;
	v93 = v2;
	v94 = 1;
	if (*(_QWORD*)(v19 + 120) >= v21)
		sub_14005E2C0((__int64)v2);
	v22 = v2[2];
	v23 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v22 + 8) = 5;
	*(_QWORD*)v22 = v23;
	v2[2] += 16i64;
	v24 = sub_1400578C0((__int64)v2);
	v92 = v24;
	v25 = 0;
	v83 = 0;
	if (qword_140C63838)
	{
		v26 = qword_140C63838(off_140A696B0, qword_140C63858);
	LABEL_43:
		v27 = v26;
		goto LABEL_44;
	}
	if (dword_140C64324)
	{
		v27 = 0;
	}
	else
	{
		if ((int)sub_1401EFC80() >= 0)
		{
			v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F68 + 40i64))(qword_140C63F68);
			goto LABEL_43;
		}
		v27 = 0;
	}
LABEL_44:
	if (!v27)
		goto LABEL_77;
	v28 = v85;
	do
	{
		if (qword_140C63848)
		{
			v29 = qword_140C63848(off_140A696B0, v25, qword_140C63858);
		}
		else
		{
			if (dword_140C64324 || (int)sub_1401EFC80() < 0)
				goto LABEL_75;
			v29 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F68 + 32i64))(qword_140C63F68, v25);
		}
		v30 = (_DWORD*)v29;
		if (v29)
		{
			v31 = *(_QWORD*)(qword_140C66DA8 + 304);
			v32 = v31;
			v33 = *(_QWORD*)(v31 + 8);
			while (v33)
			{
				if (*(_DWORD*)(v33 + 32) < *v30)
				{
					v33 = *(_QWORD*)(v33 + 24);
				}
				else
				{
					v32 = v33;
					v33 = *(_QWORD*)(v33 + 16);
				}
			}
			if (v32 == v31 || *v30 < *(_DWORD*)(v32 + 32))
			{
				v85 = *(_QWORD*)(qword_140C66DA8 + 304);
				v34 = &v85;
			}
			else
			{
				v86 = v32;
				v34 = &v86;
			}
			if (*v34 != v31
				&& (v84 == -1 || v84 == v30[4])
				&& (v28 == -1 || v28 == v30[1])
				&& (v9 == -1 || v9 == v30[2])
				&& (v105 == -1i64 || v105 == v30[3])
				&& (v106 == -1i64 || v106 == v30[23]))
			{
				++v83;
				v35 = sub_140029E20(qword_140C66DA8, v30);
				v36 = &v87;
				if (!v35)
					v36 = &v91;
				sub_1400FA9E0((__int64)v36);
			}
		}
	LABEL_75:
		++v25;
	} while (v25 < v27);
	v20 = v88;
	v24 = v92;
	v2 = a1;
LABEL_77:
	v37 = v104;
	v38 = *(_QWORD*)(v2[4] + 160i64);
	v39 = v104 - 1;
	if ((unsigned int)(v104 - 1) >= *(_DWORD*)(v38 + 56))
	{
		if ((double)v104 == 0.0)
		{
			v40 = *(_DWORD**)(v38 + 32);
		}
		else
		{
			v98 = (double)v104;
			v40 = (_DWORD*)(*(_QWORD*)(v38 + 32)
				+ 40 * ((unsigned int)(LODWORD(v98) + HIDWORD(v98)) % (((1i64 << *(_BYTE*)(v38 + 11)) - 1) | 1)));
		}
		while (v40[6] != 3 || (double)v104 != *((double*)v40 + 2))
		{
			v40 = (_DWORD*)*((_QWORD*)v40 + 4);
			if (!v40)
			{
				v40 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v40 = (_DWORD*)(*(_QWORD*)(v38 + 24) + 16i64 * (v104 - 1));
	}
	v41 = v2[2];
	*(_QWORD*)v41 = *(_QWORD*)v40;
	*(_DWORD*)(v41 + 8) = v40[2];
	v2[2] += 16i64;
	v42 = (unsigned __int64*)sub_14018F0E0(&v95, L"arEnabledIds")[1];
	if (v42)
	{
		v43 = -1i64;
		do
			++v43;
		while (*((_BYTE*)v42 + v43));
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v44 = v2[2];
		v45 = sub_140062650((__int64)v2, v42, v43);
		*(_DWORD*)(v44 + 8) = 4;
		*(_QWORD*)v44 = v45;
		v37 = v104;
	}
	else
	{
		*(_DWORD*)(v2[2] + 8i64) = 0;
	}
	v46 = v96;
	v2[2] += 16i64;
	if (v46)
		sub_14018B900(v46, 0);
	v47 = *(_QWORD*)(v2[4] + 160i64);
	if ((unsigned int)(v20 - 1) >= *(_DWORD*)(v47 + 56))
	{
		if ((double)v20 == 0.0)
		{
			v48 = *(_DWORD**)(v47 + 32);
		}
		else
		{
			v99 = (double)v20;
			v48 = (_DWORD*)(*(_QWORD*)(v47 + 32)
				+ 40 * ((unsigned int)(LODWORD(v99) + HIDWORD(v99)) % (((1i64 << *(_BYTE*)(v47 + 11)) - 1) | 1)));
		}
		while (v48[6] != 3 || (double)v20 != *((double*)v48 + 2))
		{
			v48 = (_DWORD*)*((_QWORD*)v48 + 4);
			if (!v48)
			{
				v48 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v48 = (_DWORD*)(*(_QWORD*)(v47 + 24) + 16i64 * (v20 - 1));
	}
	v49 = v2[2];
	*(_QWORD*)v49 = *(_QWORD*)v48;
	*(_DWORD*)(v49 + 8) = v48[2];
	v50 = v2[2] + 16i64;
	v2[2] = v50;
	sub_14005EA50((__int64)v2, (__int64*)(v50 - 48), (int*)(v50 - 32), (unsigned int*)(v50 - 16));
	v51 = v2[4];
	v52 = v2[2] - 48i64;
	v2[2] = v52;
	v53 = *(_QWORD*)(v51 + 160);
	if (v39 >= *(_DWORD*)(v53 + 56))
	{
		if ((double)v37 == 0.0)
		{
			v54 = *(_DWORD**)(v53 + 32);
		}
		else
		{
			v100 = (double)v37;
			v54 = (_DWORD*)(*(_QWORD*)(v53 + 32)
				+ 40 * ((unsigned int)(LODWORD(v100) + HIDWORD(v100)) % (((1i64 << *(_BYTE*)(v53 + 11)) - 1) | 1)));
		}
		while (v54[6] != 3 || (double)v37 != *((double*)v54 + 2))
		{
			v54 = (_DWORD*)*((_QWORD*)v54 + 4);
			if (!v54)
			{
				v54 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v54 = (_DWORD*)(*(_QWORD*)(v53 + 24) + 16i64 * (v37 - 1));
	}
	*(_QWORD*)v52 = *(_QWORD*)v54;
	*(_DWORD*)(v52 + 8) = v54[2];
	v2[2] += 16i64;
	v55 = (unsigned __int64*)sub_14018F0E0(&v95, L"arDisabledIds")[1];
	if (v55)
	{
		v56 = -1i64;
		do
			++v56;
		while (*((_BYTE*)v55 + v56));
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v57 = v2[2];
		v58 = sub_140062650((__int64)v2, v55, v56);
		*(_DWORD*)(v57 + 8) = 4;
		*(_QWORD*)v57 = v58;
		v37 = v104;
	}
	else
	{
		*(_DWORD*)(v2[2] + 8i64) = 0;
	}
	v59 = v96;
	v2[2] += 16i64;
	if (v59)
		sub_14018B900(v59, 0);
	v60 = *(_QWORD*)(v2[4] + 160i64);
	if ((unsigned int)(v24 - 1) >= *(_DWORD*)(v60 + 56))
	{
		if ((double)v24 == 0.0)
		{
			v61 = *(_DWORD**)(v60 + 32);
		}
		else
		{
			v101 = (double)v24;
			v61 = (_DWORD*)(*(_QWORD*)(v60 + 32)
				+ 40 * ((unsigned int)(LODWORD(v101) + HIDWORD(v101)) % (((1i64 << *(_BYTE*)(v60 + 11)) - 1) | 1)));
		}
		while (v61[6] != 3 || (double)v24 != *((double*)v61 + 2))
		{
			v61 = (_DWORD*)*((_QWORD*)v61 + 4);
			if (!v61)
			{
				v61 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v61 = (_DWORD*)(*(_QWORD*)(v60 + 24) + 16i64 * (v24 - 1));
	}
	v62 = v2[2];
	*(_QWORD*)v62 = *(_QWORD*)v61;
	*(_DWORD*)(v62 + 8) = v61[2];
	v63 = v2[2] + 16i64;
	v2[2] = v63;
	sub_14005EA50((__int64)v2, (__int64*)(v63 - 48), (int*)(v63 - 32), (unsigned int*)(v63 - 16));
	v64 = v2[4];
	v65 = v2[2] - 48i64;
	v2[2] = v65;
	v66 = *(_QWORD*)(v64 + 160);
	if (v39 >= *(_DWORD*)(v66 + 56))
	{
		if ((double)v37 == 0.0)
		{
			v67 = *(_DWORD**)(v66 + 32);
		}
		else
		{
			v102 = (double)v37;
			v67 = (_DWORD*)(*(_QWORD*)(v66 + 32)
				+ 40 * ((unsigned int)(LODWORD(v102) + HIDWORD(v102)) % (((1i64 << *(_BYTE*)(v66 + 11)) - 1) | 1)));
		}
		while (v67[6] != 3 || (double)v37 != *((double*)v67 + 2))
		{
			v67 = (_DWORD*)*((_QWORD*)v67 + 4);
			if (!v67)
			{
				v67 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v67 = (_DWORD*)(*(_QWORD*)(v66 + 24) + 16i64 * (v37 - 1));
	}
	*(_QWORD*)v65 = *(_QWORD*)v67;
	*(_DWORD*)(v65 + 8) = v67[2];
	v2[2] += 16i64;
	v68 = (unsigned __int64*)sub_14018F0E0(&v95, L"nCount")[1];
	if (v68)
	{
		v69 = -1i64;
		do
			++v69;
		while (*((_BYTE*)v68 + v69));
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v70 = v2[2];
		v71 = sub_140062650((__int64)v2, v68, v69);
		*(_DWORD*)(v70 + 8) = 4;
		*(_QWORD*)v70 = v71;
		v37 = v104;
	}
	else
	{
		*(_DWORD*)(v2[2] + 8i64) = 0;
	}
	v72 = v96;
	v2[2] += 16i64;
	if (v72)
		sub_14018B900(v72, 0);
	v73 = v2[2];
	*(_DWORD*)(v73 + 8) = 3;
	*(double*)v73 = (double)v83;
	v2[2] += 16i64;
	v74 = (__int64*)sub_1400580E0((__int64)v2, -3);
	sub_14005EA50((__int64)v2, v74, (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
	v76 = v2[4];
	v77 = v2[2] - 48i64;
	v2[2] = v77;
	v78 = *(_QWORD*)(v76 + 160);
	if (v39 >= *(_DWORD*)(v78 + 56))
	{
		if ((double)v37 == 0.0)
		{
			v79 = *(_DWORD**)(v78 + 32);
		}
		else
		{
			v103 = (double)v37;
			v75 = (unsigned int)(LODWORD(v103) + HIDWORD(v103)) % (((1i64 << *(_BYTE*)(v78 + 11)) - 1) | 1);
			v79 = (_DWORD*)(*(_QWORD*)(v78 + 32) + 40 * v75);
		}
		while (v79[6] != 3 || (double)v37 != *((double*)v79 + 2))
		{
			v79 = (_DWORD*)*((_QWORD*)v79 + 4);
			if (!v79)
			{
				v79 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v79 = (_DWORD*)(*(_QWORD*)(v78 + 24) + 16i64 * (v37 - 1));
	}
	*(_QWORD*)v77 = *(_QWORD*)v79;
	v80 = v79[2];
	v81 = (__int64)v93;
	*(_DWORD*)(v77 + 8) = v80;
	v2[2] += 16i64;
	if (v81)
		sub_1400579E0(v81, v75, v24);
	if (v89)
		sub_1400579E0((__int64)v89, v75, v20);
	sub_1400579E0((__int64)v2, v75, v37);
	return 1i64;
}
// 140027252: variable 'v75' is possibly undefined
// 1409EE050: using guessed type wchar_t aArenabledids[13];
// 1409EE070: using guessed type wchar_t aArdisabledids[14];
// 1409EE090: using guessed type wchar_t aNcount_2[7];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A696B0: using guessed type wchar_t *off_140A696B0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F68: using guessed type __int64 qword_140C63F68;
// 140C64324: using guessed type int dword_140C64324;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

