#include "../winhttp.h"

//----- (00000001404846C0) ----------------------------------------------------
__int64 __fastcall sub_1404846C0(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v4; // eax
	__int64 v5; // r8
	__int64 v6; // rcx

	v1 = *(_QWORD*)(a1 + 16);
	if (*(_QWORD*)(a1 + 8) == v1)
		return 0i64;
	v4 = sub_1401AE6F0(1, *(_DWORD*)(v1 - 16));
	v5 = *(_QWORD*)(a1 + 8);
	v6 = (*(_QWORD*)(a1 + 16) - v5) >> 4;
	while (v6 > 0)
	{
		if (*(_DWORD*)(v5 + 16 * (v6 >> 1)) >= v4)
		{
			v6 >>= 1;
		}
		else
		{
			v5 += 16 * (v6 >> 1) + 16;
			v6 += -1 - (v6 >> 1);
		}
	}
	return *(_QWORD*)(v5 + 8);
}

