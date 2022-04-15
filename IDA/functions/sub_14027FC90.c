#include "../winhttp.h"

//----- (000000014027FC90) ----------------------------------------------------
__int64 __fastcall sub_14027FC90(__int64 a1, int a2)
{
	__int64 result; // rax

	result = (unsigned int)dword_140AE8020[a2];
	*(_DWORD*)(a1 + 7176) |= 2u;
	*(_DWORD*)(a1 + 7284) = result;
	return result;
}
// 140AE8020: using guessed type int dword_140AE8020[8];

