#include "../winhttp.h"

//----- (000000014079C260) ----------------------------------------------------
__int64 __fastcall sub_14079C260(_WORD* a1, __int64 a2, __int16* a3)
{
	_WORD* v3; // rdx
	__int16 v4; // ax
	__int16 v5; // ax
	_WORD* v6; // rcx
	_WORD* v7; // rcx
	__int64 result; // rax

	v3 = a1 + 260;
	if (*a1)
	{
		while (a1 < v3)
		{
			if (!*++a1)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		if (a1 < v3)
		{
			*a1++ = 92;
			if (a1 < v3)
				*a1++ = 81;
		}
	}
	v4 = *a3;
	if (*a3)
	{
		while (a1 < v3)
		{
			*a1 = v4;
			v5 = *a3;
			++a1;
			++a3;
			if (v5 == 92 && a1 < v3)
				*a1++ = 92;
			v4 = *a3;
			if (!*a3)
				goto LABEL_13;
		}
	}
	else
	{
	LABEL_13:
		if (a1 < v3)
		{
			*a1 = 92;
			v6 = a1 + 1;
			if (v6 < v3)
			{
				v7 = v6 + 1;
				*(v7 - 1) = 69;
				if (v7 < v3)
				{
					result = 0i64;
					*v7 = 0;
					return result;
				}
			}
		}
	}
	result = 0i64;
	*(v3 - 1) = 0;
	return result;
}

