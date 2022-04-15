//----- (00000001409199E0) ----------------------------------------------------
__int64 __fastcall sub_1409199E0(unsigned __int16* a1, int a2, __int64 a3, int* a4, int a5)
{
	unsigned int v5; // r11d
	int v7; // eax

	v5 = *a1;
	if (a5 && (v5 & 0xFC00) == 55296)
		v5 = (((v5 & 0x3FF) << 10) | a1[1] & 0x3FF) + 0x10000;
	if (a2 == 2)
	{
		if (v5 == 10)
		{
		LABEL_6:
			*a4 = 1;
			return 1i64;
		}
	}
	else
	{
		if (v5 > 0x85)
		{
			if (v5 - 8232 <= 1)
				goto LABEL_6;
			return 0i64;
		}
		if (v5 == 133)
			goto LABEL_6;
		if (v5 < 0xA)
			return 0i64;
		if (v5 <= 0xC)
			goto LABEL_6;
	}
	if (v5 != 13)
		return 0i64;
	if ((unsigned __int64)a1 >= a3 - 2 || (v7 = 2, a1[1] != 10))
		v7 = 1;
	*a4 = v7;
	return 1i64;
}

