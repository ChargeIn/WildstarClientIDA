#include "../winhttp.h"

//----- (00000001401C96D0) ----------------------------------------------------
_WORD* __fastcall sub_1401C96D0(_WORD* a1, float a2)
{
	unsigned int v2; // edx
	int v3; // r8d
	_WORD* result; // rax

	v2 = LODWORD(a2) & 0x7FFFFFFF;
	v3 = HIWORD(LODWORD(a2)) & 0x8000;
	if ((LODWORD(a2) & 0x7FFFFFFFu) >= 0x33800000)
	{
		if (v2 > 0x387FEFFF)
		{
			result = a1;
			if (v2 > 0x47FFEFFF)
				*a1 = v3 | 0x43FF;
			else
				*a1 = v3 | ((v2 - 939520000) >> 13);
		}
		else
		{
			result = a1;
			*a1 = v3 | ((((LODWORD(a2) & 0x7FFFFF | 0x800000u) >> (113 - ((LODWORD(a2) & 0x7FFFFFFFu) >> 23))) + 4096) >> 13);
		}
	}
	else
	{
		result = a1;
		*a1 = v3;
	}
	return result;
}

