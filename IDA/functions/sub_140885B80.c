//----- (0000000140885B80) ----------------------------------------------------
__int64 __fastcall sub_140885B80(__int64 a1, __int64 a2, int a3, __int64* a4)
{
	__int64 v6; // rbx
	__int64 v8; // rdx
	int v9; // edi

	v6 = a2;
	if (a4)
		*a4 = 0i64;
	if (a3)
	{
		if (a3 == 1)
		{
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 104i64))(a1, 0i64) + a2;
		}
		else
		{
			if (a3 != 2)
				return 31i64;
			v6 = **(_QWORD**)(a1 - 80) + a2;
		}
	}
	if (v6 < 0)
		return 31i64;
	v8 = v6 % *(unsigned int*)(a1 - 8);
	if (v8)
		v6 -= v8;
	if (a4)
	{
		if (a3)
		{
			v9 = a3 - 1;
			if (v9)
			{
				if (v9 == 1)
					*a4 = v6 - **(_QWORD**)(a1 - 80);
			}
			else
			{
				*a4 = v6 - (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 104i64))(a1, 0i64);
			}
		}
		else
		{
			*a4 = v6;
		}
	}
	sub_140884600(a1 - 120, v6);
	return 1i64;
}

