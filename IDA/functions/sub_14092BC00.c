//----- (000000014092BC00) ----------------------------------------------------
__int64 __fastcall sub_14092BC00(unsigned int* a1, int a2, __int64 a3, int a4, __int64 a5)
{
	char* v8; // rax
	char* v9; // rax
	int v10; // eax
	char* v11; // rax
	__int64 result; // rax
	char* v13; // rax
	char* v14; // rax
	char* v15; // rax
	char* v16; // rax
	char* v17; // rax
	unsigned int v18; // eax
	char* v19; // rax
	char* v20; // rax
	char* v21; // rax
	char* v22; // rax

	if (!a2)
	{
		if (a4 > 12)
		{
			if ((a4 & 0x200) != 0)
			{
				if (a1[26])
				{
					v10 = sub_14092A740(a1, 65, 186, a5);
					goto LABEL_14;
				}
				if ((unsigned __int64)(a5 + 0x80000000i64) > 0xFFFFFFFF)
				{
					v10 = sub_14092A980(a1, 12, a5);
					goto LABEL_14;
				}
				v9 = sub_14092D140((__int64)a1, 1, 512, a5, 12, 0i64);
				if (v9)
				{
					*v9 = -57;
					goto LABEL_17;
				}
			}
			else
			{
				v11 = sub_14092D140((__int64)a1, 1, 12, 0i64, a4, a5);
				if (v11)
				{
					*v11 = -117;
					goto LABEL_17;
				}
			}
		}
		else
		{
			v8 = sub_14092D140((__int64)a1, 1, a4, 0i64, 12, 0i64);
			if (v8)
			{
				*v8 = -119;
			LABEL_17:
				v13 = sub_14092D140((__int64)a1, 1, 0, 0i64, 12, 0i64);
				if (v13)
				{
					*v13 = -9;
					v13[1] |= 0x10u;
					v14 = sub_14092D140((__int64)a1, 1, 12, 0i64, 12, 0i64);
					if (v14)
					{
					LABEL_19:
						*v14 = 11;
						return 0i64;
					}
				}
				return *a1;
			}
		}
		v10 = *a1;
	LABEL_14:
		if (v10)
			return *a1;
		goto LABEL_17;
	}
	if (a2 <= 12)
	{
		if (!(unsigned int)sub_14092AA10(a1, a2, 0i64, a4, a5))
		{
			v15 = sub_14092D140((__int64)a1, 1, 0, 0i64, a2, a3);
			if (v15)
			{
				*v15 = -9;
				v15[1] |= 0x10u;
				v14 = sub_14092D140((__int64)a1, 1, a2, 0i64, a2, 0i64);
				if (!v14)
					return *a1;
				goto LABEL_19;
			}
		}
		return *a1;
	}
	if (a4 > 12)
	{
		if ((a4 & 0x200) != 0)
		{
			if (a1[26])
			{
				v18 = sub_14092A740(a1, 65, 186, a5);
				goto LABEL_37;
			}
			if ((unsigned __int64)(a5 + 0x80000000i64) > 0xFFFFFFFF)
			{
				v18 = sub_14092A980(a1, 12, a5);
				goto LABEL_37;
			}
			v17 = sub_14092D140((__int64)a1, 1, 512, a5, 12, 0i64);
			if (v17)
			{
				*v17 = -57;
				goto LABEL_40;
			}
		}
		else
		{
			v19 = sub_14092D140((__int64)a1, 1, 12, 0i64, a4, a5);
			if (v19)
			{
				*v19 = -117;
				goto LABEL_40;
			}
		}
	}
	else
	{
		v16 = sub_14092D140((__int64)a1, 1, a4, 0i64, 12, 0i64);
		if (v16)
		{
			*v16 = -119;
			goto LABEL_40;
		}
	}
	v18 = *a1;
LABEL_37:
	if (v18)
		return *a1;
LABEL_40:
	v20 = sub_14092D140((__int64)a1, 1, 0, 0i64, 12, 0i64);
	if (!v20)
		return *a1;
	*v20 = -9;
	v20[1] |= 0x10u;
	v21 = sub_14092D140((__int64)a1, 1, 12, 0i64, 12, 0i64);
	if (!v21)
		return *a1;
	*v21 = 11;
	v22 = sub_14092D140((__int64)a1, 1, 12, 0i64, a2, a3);
	if (v22)
	{
		*v22 = -119;
		return 0i64;
	}
	result = *a1;
	if (!(_DWORD)result)
		return 0i64;
	return result;
}

