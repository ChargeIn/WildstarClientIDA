#include "../winhttp.h"

//----- (000000014046C2C0) ----------------------------------------------------
__int64 __fastcall sub_14046C2C0(__int64 a1)
{
	__int64 v1; // r8
	__int64 result; // rax

	v1 = qword_140C65898;
	*(_DWORD*)(a1 + 6312) = 1;
	result = *(_QWORD*)(v1 + 120);
	if (result)
	{
		result = *(unsigned int*)(result + 8);
		if (*(_DWORD*)(a1 + 8) == (_DWORD)result)
			*(_DWORD*)(v1 + 28568) = 1;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

