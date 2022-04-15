#include "../winhttp.h"

//----- (000000014027F440) ----------------------------------------------------
__int64 __fastcall sub_14027F440(__int64 a1, int a2)
{
	__int64 result; // rax

	result = *((unsigned int*)&unk_140AE7EF8 + a2);
	*(_DWORD*)(a1 + 7176) |= 1u;
	*(_DWORD*)(a1 + 7180) = result;
	return result;
}

