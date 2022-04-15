//----- (0000000140929C10) ----------------------------------------------------
__int64 __fastcall sub_140929C10(unsigned int* a1, int a2, __int64 a3, int a4, __int64 a5)
{
	__int64 v7; // rsi
	int v8; // edi
	unsigned int v9; // edx
	char v10; // bp
	char* v12; // rax
	char* v13; // rax
	char* v14; // rax
	char* v15; // rax
	int v16; // eax
	char* v17; // rax
	int v18; // eax
	char* v19; // rax

	v7 = a3;
	v8 = a2;
	if (a2 == 1)
	{
		if ((a4 & 0x200) == 0)
		{
		LABEL_20:
			v14 = sub_14092D140((__int64)a1, 1, v8, 0i64, a4, a5);
			goto LABEL_55;
		}
		if ((unsigned __int64)(a5 + 128) > 0xFF)
		{
			v9 = a1[26];
			if (v9 || (unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF)
			{
				v10 = 0;
				if (!v9)
					v10 = 72;
				if ((unsigned int)sub_14092A740(a1, v10, 61, a5))
					return *a1;
				return 0i64;
			}
		}
	LABEL_11:
		if ((a4 & 0x200) != 0)
		{
			if ((unsigned __int64)(a5 + 0x80000000i64) > 0xFFFFFFFF && !a1[26])
			{
				if (!(unsigned int)sub_14092A980(a1, 13, a5))
				{
					v12 = sub_14092D140((__int64)a1, 1, 13, 0i64, v8, 0i64);
					goto LABEL_16;
				}
				return *a1;
			}
			v13 = sub_14092D140((__int64)a1, 17, 512, a5, v8, 0i64);
			if (!v13)
				return *a1;
		LABEL_41:
			v13[1] |= 0x38u;
			return 0i64;
		}
		goto LABEL_20;
	}
	if (a2 <= 12)
		goto LABEL_11;
	if (a4 <= 12 && (a2 & 0x200) == 0)
	{
		v12 = sub_14092D140((__int64)a1, 1, a4, 0i64, a2, a3);
	LABEL_16:
		if (!v12)
			return *a1;
		goto LABEL_39;
	}
	if ((a4 & 0x200) == 0)
	{
		if ((a2 & 0x200) != 0)
		{
			if (a1[26])
			{
				v18 = sub_14092A740(a1, 65, 186, a3);
				goto LABEL_51;
			}
			if ((unsigned __int64)(a3 + 0x80000000i64) > 0xFFFFFFFF)
			{
				v18 = sub_14092A980(a1, 12, a3);
				goto LABEL_51;
			}
			v17 = sub_14092D140((__int64)a1, 1, 512, a3, 12, 0i64);
			if (v17)
			{
				*v17 = -57;
			LABEL_54:
				v14 = sub_14092D140((__int64)a1, 1, 12, 0i64, a4, a5);
			LABEL_55:
				if (v14)
				{
					*v14 = 59;
					return 0i64;
				}
				return *a1;
			}
		}
		else
		{
			v19 = sub_14092D140((__int64)a1, 1, 12, 0i64, a2, a3);
			if (v19)
			{
				*v19 = -117;
				goto LABEL_54;
			}
		}
		v18 = *a1;
	LABEL_51:
		if (v18)
			return *a1;
		goto LABEL_54;
	}
	if ((a2 & 0x200) != 0)
	{
		if (a1[26])
		{
			v16 = sub_14092A740(a1, 65, 186, a3);
		}
		else if ((unsigned __int64)(a3 + 0x80000000i64) > 0xFFFFFFFF)
		{
			v16 = sub_14092A980(a1, 12, a3);
		}
		else
		{
			v15 = sub_14092D140((__int64)a1, 1, 512, a3, 12, 0i64);
			if (v15)
			{
				*v15 = -57;
			LABEL_34:
				v8 = 12;
				v7 = 0i64;
				goto LABEL_35;
			}
			v16 = *a1;
		}
		if (v16)
			return *a1;
		goto LABEL_34;
	}
LABEL_35:
	if ((unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF || a1[26])
	{
		v13 = sub_14092D140((__int64)a1, 17, 512, a5, v8, v7);
		if (!v13)
			return *a1;
		goto LABEL_41;
	}
	if ((unsigned int)sub_14092A980(a1, 13, a5))
		return *a1;
	v12 = sub_14092D140((__int64)a1, 1, 13, 0i64, v8, v7);
	if (!v12)
		return *a1;
LABEL_39:
	*v12 = 57;
	return 0i64;
}

