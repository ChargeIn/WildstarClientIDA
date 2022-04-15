//----- (00000001407F0A90) ----------------------------------------------------
__int64 __fastcall sub_1407F0A90(int a1)
{
	if (a1 == -2)
	{
		*(_DWORD*)sub_1407DE1B0() = 9;
	}
	else
	{
		if (a1 >= 0 && a1 < (unsigned int)dword_140DC523C)
			return *(_BYTE*)(qword_140C60410[(__int64)a1 >> 5] + 88i64 * (a1 & 0x1F) + 8) & 0x40;
		*(_DWORD*)sub_1407DE1B0() = 9;
		sub_1407DC370();
	}
	return 0i64;
}
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 140DC523C: using guessed type int dword_140DC523C;

