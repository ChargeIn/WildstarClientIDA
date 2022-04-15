//----- (0000000140130E00) ----------------------------------------------------
__int64 __fastcall sub_140130E00(__int64 a1, unsigned int a2, int* a3)
{
	int v6; // eax
	int v7; // eax
	int v8; // eax
	__int64 v9; // rdx
	__int64 v10; // r9
	__int64 v11; // rcx

	if (a2 && *(char*)(a1 + 664) >= 0)
		return sub_1400D2550(a1, a2, a3);
	if ((*(_DWORD*)(a1 + 664) & 0x400i64) != 0)
		sub_1400E8C50(*(_QWORD**)(a1 + 32), (char*)a1);
	v6 = sub_1400C3E20(a1 + 1024) - 2;
	if (!v6)
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 568i64))(a1, 34i64, a2);
		if ((*(_BYTE*)(a1 + 664) & 0x10) != 0 && (*(_BYTE*)(a1 + 1436) & 2) != 0)
			return 0i64;
		v9 = 32i64;
		goto LABEL_26;
	}
	v7 = v6 - 3;
	if (!v7)
	{
		v9 = 35i64;
		goto LABEL_26;
	}
	v8 = v7 - 2;
	if (v8)
	{
		if (v8 != 1)
			return (*(_BYTE*)(a1 + 1436) & 0x20) == 0;
		if ((*(_BYTE*)(a1 + 664) & 0x20) == 0 || !*(_QWORD*)(a1 + 1448))
		{
			if (*(_QWORD*)(a1 + 1448) && sub_140150A30(*(_QWORD*)(a1 + 1448)) == a1)
				sub_140150A60(v10, -1);
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 568i64))(
				a1,
				34i64,
				a2,
				*(unsigned __int8*)(a1 + 1444));
			v9 = 37i64;
			goto LABEL_26;
		}
		*(_BYTE*)(a1 + 1436) |= 0x40u;
		if ((*(_BYTE*)(a1 + 664) & 0x40) == 0 && !*(_BYTE*)(a1 + 1444))
			return 0i64;
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 568i64))(
			a1,
			34i64,
			a2,
			*(unsigned __int8*)(a1 + 1444));
		v11 = *(_QWORD*)(a1 + 1448);
		if (v11)
		{
			sub_140150B90(v11, a1);
			v9 = 36i64;
			goto LABEL_26;
		}
	}
	v9 = 36i64;
LABEL_26:
	(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 568i64))(
		a1,
		v9,
		a2,
		*(unsigned __int8*)(a1 + 1444));
	return 0i64;
}
// 140130EFC: variable 'v10' is possibly undefined

