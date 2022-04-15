#include "../winhttp.h"

//----- (000000014031E110) ----------------------------------------------------
__int64 __fastcall sub_14031E110(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)(*(_DWORD*)(a1 + 1248) + 1);
	*(_DWORD*)(a1 + 1248) = result;
	return result;
}

