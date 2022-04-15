//----- (00000001405E2410) ----------------------------------------------------
char __fastcall sub_1405E2410(__int64 a1, __int64 a2, int a3)
{
	unsigned __int64 v6; // r14
	_QWORD* v7; // rbx
	char result; // al
	int v9; // ecx
	unsigned __int64 v10; // rbp
	_QWORD* v11; // rbx

	if (a3 == 8)
	{
		v10 = (*(__int64(__fastcall**)(__int64))(a1 + 504))(a2);
		v11 = *(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * (v10 % *(_QWORD*)(a1 + 488)));
		if (!v11)
			return 0;
		while (v10 != *v11 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 512))(a2, v11 + 2))
		{
			v11 = (_QWORD*)v11[1];
			if (!v11)
				return 0;
		}
		return v11 != (_QWORD*)-32i64;
	}
	else
	{
		v6 = (*(__int64(__fastcall**)(__int64))(a1 + 184))(a2);
		v7 = *(_QWORD**)(*(_QWORD*)(a1 + 176) + 8 * (v6 % *(_QWORD*)(a1 + 168)));
		if (!v7)
			return 0;
		while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 192))(a2, v7 + 2))
		{
			v7 = (_QWORD*)v7[1];
			if (!v7)
				return 0;
		}
		if (v7 == (_QWORD*)-32i64)
		{
			return 0;
		}
		else
		{
			v9 = *(_DWORD*)(v7[4] + 208i64);
			if (v9 == a3)
			{
				return 1;
			}
			else
			{
				result = 0;
				if (!a3 || a3 == 3)
					return v9 == 4;
			}
		}
	}
	return result;
}

