#include "../winhttp.h"

//----- (0000000140437EA0) ----------------------------------------------------
_BOOL8 __fastcall sub_140437EA0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v6; // [rsp+18h] [rbp+18h]

	if (!a2)
		return 0i64;
	v2 = *(_QWORD*)(a1 + 40);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v6 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v6 = v2;
	return v6 != v2;
}

