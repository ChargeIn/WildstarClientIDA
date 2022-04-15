//----- (0000000140902900) ----------------------------------------------------
float __fastcall sub_140902900(float a1, __int64 a2, __int16 a3)
{
	int v4; // [rsp+78h] [rbp+20h]

	v4 = LODWORD(a1);
	if ((LODWORD(a1) & 0x7F800000) == 2139095040)
	{
		if ((LODWORD(a1) & 0x7FFFFF) != 0)
		{
			if ((~(LODWORD(a1) >> 22) & 1) == 0)
			{
				sub_1407EFD48(a2, a3, SLODWORD(a1), 1, 0, 0x21u, SLODWORD(a1), 0.0, 1);
				return *(float*)&v4;
			}
			v4 = LODWORD(a1) | 0x400000;
		}
		else
		{
			v4 = -4194304;
		}
		sub_1407EFD48(a2, a3, v4, 1, 8, 0x21u, SLODWORD(a1), 0.0, 1);
	}
	return *(float*)&v4;
}

