//----- (0000000140831400) ----------------------------------------------------
__int64 sub_140831400()
{
	__int64 result; // rax

	result = sub_140881950();
	if ((_BYTE)result)
	{
		if (dword_140C10F28 != -1)
		{
			result = sub_140881DD0(dword_140C10F28);
			dword_140C10F28 = -1;
		}
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

