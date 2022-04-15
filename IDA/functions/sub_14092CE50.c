//----- (000000014092CE50) ----------------------------------------------------
__int64 __fastcall sub_14092CE50(unsigned int* a1, char a2, int a3, __int64 a4, int a5, __int64 a6)
{
	char* v10; // rax
	char* v11; // rax
	int v12; // eax
	char* v13; // rax
	__int64 result; // rax
	char* v15; // rax
	char* v16; // rax
	char* v17; // rax
	unsigned int v18; // eax
	char* v19; // rax
	char* v20; // rax
	char* v21; // rax

	if (!a3)
	{
		if (a5 <= 12)
		{
			v10 = sub_14092D140((__int64)a1, 1, a5, 0i64, 12, 0i64);
			if (v10)
			{
				*v10 = -119;
				goto LABEL_17;
			}
			goto LABEL_13;
		}
		if ((a5 & 0x200) != 0)
		{
			if (a1[26])
			{
				v12 = sub_14092A740(a1, 65, 186, a6);
				goto LABEL_14;
			}
			if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
			{
				v12 = sub_14092A980(a1, 12, a6);
				goto LABEL_14;
			}
			v11 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
			if (v11)
			{
				*v11 = -57;
				goto LABEL_17;
			}
		}
		else
		{
			v13 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
			if (v13)
			{
				*v13 = -117;
			LABEL_17:
				v15 = sub_14092D140((__int64)a1, 1, 0, 0i64, 12, 0i64);
				if (v15)
				{
				LABEL_18:
					*v15 = -9;
					v15[1] |= a2;
					return 0i64;
				}
				return *a1;
			}
		}
	LABEL_13:
		v12 = *a1;
	LABEL_14:
		if (v12)
			return *a1;
		goto LABEL_17;
	}
	if (a3 == a5 && a4 == a6)
	{
		v15 = sub_14092D140((__int64)a1, 1, 0, 0i64, a3, a4);
		goto LABEL_22;
	}
	if (a3 <= 12)
	{
		if ((unsigned int)sub_14092AA10(a1, a3, 0i64, a5, a6))
			return *a1;
		v15 = sub_14092D140((__int64)a1, 1, 0, 0i64, a3, a4);
	LABEL_22:
		if (!v15)
			return *a1;
		goto LABEL_18;
	}
	if (a5 > 12)
	{
		if ((a5 & 0x200) != 0)
		{
			if (a1[26])
			{
				v18 = sub_14092A740(a1, 65, 186, a6);
				goto LABEL_39;
			}
			if ((unsigned __int64)(a6 + 0x80000000i64) > 0xFFFFFFFF)
			{
				v18 = sub_14092A980(a1, 12, a6);
				goto LABEL_39;
			}
			v17 = sub_14092D140((__int64)a1, 1, 512, a6, 12, 0i64);
			if (v17)
			{
				*v17 = -57;
				goto LABEL_42;
			}
		}
		else
		{
			v19 = sub_14092D140((__int64)a1, 1, 12, 0i64, a5, a6);
			if (v19)
			{
				*v19 = -117;
				goto LABEL_42;
			}
		}
	}
	else
	{
		v16 = sub_14092D140((__int64)a1, 1, a5, 0i64, 12, 0i64);
		if (v16)
		{
			*v16 = -119;
			goto LABEL_42;
		}
	}
	v18 = *a1;
LABEL_39:
	if (v18)
		return *a1;
LABEL_42:
	v20 = sub_14092D140((__int64)a1, 1, 0, 0i64, 12, 0i64);
	if (!v20)
		return *a1;
	*v20 = -9;
	v20[1] |= a2;
	v21 = sub_14092D140((__int64)a1, 1, 12, 0i64, a3, a4);
	if (v21)
	{
		*v21 = -119;
		return 0i64;
	}
	result = *a1;
	if (!(_DWORD)result)
		return 0i64;
	return result;
}

