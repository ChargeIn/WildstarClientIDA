#include "../winhttp.h"

//----- (00000001405B3F90) ----------------------------------------------------
__int64 __fastcall sub_1405B3F90(__int64 a1)
{
	__int64 result; // rax
	int v2; // r8d

	result = *(_QWORD*)(a1 + 3840);
	if (!result)
		return a1;
	v2 = *(_DWORD*)(result + 128);
	if (((v2 - 3) & 0xFFFFFFF9) != 0 || v2 == 5)
		return a1;
	return result;
}

