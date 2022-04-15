#include "../winhttp.h"

//----- (00000001403DFFA0) ----------------------------------------------------
__int64 __fastcall sub_1403DFFA0(_DWORD* a1, int a2)
{
	__int64 v2; // r8
	__int64 result; // rax

	v2 = qword_140C65898;
	a1[76] = a2;
	a1[1578] = 1;
	result = *(_QWORD*)(v2 + 120);
	if (result)
	{
		result = *(unsigned int*)(result + 8);
		if (a1[2] == (_DWORD)result)
			*(_DWORD*)(v2 + 28568) = 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

