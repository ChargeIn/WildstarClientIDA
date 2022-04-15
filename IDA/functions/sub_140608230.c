#include "../winhttp.h"

//----- (0000000140608230) ----------------------------------------------------
__int64 __fastcall sub_140608230(__int64 a1, __int64 a2)
{
	__int64 v2; // r10
	unsigned int v3; // r9d
	__int64 v4; // rax
	__int64 v5; // r8
	unsigned int v6; // ecx
	__int64 v8; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 128);
	v3 = *(_DWORD*)(a2 + 232);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < v3)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v2 || (v8 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v8 = *(_QWORD*)(a1 + 128);
	v6 = 0;
	if (v8 == v2)
		LOBYTE(v6) = a2 == 0;
	else
		LOBYTE(v6) = *(_QWORD*)(v8 + 40) == a2;
	return v6;
}

