//----- (000000014092A7D0) ----------------------------------------------------
__int64 __fastcall sub_14092A7D0(unsigned int* a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7)
{
	int v11; // r9d
	int v13; // r15d
	char* v14; // rax
	char* v15; // rax
	char* v16; // rax

	v11 = 0;
	if (a2 == a4 && a3 == a5)
		return 4i64;
	if (a2 == a6 && a3 == a7)
		return 4i64;
	v13 = 12;
	if (a2 <= 12)
		v13 = a2;
	if (a4 > 12)
	{
		if (a6 <= 12 && (a4 & 0x200) != 0 && (a1[26] || (unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF))
		{
			v15 = sub_14092D140((__int64)a1, 1, v13, 0i64, a6 | 0x100u, (int)a5);
			goto LABEL_25;
		}
		return 4i64;
	}
	if (a6 <= 12)
	{
		v14 = sub_14092D140((__int64)a1, 1, v13, 0i64, a4 | (16 * (a6 | 0x10u)), 0i64);
		if (!v14)
			return *a1;
		*v14 = -115;
		v11 = 1;
	}
	if ((a6 & 0x200) == 0 || !a1[26] && (unsigned __int64)(a7 + 0x80000000i64) > 0xFFFFFFFF)
	{
		if (v11)
			goto LABEL_28;
		return 4i64;
	}
	v15 = sub_14092D140((__int64)a1, 1, v13, 0i64, a4 | 0x100u, (int)a7);
LABEL_25:
	if (!v15)
		return *a1;
	*v15 = -115;
LABEL_28:
	if (v13 != 12)
		return 0i64;
	if (a2)
	{
		v16 = sub_14092D140((__int64)a1, 1, 12, 0i64, a2, a3);
		if (!v16)
			return *a1;
		*v16 = -119;
	}
	return 0i64;
}

