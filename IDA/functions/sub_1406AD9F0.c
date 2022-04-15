//----- (00000001406AD9F0) ----------------------------------------------------
__int64 __fastcall sub_1406AD9F0(__int64 a1, int a2, _DWORD* a3, __int64 a4)
{
	__int64 v4; // rbp
	int v9; // ebx
	int v10; // esi
	_DWORD* v11; // r8
	__int64 v12; // rax
	int v13; // eax
	bool v14; // zf
	__int64 v15; // rax
	int v16; // ebp
	int v17; // r15d
	__int64 v18; // r8
	__int64 v19; // rcx
	int* v21; // rax
	__int64 v22; // r8
	__int64 v23; // rbx
	__int64 v24; // rax
	int v25; // ebx
	__int64 v26; // rcx
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int16* v29; // r10
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	int v33; // r11d
	_QWORD* v34; // rax
	__int64 v35; // r11
	__int64 v36; // rdx
	int v37; // r10d
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	int v44; // r11d
	_QWORD* v45; // rax
	__int64 v46; // r10
	__int64 v47; // rdx
	_QWORD* v48; // rax
	__int64 v49; // rdx
	__int64 v50; // r10
	__int64 v51; // rdx

	v4 = qword_140C659F0;
	v9 = 0;
	v10 = 0;
	if (sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824)))
	{
		v12 = sub_1405B1510(*(_QWORD**)(v4 + 824));
		v11 = (_DWORD*)(v12 + 8);
		if (v12 == -8)
			goto LABEL_12;
		v13 = a3[6];
		v10 = (*((unsigned __int8*)v11 + ((unsigned __int64)(unsigned int)a3[9] >> 3) + 104) >> (a3[9] & 7)) & 1;
		if ((v13 & 0x200) != 0)
		{
			v14 = v11[22] == *a3;
		}
		else if ((v13 & 0x40) != 0)
		{
			v14 = v11[20] == *a3;
		}
		else
		{
			if ((v13 & 0x100) == 0)
				goto LABEL_11;
			v14 = v11[21] == *a3;
		}
		LOBYTE(v9) = v14;
	LABEL_11:
		if (v10)
			goto LABEL_16;
		goto LABEL_12;
	}
	v11 = 0i64;
LABEL_12:
	if (v11[10] == 5)
	{
		v15 = *(_QWORD*)(*(_QWORD*)(qword_140C659F0 + 824) + 40i64);
		if (v15)
		{
			if (v15 != -8)
				v10 = (*(unsigned __int8*)(((unsigned __int64)(unsigned int)a3[9] >> 3) + v15 + 8 + 104) >> (a3[9] & 7)) & 1;
		}
	}
LABEL_16:
	v16 = 0;
	v17 = 1;
	if (!v10)
	{
		v18 = (unsigned int)a3[7];
		if ((_DWORD)v18)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					*(_QWORD*)(qword_140C65898 + 120),
					v18,
					0i64,
					0i64,
					0))
			{
				if (!v9 && !a3[15])
					return 0i64;
				v21 = (int*)sub_14044FB30(v19, a3[15]);
				if (!v9 && (!v21 || !v21[3] && !v21[6]))
					return 0i64;
				if (v21)
					v16 = *v21;
				v17 = 0;
			}
		}
	}
	if (!v9)
	{
		v22 = (unsigned int)a3[8];
		if ((_DWORD)v22)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					*(_QWORD*)(qword_140C65898 + 120),
					v22,
					0i64,
					0i64,
					0))
				return 0i64;
		}
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v23 = *(_QWORD*)(a1 + 16);
	v24 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v23 + 8) = 5;
	*(_QWORD*)v23 = v24;
	*(_QWORD*)(a1 + 16) += 16i64;
	v25 = sub_1400578C0(a1);
	sub_14034BDD0(v26, a3[1]);
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
	v28 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v28 = *v27;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v28, L"strName", v29);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
	*(_QWORD*)v31 = *v30;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v32, L"nId", v33);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
	*(_QWORD*)v35 = *v34;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v36, L"nCost", v37);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v38 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
	*(_QWORD*)v39 = *v38;
	*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v40, L"eType", a2);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
	*(_QWORD*)v42 = *v41;
	*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v43, L"eCurrencyType", v44);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
	*(_QWORD*)v46 = *v45;
	*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v47, L"eGroupCurrencyType", 0);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
	*(_QWORD*)v50 = *v48;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v48 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v17)
		v16 = 0;
	sub_1400F06F0(a1, v49, L"kUpsellLink", v16);
	*(_QWORD*)(a1 + 16) -= 16i64;
	sub_1400FB1D0(a4);
	sub_1400579E0(a1, v51, v25);
	return 1i64;
}
// 1406ADB36: variable 'v19' is possibly undefined
// 1406ADBD8: variable 'v26' is possibly undefined
// 1406ADC14: variable 'v29' is possibly undefined
// 1406ADC44: variable 'v31' is possibly undefined
// 1406ADC56: variable 'v32' is possibly undefined
// 1406ADC56: variable 'v33' is possibly undefined
// 1406ADC97: variable 'v35' is possibly undefined
// 1406ADCA9: variable 'v36' is possibly undefined
// 1406ADCA9: variable 'v37' is possibly undefined
// 1406ADCD6: variable 'v39' is possibly undefined
// 1406ADCE8: variable 'v40' is possibly undefined
// 1406ADD19: variable 'v42' is possibly undefined
// 1406ADD2B: variable 'v43' is possibly undefined
// 1406ADD2B: variable 'v44' is possibly undefined
// 1406ADD58: variable 'v46' is possibly undefined
// 1406ADD6A: variable 'v47' is possibly undefined
// 1406ADD94: variable 'v50' is possibly undefined
// 1406ADDAF: variable 'v49' is possibly undefined
// 1406ADDC9: variable 'v51' is possibly undefined
// 140B366F8: using guessed type wchar_t aEgroupcurrency_1[19];
// 140B36720: using guessed type wchar_t aKupselllink_0[12];
// 140B36738: using guessed type wchar_t aEtype_29[6];
// 140B36748: using guessed type wchar_t aEcurrencytype_5[14];
// 140B36768: using guessed type wchar_t aNid_29[4];
// 140B36770: using guessed type wchar_t aNcost_4[6];
// 140B36790: using guessed type wchar_t aStrname_81[8];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C659F0: using guessed type __int64 qword_140C659F0;

