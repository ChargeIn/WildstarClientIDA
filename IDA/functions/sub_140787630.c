#include "../winhttp.h"

//----- (0000000140787630) ----------------------------------------------------
__int64 __fastcall sub_140787630(__int64 a1, __int64* a2)
{
	__int64 result; // rax

	*(_QWORD*)(a1 + 32) = a2[1];
	result = *a2;
	*(_QWORD*)(a1 + 24) = *a2;
	return result;
}

