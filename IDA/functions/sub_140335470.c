//----- (0000000140335470) ----------------------------------------------------
_BYTE* __fastcall sub_140335470(_BYTE* a1, _BYTE* a2, __int64 a3, char* a4)
{
	_BYTE* v6; // r11
	char* v7; // r8
	_BYTE* v8; // rdx

	if (a1 == a2 || ":" == a4)
		return a1;
	if ("" == a4)
	{
		do
		{
			if (*a1 == 58)
				break;
			++a1;
		} while (a1 != a2);
	}
	else
	{
		while (1)
		{
			while (*a1 != 58)
			{
				if (++a1 == a2)
					return a2;
			}
			v6 = a1 + 1;
			v7 = "";
			v8 = a1 + 1;
			if (a1 + 1 == a2)
				return a2;
			if (!*v6)
				break;
		LABEL_15:
			++a1;
			if (v6 == a2)
				return v6;
		}
		while (++v7 != a4)
		{
			if (++v8 == a2)
				return a2;
			if (*v8 != *v7)
				goto LABEL_15;
		}
	}
	return a1;
}

