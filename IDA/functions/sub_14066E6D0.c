//----- (000000014066E6D0) ----------------------------------------------------
_BOOL8 __fastcall sub_14066E6D0(__int64 a1, int a2, __int64 a3)
{
	_BOOL8 result; // rax
	__int64 v6; // rcx

	*(_DWORD*)(a1 + 152) = a2;
	result = sub_14066E410(a1);
	if (result)
	{
		if ((*(_BYTE*)(a1 + 12) & 1) != 0)
		{
			sub_14066E860(a1, a3);
			sub_140674CD0(a1, a3);
		}
		if ((*(_BYTE*)(a1 + 12) & 4) != 0)
		{
			sub_14066FB50(a1, a3);
			sub_140670050(a1, a3);
			sub_140671B70(a1, a3);
			sub_140671DC0(a1, a3);
			sub_140671F20(a1, a3);
		}
		if ((*(_BYTE*)(a1 + 12) & 0x40) != 0)
		{
			sub_14066F750(a1, a3);
			sub_140672150(a1, a3);
			sub_1406701F0(a1, a3);
			sub_140671730(a1, a3);
			if (*(_DWORD*)(a1 + 1340))
			{
				if (a1 != -504)
					sub_140676790(v6, a3, *(_DWORD*)(a1 + 628));
			}
		}
		if ((*(_BYTE*)(a1 + 12) & 2) != 0)
			sub_140672380((__int64*)a1, a3);
		if ((*(_BYTE*)(a1 + 12) & 0x20) != 0)
			sub_140673160(a1, a3);
		if ((*(_BYTE*)(a1 + 12) & 8) != 0)
		{
			sub_140673AB0(a1, a3);
			if ((*(_BYTE*)(a1 + 12) & 8) != 0)
				sub_140673FE0((_DWORD*)a1, a3);
		}
		if ((*(_BYTE*)(a1 + 12) & 0x10) != 0)
			sub_140672840(a1, a3);
		if ((*(_DWORD*)(a1 + 12) & 0x100) != 0)
			sub_1406751E0(a1, a3);
		if (*(char*)(a1 + 12) < 0)
		{
			sub_140674210(a1, a3);
			sub_140674430(a1, a3);
			sub_1406744D0(a1, a3);
			sub_140674D50(a1, a3);
		}
		return 1i64;
	}
	return result;
}
// 14066E7A1: variable 'v6' is possibly undefined

