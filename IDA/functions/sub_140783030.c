#include "../winhttp.h"

//----- (0000000140783030) ----------------------------------------------------
__int64 __fastcall sub_140783030(__int64 a1, _DWORD* a2, __int64 a3, _DWORD* a4)
{
	__int64 result; // rax

	*a4 = a2[1008];
	a4[1] = a2[1009];
	result = (unsigned int)a2[1010];
	a4[2] = result;
	return result;
}

