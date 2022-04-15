#include "../winhttp.h"

//----- (00000001407E6DD4) ----------------------------------------------------
_WORD* __fastcall sub_1407E6DD4(_WORD* a1, _WORD* a2)
{
	_WORD* v3; // r8
	__int16 v4; // dx

	while (1)
	{
		if (!*a1)
			return 0i64;
		v3 = a2;
		if (*a2)
			break;
	LABEL_6:
		++a1;
	}
	v4 = *a2;
	while (v4 != *a1)
	{
		v4 = *++v3;
		if (!*v3)
			goto LABEL_6;
	}
	return a1;
}

