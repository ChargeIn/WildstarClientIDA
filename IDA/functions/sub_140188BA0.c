#include "../winhttp.h"

//----- (0000000140188BA0) ----------------------------------------------------
__int64 __fastcall sub_140188BA0(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 4) = 0;
	*(_QWORD*)(a1 + 40) = result;
	*(_QWORD*)(a1 + 24) += -32 * ((result - *(_QWORD*)(a1 + 16)) >> 5);
	return result;
}

