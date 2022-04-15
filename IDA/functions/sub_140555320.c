#include "../winhttp.h"

//----- (0000000140555320) ----------------------------------------------------
char __fastcall sub_140555320(__int64 a1, __int64 a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)(a1 + 104);
	if (v2)
	{
		if (*(_QWORD*)(a2 + 104))
		{
		LABEL_6:
			LOBYTE(v2) = *(_DWORD*)(a1 + 20) < *(_DWORD*)(a2 + 20);
			return v2;
		}
		LOBYTE(v2) = 1;
	}
	else if (!*(_QWORD*)(a2 + 104))
	{
		goto LABEL_6;
	}
	return v2;
}
// 140555337: conditional instruction was optimized away because rax.8==0

