//----- (00000001407E7D54) ----------------------------------------------------
__int64 __fastcall sub_1407E7D54(unsigned __int16* a1)
{
	unsigned __int16 v1; // dx
	unsigned __int16* v2; // r9
	unsigned int v3; // r8d
	__int16 v4; // ax
	int v5; // ecx

	v1 = *a1;
	v2 = a1;
	v3 = 0;
	while (v1)
	{
		++v2;
		if ((unsigned __int16)(v1 - 97) > 5u)
		{
			if ((unsigned __int16)(v1 - 65) > 5u)
				goto LABEL_7;
			v4 = -7;
		}
		else
		{
			v4 = -39;
		}
		v1 += v4;
	LABEL_7:
		v5 = v1;
		v1 = *v2;
		v3 = v5 + 16 * v3 - 48;
	}
	return v3;
}

