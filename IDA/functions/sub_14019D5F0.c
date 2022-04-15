//----- (000000014019D5F0) ----------------------------------------------------
__int64 __fastcall sub_14019D5F0(_WORD** a1, unsigned __int64 a2, int* a3)
{
	_WORD* i; // rax
	int v6; // edx
	int v7; // r11d
	_WORD* v8; // r10
	unsigned __int16 v9; // r8
	int v10; // edx
	unsigned __int16 v11; // r8
	unsigned __int16 v12; // r8
	unsigned __int16 v13; // r8

	for (i = *a1; (unsigned __int64)i < a2; ++i)
	{
		if (*i != 32 && *i != 9)
			break;
	}
	v6 = 0;
	v7 = 0;
	if ((unsigned __int64)i < a2 && *i == 45)
	{
		v7 = 1;
		++i;
	}
	v8 = i;
	if ((unsigned __int64)i >= a2)
		return 0i64;
	if (*i != 48)
	{
		do
		{
			v13 = *i;
			if ((unsigned __int16)(*i - 48) > 9u)
				break;
			++i;
			v6 = v13 + 2 * (5 * v6 - 24);
		} while ((unsigned __int64)i < a2);
		goto LABEL_31;
	}
	if ((unsigned __int64)++i >= a2)
		goto LABEL_31;
	if (*i != 120)
	{
		if (*i != 98)
		{
			do
			{
				v12 = *i;
				if ((unsigned __int16)(*i - 48) > 7u)
					break;
				++i;
				v6 = v12 + 8 * (v6 - 6);
			} while ((unsigned __int64)i < a2);
			goto LABEL_31;
		}
		v8 = ++i;
		if ((unsigned __int64)i < a2)
		{
			do
			{
				v11 = *i;
				if ((unsigned __int16)(*i - 48) > 1u)
					break;
				++i;
				v6 = v11 + 2 * (v6 - 24);
			} while ((unsigned __int64)i < a2);
			goto LABEL_31;
		}
		return 0i64;
	}
	v8 = ++i;
	if ((unsigned __int64)i >= a2)
		return 0i64;
	do
	{
		v9 = *i;
		if ((unsigned __int16)(*i - 48) > 9u)
		{
			if ((unsigned __int16)(v9 - 97) > 5u)
			{
				if ((unsigned __int16)(v9 - 65) > 5u)
					break;
				v10 = 16 * v6 - 55;
			}
			else
			{
				v10 = 16 * v6 - 87;
			}
		}
		else
		{
			v10 = 16 * (v6 - 3);
		}
		++i;
		v6 = v9 + v10;
	} while ((unsigned __int64)i < a2);
LABEL_31:
	if (i == v8)
		return 0i64;
	*a1 = i;
	if (v7)
		v6 = -v6;
	*a3 = v6;
	return 1i64;
}

