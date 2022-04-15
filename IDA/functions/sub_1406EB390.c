//----- (00000001406EB390) ----------------------------------------------------
__int64 __fastcall sub_1406EB390(_QWORD* a1)
{
	_DWORD* v2; // rbp
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // edi
	_QWORD* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdx
	int v9; // r11d
	_QWORD* v10; // rax
	__int64 v11; // r11
	__int64 v12; // rdx
	_QWORD* v13; // rax
	__int64 v14; // r11
	__int64 v15; // rdx
	_QWORD* v16; // rax
	__int64 v17; // r11
	__int64 v18; // rdx
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx

	v2 = (_DWORD*)sub_1406E8880(a1, 1u);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	v5 = sub_1400578C0((__int64)a1);
	v6 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
	v7 = a1[2];
	*(_QWORD*)v7 = *v6;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v6 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v8, L"nRed", v9);
	a1[2] -= 16i64;
	LODWORD(v3) = v2[677];
	v10 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v12, L"nGreen", v3);
	a1[2] -= 16i64;
	LODWORD(v3) = v2[678];
	v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v15, L"nBlue", v3);
	a1[2] -= 16i64;
	LODWORD(v3) = v2[679];
	v16 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
	*(_QWORD*)v17 = *v16;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v18, L"nPurple", v3);
	a1[2] -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v21, v5);
	return 1i64;
}
// 1406EB433: variable 'v8' is possibly undefined
// 1406EB433: variable 'v9' is possibly undefined
// 1406EB46C: variable 'v11' is possibly undefined
// 1406EB47C: variable 'v12' is possibly undefined
// 1406EB4B5: variable 'v14' is possibly undefined
// 1406EB4C5: variable 'v15' is possibly undefined
// 1406EB4FE: variable 'v17' is possibly undefined
// 1406EB50E: variable 'v18' is possibly undefined
// 1406EB534: variable 'v20' is possibly undefined
// 1406EB546: variable 'v21' is possibly undefined
// 140B3F598: using guessed type wchar_t aNpurple[8];
// 140B3F5A8: using guessed type wchar_t aNblue[6];
// 140B3F5B8: using guessed type wchar_t aNgreen[7];
// 140B3F5C8: using guessed type wchar_t aNred[5];

