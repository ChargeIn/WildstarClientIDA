//----- (0000000140732910) ----------------------------------------------------
__int64 __fastcall sub_140732910(__int64 a1)
{
	unsigned __int16* v1; // rsi
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 result; // rax
	__int64 v10; // r14
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // ebx
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rdx
	unsigned __int16* v20; // r10
	unsigned __int64 v21; // rcx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	result = sub_1401F4720(v8);
	v10 = result;
	if (result)
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v11 = *(_QWORD*)(a1 + 16);
		v12 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		*(_QWORD*)(a1 + 16) += 16i64;
		v13 = sub_1400578C0(a1);
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		v15 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v15, L"id", v16);
		*(_QWORD*)(a1 + 16) -= 16i64;
		sub_14034BDD0(v17, *(_DWORD*)(v10 + 16));
		v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		v19 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v19, L"strName", v20);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v21 = *(_QWORD*)(v10 + 24);
		if (v21)
		{
			if (v21 <= qword_140C3FE70)
				v1 = (unsigned __int16*)(v21 + qword_140C3FE68);
		}
		v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v23 = *v22;
		*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v24, L"strPreviewSwatch", v1);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v27, v13);
		return 1i64;
	}
	return result;
}
// 140732A13: variable 'v16' is possibly undefined
// 140732A21: variable 'v17' is possibly undefined
// 140732A5D: variable 'v20' is possibly undefined
// 140732AA9: variable 'v23' is possibly undefined
// 140732ABB: variable 'v24' is possibly undefined
// 140732AE1: variable 'v26' is possibly undefined
// 140732AF3: variable 'v27' is possibly undefined
// 140B47270: using guessed type wchar_t aStrpreviewswat_0[17];
// 140B47298: using guessed type wchar_t aStrname_96[8];
// 140B472A8: using guessed type wchar_t aId_24[3];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63650: using guessed type __int64 qword_140C63650;

