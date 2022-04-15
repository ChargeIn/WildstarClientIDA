#include "../winhttp.h"

//----- (000000014085BC60) ----------------------------------------------------
__int64 __fastcall sub_14085BC60(__int64 a1, char a2, char a3)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 40);
	if (result)
		*(_BYTE*)(result + 32) = a2 | *(_BYTE*)(result + 32) & ~a3;
	return result;
}

