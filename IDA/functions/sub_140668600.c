//----- (0000000140668600) ----------------------------------------------------
__int64 __fastcall sub_140668600(_QWORD* a1)
{
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // edi
	_QWORD* v6; // rax
	__int64 v7; // rdx
	int v8; // r10d
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	int v12; // r11d
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx

	if (sub_140056AB0(a1, 1u))
	{
		if ((int)(sub_140056D60(a1, 2u) - 1) >= 0)
		{
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
			sub_1400F06F0((__int64)a1, v7, L"idItem", v8);
			a1[2] -= 16i64;
			v9 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
			*(_QWORD*)v10 = *v9;
			*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v11, L"nCount", v12);
			a1[2] -= 16i64;
			v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v5);
			*(_QWORD*)v14 = *v13;
			*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v15, v5);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1406686F5: variable 'v8' is possibly undefined
// 140668727: variable 'v10' is possibly undefined
// 140668739: variable 'v11' is possibly undefined
// 140668739: variable 'v12' is possibly undefined
// 14066875F: variable 'v14' is possibly undefined
// 140668771: variable 'v15' is possibly undefined
// 140B2E9E0: using guessed type wchar_t aIditem_2[7];
// 140B2EC28: using guessed type wchar_t aNcount_35[7];

