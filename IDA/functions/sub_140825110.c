//----- (0000000140825110) ----------------------------------------------------
_WORD* __fastcall sub_140825110(const char* a1)
{
	unsigned int i; // [rsp+20h] [rbp-18h]
	_WORD* v3; // [rsp+28h] [rbp-10h]

	v3 = 0i64;
	if (a1)
	{
		v3 = LocalAlloc(0x40u, 2 * strlen(a1) + 2);
		if (v3)
		{
			for (i = 0; i < strlen(a1); ++i)
				v3[i] = a1[i];
		}
	}
	return v3;
}

