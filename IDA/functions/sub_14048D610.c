#include "../winhttp.h"

//----- (000000014048D610) ----------------------------------------------------
__int64 __fastcall sub_14048D610(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	int v7; // edx
	__int64 v8; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C65948 + 48);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
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
	if (v4 == v3 || (v8 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v8 = *(_QWORD*)(qword_140C65948 + 48);
	if (v8 == v3)
		return 0i64;
	v7 = *(_DWORD*)(*(_QWORD*)(v8 + 40) + 28i64);
	return _bittest(&v7, a3);
}
// 140C65948: using guessed type __int64 qword_140C65948;

