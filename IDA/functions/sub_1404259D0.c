#include "../winhttp.h"

//----- (00000001404259D0) ----------------------------------------------------
void __fastcall sub_1404259D0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rbx
	__int64 v5; // rdi
	__int64 v6; // rax
	unsigned int v7; // ebp
	int v8; // r15d
	_QWORD* v9; // rax
	__int64 v10; // rdx
	unsigned __int64 v11; // rdi
	int v12; // esi
	unsigned __int64* v13; // rdx
	unsigned __int64 v14; // r8
	_DWORD* v15; // rcx
	__int64* v16; // rax
	int v17; // r15d
	_QWORD* v18; // rax
	__int64 v19; // r10
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	_DWORD* v22; // rcx
	__int64* v23; // rax
	int v24; // r15d
	_QWORD* v25; // rax
	__int64 v26; // r10
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // r8
	_DWORD* v29; // rcx
	__int64* v30; // rax
	int v31; // r15d
	_QWORD* v32; // rax
	__int64 v33; // r10
	unsigned __int64* v34; // rdx
	unsigned __int64 v35; // r8
	_DWORD* v36; // rcx
	__int64* v37; // rax
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	int v41; // r11d
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	int v45; // r11d
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	int v49; // r11d
	_QWORD* v50; // rax
	__int64 v51; // r10
	__int64 v52; // rdx
	int v53; // r11d
	_QWORD* v54; // rax
	__int64 v55; // r10
	__int64 v56; // rdx
	int v57; // r11d
	int v58; // r15d
	_QWORD* v59; // rax
	__int64 v60; // r10
	unsigned __int64* v61; // rdx
	unsigned __int64 v62; // r8
	_DWORD* v63; // rcx
	__int64* v64; // rax
	int v65; // r15d
	_QWORD* v66; // rax
	__int64 v67; // r10
	unsigned __int64* v68; // rdx
	unsigned __int64 v69; // r8
	_DWORD* v70; // rcx
	__int64* v71; // rax
	int v72; // r14d
	_QWORD* v73; // rax
	__int64 v74; // r10
	unsigned __int64* v75; // rdx
	_DWORD* v76; // rax
	__int64* v77; // rax
	__int64 v78; // rdx
	__int64 v79; // [rsp+20h] [rbp-38h] BYREF
	__int64 v80; // [rsp+28h] [rbp-30h]

	v2 = *(_QWORD*)(a1 + 400);
	if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
		sub_14005E2C0(*(_QWORD*)(a1 + 400));
	v5 = *(_QWORD*)(v2 + 16);
	v6 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v2 + 16) += 16i64;
	v7 = sub_1400578C0(v2);
	v8 = a2[1] & 1;
	v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	v10 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v10 = *v9;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v11 = -1i64;
	v12 = 0;
	v13 = (unsigned __int64*)sub_14018F0E0(&v79, L"bDifficultyNormal")[1];
	if (v13)
	{
		v14 = -1i64;
		do
			++v14;
		while (*((_BYTE*)v13 + v14));
		sub_140058710(v2, v13, v14);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v80)
		sub_14018B900(v80, 0);
	v15 = *(_DWORD**)(v2 + 16);
	v15[2] = 1;
	*v15 = v8 != 0;
	*(_QWORD*)(v2 + 16) += 16i64;
	v16 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v16, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v17 = a2[1] & 2;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v20 = (unsigned __int64*)sub_14018F0E0(&v79, L"bDifficultyVeteran")[1];
	if (v20)
	{
		v21 = -1i64;
		do
			++v21;
		while (*((_BYTE*)v20 + v21));
		sub_140058710(v2, v20, v21);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v80)
		sub_14018B900(v80, 0);
	v22 = *(_DWORD**)(v2 + 16);
	v22[2] = 1;
	*v22 = v17 != 0;
	*(_QWORD*)(v2 + 16) += 16i64;
	v23 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v23, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v24 = a2[2] & 1;
	v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v26 = *v25;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v27 = (unsigned __int64*)sub_14018F0E0(&v79, L"bFlagsScaling")[1];
	if (v27)
	{
		v28 = -1i64;
		do
			++v28;
		while (*((_BYTE*)v27 + v28));
		sub_140058710(v2, v27, v28);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v80)
		sub_14018B900(v80, 0);
	v29 = *(_DWORD**)(v2 + 16);
	v29[2] = 1;
	*v29 = v24 != 0;
	*(_QWORD*)(v2 + 16) += 16i64;
	v30 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v30, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v31 = a2[2] & 0x200;
	v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v33 = *v32;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v34 = (unsigned __int64*)sub_14018F0E0(&v79, L"bHasPrimeLevels")[1];
	if (v34)
	{
		v35 = -1i64;
		do
			++v35;
		while (*((_BYTE*)v34 + v35));
		sub_140058710(v2, v34, v35);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v80)
		sub_14018B900(v80, 0);
	v36 = *(_DWORD**)(v2 + 16);
	v36[2] = 1;
	*v36 = v31 != 0;
	*(_QWORD*)(v2 + 16) += 16i64;
	v37 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v37, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v38 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v39 = *v38;
	*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v40, L"nMaxPrimeLevelWorld", v41);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v43 = *v42;
	*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v44, L"nMaxPrimeLevelGroup", v45);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v47 = *v46;
	*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v48, L"nExistingPrimeLevel", v49);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v51 = *v50;
	*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v52, L"nScalingLevel", v53);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v54 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v55 = *v54;
	*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400F06F0(v2, v56, L"nExistingDifficulty", v57);
	*(_QWORD*)(v2 + 16) -= 16i64;
	v58 = a2[5];
	v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v60 = *v59;
	*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v61 = (unsigned __int64*)sub_14018F0E0(&v79, L"bExistingScaling")[1];
	if (v61)
	{
		v62 = -1i64;
		do
			++v62;
		while (*((_BYTE*)v61 + v62));
		sub_140058710(v2, v61, v62);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v80)
		sub_14018B900(v80, 0);
	v63 = *(_DWORD**)(v2 + 16);
	v63[2] = 1;
	*v63 = v58 != 0;
	*(_QWORD*)(v2 + 16) += 16i64;
	v64 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v64, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v65 = a2[7];
	v66 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v67 = *v66;
	*(_DWORD*)(v67 + 8) = *((_DWORD*)v66 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v68 = (unsigned __int64*)sub_14018F0E0(&v79, L"bIsRaid")[1];
	if (v68)
	{
		v69 = -1i64;
		do
			++v69;
		while (*((_BYTE*)v68 + v69));
		sub_140058710(v2, v68, v69);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v80)
		sub_14018B900(v80, 0);
	v70 = *(_DWORD**)(v2 + 16);
	v70[2] = 1;
	*v70 = v65 != 0;
	*(_QWORD*)(v2 + 16) += 16i64;
	v71 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v71, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	v72 = a2[8];
	v73 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v7);
	*(_QWORD*)v74 = *v73;
	*(_DWORD*)(v74 + 8) = *((_DWORD*)v73 + 2);
	*(_QWORD*)(v2 + 16) += 16i64;
	v75 = (unsigned __int64*)sub_14018F0E0(&v79, L"bPrimeAllowed")[1];
	if (v75)
	{
		do
			++v11;
		while (*((_BYTE*)v75 + v11));
		sub_140058710(v2, v75, v11);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v80)
		sub_14018B900(v80, 0);
	v76 = *(_DWORD**)(v2 + 16);
	LOBYTE(v12) = v72 != 0;
	v76[2] = 1;
	*v76 = v12;
	*(_QWORD*)(v2 + 16) += 16i64;
	v77 = (__int64*)sub_1400580E0(v2, -3);
	sub_14005EA50(v2, v77, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 48i64;
	sub_1400EA3E0(a1, "ShowInstanceGameModeDialog", byte_1409E8F94, v7);
	sub_1400579E0(v2, v78, v7);
}
// 140425B2D: variable 'v19' is possibly undefined
// 140425BED: variable 'v26' is possibly undefined
// 140425CB0: variable 'v33' is possibly undefined
// 140425D70: variable 'v39' is possibly undefined
// 140425D82: variable 'v40' is possibly undefined
// 140425D82: variable 'v41' is possibly undefined
// 140425DB4: variable 'v43' is possibly undefined
// 140425DC6: variable 'v44' is possibly undefined
// 140425DC6: variable 'v45' is possibly undefined
// 140425DF8: variable 'v47' is possibly undefined
// 140425E0A: variable 'v48' is possibly undefined
// 140425E0A: variable 'v49' is possibly undefined
// 140425E3C: variable 'v51' is possibly undefined
// 140425E4E: variable 'v52' is possibly undefined
// 140425E4E: variable 'v53' is possibly undefined
// 140425E7F: variable 'v55' is possibly undefined
// 140425E91: variable 'v56' is possibly undefined
// 140425E91: variable 'v57' is possibly undefined
// 140425EBF: variable 'v60' is possibly undefined
// 140425F7B: variable 'v67' is possibly undefined
// 140426039: variable 'v74' is possibly undefined
// 140426114: variable 'v78' is possibly undefined
// 1409E8F94: using guessed type _BYTE byte_1409E8F94[24];
// 140B006D0: using guessed type wchar_t aNmaxprimelevel[20];
// 140B006F8: using guessed type wchar_t aBhasprimelevel[16];
// 140B00718: using guessed type wchar_t aBflagsscaling[14];
// 140B00738: using guessed type wchar_t aBdifficultyvet[19];
// 140B00760: using guessed type wchar_t aNexistingdiffi[20];
// 140B00788: using guessed type wchar_t aNscalinglevel[14];
// 140B007A8: using guessed type wchar_t aNexistingprime[20];
// 140B007D0: using guessed type wchar_t aNmaxprimelevel_0[20];
// 140B007F8: using guessed type wchar_t aBdifficultynor[18];
// 140B00820: using guessed type wchar_t aBprimeallowed[14];
// 140B00840: using guessed type wchar_t aBisraid[8];
// 140B00850: using guessed type wchar_t aBexistingscali[17];

