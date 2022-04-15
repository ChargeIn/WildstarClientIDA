//----- (00000001406AD5F0) ----------------------------------------------------
__int64 __fastcall sub_1406AD5F0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r8
	__int64 result; // rax
	__int16* v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // rcx
	unsigned __int16* v11; // r14
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // eax
	__int64 v15; // rcx
	int v16; // ebx
	_QWORD* v17; // rax
	__int64 v18; // rdx
	int v19; // r10d
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	__int64 v24; // rcx
	_QWORD* v25; // rax
	__int64 v26; // r11
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	__int64 v30; // r10
	int v31; // r9d
	unsigned __int16* v32; // r8
	_QWORD* v33; // rax
	__int64 v34; // r11
	__int64 v35; // rdx
	int v36; // r10d
	_QWORD* v37; // rax
	__int64 v38; // rdx
	int v39; // r10d
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	int v43; // r11d
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	_QWORD* v47; // rax
	__int64 v48; // r11
	__int64 v49; // rdx
	int v50; // r10d
	_QWORD* v51; // rax
	__int64 v52; // r10
	__int64 v53; // rdx
	int v54; // r11d
	__int64 v55; // rax
	__int64 v56; // rdx
	__int64(__fastcall * *v57)(); // [rsp+30h] [rbp-38h] BYREF
	int v58; // [rsp+38h] [rbp-30h]
	_QWORD* v59; // [rsp+40h] [rbp-28h]
	int v60; // [rsp+48h] [rbp-20h]
	int v61; // [rsp+78h] [rbp+10h] BYREF

	v4 = *(unsigned int*)(a2 + 36);
	if (!(_DWORD)v4
		|| (result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				*(_QWORD*)(qword_140C65898 + 120),
				v4,
				0i64,
				0i64,
				0),
			(_DWORD)result))
	{
		v8 = sub_14034BDD0((__int64)a1, *(_DWORD*)(a2 + 12));
		v9 = a1[4];
		v59 = a1;
		v10 = *(_QWORD*)(v9 + 112);
		v11 = (unsigned __int16*)v8;
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
		v16 = v14;
		v58 = v14;
		v17 = sub_14005C3C0(v15, v14);
		v18 = a1[2];
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v18, L"nId", v19);
		a1[2] -= 16i64;
		v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v22, L"nCost", v23);
		a1[2] -= 16i64;
		v24 = *(_QWORD*)(a1[4] + 160i64);
		if (qword_140C7DFE0)
		{
			v25 = sub_14005C3C0(v24, v16);
			*(_QWORD*)v26 = *v25;
			*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v27, L"eCurrencyType", 15);
			a1[2] -= 16i64;
			v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v31 = 1;
			v32 = L"eGroupCurrencyType";
		}
		else
		{
			v33 = sub_14005C3C0(v24, v16);
			*(_QWORD*)v34 = *v33;
			*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v35, L"eCurrencyType", v36);
			a1[2] -= 16i64;
			v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
			v31 = 0;
			v32 = L"eGroupCurrencyType";
		}
		*(_QWORD*)v30 = *v28;
		*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v29, v32, v31);
		a1[2] -= 16i64;
		v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		v38 = a1[2];
		*(_QWORD*)v38 = *v37;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v38, L"nHookAssetId", v39);
		a1[2] -= 16i64;
		v40 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		*(_QWORD*)v41 = *v40;
		*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v42, L"nFlags", v43);
		a1[2] -= 16i64;
		v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		*(_QWORD*)v45 = *v44;
		*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v46, L"strName", v11);
		a1[2] -= 16i64;
		sub_1406A9170(*(_DWORD*)(a2 + 8));
		v47 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		*(_QWORD*)v48 = *v47;
		*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v49, L"eHookType", v50);
		a1[2] -= 16i64;
		v51 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
		*(_QWORD*)v52 = *v51;
		*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v53, L"eDecorType", v54);
		a1[2] -= 16i64;
		v55 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(a2 + 40), *(_QWORD*)(qword_140C65898 + 25744));
		if (v55)
		{
			v61 = **(_DWORD**)(v55 + 112);
			if ((unsigned int)sub_1403D3470(a1, &v61))
			{
				sub_1400FB540((__int64)&v57);
				a1[2] -= 16i64;
			}
		}
		sub_1400FB1D0(a3);
		sub_1400579E0((__int64)a1, v56, v16);
		return 1i64;
	}
	return result;
}
// 1406AD64D: variable 'a1' is possibly undefined
// 1406AD6E9: variable 'v19' is possibly undefined
// 1406AD71A: variable 'v21' is possibly undefined
// 1406AD72C: variable 'v22' is possibly undefined
// 1406AD72C: variable 'v23' is possibly undefined
// 1406AD766: variable 'v26' is possibly undefined
// 1406AD778: variable 'v27' is possibly undefined
// 1406AD7BD: variable 'v34' is possibly undefined
// 1406AD7CF: variable 'v35' is possibly undefined
// 1406AD7CF: variable 'v36' is possibly undefined
// 1406AD7FC: variable 'v30' is possibly undefined
// 1406AD80E: variable 'v29' is possibly undefined
// 1406AD850: variable 'v39' is possibly undefined
// 1406AD881: variable 'v41' is possibly undefined
// 1406AD893: variable 'v42' is possibly undefined
// 1406AD893: variable 'v43' is possibly undefined
// 1406AD8C0: variable 'v45' is possibly undefined
// 1406AD8D2: variable 'v46' is possibly undefined
// 1406AD90A: variable 'v48' is possibly undefined
// 1406AD91C: variable 'v49' is possibly undefined
// 1406AD91C: variable 'v50' is possibly undefined
// 1406AD943: variable 'v52' is possibly undefined
// 1406AD95F: variable 'v53' is possibly undefined
// 1406AD95F: variable 'v54' is possibly undefined
// 1406AD9D4: variable 'v56' is possibly undefined
// 140B36540: using guessed type wchar_t aEgroupcurrency_0[19];
// 140B36568: using guessed type wchar_t aNhookassetid_0[13];
// 140B36588: using guessed type wchar_t aEgroupcurrency[19];
// 140B365B0: using guessed type wchar_t aEcurrencytype_4[14];
// 140B365D0: using guessed type wchar_t aNcost_3[6];
// 140B365E0: using guessed type wchar_t aEcurrencytype_3[14];
// 140B36600: using guessed type wchar_t aNid_28[4];
// 140B367A0: using guessed type wchar_t aEhooktype_0[10];
// 140B367B8: using guessed type wchar_t aEdecortype_0[11];
// 140B367D0: using guessed type wchar_t aNflags_1[7];
// 140B367E0: using guessed type wchar_t aStrname_80[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

