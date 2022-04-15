//----- (0000000140824460) ----------------------------------------------------
HMODULE __fastcall sub_140824460(WCHAR* a1, int a2)
{
	SetLastError(0);
	if (sub_140825250(a1))
	{
		if ((unsigned int)sub_140825320(a1))
		{
			return LoadLibraryExW(a1, 0i64, a2 & 0xFFFFE0F7);
		}
		else
		{
			SetLastError(0xA1u);
			return 0i64;
		}
	}
	else
	{
		SetLastError(0xA0u);
		return 0i64;
	}
}

