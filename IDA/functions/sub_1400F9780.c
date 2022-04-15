//----- (00000001400F9780) ----------------------------------------------------
_WORD* __fastcall sub_1400F9780(_WORD* a1, __int64 a2, int a3)
{
	__int16 v3; // ax
	__int64 v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rdx
	bool v8; // zf
	_WORD* result; // rax

	v3 = HIWORD(a3);
	v5 = (a2 - (__int64)a1) >> 3;
	if (v5 > 0)
	{
		while (v3 != *a1)
		{
			if (v3 == a1[1])
				return a1 + 1;
			if (v3 == a1[2])
				return a1 + 2;
			if (v3 == a1[3])
				return a1 + 3;
			--v5;
			a1 += 4;
			if (v5 <= 0)
				goto LABEL_7;
		}
		return a1;
	}
LABEL_7:
	v6 = ((a2 - (__int64)a1) >> 1) - 1;
	if (!v6)
	{
	LABEL_14:
		v8 = v3 == *a1;
		result = a1;
		if (v8)
			return result;
		return (_WORD*)a2;
	}
	v7 = v6 - 1;
	if (!v7)
		goto LABEL_12;
	if (v7 == 1)
	{
		if (v3 == *a1)
			return a1;
		++a1;
	LABEL_12:
		if (v3 != *a1)
		{
			++a1;
			goto LABEL_14;
		}
		return a1;
	}
	return (_WORD*)a2;
}

