#include "../winhttp.h"

//----- (000000014004C470) ----------------------------------------------------
__int64 __fastcall sub_14004C470(__int64 a1)
{
	int v1; // r8d
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 result; // rax
	__int64 v7; // [rsp+8h] [rbp+8h]

	v1 = *(_DWORD*)(a1 + 456);
	v3 = *(_QWORD*)(a1 + 416);
	v4 = *(_QWORD*)(v3 + 8);
	v5 = v3;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < v1)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v3 || (v7 = v5, v1 < *(_DWORD*)(v5 + 32)))
		v7 = v3;
	result = v7;
	if (v7 != v3 && !*(_DWORD*)(*(_QWORD*)(v7 + 40) + 5072i64))
		*(_DWORD*)(a1 + 456) = 0;
	return result;
}

