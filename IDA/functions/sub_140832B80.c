#include "../winhttp.h"

//----- (0000000140832B80) ----------------------------------------------------
__int64 __fastcall sub_140832B80(__int64 a1)
{
	__int64 result; // rax

	result = *(_QWORD*)(a1 + 16);
	if (result)
		return *(_QWORD*)(result + 24);
	return result;
}

