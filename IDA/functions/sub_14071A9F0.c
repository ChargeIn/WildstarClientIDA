//----- (000000014071A9F0) ----------------------------------------------------
__int64 __fastcall sub_14071A9F0(_DWORD* a1, int a2)
{
	bool v2; // zf
	__int64 result; // rax

	if (a2)
	{
		if (a1[105])
		{
			v2 = a1[106] == 2;
			a1[105] = 0;
			if (v2 || !a1[126] || a1[127])
				return (*(__int64(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)a1 + 80i64))(a1, 1i64);
		}
	}
	else
	{
		v2 = a1[106] == 2;
		a1[105] = 1;
		if (v2)
			return (*(__int64(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
		if (!a1[126] || a1[127])
		{
			if (!a1[99])
				return (*(__int64(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 80i64))(a1, 0i64);
			return sub_14071A6E0((__int64)a1, 2, 1);
		}
		else
		{
			return sub_14071A6E0((__int64)a1, 1, 1);
		}
	}
	return result;
}

