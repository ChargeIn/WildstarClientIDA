#include "../winhttp.h"

//----- (000000014019C190) ----------------------------------------------------
__int64 __fastcall sub_14019C190(_DWORD* a1, int* a2)
{
	int v2; // r9d
	int v3; // r8d
	int v4; // eax
	__int64 result; // rax

	v2 = *a2;
	if (a1[20] < *a2)
		v2 = a1[20];
	v3 = a2[1];
	if (a1[21] < v3)
		v3 = a1[21];
	v4 = a1[18];
	if (v4 < v2)
		v4 = v2;
	*a2 = v4;
	result = (unsigned int)a1[19];
	if ((int)result < v3)
		result = (unsigned int)v3;
	a2[1] = result;
	return result;
}

