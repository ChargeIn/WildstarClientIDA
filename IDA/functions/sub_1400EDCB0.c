//----- (00000001400EDCB0) ----------------------------------------------------
__int64 __fastcall sub_1400EDCB0(unsigned __int16** a1, unsigned __int16** a2)
{
	unsigned __int16* v2; // r11
	unsigned __int16* v3; // r10
	int v4; // r8d
	__int64 v5; // r9
	int v6; // ecx

	v2 = *a1;
	v3 = *a2;
	if (*a1 != *a2)
	{
		v4 = *v2;
		v5 = 0i64;
		if (v4 != *v3)
			return 0i64;
		while ((_WORD)v4)
		{
			v4 = v2[v5 + 1];
			v6 = v3[++v5];
			if (v4 != v6)
				return 0i64;
		}
	}
	return 1i64;
}

