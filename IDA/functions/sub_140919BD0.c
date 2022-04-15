//----- (0000000140919BD0) ----------------------------------------------------
__int64 __fastcall sub_140919BD0(_WORD* a1, int a2, _DWORD* a3)
{
	__int64 v4; // r9
	_WORD* i; // r9
	unsigned __int16* v6; // rax
	int v7; // edx
	unsigned __int16 v9; // r8

	LODWORD(v4) = a2;
	if (a2 < 0)
	{
		for (i = a1; *i; ++i)
			;
		v4 = i - a1;
	}
	v6 = a1;
	if ((int)v4 <= 0)
		return 0i64;
	while (1)
	{
		v7 = *v6;
		LODWORD(v4) = v4 - 1;
		if ((*v6 & 0xF800) != 55296)
		{
			if ((v7 & 0xFFFE) == 65534 || (unsigned int)(v7 - 64976) <= 0x1F)
			{
			LABEL_9:
				*a3 = v6 - a1;
				return 4i64;
			}
			goto LABEL_14;
		}
		if ((v7 & 0x400) != 0)
			break;
		if (!(_DWORD)v4)
		{
			*a3 = v6 - a1;
			return 1i64;
		}
		v9 = v6[1];
		++v6;
		LODWORD(v4) = v4 - 1;
		if ((v9 & 0xFC00) != 0xDC00)
		{
			*a3 = v6 - a1;
			return 2i64;
		}
		if ((((v7 & 0x3F) << 10) | v9 & 0x3FE) == 65534)
			goto LABEL_9;
	LABEL_14:
		++v6;
		if ((int)v4 <= 0)
			return 0i64;
	}
	*a3 = v6 - a1;
	return 3i64;
}

