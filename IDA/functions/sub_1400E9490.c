#include "../winhttp.h"

//----- (00000001400E9490) ----------------------------------------------------
__int64 __fastcall sub_1400E9490(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v3; // r10
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // [rsp+30h] [rbp+8h]
	unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	result = *(_QWORD*)(a1 + 3336);
	v3 = a1 + 3328;
	v4 = result;
	v5 = *(_QWORD*)(result + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == result || (v6 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v6 = result;
	if (v6 != result)
		return sub_1400EE810(v3, &v7);
	return result;
}

