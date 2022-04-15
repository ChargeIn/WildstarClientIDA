//----- (000000014069CB10) ----------------------------------------------------
__int64 __fastcall sub_14069CB10(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	unsigned __int8* v5; // rbp
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // edi
	_QWORD* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rdx
	int v12; // r11d
	_QWORD* v13; // rax
	__int64 v14; // r11
	__int64 v15; // rdx
	_QWORD* v16; // rax
	__int64 v17; // r11
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r11
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r11
	__int64 v24; // rdx
	_QWORD* v25; // rax
	__int64 v26; // r11
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // r11
	__int64 v30; // rdx
	_QWORD* v31; // rax
	__int64 v32; // r11
	__int64 v33; // rdx
	_QWORD* v34; // rax
	__int64 v35; // r11
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // r11
	__int64 v39; // rdx
	_QWORD* v40; // rax
	__int64 v41; // r11
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r11
	__int64 v45; // rdx
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0 && (v5 = (unsigned __int8*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8))) != 0i64)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v6 = a1[2];
		v7 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		a1[2] += 16i64;
		v8 = sub_1400578C0((__int64)a1);
		v9 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		v10 = a1[2];
		*(_QWORD*)v10 = *v9;
		*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v11, L"eWarriorAssault", v12);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[881];
		v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v15, L"eWarriorSupport", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[882];
		v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v17 = *v16;
		*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v18, L"eEngineerAssault", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[883];
		v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v21, L"eEngineerSupport", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[884];
		v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v23 = *v22;
		*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v24, L"eEsperAssault", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[885];
		v25 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v27, L"eEsperSupport", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[886];
		v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v29 = *v28;
		*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v30, L"eMedicAssault", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[887];
		v31 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v32 = *v31;
		*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v33, L"eMedicSupport", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[888];
		v34 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v35 = *v34;
		*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v36, L"eStalkerAssault", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[889];
		v37 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v38 = *v37;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v39, L"eStalkerSupport", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[890];
		v40 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v41 = *v40;
		*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v42, L"eSpellslingerAssault", v6);
		a1[2] -= 16i64;
		LODWORD(v6) = v5[891];
		v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v44 = *v43;
		*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v45, L"eSpellslingerSupport", v6);
		a1[2] -= 16i64;
		v46 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v8);
		*(_QWORD*)v47 = *v46;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v48, v8);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14069CB48: variable 'v3' is possibly undefined
// 14069CBE3: variable 'v11' is possibly undefined
// 14069CBE3: variable 'v12' is possibly undefined
// 14069CC1D: variable 'v14' is possibly undefined
// 14069CC2D: variable 'v15' is possibly undefined
// 14069CC67: variable 'v17' is possibly undefined
// 14069CC77: variable 'v18' is possibly undefined
// 14069CCB1: variable 'v20' is possibly undefined
// 14069CCC1: variable 'v21' is possibly undefined
// 14069CCFB: variable 'v23' is possibly undefined
// 14069CD0B: variable 'v24' is possibly undefined
// 14069CD45: variable 'v26' is possibly undefined
// 14069CD55: variable 'v27' is possibly undefined
// 14069CD8F: variable 'v29' is possibly undefined
// 14069CD9F: variable 'v30' is possibly undefined
// 14069CDD9: variable 'v32' is possibly undefined
// 14069CDE9: variable 'v33' is possibly undefined
// 14069CE23: variable 'v35' is possibly undefined
// 14069CE33: variable 'v36' is possibly undefined
// 14069CE6D: variable 'v38' is possibly undefined
// 14069CE7D: variable 'v39' is possibly undefined
// 14069CEB7: variable 'v41' is possibly undefined
// 14069CEC7: variable 'v42' is possibly undefined
// 14069CF01: variable 'v44' is possibly undefined
// 14069CF11: variable 'v45' is possibly undefined
// 14069CF37: variable 'v47' is possibly undefined
// 14069CF49: variable 'v48' is possibly undefined
// 140B34958: using guessed type wchar_t aEmedicassault[14];
// 140B34978: using guessed type wchar_t aEmedicsupport[14];
// 140B34998: using guessed type wchar_t aEesperassault[14];
// 140B349B8: using guessed type wchar_t aEespersupport[14];
// 140B349D8: using guessed type wchar_t aEengineerassau[17];
// 140B34A00: using guessed type wchar_t aEengineersuppo[17];
// 140B34A28: using guessed type wchar_t aEwarriorassaul[16];
// 140B34A48: using guessed type wchar_t aEwarriorsuppor[16];
// 140B34C78: using guessed type wchar_t aEspellslingera[21];
// 140B34CA8: using guessed type wchar_t aEspellslingers[21];
// 140B34CD8: using guessed type wchar_t aEstalkerassaul[16];
// 140B34CF8: using guessed type wchar_t aEstalkersuppor[16];

