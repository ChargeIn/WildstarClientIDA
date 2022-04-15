#include "../winhttp.h"

//----- (0000000140830170) ----------------------------------------------------
__int64 __fastcall sub_140830170(__int64 a1)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_DWORD*)(a1 + 1600) = 0;
	result = a1;
	*(_DWORD*)(a1 + 48) = -1;
	return result;
}

