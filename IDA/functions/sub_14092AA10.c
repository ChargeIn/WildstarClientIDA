//----- (000000014092AA10) ----------------------------------------------------
__int64 __fastcall sub_14092AA10(unsigned int* a1, int a2, __int64 a3, int a4, __int64 a5)
{
	int v8; // r8d
	char* v9; // rax
	char* v11; // rax
	char v12; // al
	int v13; // r8d
	char* v14; // rax
	char* v15; // rax
	int v16; // [rsp+20h] [rbp-18h]
	__int64 v17; // [rsp+28h] [rbp-10h]

	if (a2)
	{
		if (a4 > 12)
		{
			if ((a4 & 0x200) != 0)
			{
				if (a2 <= 12)
				{
					if (a1[26])
					{
						v12 = 0;
						if (byte_1409D00E0[a2] >= 8u)
							v12 = 65;
						return sub_14092A740(a1, v12, byte_1409D00E0[a2 + 16] - 72, a5);
					}
					if ((unsigned __int64)(a5 + 0x80000000i64) > 0xFFFFFFFF)
						return sub_14092A980(a1, a2, a5);
				}
				if (a1[26] || (unsigned __int64)(a5 + 0x80000000i64) <= 0xFFFFFFFF)
				{
					v14 = sub_14092D140((__int64)a1, 1, 512, a5, a2, a3);
					if (!v14)
						return *a1;
					*v14 = -57;
					return 0i64;
				}
				if ((unsigned int)sub_14092A980(a1, 13, a5))
					return *a1;
				v13 = 13;
			}
			else
			{
				v17 = a5;
				v16 = a4;
				if (a2 <= 12)
				{
					v8 = a2;
					goto LABEL_4;
				}
				v15 = sub_14092D140((__int64)a1, 1, 12, 0i64, a4, a5);
				if (!v15)
					return *a1;
				*v15 = -117;
				v13 = 12;
			}
			v11 = sub_14092D140((__int64)a1, 1, v13, 0i64, a2, a3);
		}
		else
		{
			v11 = sub_14092D140((__int64)a1, 1, a4, 0i64, a2, a3);
		}
		if (!v11)
			return *a1;
		*v11 = -119;
		return 0i64;
	}
	if ((a4 & 0x100) == 0)
		return 0i64;
	v17 = a5;
	v16 = a4;
	v8 = 12;
LABEL_4:
	v9 = sub_14092D140((__int64)a1, 1, v8, 0i64, v16, v17);
	if (!v9)
		return *a1;
	*v9 = -117;
	return 0i64;
}
// 1409D00E0: using guessed type _BYTE byte_1409D00E0[32];

