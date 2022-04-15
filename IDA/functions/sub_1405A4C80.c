#include "../winhttp.h"

//----- (00000001405A4C80) ----------------------------------------------------
__int64 __fastcall sub_1405A4C80(__int64 a1)
{
	__int64 result; // rax

	result = sub_1405A4B80(a1, 1);
	if (result)
		return *(unsigned int*)(*(_QWORD*)(result + 8) + 16i64);
	return result;
}

