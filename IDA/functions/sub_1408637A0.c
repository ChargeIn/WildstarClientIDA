#include "../winhttp.h"

//----- (00000001408637A0) ----------------------------------------------------
char __fastcall sub_1408637A0(_BYTE* a1, char a2, char a3)
{
	char result; // al

	if ((a3 & 1) != 0)
	{
		a1[920] &= ~1u;
		result = a2 & 1;
		a1[920] |= a2 & 1;
	}
	if ((a3 & 2) != 0)
	{
		a1[960] &= ~1u;
		result = (a2 & 2) != 0;
		a1[960] |= result;
	}
	if ((a3 & 4) != 0)
	{
		a1[1000] &= ~1u;
		result = (a2 & 4) != 0;
		a1[1000] |= result;
	}
	if ((a3 & 8) != 0)
	{
		a1[1040] &= ~1u;
		result = (a2 & 8) != 0;
		a1[1040] |= result;
	}
	if ((a3 & 0x10) != 0)
	{
		a1[1048] &= ~1u;
		a1[1048] |= (a2 & 0x10) != 0;
	}
	return result;
}

