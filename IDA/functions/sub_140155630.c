//----- (0000000140155630) ----------------------------------------------------
__int64 __fastcall sub_140155630(_DWORD* a1, int a2, __int64 a3)
{
	int v3; // edx
	int v4; // edx
	int v5; // edx
	int v6; // edx
	__int64 result; // rax
	__int64 v8; // r8
	__int64 v9; // r8

	if (a1[4] && a1[5])
	{
		v3 = a2 - 81;
		if (v3)
		{
			v4 = v3 - 190;
			if (!v4)
			{
				sub_140155790((__int64)a1);
				return 0i64;
			}
			v5 = v4 - 370;
			if (v5)
			{
				v6 = v5 - 1;
				if (!v6)
				{
					v8 = a3 - 3;
					if (!v8)
						goto LABEL_12;
					v9 = v8 - 1;
					if (!v9)
					{
						a1[112] = 0;
						a1[114] = 0;
						return 1i64;
					}
					if (v9 == 1)
						LABEL_12:
					sub_1401558F0((__int64)a1);
					return 1i64;
				}
				if (v6 == 4)
				{
					result = 0i64;
					a1[112] = 0;
					a1[114] = 0;
					return result;
				}
			}
		}
		else
		{
			sub_1401556C0((__int64)a1);
		}
	}
	return 0i64;
}

