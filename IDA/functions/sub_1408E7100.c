#include "../winhttp.h"

//----- (00000001408E7100) ----------------------------------------------------
__int64 __fastcall sub_1408E7100(_DWORD* a1, _DWORD* a2)
{
	__int64 result; // rax

	*a2 = a1[2];
	a2[1] = a1[3];
	a2[2] = a1[4];
	a2[3] = a1[5];
	a2[4] = a1[6];
	a2[5] = a1[7];
	a2[6] = a1[8];
	a2[7] = a1[9];
	a2[8] = a1[10];
	a2[9] = a1[11];
	a2[10] = a1[12];
	result = (unsigned int)a1[13];
	a2[11] = result;
	return result;
}

