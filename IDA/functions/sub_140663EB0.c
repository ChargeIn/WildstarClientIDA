//----- (0000000140663EB0) ----------------------------------------------------
__int64 __fastcall sub_140663EB0(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD* v4; // rsi
	int v5; // r12d
	unsigned __int64 v6; // r15
	__int64 v7; // r14
	__int64 v8; // r14
	__int64 v9; // rdi
	__int64 v10; // rax
	unsigned __int16* v11; // r15
	int v12; // r14d
	unsigned __int64 v13; // r15
	__int64 v14; // r14
	__int64 v15; // r14
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rsi
	__int64 v19; // rdi
	__int64 v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rcx
	_QWORD* v24; // rax
	__int64 v25; // rdx
	unsigned __int16* v26; // r10
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = *(_QWORD**)v2;
	v5 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v2 + 8i64));
	if (!(unsigned int)sub_140553030((__int64)v4, 1))
		goto LABEL_14;
	v6 = v4[18];
	v7 = *(_QWORD*)(qword_140C65898 + 120);
	if (v7)
		v8 = *(_QWORD*)(v7 + 280);
	else
		v8 = 0i64;
	if (!v8)
		goto LABEL_26;
	v9 = 0i64;
	if (!v6)
		goto LABEL_14;
	while (1)
	{
		v10 = sub_1404835C0(qword_140C65918, *(_DWORD*)(v4[17] + 4 * v9));
		if (v10)
		{
			if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 48i64))(v8, *(unsigned int*)(v10 + 132)))
				break;
		}
		if (++v9 >= v6)
			goto LABEL_14;
	}
	v11 = L"Icon_QuestComplete";
	v12 = *(_DWORD*)(v4[17] + 4 * v9);
	if (!v12)
	{
	LABEL_14:
		if ((*(_BYTE*)(v4[1] + 12i64) & 4) == 0 || !v5 || (unsigned int)sub_140552550((__int64)v4, -8193) && v5 != 1)
			goto LABEL_26;
		v13 = v4[16];
		v14 = *(_QWORD*)(qword_140C65898 + 120);
		v15 = v14 ? *(_QWORD*)(v14 + 280) : 0i64;
		if (!v15)
			goto LABEL_26;
		v16 = 0i64;
		if (!v13)
			goto LABEL_26;
		while (1)
		{
			v17 = sub_1404835C0(qword_140C65918, *(_DWORD*)(v4[15] + 4 * v16));
			if (v17)
			{
				if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v15 + 48i64))(
					v15,
					*(unsigned int*)(v17 + 132)))
				{
					break;
				}
			}
			if (++v16 >= v13)
				goto LABEL_26;
		}
		v11 = L"Icon_QuestNewEpisode";
		v12 = *(_DWORD*)(v4[15] + 4 * v16);
		if (v5 == 1)
			v11 = L"Icon_QuestIncomplete";
		if (!v12)
			goto LABEL_26;
	}
	v18 = sub_1404835C0(qword_140C65918, v12);
	if (v18)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v19 = a1[2];
		v20 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v19 + 8) = 5;
		*(_QWORD*)v19 = v20;
		a1[2] += 16i64;
		LODWORD(v19) = sub_1400578C0((__int64)a1);
		v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
		v22 = a1[2];
		*(_QWORD*)v22 = *v21;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v22, L"idUnit", v12);
		a1[2] -= 16i64;
		sub_14034BDD0(v23, *(_DWORD*)(v18 + 8));
		v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
		v25 = a1[2];
		*(_QWORD*)v25 = *v24;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v25, L"strName", v26);
		a1[2] -= 16i64;
		v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
		*(_QWORD*)v28 = *v27;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v29, L"strSprite", v11);
		a1[2] -= 16i64;
		v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v19);
		*(_QWORD*)v31 = *v30;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v32, v19);
		return 1i64;
	}
LABEL_26:
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140664140: variable 'v23' is possibly undefined
// 14066417C: variable 'v26' is possibly undefined
// 1406641A9: variable 'v28' is possibly undefined
// 1406641BB: variable 'v29' is possibly undefined
// 1406641E1: variable 'v31' is possibly undefined
// 1406641F3: variable 'v32' is possibly undefined
// 140B2E4B0: using guessed type wchar_t aIconQuestcompl[19];
// 140B2E640: using guessed type wchar_t aStrsprite_3[10];
// 140B2E658: using guessed type wchar_t aIdunit[7];
// 140B2E668: using guessed type wchar_t aStrname_59[8];
// 140B2E678: using guessed type wchar_t aIconQuestincom[21];
// 140B2E6A8: using guessed type wchar_t aIconQuestnewep[21];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;

