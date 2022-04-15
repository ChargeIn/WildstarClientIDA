//----- (00000001400C39E0) ----------------------------------------------------
__int64 __fastcall sub_1400C39E0(__int64 a1, char a2)
{
	char v2; // r8

	v2 = *(_BYTE*)(a1 + 412);
	if ((v2 & 0x10) == 0)
		return 4i64;
	if (v2 < 0)
	{
		if ((v2 & 0x40) == 0)
			goto LABEL_9;
		if (a2)
			return 3i64;
	}
	if ((v2 & 0x40) != 0)
		return 1i64;
LABEL_9:
	if (v2 < 0 && a2)
		return 2i64;
	else
		return (*(_BYTE*)(a1 + 414) & 1) != 0 ? 5 : 0;
}

