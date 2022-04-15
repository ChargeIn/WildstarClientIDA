#include "../winhttp.h"

//----- (00000001400D1A90) ----------------------------------------------------
char __fastcall sub_1400D1A90(__int64 a1, __int64 a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 16);
	if (!v2)
		return 0;
	while (v2 != a2)
	{
		v2 = *(_QWORD*)(v2 + 16);
		if (!v2)
			return 0;
	}
	return 1;
}

