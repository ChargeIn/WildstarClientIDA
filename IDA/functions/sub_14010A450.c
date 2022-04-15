//----- (000000014010A450) ----------------------------------------------------
_WORD* __fastcall sub_14010A450(_WORD* a1, _WORD* a2, __int16* a3, __int16* a4)
{
	_WORD* v6; // rdi
	__int16 v8; // r9
	_WORD* v9; // rbx
	_WORD* v10; // r8
	_WORD* v11; // rdx

	if (a1 == a2 || a3 == a4)
		return a1;
	v6 = a3 + 1;
	if (a3 + 1 == a4)
	{
		do
		{
			if (*a1 == *a3)
				break;
			++a1;
		} while (a1 != a2);
		return a1;
	}
	else
	{
		v8 = *a3;
		while (1)
		{
			while (*a1 != v8)
			{
				if (++a1 == a2)
					return a2;
			}
			v9 = a1 + 1;
			v10 = v6;
			v11 = a1 + 1;
			if (a1 + 1 == a2)
				return a2;
			if (*v9 == *v6)
				break;
		LABEL_16:
			++a1;
			if (v9 == a2)
				return v9;
		}
		while (1)
		{
			if (++v10 == a4)
				return a1;
			if (++v11 == a2)
				return a2;
			if (*v11 != *v10)
				goto LABEL_16;
		}
	}
}

