#include "../winhttp.h"

//----- (0000000140491CF0) ----------------------------------------------------
__int64 __fastcall sub_140491CF0(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // r10
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // [rsp+20h] [rbp+20h]

	v3 = a3;
	if (!a3)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 80);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v8 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v8 = v5;
	if (v8 == v5 || (unsigned __int64)(v3 - 1) >= *(_QWORD*)(v8 + 48))
		return 0i64;
	else
		return *(_QWORD*)(*(_QWORD*)(v8 + 40) + 8 * (v3 - 1));
}

