//----- (000000014013D740) ----------------------------------------------------
__int64* __fastcall sub_14013D740(__int64* a1, __int64* a2, _QWORD* a3, int a4)
{
	__int64 v5; // r10
	_WORD* v6; // rax
	__int64 v7; // r8

	v5 = (*a2 - *a3) >> 3;
	if (v5 <= 0)
	{
	LABEL_7:
		v7 = *a2;
		if ((*a2 - *a3) >> 1 != 1)
		{
			if ((*a2 - *a3) >> 1 != 2)
			{
				if ((*a2 - *a3) >> 1 != 3)
				{
				LABEL_16:
					v6 = (_WORD*)*a3;
					goto LABEL_17;
				}
				if (*(_WORD*)(v7 - 2) == HIWORD(a4))
				{
				LABEL_18:
					*a1 = v7;
					return a1;
				}
				*a2 = v7 - 2;
			}
			v6 = (_WORD*)*a2;
			if (*(_WORD*)(*a2 - 2) == HIWORD(a4))
			{
			LABEL_17:
				*a1 = (__int64)v6;
				return a1;
			}
			*a2 -= 2i64;
		}
		v6 = (_WORD*)*a2;
		if (*(_WORD*)(*a2 - 2) != HIWORD(a4))
		{
			*a2 -= 2i64;
			goto LABEL_16;
		}
		goto LABEL_17;
	}
	while (1)
	{
		v6 = (_WORD*)(*a2 - 2);
		if (*v6 == HIWORD(a4))
			break;
		v7 = *a2 - 4;
		*a2 = (__int64)v6;
		if (*(v6 - 1) == HIWORD(a4))
			goto LABEL_17;
		*a2 = v7;
		if (*(v6 - 2) == HIWORD(a4))
			goto LABEL_18;
		*a2 -= 2i64;
		v7 = *a2;
		if (*(_WORD*)(*a2 - 2) == HIWORD(a4))
			goto LABEL_18;
		--v5;
		*a2 -= 2i64;
		if (v5 <= 0)
			goto LABEL_7;
	}
	*a1 = *a2;
	return a1;
}

