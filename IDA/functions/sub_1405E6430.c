#include "../winhttp.h"

//----- (00000001405E6430) ----------------------------------------------------
__int64 __fastcall sub_1405E6430(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
	__int64 v5; // rdx
	__int64 result; // rax

	if (!*(_DWORD*)(a1 + 544))
		return sub_14079E710(*(_QWORD*)(a1 + 72), a3, a4, a5);
	v5 = *(_QWORD*)(a1 + 608);
	if (*(_DWORD*)v5 != 1)
		return sub_14079E710(*(_QWORD*)(a1 + 72), a3, a4, a5);
	result = *(unsigned int*)(v5 + 8);
	if (!(_DWORD)result)
	{
		if (!*(_QWORD*)(v5 + 24))
			return sub_14079E710(*(_QWORD*)(a1 + 72), a3, a4, a5);
		result = *(unsigned int*)(*(_QWORD*)(v5 + 16) + 16i64);
		if (!(_DWORD)result)
			return sub_14079E710(*(_QWORD*)(a1 + 72), a3, a4, a5);
	}
	return result;
}

