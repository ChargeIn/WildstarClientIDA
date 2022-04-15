#include "../winhttp.h"

//----- (0000000140707830) ----------------------------------------------------
__int64 __fastcall sub_140707830(__int64 a1)
{
	__int64 v1; // rbp
	int v3; // eax
	int v4; // ecx
	int v5; // r15d
	__int64 v6; // rax
	int v7; // eax
	int v8; // edi
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rax
	int v12; // ecx
	int v13; // r14d
	int v14; // esi
	int v15; // esi
	__int64 v16; // rdi
	__int64 v17; // rax
	int v18; // eax
	int v19; // r12d
	int v20; // edi
	_QWORD* v21; // rax
	__int64 v22; // rdx
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	_DWORD* v25; // rax
	__int64* v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	int v30; // r11d
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	int v40; // r11d
	_QWORD* v41; // rax
	int v42; // r9d
	__int64 v43; // r10
	__int64 v44; // rdx
	__int64 v45; // rcx
	_QWORD* v46; // rax
	__int64 v47; // rdx
	unsigned __int16* v48; // r10
	_QWORD* v49; // rax
	__int64 v50; // r10
	__int64 v51; // rdx
	__int64 v53; // [rsp+20h] [rbp-38h] BYREF
	__int64 v54; // [rsp+28h] [rbp-30h]

	v1 = qword_140C65898;
	if (!qword_140C65898 || *(_DWORD*)(qword_140C635F0 + 5896) != 1)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	v3 = sub_1403B4F80(qword_140C65898);
	v4 = dword_140DC4C70;
	v5 = v3;
	if ((dword_140DC4C70 & 1) == 0)
	{
		dword_140DC4C70 |= 1u;
		v6 = sub_140200220(0x4B6u);
		if (v6)
			v7 = *(_DWORD*)(v6 + 4);
		else
			v7 = 180;
		v4 = dword_140DC4C70;
		dword_140DC4C74 = 60 * v7;
	}
	v8 = 300;
	if ((v4 & 2) == 0)
	{
		dword_140DC4C70 = v4 | 2;
		v9 = sub_140200220(0x4B6u);
		if (v9)
			v10 = *(_DWORD*)(v9 + 8);
		else
			v10 = 300;
		v4 = dword_140DC4C70;
		dword_140DC4C78 = 60 * v10;
	}
	if ((v4 & 4) == 0)
	{
		dword_140DC4C70 = v4 | 4;
		v11 = sub_140200220(0x4B6u);
		if (v11)
			v8 = *(_DWORD*)(v11 + 12);
		dword_140DC4C7C = 60 * v8;
	}
	v12 = *(_DWORD*)(v1 + 32644);
	v13 = 0;
	v14 = 0;
	if (!v12)
	{
		v15 = dword_140DC4C74;
		goto LABEL_21;
	}
	if (v12 == 1)
	{
		v15 = dword_140DC4C78;
	LABEL_21:
		v14 = v15 - v5;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v16 = *(_QWORD*)(a1 + 16);
	v17 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	*(_QWORD*)(a1 + 16) += 16i64;
	v18 = sub_1400578C0(a1);
	v19 = *(_DWORD*)(v1 + 32640);
	v20 = v18;
	v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v18);
	v22 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v22 = *v21;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v23 = (unsigned __int64*)sub_14018F0E0(&v53, L"bEnforce")[1];
	if (v23)
	{
		v24 = -1i64;
		do
			++v24;
		while (*((_BYTE*)v23 + v24));
		sub_140058710(a1, v23, v24);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v54)
		sub_14018B900(v54, 0);
	v25 = *(_DWORD**)(a1 + 16);
	LOBYTE(v13) = v19 != 0;
	v25[2] = 1;
	*v25 = v13;
	*(_QWORD*)(a1 + 16) += 16i64;
	v26 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v20);
	*(_QWORD*)v28 = *v27;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v29, L"eHealthyGamingStatus", v30);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v20);
	*(_QWORD*)v32 = *v31;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v33, L"nGamingTime", v5);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v20);
	*(_QWORD*)v35 = *v34;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v36, L"nNextPenaltyTime", v14);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v20);
	*(_QWORD*)v38 = *v37;
	*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v39, L"nRestTime", v40);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v20);
	v42 = dword_140DC4C7C;
	*(_QWORD*)v43 = *v41;
	*(_DWORD*)(v43 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v44, L"nRestRequired", v42);
	v45 = qword_140C65898;
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_1403AAAB0(v45);
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v20);
	v47 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v47 = *v46;
	*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v47, L"strNotice", v48);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v20);
	*(_QWORD*)v50 = *v49;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v51, v20);
	return 1i64;
}
// 140707A6F: variable 'v28' is possibly undefined
// 140707A81: variable 'v29' is possibly undefined
// 140707A81: variable 'v30' is possibly undefined
// 140707AAE: variable 'v32' is possibly undefined
// 140707AC0: variable 'v33' is possibly undefined
// 140707AED: variable 'v35' is possibly undefined
// 140707AFF: variable 'v36' is possibly undefined
// 140707B33: variable 'v38' is possibly undefined
// 140707B45: variable 'v39' is possibly undefined
// 140707B45: variable 'v40' is possibly undefined
// 140707B76: variable 'v43' is possibly undefined
// 140707B88: variable 'v44' is possibly undefined
// 140707BD5: variable 'v48' is possibly undefined
// 140707BFB: variable 'v50' is possibly undefined
// 140707C0D: variable 'v51' is possibly undefined
// 140B42140: using guessed type wchar_t aStrnotice[10];
// 140B42158: using guessed type wchar_t aNrestrequired[14];
// 140B42178: using guessed type wchar_t aNresttime[10];
// 140B42190: using guessed type wchar_t aNnextpenaltyti[17];
// 140B421B8: using guessed type wchar_t aNgamingtime[12];
// 140B421D0: using guessed type wchar_t aEhealthygaming[21];
// 140B42200: using guessed type wchar_t aBenforce[9];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4C70: using guessed type int dword_140DC4C70;
// 140DC4C74: using guessed type int dword_140DC4C74;
// 140DC4C78: using guessed type int dword_140DC4C78;
// 140DC4C7C: using guessed type int dword_140DC4C7C;

