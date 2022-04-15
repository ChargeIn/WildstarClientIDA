#include "../winhttp.h"

//----- (000000014041C210) ----------------------------------------------------
__int64 __fastcall sub_14041C210(_QWORD* a1)
{
	int* v2; // r14
	__int64** v3; // rax
	__int64 v4; // rbp
	__int64 result; // rax
	__int64 v6; // rcx
	int v7; // r15d
	int v8; // eax
	__int64 v9; // rdx
	unsigned __int64 v10; // rcx
	int v11; // r13d
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // r12d
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int64 v18; // rdi
	unsigned __int64* v19; // rdx
	unsigned __int64 v20; // r8
	_DWORD* v21; // rcx
	__int64* v22; // rax
	__int64 v23; // rcx
	int v24; // r15d
	_QWORD* v25; // rax
	__int64 v26; // rdx
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // r8
	_DWORD* v29; // rcx
	__int64* v30; // rax
	_QWORD* v31; // rax
	__int64 v32; // r10
	unsigned __int64* v33; // rdx
	_DWORD* v34; // rcx
	__int64* v35; // rax
	__int64 v36; // rcx
	int v37; // edx
	__int64 v38; // rax
	_QWORD* v39; // rax
	__int64 v40; // rdx
	unsigned __int16* v41; // r10
	__int64 v42; // rdi
	__int64 v43; // rax
	int v44; // ecx
	int v45; // edi
	__int64 v46; // rdi
	_QWORD* v47; // rax
	__int64 v48; // rcx
	__int64 v49; // rdi
	__int64 v50; // rax
	__int64 v51; // r9
	_QWORD* v52; // rax
	__int64 v53; // rdx
	__int64 v54; // [rsp+20h] [rbp-68h] BYREF
	__int64 v55; // [rsp+28h] [rbp-60h]
	__int64 v56; // [rsp+30h] [rbp-58h]
	__int64(__fastcall * *v57)(); // [rsp+40h] [rbp-48h] BYREF
	int v58; // [rsp+48h] [rbp-40h]
	_QWORD* v59; // [rsp+50h] [rbp-38h]
	int v60; // [rsp+58h] [rbp-30h]

	v2 = sub_140417BF0(a1, 1u);
	v3 = (__int64**)sub_140417660((__int64)a1, 1);
	if (v3 && *v3)
		v4 = **v3;
	else
		v4 = 0i64;
	if (!v2)
	{
		result = 1i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return result;
	}
	v6 = (unsigned int)v2[95];
	if ((unsigned int)(v6 - 1) > 5)
	{
		if ((_DWORD)v6 == 20)
			goto LABEL_9;
	LABEL_15:
		v7 = 31;
		goto LABEL_10;
	}
	if ((unsigned int)(v6 - 1) >= 7)
		goto LABEL_15;
LABEL_9:
	v7 = 0;
LABEL_10:
	v8 = sub_14041F750(v6, v2);
	v9 = a1[4];
	v59 = a1;
	v10 = *(_QWORD*)(v9 + 112);
	v11 = v8;
	v57 = off_140B569F0;
	v60 = 1;
	if (*(_QWORD*)(v9 + 120) >= v10)
		sub_14005E2C0((__int64)a1);
	v12 = a1[2];
	v13 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	a1[2] += 16i64;
	v14 = sub_1400578C0((__int64)a1);
	v15 = *(_QWORD*)(a1[4] + 160i64);
	v58 = v14;
	v16 = sub_14005C3C0(v15, v14);
	v17 = a1[2];
	*(_QWORD*)v17 = *v16;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	a1[2] += 16i64;
	v18 = -1i64;
	v19 = (unsigned __int64*)sub_14018F0E0(&v54, L"bCanUnlock")[1];
	if (v19)
	{
		v20 = -1i64;
		do
			++v20;
		while (*((_BYTE*)v19 + v20));
		sub_140058710((__int64)a1, v19, v20);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v55)
		sub_14018B900(v55, 0);
	v21 = (_DWORD*)a1[2];
	v21[2] = 1;
	*v21 = v7 == 0;
	a1[2] += 16i64;
	v22 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v22, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v24 = sub_1403B91D0(v23, *v2);
	v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
	v26 = a1[2];
	*(_QWORD*)v26 = *v25;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
	a1[2] += 16i64;
	v27 = (unsigned __int64*)sub_14018F0E0(&v54, L"bUnlocked")[1];
	if (v27)
	{
		v28 = -1i64;
		do
			++v28;
		while (*((_BYTE*)v27 + v28));
		sub_140058710((__int64)a1, v27, v28);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v55)
		sub_14018B900(v55, 0);
	v29 = (_DWORD*)a1[2];
	v29[2] = 1;
	*v29 = v24 != 0;
	a1[2] += 16i64;
	v30 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v30, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
	*(_QWORD*)v32 = *v31;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
	a1[2] += 16i64;
	v33 = (unsigned __int64*)sub_14018F0E0(&v54, L"bCanUseInCostume")[1];
	if (v33)
	{
		do
			++v18;
		while (*((_BYTE*)v33 + v18));
		sub_140058710((__int64)a1, v33, v18);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v55)
		sub_14018B900(v55, 0);
	v34 = (_DWORD*)a1[2];
	v34[2] = 1;
	*v34 = v11 == 0;
	a1[2] += 16i64;
	v35 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v35, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 48i64;
	if (v11 == 144)
	{
		v36 = (unsigned int)v2[102];
		if ((_DWORD)v36)
		{
			v38 = sub_1402259C0(v36);
			v37 = 0;
			if (v38)
				v37 = *(_DWORD*)(v38 + 56);
		}
		else
		{
			v37 = 0;
		}
		sub_14034BDD0(v36, v37);
		v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
		v40 = a1[2];
		*(_QWORD*)v40 = *v39;
		*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v40, L"strCanUseFailReason", v41);
		a1[2] -= 16i64;
	}
	if (v4)
	{
		v42 = *(_QWORD*)(v4 + 72);
		if (!v42)
			v42 = *(_QWORD*)(v4 + 64) + 8i64;
		v43 = sub_140200220(0x4B4u);
		if (v43)
			v44 = *(_DWORD*)(v43 + 4);
		else
			v44 = 75;
		v45 = *(_DWORD*)(v42 + 12);
		v55 = 1i64;
		v56 = 0i64;
		v46 = (unsigned int)(v44 * v45);
		v47 = (_QWORD*)sub_140059170(a1, 0x18ui64);
		v48 = v55;
		*v47 = v46;
		v47[1] = v48;
		v47[2] = v56;
		v49 = a1[4];
		v50 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
		v51 = a1[2];
		v54 = v50;
		LODWORD(v55) = 4;
		sub_14005E8E0((__int64)a1, v49 + 160, (int*)&v54, v51);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		sub_1400FB540((__int64)&v57);
		a1[2] -= 16i64;
	}
	v52 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v14);
	v53 = a1[2];
	*(_QWORD*)v53 = *v52;
	*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v53, v14);
	return 1i64;
}
// 14041C3E9: variable 'v23' is possibly undefined
// 14041C4CB: variable 'v32' is possibly undefined
// 14041C597: variable 'v36' is possibly undefined
// 14041C5D4: variable 'v41' is possibly undefined
// 140AFA230: using guessed type wchar_t aStrcanusefailr[20];
// 140AFA258: using guessed type wchar_t aBcanuseincostu[17];
// 140AFA280: using guessed type wchar_t aBunlocked_0[10];
// 140AFA298: using guessed type wchar_t aBcanunlock[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

