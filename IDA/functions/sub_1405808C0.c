//----- (00000001405808C0) ----------------------------------------------------
__int64 __fastcall sub_1405808C0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // edx
	__int16* v7; // rax
	unsigned __int64 v8; // rdx
	float v9; // xmm6_4
	unsigned __int16* v10; // rdi
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	int v25; // r11d
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	int v29; // r11d
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	int v33; // r11d
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	__int64 v37; // rdi
	unsigned __int64* v38; // rdx
	unsigned __int64 v39; // r8
	__int64 v40; // rax
	__int64* v41; // rax
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
	unsigned __int16* v57; // r11
	_QWORD* v58; // rax
	__int64 v59; // r10
	__int64 v60; // rdx
	int v61; // r11d
	__int64 result; // rax
	__int64 v63; // [rsp+20h] [rbp-38h] BYREF
	__int64 v64; // [rsp+28h] [rbp-30h]
	float v65; // [rsp+60h] [rbp+8h] BYREF

	v4 = sub_1401F31E0(*(_DWORD*)(a1 + 28));
	if (v4)
	{
		if (*(_DWORD*)(a1 + 32) == 1)
			v6 = *(_DWORD*)(v4 + 20);
		else
			v6 = *(_DWORD*)(v4 + 16);
	}
	else
	{
		v6 = 249089;
	}
	v7 = sub_14034BDD0(v5, v6);
	v8 = *(_QWORD*)(a1 + 48);
	v9 = 0.0;
	v10 = (unsigned __int16*)v7;
	v65 = 0.0;
	if (v8)
	{
		sub_1401E83A0(&v65, v8);
		if (v65 >= 0.0)
			v9 = 0.000001;
		else
			v9 = -v65;
	}
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v13, L"strName", v14);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v17 = *(_QWORD*)(v16 + 16);
	*(_QWORD*)v17 = *v15;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v16 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v17, L"nRank", v18 + 1);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v21 = *(_QWORD*)(v20 + 16);
	*(_QWORD*)v21 = *v19;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(v20 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v21, L"strClass", v10);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v24 = *(_QWORD*)(v23 + 16);
	*(_QWORD*)v24 = *v22;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v23 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v24, L"eClass", v25);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v28 = *(_QWORD*)(v27 + 16);
	*(_QWORD*)v28 = *v26;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(v27 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v28, L"ePathType", v29);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v32 = *(_QWORD*)(v31 + 16);
	*(_QWORD*)v32 = *v30;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v30 + 2);
	*(_QWORD*)(v31 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v32, L"nLevel", v33);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v36 = *(_QWORD*)(v35 + 16);
	*(_QWORD*)v36 = *v34;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(v35 + 16) += 16i64;
	v37 = *(_QWORD*)(a2 + 16);
	v38 = (unsigned __int64*)sub_14018F0E0(&v63, L"fLastOnline")[1];
	if (v38)
	{
		v39 = -1i64;
		do
			++v39;
		while (*((_BYTE*)v38 + v39));
		sub_140058710(v37, v38, v39);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v37 + 16) + 8i64) = 0;
		*(_QWORD*)(v37 + 16) += 16i64;
	}
	if (v64)
		sub_14018B900(v64, 0);
	v40 = *(_QWORD*)(v37 + 16);
	*(_DWORD*)(v40 + 8) = 3;
	*(double*)v40 = v9;
	*(_QWORD*)(v37 + 16) += 16i64;
	v41 = (__int64*)sub_1400580E0(v37, -3);
	sub_14005EA50(v37, v41, (int*)(*(_QWORD*)(v37 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v37 + 16) - 16i64));
	*(_QWORD*)(v37 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v44 = *(_QWORD*)(v43 + 16);
	*(_QWORD*)v44 = *v42;
	*(_DWORD*)(v44 + 8) = *((_DWORD*)v42 + 2);
	*(_QWORD*)(v43 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v44, L"nPvPWins", v45);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v48 = *(_QWORD*)(v47 + 16);
	*(_QWORD*)v48 = *v46;
	*(_DWORD*)(v48 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(v47 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v48, L"nPvPLosses", v49);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v52 = *(_QWORD*)(v51 + 16);
	*(_QWORD*)v52 = *v50;
	*(_DWORD*)(v52 + 8) = *((_DWORD*)v50 + 2);
	*(_QWORD*)(v51 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v52, L"nPvPDraws", v53);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v54 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v56 = *(_QWORD*)(v55 + 16);
	*(_QWORD*)v56 = *v54;
	*(_DWORD*)(v56 + 8) = *((_DWORD*)v54 + 2);
	*(_QWORD*)(v55 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v56, L"strNote", v57);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v58 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v60 = *(_QWORD*)(v59 + 16);
	*(_QWORD*)v60 = *v58;
	*(_DWORD*)(v60 + 8) = *((_DWORD*)v58 + 2);
	*(_QWORD*)(v59 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v60, L"nCommunityReservedPlotIndex", v61);
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1405808FC: variable 'v5' is possibly undefined
// 14058095A: variable 'v12' is possibly undefined
// 14058097D: variable 'v14' is possibly undefined
// 1405809A6: variable 'v16' is possibly undefined
// 1405809AA: variable 'v18' is possibly undefined
// 1405809EF: variable 'v20' is possibly undefined
// 140580A3B: variable 'v23' is possibly undefined
// 140580A5E: variable 'v25' is possibly undefined
// 140580A87: variable 'v27' is possibly undefined
// 140580AAA: variable 'v29' is possibly undefined
// 140580AD3: variable 'v31' is possibly undefined
// 140580AF6: variable 'v33' is possibly undefined
// 140580B1B: variable 'v35' is possibly undefined
// 140580BEB: variable 'v43' is possibly undefined
// 140580C0E: variable 'v45' is possibly undefined
// 140580C37: variable 'v47' is possibly undefined
// 140580C5A: variable 'v49' is possibly undefined
// 140580C83: variable 'v51' is possibly undefined
// 140580CA6: variable 'v53' is possibly undefined
// 140580CCF: variable 'v55' is possibly undefined
// 140580CF2: variable 'v57' is possibly undefined
// 140580D1B: variable 'v59' is possibly undefined
// 140580D3E: variable 'v61' is possibly undefined
// 140B1F098: using guessed type wchar_t aFlastonline_0[12];
// 140B1F0B0: using guessed type wchar_t aNlevel_3[7];
// 140B1F0C0: using guessed type wchar_t aNpvplosses[11];
// 140B1F0D8: using guessed type wchar_t aNpvpwins[9];
// 140B1F0F0: using guessed type wchar_t aStrclass_0[9];
// 140B1F108: using guessed type wchar_t aNrank[6];
// 140B1F118: using guessed type wchar_t aEpathtype[10];
// 140B1F130: using guessed type wchar_t aEclass[7];
// 140B1F180: using guessed type wchar_t aStrname_32[8];
// 140B1F2E8: using guessed type wchar_t aStrnote_0[8];
// 140B1F2F8: using guessed type wchar_t aNpvpdraws[10];
// 140B1F320: using guessed type wchar_t aNcommunityrese[28];
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

