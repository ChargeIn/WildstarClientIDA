//----- (00000001409020F0) ----------------------------------------------------
WCHAR* __fastcall sub_1409020F0(WCHAR* a1)
{
	WCHAR* v1; // rbx

	v1 = a1;
	if (dword_140C5F560)
	{
		sub_140902150(a1, 0xFFFFFFFFFFFFFFFFui64, 0i64);
	}
	else
	{
		if (!a1)
		{
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
			return 0i64;
		}
		while (*a1)
		{
			if ((unsigned __int16)(*a1 - 97) <= 0x19u)
				*a1 -= 32;
			++a1;
		}
	}
	return v1;
}
// 140C5F560: using guessed type int dword_140C5F560;

