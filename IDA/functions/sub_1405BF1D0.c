#include "../winhttp.h"

//----- (00000001405BF1D0) ----------------------------------------------------
__int64 __fastcall sub_1405BF1D0(__int64 a1, __int64 a2, unsigned int a3)
{
	_DWORD* v4; // rax
	__int64 v5; // r10
	_DWORD* v6; // rax
	__int64 v7; // rdx
	_DWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // rdi
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	__int64 v17; // rdx
	__int64 v18; // r8
	_DWORD* v19; // rax
	int v20; // ecx
	BOOL v21; // ecx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int64 v25; // rdi
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	__int64 v28; // rdx
	__int64 v29; // r8
	_DWORD* v30; // rax
	int v31; // ecx
	BOOL v32; // ecx
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	__int64 v36; // rdi
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	__int64 v39; // r8
	_DWORD* v40; // rax
	int v41; // ecx
	BOOL v42; // ecx
	_QWORD* v43; // rax
	__int64 v44; // r10
	__int64 v45; // rdx
	__int64 v46; // rdi
	unsigned __int64* v47; // rdx
	unsigned __int64 v48; // r8
	__int64 v49; // r10
	_QWORD* v50; // rax
	__int64 v51; // r10
	__int64 v52; // rdx
	_DWORD* v53; // rcx
	int v54; // eax
	_QWORD* v55; // rax
	__int64 v56; // r10
	__int64 v57; // rdx
	__int64 v58; // rdx
	__int64 v59; // rdx
	_QWORD* v60; // rax
	__int64 v61; // r10
	__int64 v62; // rdx
	__int64 v63; // rdi
	unsigned __int64* v64; // rdx
	unsigned __int64 v65; // r8
	__int64 v66; // rax
	int v67; // eax
	__int64(__fastcall * *v69)(); // [rsp+20h] [rbp-49h] BYREF
	int v70; // [rsp+28h] [rbp-41h]
	__int64 v71; // [rsp+30h] [rbp-39h]
	__int64(__fastcall * *v72)(); // [rsp+38h] [rbp-31h] BYREF
	int v73; // [rsp+40h] [rbp-29h]
	__int64 v74; // [rsp+48h] [rbp-21h]
	int v75; // [rsp+50h] [rbp-19h]
	__int64(__fastcall * *v76)(); // [rsp+58h] [rbp-11h] BYREF
	int v77; // [rsp+60h] [rbp-9h]
	__int64 v78; // [rsp+68h] [rbp-1h]
	int v79; // [rsp+70h] [rbp+7h]
	__int64(__fastcall * *v80)(); // [rsp+78h] [rbp+Fh] BYREF
	__int64 v81; // [rsp+80h] [rbp+17h]
	__int64 v82; // [rsp+88h] [rbp+1Fh]
	__int64(__fastcall * **v83)(); // [rsp+90h] [rbp+27h]
	unsigned int v84; // [rsp+E0h] [rbp+77h] BYREF

	v84 = a3;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) = 0;
	v4 = sub_1400580E0(a2, 2);
	if (v4 == dword_140A12138 || v4[2] != 5)
		return 0i64;
	v74 = v5;
	v75 = 1;
	v73 = -2;
	v72 = off_140B569F0;
	v6 = sub_1400580E0(v5, 2);
	if (v6 != dword_140A12138 && v6[2] == 5)
	{
		sub_1400579E0(v74, v7, v73);
		v8 = sub_1400580E0(v74, 2);
		v10 = *(_QWORD*)(v9 + 16);
		*(_QWORD*)v10 = *(_QWORD*)v8;
		*(_DWORD*)(v10 + 8) = v8[2];
		*(_QWORD*)(v9 + 16) += 16i64;
		v73 = sub_1400578C0(v74);
	}
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v72[1])(&v72))
	{
		v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v74 + 32) + 160i64), v73);
		v13 = *(_QWORD*)(v12 + 16);
		*(_QWORD*)v13 = *v11;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
		*(_QWORD*)(v12 + 16) += 16i64;
		v14 = v74;
		v15 = (unsigned __int64*)sub_14018F0E0(&v80, L"bAsMercenary")[1];
		if (v15)
		{
			v16 = -1i64;
			do
				++v16;
			while (*((_BYTE*)v15 + v16));
			sub_140058710(v14, v15, v16);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v14 + 16) + 8i64) = 0;
			*(_QWORD*)(v14 + 16) += 16i64;
		}
		if (v81)
			sub_14018B900(v81, 0);
		sub_14005E8E0(
			v74,
			*(_QWORD*)(v74 + 16) - 32i64,
			(int*)(*(_QWORD*)(v74 + 16) - 16i64),
			*(_QWORD*)(v74 + 16) - 16i64);
		v17 = v74;
		v18 = *(_QWORD*)(v74 + 16);
		v19 = (_DWORD*)(v18 - 16);
		if ((_DWORD*)(v18 - 16) != dword_140A12138 && v19[2] == 1)
		{
			v20 = v19[2];
			v21 = v20 && (v20 != 1 || *v19);
			*(_DWORD*)(a1 + 8) = v21;
		}
		*(_QWORD*)(v17 + 16) = v18 - 32;
	}
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v72[1])(&v72))
	{
		v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v74 + 32) + 160i64), v73);
		v24 = *(_QWORD*)(v23 + 16);
		*(_QWORD*)v24 = *v22;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
		*(_QWORD*)(v23 + 16) += 16i64;
		v25 = v74;
		v26 = (unsigned __int64*)sub_14018F0E0(&v80, L"bVeteran")[1];
		if (v26)
		{
			v27 = -1i64;
			do
				++v27;
			while (*((_BYTE*)v26 + v27));
			sub_140058710(v25, v26, v27);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v25 + 16) + 8i64) = 0;
			*(_QWORD*)(v25 + 16) += 16i64;
		}
		if (v81)
			sub_14018B900(v81, 0);
		sub_14005E8E0(
			v74,
			*(_QWORD*)(v74 + 16) - 32i64,
			(int*)(*(_QWORD*)(v74 + 16) - 16i64),
			*(_QWORD*)(v74 + 16) - 16i64);
		v28 = v74;
		v29 = *(_QWORD*)(v74 + 16);
		v30 = (_DWORD*)(v29 - 16);
		if ((_DWORD*)(v29 - 16) != dword_140A12138 && v30[2] == 1)
		{
			v31 = v30[2];
			v32 = v31 && (v31 != 1 || *v30);
			*(_DWORD*)(a1 + 16) = v32;
		}
		*(_QWORD*)(v28 + 16) = v29 - 32;
	}
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v72[1])(&v72))
	{
		v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v74 + 32) + 160i64), v73);
		v35 = *(_QWORD*)(v34 + 16);
		*(_QWORD*)v35 = *v33;
		*(_DWORD*)(v35 + 8) = *((_DWORD*)v33 + 2);
		*(_QWORD*)(v34 + 16) += 16i64;
		v36 = v74;
		v37 = (unsigned __int64*)sub_14018F0E0(&v80, L"bFindOthers")[1];
		if (v37)
		{
			v38 = -1i64;
			do
				++v38;
			while (*((_BYTE*)v37 + v38));
			sub_140058710(v36, v37, v38);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v36 + 16) + 8i64) = 0;
			*(_QWORD*)(v36 + 16) += 16i64;
		}
		if (v81)
			sub_14018B900(v81, 0);
		sub_14005E8E0(
			v74,
			*(_QWORD*)(v74 + 16) - 32i64,
			(int*)(*(_QWORD*)(v74 + 16) - 16i64),
			*(_QWORD*)(v74 + 16) - 16i64);
		v39 = *(_QWORD*)(v74 + 16);
		v40 = (_DWORD*)(v39 - 16);
		if ((_DWORD*)(v39 - 16) == dword_140A12138 || v40[2] != 1)
		{
			*(_QWORD*)(v74 + 16) = v39 - 32;
		}
		else
		{
			v41 = v40[2];
			v42 = v41 && (v41 != 1 || *v40);
			*(_QWORD*)(v74 + 16) = v39 - 32;
			*(_DWORD*)(a1 + 12) = !v42;
		}
	}
	v69 = off_140B56A08;
	v71 = 0i64;
	v70 = -2;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v72[1])(&v72))
	{
		v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v74 + 32) + 160i64), v73);
		v45 = *(_QWORD*)(v44 + 16);
		*(_QWORD*)v45 = *v43;
		*(_DWORD*)(v45 + 8) = *((_DWORD*)v43 + 2);
		*(_QWORD*)(v44 + 16) += 16i64;
		v46 = v74;
		v47 = (unsigned __int64*)sub_14018F0E0(&v80, L"arRoles")[1];
		if (v47)
		{
			v48 = -1i64;
			do
				++v48;
			while (*((_BYTE*)v47 + v48));
			sub_140058710(v46, v47, v48);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v46 + 16) + 8i64) = 0;
			*(_QWORD*)(v46 + 16) += 16i64;
		}
		if (v81)
			sub_14018B900(v81, 0);
		sub_14005E8E0(
			v74,
			*(_QWORD*)(v74 + 16) - 32i64,
			(int*)(*(_QWORD*)(v74 + 16) - 16i64),
			*(_QWORD*)(v74 + 16) - 16i64);
		v71 = v74;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v69[2])(&v69, 0xFFFFFFFFi64);
		v76 = off_140B569F0;
		*(_QWORD*)(v74 + 16) -= 32i64;
		v49 = v71;
		v79 = 1;
		v78 = v71;
		v77 = -2;
		if (v71 && v70 != -2)
		{
			v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v71 + 32) + 160i64), v70);
			v52 = *(_QWORD*)(v51 + 16);
			*(_QWORD*)v52 = *v50;
			*(_DWORD*)(v52 + 8) = *((_DWORD*)v50 + 2);
			*(_QWORD*)(v51 + 16) += 16i64;
			v53 = (_DWORD*)(*(_QWORD*)(v71 + 16) - 16i64);
			if (v53 == dword_140A12138)
				v54 = -1;
			else
				v54 = v53[2];
			*(_QWORD*)(v71 + 16) = v53;
			if (v54 == 5)
			{
				v55 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v71 + 32) + 160i64), v70);
				v57 = *(_QWORD*)(v56 + 16);
				*(_QWORD*)v57 = *v55;
				*(_DWORD*)(v57 + 8) = *((_DWORD*)v55 + 2);
				*(_QWORD*)(v56 + 16) += 16i64;
				v77 = sub_1400578C0(v78);
			}
			v49 = v78;
		}
		v80 = off_140B56A08;
		v82 = v49;
		LODWORD(v81) = -2;
		v83 = &v76;
		*(_DWORD*)(*(_QWORD*)(v49 + 16) + 8i64) = 0;
		*(_QWORD*)(v49 + 16) += 16i64;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v80[2])(&v80, 0xFFFFFFFFi64);
		*(_QWORD*)(v78 + 16) -= 16i64;
		while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v83)[1])(v83)
			&& (unsigned int)sub_1400FCBA0((__int64)&v80))
		{
			if ((int)sub_1400FC8E0((__int64)&v80, (int*)&v84) >= 0 && v84 < 3)
				*(_DWORD*)a1 |= 1 << v84;
		}
		v80 = off_140B56A08;
		if (v82)
			sub_1400579E0(v82, v58, v81);
		v76 = off_140B56A08;
		if (v78)
			sub_1400579E0(v78, v58, v77);
	}
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v72[1])(&v72))
	{
		v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v74 + 32) + 160i64), v73);
		v62 = *(_QWORD*)(v61 + 16);
		*(_QWORD*)v62 = *v60;
		*(_DWORD*)(v62 + 8) = *((_DWORD*)v60 + 2);
		*(_QWORD*)(v61 + 16) += 16i64;
		v63 = v74;
		v64 = (unsigned __int64*)sub_14018F0E0(&v80, L"nPrimeLevel")[1];
		if (v64)
		{
			v65 = -1i64;
			do
				++v65;
			while (*((_BYTE*)v64 + v65));
			sub_140058710(v63, v64, v65);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v63 + 16) + 8i64) = 0;
			*(_QWORD*)(v63 + 16) += 16i64;
		}
		if (v81)
			sub_14018B900(v81, 0);
		sub_14005E8E0(
			v74,
			*(_QWORD*)(v74 + 16) - 32i64,
			(int*)(*(_QWORD*)(v74 + 16) - 16i64),
			*(_QWORD*)(v74 + 16) - 16i64);
		v66 = *(_QWORD*)(v74 + 16);
		if ((_DWORD*)(v66 - 16) == dword_140A12138 || *(_DWORD*)(v66 - 16 + 8) != 3)
		{
			*(_QWORD*)(v74 + 16) = v66 - 32;
		}
		else
		{
			v67 = sub_1400584E0(v74, -1);
			*(_QWORD*)(v74 + 16) -= 32i64;
			*(_DWORD*)(a1 + 4) = v67;
		}
	}
	v69 = off_140B56A08;
	if (v71)
		sub_1400579E0(v71, v59, v70);
	v72 = off_140B56A08;
	if (v74)
		sub_1400579E0(v74, v59, v73);
	return 1i64;
}
// 1405BF243: variable 'v5' is possibly undefined
// 1405BF271: variable 'v7' is possibly undefined
// 1405BF287: variable 'v9' is possibly undefined
// 1405BF2DD: variable 'v12' is possibly undefined
// 1405BF3C2: variable 'v23' is possibly undefined
// 1405BF4A7: variable 'v34' is possibly undefined
// 1405BF5B8: variable 'v44' is possibly undefined
// 1405BF697: variable 'v51' is possibly undefined
// 1405BF6E5: variable 'v56' is possibly undefined
// 1405BF795: variable 'v58' is possibly undefined
// 1405BF7E2: variable 'v61' is possibly undefined
// 1405BF8B7: variable 'v59' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B21DD8: using guessed type wchar_t aNprimelevel[12];
// 140B21E48: using guessed type wchar_t aBfindothers[12];
// 140B21F10: using guessed type wchar_t aArroles[8];
// 140B21F20: using guessed type wchar_t aBasmercenary[13];
// 140B21F40: using guessed type wchar_t aBveteran[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

