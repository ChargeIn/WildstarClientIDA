#include "../winhttp.h"

//----- (000000014027FCD0) ----------------------------------------------------
__int64 __fastcall sub_14027FCD0(__int64 a1, int a2, int a3)
{
	__int64 result; // rax

	result = 0i64;
	if (a2)
	{
		LOBYTE(result) = a3 != 0;
		result = (unsigned int)(result + 1);
	}
	*(_DWORD*)(a1 + 7176) |= 2u;
	*(_DWORD*)(a1 + 7288) = result;
	return result;
}

