//----- (0000000140003C90) ----------------------------------------------------
__int64 __fastcall sub_140003C90(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	int v11; // r9d
	int* v12; // rcx
	int* v14; // [rsp+20h] [rbp-18h] BYREF
	int v15; // [rsp+28h] [rbp-10h]

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v6, L"nLoginDaysTotal", v7);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_1403E0840(&v14, *(_DWORD*)(a1 + 392) + 1, *(_DWORD*)(a1 + 384));
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	v11 = v15;
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v10, L"nRewardsAvailable", v11);
	v12 = v14;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (v12)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
	return sub_140003D80(a1, a2);
}
// 140003CBE: variable 'v5' is possibly undefined
// 140003CE1: variable 'v7' is possibly undefined
// 140003D1F: variable 'v9' is possibly undefined
// 1409D6710: using guessed type wchar_t aNlogindaystota[16];
// 1409D6730: using guessed type wchar_t aNrewardsavaila[18];

