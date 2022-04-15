//----- (00000001407697F0) ----------------------------------------------------
__int64 __fastcall sub_1407697F0(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	_QWORD* v4; // rax
	__int64 v5; // rdx
	int v6; // r10d
	_QWORD* v7; // rax
	__int64 v8; // r11
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r11
	__int64 v13; // rdx
	int v14; // r10d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int v22; // r11d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	LODWORD(v2) = sub_1400578C0(a1);
	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v5 = *v4;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v5, L"eMatchType", v6);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v9, L"nAcceptedAllies", v10);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v13, L"nAcceptedEnemies", v14);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v17, L"nTotalAllies", v18);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F06F0(a1, v21, L"nTotalEnemies", v22);
	*(_QWORD*)(a1 + 16) -= 16i64;
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v2);
	*(_QWORD*)v24 = *v23;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v25, v2);
	return 1i64;
}
// 140769881: variable 'v6' is possibly undefined
// 1407698B5: variable 'v8' is possibly undefined
// 1407698C7: variable 'v9' is possibly undefined
// 1407698C7: variable 'v10' is possibly undefined
// 1407698FB: variable 'v12' is possibly undefined
// 14076990D: variable 'v13' is possibly undefined
// 14076990D: variable 'v14' is possibly undefined
// 140769948: variable 'v16' is possibly undefined
// 14076995A: variable 'v17' is possibly undefined
// 14076995A: variable 'v18' is possibly undefined
// 140769995: variable 'v20' is possibly undefined
// 1407699A7: variable 'v21' is possibly undefined
// 1407699A7: variable 'v22' is possibly undefined
// 1407699CD: variable 'v24' is possibly undefined
// 1407699DF: variable 'v25' is possibly undefined
// 140B4E6E8: using guessed type wchar_t aNtotalenemies[14];
// 140B4E708: using guessed type wchar_t aNtotalallies[13];
// 140B4E728: using guessed type wchar_t aNacceptedenemi[17];
// 140B4E750: using guessed type wchar_t aNacceptedallie[16];
// 140B4E770: using guessed type wchar_t aEmatchtype_3[11];
// 140C65B98: using guessed type __int64 qword_140C65B98;

