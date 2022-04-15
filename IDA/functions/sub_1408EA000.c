#include "../winhttp.h"

//----- (00000001408EA000) ----------------------------------------------------
__int64 __fastcall sub_1408EA000(__int64 a1)
{
	__int64 v1; // rdx
	int v3; // r8d
	int i; // ecx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 264);
	if (v1)
	{
		v3 = *(_DWORD*)(a1 + 272);
		for (i = 0; v3; v3 &= v3 - 1)
			++i;
		result = sub_140833130(i << 11, v1);
		*(_DWORD*)(a1 + 88) = 0;
		*(_QWORD*)(a1 + 264) = 0i64;
	}
	return result;
}

