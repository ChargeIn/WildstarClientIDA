#include "../winhttp.h"

//----- (0000000140880C80) ----------------------------------------------------
__int64 __fastcall sub_140880C80(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	result = 1i64;
	if ((*(_BYTE*)(a1 + 126) & 8) != 0)
		*(_QWORD*)(a1 + 96) += a2 - a3;
	return result;
}

