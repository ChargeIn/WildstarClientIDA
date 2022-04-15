//----- (00000001405F89F0) ----------------------------------------------------
__int64 __fastcall sub_1405F89F0(int a1, unsigned int a2)
{
	int v2; // edx
	unsigned int v3; // ecx

	if (a2 >= 0xE)
	{
		if (a2 >= 0x68)
		{
			if (a2 >= 0xCE)
				v2 = 0;
			else
				v2 = 1 << (a2 + 74);
		}
		else
		{
			v2 = 1 << (a2 - 86);
		}
	}
	else
	{
		v2 = 1 << a2;
	}
	if ((v2 & a1) == 0)
		return 0xFFFFFFFFi64;
	v3 = a1 & (v2 - 1);
	return ((v3
		- ((v3 >> 1) & 0x5B6DB6DB)
		- ((v3 >> 2) & 0x9249249)
		+ ((v3 - ((v3 >> 1) & 0x5B6DB6DB) - ((v3 >> 2) & 0x9249249)) >> 3)) & 0xC71C71C7)
		% 0x3F;
}

