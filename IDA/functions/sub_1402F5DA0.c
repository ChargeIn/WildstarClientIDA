#include "../winhttp.h"

//----- (00000001402F5DA0) ----------------------------------------------------
__int64 __fastcall sub_1402F5DA0(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rbx

	result = *(unsigned int*)(a1 + 1408);
	if ((result & 2) != 0)
	{
		*(_DWORD*)(a1 + 1412) &= ~2u;
		result = (unsigned int)result & 0xFFFFFFFD;
		v2 = *(_QWORD*)(a1 + 1232);
		for (*(_DWORD*)(a1 + 1408) = result; v2; v2 = *(_QWORD*)(v2 + 1248))
			result = sub_1402F5DA0(v2);
	}
	return result;
}

