#include "../winhttp.h"

//----- (00000001405A20D0) ----------------------------------------------------
void __fastcall sub_1405A20D0(_QWORD* a1, __int64 a2, __int64* a3)
{
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r14d
	__int64 v11; // rax
	int v12; // xmm1_4
	float v13; // xmm6_4
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int64* v16; // rdx
	unsigned __int64 v17; // r8
	__int64 v18; // rax
	__int64* v19; // rax
	__int64 v20; // rax
	_DWORD* v21; // rbx
	unsigned int* v22; // rsi
	__int64 v23; // rdx
	unsigned int v24; // ecx
	__int64 v25; // rax
	__int64 v26; // rax
	_QWORD* v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	__int64 v30; // r9
	_QWORD* v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // r9
	const wchar_t* v35; // rdx
	__int64 v36; // [rsp+30h] [rbp-39h] BYREF
	int v37; // [rsp+38h] [rbp-31h]
	__int64 v38; // [rsp+40h] [rbp-29h] BYREF
	__int64 v39; // [rsp+48h] [rbp-21h]
	__int64 v40; // [rsp+50h] [rbp-19h]
	__int64(__fastcall * *v41)(); // [rsp+60h] [rbp-9h] BYREF
	int v42; // [rsp+68h] [rbp-1h]
	_QWORD* v43; // [rsp+70h] [rbp+7h]
	int v44; // [rsp+78h] [rbp+Fh]
	unsigned int v45; // [rsp+D0h] [rbp+67h] BYREF
	unsigned int v46; // [rsp+E0h] [rbp+77h] BYREF
	unsigned int v47; // [rsp+E8h] [rbp+7Fh] BYREF

	if ((dword_140DC3460 & 1) == 0)
	{
		dword_140DC346C = 0;
		dword_140DC3460 |= 1u;
	}
	v43 = a1;
	v6 = a1[4];
	v41 = off_140B569F0;
	v7 = *(_QWORD*)(v6 + 112);
	v44 = 1;
	if (*(_QWORD*)(v6 + 120) >= v7)
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	v10 = sub_1400578C0((__int64)a1);
	v42 = v10;
	if (dword_140DC346C)
	{
		v12 = dword_140DC3468;
	}
	else
	{
		dword_140DC346C = 1;
		v11 = sub_140200220(0x3C2u);
		if (!v11)
		{
			dword_140DC3468 = 0;
			goto LABEL_20;
		}
		v12 = *(int*)(v11 + 24);
		dword_140DC3468 = v12;
	}
	if (*(float*)&v12 > 0.0 && sub_1405A3CF0() < 1.0)
	{
		v13 = sub_1405A3CF0();
		v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		v15 = a1[2];
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		a1[2] += 16i64;
		v16 = (unsigned __int64*)sub_14018F0E0(&v38, L"nSuccessChance")[1];
		if (v16)
		{
			v17 = -1i64;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			sub_140058710((__int64)a1, v16, v17);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v39)
			sub_14018B900(v39, 0);
		v18 = a1[2];
		*(_DWORD*)(v18 + 8) = 3;
		*(double*)v18 = v13;
		a1[2] += 16i64;
		v19 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v19, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
	}
LABEL_20:
	if (!a3)
		goto LABEL_41;
	v20 = *a3;
	if (*a3 && *(_DWORD*)(v20 + 1184))
		v21 = *(_DWORD**)(v20 + 8);
	else
		v21 = 0i64;
	if (!v20 || (v22 = (unsigned int*)(v20 + 32), !*(_DWORD*)(v20 + 1176)))
		v22 = 0i64;
	if (!v21 || !v22)
	{
	LABEL_41:
		v35 = L"tAddInfo";
	LABEL_42:
		sub_1400FB2A0(a2, (__int64)v35, v10);
		goto LABEL_43;
	}
	sub_14020DF20(v21[92]);
	v47 = 0;
	v46 = 0;
	v45 = 0;
	sub_14040EFB0(v21, v22, &v47, &v46, &v45);
	v24 = v22[76];
	if (v24 < v45)
	{
		v25 = *a3;
		if (*a3 && *(_DWORD*)(v25 + 1188))
			v26 = v25 + 744;
		else
			v26 = 0i64;
		if (v24 - *(unsigned __int8*)(v26 + 9) < v46)
		{
			v38 = 0i64;
			v39 = 1i64;
			v40 = 0i64;
			if ((unsigned int)sub_140513F30(v22, &v38, 0))
			{
				v27 = (_QWORD*)sub_140059170(a1, 0x18ui64);
				*v27 = v38;
				v27[1] = v39;
				v27[2] = v40;
				v28 = a1[4];
				v29 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
				v30 = a1[2];
				v36 = v29;
				v37 = 4;
				sub_14005E8E0((__int64)a1, v28 + 160, (int*)&v36, v30);
				a1[2] += 16i64;
				sub_140058BF0((__int64)a1, -2);
				sub_1400FB540((__int64)&v41);
				a1[2] -= 16i64;
			}
			if ((unsigned int)sub_140513F30(v22, &v38, 1))
			{
				v31 = (_QWORD*)sub_140059170(a1, 0x18ui64);
				*v31 = v38;
				v31[1] = v39;
				v31[2] = v40;
				v32 = a1[4];
				v33 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Money", 0xAui64);
				v34 = a1[2];
				v36 = v33;
				v37 = 4;
				sub_14005E8E0((__int64)a1, v32 + 160, (int*)&v36, v34);
				a1[2] += 16i64;
				sub_140058BF0((__int64)a1, -2);
				sub_1400FB540((__int64)&v41);
				a1[2] -= 16i64;
			}
			v35 = L"tAddInfo";
			goto LABEL_42;
		}
	}
LABEL_43:
	sub_1400579E0((__int64)a1, v23, v10);
}
// 1405A24E7: variable 'v23' is possibly undefined
// 140B20720: using guessed type wchar_t aTaddinfo[9];
// 140B20760: using guessed type wchar_t aTaddinfo_0[9];
// 140B20778: using guessed type wchar_t aNsuccesschance[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140DC3460: using guessed type int dword_140DC3460;
// 140DC3468: using guessed type int dword_140DC3468;
// 140DC346C: using guessed type int dword_140DC346C;

