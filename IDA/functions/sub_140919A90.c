//----- (0000000140919A90) ----------------------------------------------------
__int64 __fastcall sub_140919A90(__int64 a1, int a2, unsigned __int64 a3, int* a4, int a5)
{
	unsigned __int16* v6; // r10
	unsigned int v7; // edx
	int v9; // eax

	v6 = (unsigned __int16*)(a1 - 2);
	if (a5)
	{
		if ((*v6 & 0xFC00) == 0xDC00)
			v6 = (unsigned __int16*)(a1 - 4);
		v7 = *v6;
		if ((v7 & 0xFC00) == 55296)
			v7 = (((v7 & 0x3FF) << 10) | v6[1] & 0x3FF) + 0x10000;
	}
	else
	{
		v7 = *v6;
	}
	if (a2 == 2)
	{
		if (v7 != 10)
		{
			if (v7 == 13)
			{
			LABEL_10:
				*a4 = 1;
				return 1i64;
			}
			return 0i64;
		}
	}
	else
	{
		if (v7 > 0x85)
		{
			if (v7 - 8232 <= 1)
				goto LABEL_10;
			return 0i64;
		}
		if (v7 == 133)
			goto LABEL_10;
		if (v7 != 10)
		{
			if (v7 - 11 <= 2)
			{
				*a4 = 1;
				return 1i64;
			}
			return 0i64;
		}
	}
	if ((unsigned __int64)v6 <= a3 || (v9 = 2, *(v6 - 1) != 13))
		v9 = 1;
	*a4 = v9;
	return 1i64;
}

