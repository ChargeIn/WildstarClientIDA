#include "../winhttp.h"

//----- (00000001408628B0) ----------------------------------------------------
char __fastcall sub_1408628B0(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v3; // r8

	v2 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a1 + 24);
	if (v2 == v3)
		return 0;
	while (*(_QWORD*)(v2 + 8) != a2)
	{
		v2 += 32i64;
		if (v2 == v3)
			return 0;
	}
	return 1;
}

