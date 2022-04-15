//----- (0000000140021400) ----------------------------------------------------
void __fastcall sub_140021400(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	__int64 v5; // rbx
	__int64 v6; // rax
	_QWORD* v7; // rax
	__int64 v8; // rdx
	int v9; // r9d
	_QWORD* v10; // rax
	int v11; // r9d
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // rdx

	sub_140021D40(a1);
	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 400i64);
	if (*(_QWORD*)(*(_QWORD*)(v4 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v4 + 32) + 112i64))
		sub_14005E2C0(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 400i64));
	v5 = *(_QWORD*)(v4 + 16);
	v6 = sub_14005C1B0(v4, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v4 + 16) += 16i64;
	LODWORD(v5) = sub_1400578C0(v4);
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v5);
	v8 = *(_QWORD*)(v4 + 16);
	v9 = *(_DWORD*)(a2 + 8);
	*(_QWORD*)v8 = *v7;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	sub_1400F06F0(v4, v8, L"nEntitlementId", v9);
	*(_QWORD*)(v4 + 16) -= 16i64;
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v5);
	v11 = *(_DWORD*)(a2 + 12);
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	sub_1400F06F0(v4, v13, L"nCount", v11);
	*(_QWORD*)(v4 + 16) -= 16i64;
	sub_1400EA3E0(
		*(_QWORD*)(a1 + 72),
		"AccountEntitlementUpdate",
		byte_1409D09B4,
		(unsigned int)v5,
		&unk_1409D0944,
		0i64);
	sub_1400579E0(v4, v14, v5);
}
// 1400214CD: variable 'v12' is possibly undefined
// 1400214DF: variable 'v13' is possibly undefined
// 140021532: variable 'v14' is possibly undefined
// 1409D09B4: using guessed type _BYTE byte_1409D09B4[4];
// 1409ED618: using guessed type wchar_t aNentitlementid_0[15];
// 1409ED638: using guessed type wchar_t aNcount_0[7];

