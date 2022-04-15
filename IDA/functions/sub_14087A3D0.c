#include "../winhttp.h"

//----- (000000014087A3D0) ----------------------------------------------------
__int64 __fastcall sub_14087A3D0(__int64 a1, char a2)
{
	unsigned __int16 v2; // ax
	__int64 result; // rax

	v2 = *(_WORD*)(a1 + 84);
	*(_QWORD*)(a1 + 88) = *(unsigned int*)(a1 + 52)
		+ *(_QWORD*)(*(_QWORD*)(a1 + 24) + 416i64)
		+ (*(_DWORD*)(a1 + 44) >> 6) * (unsigned int)*(unsigned __int16*)(a1 + 96);
	if (v2 > 1u)
		*(_WORD*)(a1 + 84) = v2 - 1;
	result = 45i64;
	if (a2)
		return 17i64;
	return result;
}

