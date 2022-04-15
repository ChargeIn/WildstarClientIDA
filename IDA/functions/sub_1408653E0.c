#include "../winhttp.h"

//----- (00000001408653E0) ----------------------------------------------------
char __fastcall sub_1408653E0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rdx

	v1 = *(_QWORD*)(a1 + 32);
	v2 = *(_QWORD*)(a1 + 40);
	while (v1 != v2)
	{
		v3 = *(_QWORD*)(v1 + 16);
		if (v3)
		{
			v4 = *(_QWORD*)(v3 + 56);
			if (v4)
			{
				if (*(_WORD*)(v4 + 72))
					return 1;
			}
		}
		v1 += 40i64;
	}
	return 0;
}

