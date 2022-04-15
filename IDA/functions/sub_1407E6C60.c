//----- (00000001407E6C60) ----------------------------------------------------
__int64 __fastcall sub_1407E6C60(_WORD* a1, _WORD* a2)
{
	_WORD* v3; // rax
	bool i; // zf
	_WORD* v5; // r8
	__int16 v6; // dx

	v3 = a1;
	for (i = *a1 == 0; !i; i = *v3 == 0)
	{
		v5 = a2;
		if (*a2)
		{
			v6 = *a2;
			while (v6 != *v3)
			{
				v6 = *++v5;
				if (!*v5)
					goto LABEL_7;
			}
			return v3 - a1;
		}
	LABEL_7:
		++v3;
	}
	return v3 - a1;
}

