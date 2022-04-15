//----- (000000014090EF20) ----------------------------------------------------
_BOOL8 __fastcall sub_14090EF20(_WORD* a1)
{
	unsigned __int16 v1; // ax
	_WORD* i; // rcx
	__int16 v4; // ax
	unsigned __int16 v5; // ax
	_WORD* j; // rcx

	if ((unsigned __int16)(*a1 - 48) > 9u)
		return 0i64;
	v1 = a1[1];
	for (i = a1 + 1; v1 >= 0x30u; ++i)
	{
		if (v1 > 0x39u)
			break;
		v1 = i[1];
	}
	if (*i == 125)
		return 1i64;
	if (*i != 44)
		return 0i64;
	v4 = i[1];
	if (v4 == 125)
		return 1i64;
	if ((unsigned __int16)(v4 - 48) > 9u)
		return 0i64;
	v5 = i[2];
	for (j = i + 2; v5 >= 0x30u; ++j)
	{
		if (v5 > 0x39u)
			break;
		v5 = j[1];
	}
	return *j == 125;
}

