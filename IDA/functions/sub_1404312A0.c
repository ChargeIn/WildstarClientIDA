//----- (00000001404312A0) ----------------------------------------------------
void __fastcall sub_1404312A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rdi
	__int64 v8; // rbx
	__int64 v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rdx
	int v12; // r10d
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	int v16; // r11d
	__int64 v17; // rdx
	int v18; // [rsp+28h] [rbp-20h]

	v4 = *(_QWORD*)(a1 + 400);
	if (*(_QWORD*)(*(_QWORD*)(v4 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v4 + 32) + 112i64))
		sub_14005E2C0(v4);
	v8 = *(_QWORD*)(v4 + 16);
	v9 = sub_14005C1B0(v4, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(v4 + 16) += 16i64;
	LODWORD(v8) = sub_1400578C0(v4);
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v8);
	v11 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v11 = *v10;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	sub_1400F06F0(v4, v11, L"nEntitlementId", v12);
	*(_QWORD*)(v4 + 16) -= 16i64;
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v8);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	sub_1400F06F0(v4, v15, L"nCount", v16);
	*(_QWORD*)(v4 + 16) -= 16i64;
	v18 = a4;
	sub_1400EA3E0(a1, "AccountEntitlementUpdate", "TSb", (unsigned int)v8, a3, v18);
	sub_1400579E0(v4, v17, v8);
}
// 140431343: variable 'v12' is possibly undefined
// 140431374: variable 'v14' is possibly undefined
// 140431386: variable 'v15' is possibly undefined
// 140431386: variable 'v16' is possibly undefined
// 1404313D1: variable 'v17' is possibly undefined
// 140B01598: using guessed type wchar_t aNentitlementid_1[15];
// 140B015E8: using guessed type wchar_t aNcount_12[7];

