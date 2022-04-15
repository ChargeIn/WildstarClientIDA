#include "../winhttp.h"

//----- (000000014092CB80) ----------------------------------------------------
__int64 __fastcall sub_14092CB80(unsigned int* a1, int a2, __int64 a3, int a4, __int64 a5)
{
	unsigned int v8; // edx
	char v9; // di
	char* v11; // rax
	char* v12; // rax
	int v13; // r8d
	char* v14; // rax
	int v15; // eax
	char* v16; // rax
	__int64 v17; // [rsp+28h] [rbp-20h]

	if (a2 == 1)
	{
		if ((a4 & 0x200) == 0)
			goto LABEL_19;
		if ((unsigned __int64)(a5 + 128) > 0xFF)
		{
			v8 = a1[26];
			if (v8 || (unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF)
			{
				v9 = 0;
				if (!v8)
					v9 = 72;
				if ((unsigned int)sub_14092A740(a1, v9, 169, a5))
					return *a1;
				return 0i64;
			}
		}
	LABEL_11:
		if ((a4 & 0x200) != 0)
		{
			if ((unsigned __int64)(a5 + 0x80000000i64) > 0xFFFFFFFF && !a1[26])
			{
				if ((unsigned int)sub_14092A980(a1, 13, a5))
					return *a1;
				v11 = sub_14092D140((__int64)a1, 1, 13, 0i64, a2, 0i64);
			LABEL_49:
				if (v11)
				{
					*v11 = -123;
					return 0i64;
				}
				return *a1;
			}
			v12 = sub_14092D140((__int64)a1, 1, 512, a5, a2, 0i64);
			goto LABEL_17;
		}
	LABEL_19:
		v11 = sub_14092D140((__int64)a1, 1, a2, 0i64, a4, a5);
		goto LABEL_49;
	}
	if (a2 <= 12)
		goto LABEL_11;
	if (a4 <= 12)
	{
		if ((a2 & 0x200) == 0)
		{
			v11 = sub_14092D140((__int64)a1, 1, a4, 0i64, a2, a3);
			goto LABEL_49;
		}
		if ((unsigned __int64)(a3 + 0x80000000i64) <= 0xFFFFFFFF || a1[26])
		{
			v12 = sub_14092D140((__int64)a1, 1, 512, a3, a4, 0i64);
		LABEL_17:
			if (!v12)
				return *a1;
			goto LABEL_46;
		}
		if ((unsigned int)sub_14092A980(a1, 13, a3))
			return *a1;
		v13 = 13;
		v17 = 0i64;
	LABEL_48:
		v11 = sub_14092D140((__int64)a1, 1, v13, 0i64, a4, v17);
		goto LABEL_49;
	}
	if ((a2 & 0x200) != 0)
	{
		if (a1[26])
		{
			v15 = sub_14092A740(a1, 65, 186, a3);
			goto LABEL_37;
		}
		if ((unsigned __int64)(a3 + 0x80000000i64) > 0xFFFFFFFF)
		{
			v15 = sub_14092A980(a1, 12, a3);
			goto LABEL_37;
		}
		v14 = sub_14092D140((__int64)a1, 1, 512, a3, 12, 0i64);
		if (v14)
		{
			*v14 = -57;
			goto LABEL_40;
		}
	}
	else
	{
		v16 = sub_14092D140((__int64)a1, 1, 12, 0i64, a2, a3);
		if (v16)
		{
			*v16 = -117;
			goto LABEL_40;
		}
	}
	v15 = *a1;
LABEL_37:
	if (v15)
		return *a1;
LABEL_40:
	if ((a4 & 0x200) == 0)
	{
		v13 = 12;
		v17 = a5;
		goto LABEL_48;
	}
	if ((unsigned __int64)(a5 + 0x80000000i64) > 0xFFFFFFFF && !a1[26])
	{
		if ((unsigned int)sub_14092A980(a1, 13, a5))
			return *a1;
		v11 = sub_14092D140((__int64)a1, 1, 13, 0i64, 12, 0i64);
		goto LABEL_49;
	}
	v12 = sub_14092D140((__int64)a1, 1, 512, a5, 12, 0i64);
	if (!v12)
		return *a1;
LABEL_46:
	*v12 = -9;
	return 0i64;
}

