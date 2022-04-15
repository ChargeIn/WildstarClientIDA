//----- (000000014019A370) ----------------------------------------------------
_QWORD* __fastcall sub_14019A370(_QWORD* a1, __int64 a2, __int64* a3)
{
	__int64 v3; // r10
	__int64 v4; // r9
	_QWORD* result; // rax

	v3 = (a2 - (__int64)a1) >> 6;
	if (v3 > 0)
	{
		v4 = *a3;
		while (*a1 != v4 || a1[1] != a3[1])
		{
			if (a1[2] == v4 && a1[3] == a3[1])
				return a1 + 2;
			if (a1[4] == v4 && a1[5] == a3[1])
				return a1 + 4;
			if (a1[6] == v4 && a1[7] == a3[1])
				return a1 + 6;
			--v3;
			a1 += 8;
			if (v3 <= 0)
				goto LABEL_12;
		}
		return a1;
	}
LABEL_12:
	if ((a2 - (__int64)a1) >> 4 != 1)
	{
		if ((a2 - (__int64)a1) >> 4 != 2)
		{
			if ((a2 - (__int64)a1) >> 4 != 3)
				return (_QWORD*)a2;
			if (*a1 == *a3 && a1[1] == a3[1])
				return a1;
			a1 += 2;
		}
		if (*a1 != *a3 || a1[1] != a3[1])
		{
			a1 += 2;
			goto LABEL_21;
		}
		return a1;
	}
LABEL_21:
	if (*a1 != *a3)
		return (_QWORD*)a2;
	result = a1;
	if (a1[1] != a3[1])
		return (_QWORD*)a2;
	return result;
}

