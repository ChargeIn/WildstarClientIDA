#include "../winhttp.h"

//----- (000000014049FAC0) ----------------------------------------------------
__int64 __fastcall sub_14049FAC0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int v8; // edx
	unsigned int v9; // ecx
	int v10; // r8d
	__int64 v11; // [rsp+0h] [rbp-18h]

	if (!qword_140C65948)
		return 0i64;
	v5 = *(_QWORD*)(qword_140C65948 + 48);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a4)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v11 = v6, a4 < *(_DWORD*)(v6 + 32)))
		v11 = *(_QWORD*)(qword_140C65948 + 48);
	v8 = 0;
	if (v11 == *(_QWORD*)(qword_140C65948 + 48))
		v9 = 0;
	else
		v9 = *(_DWORD*)(*(_QWORD*)(v11 + 40) + 52i64);
	v10 = a3 - 1;
	if (v10)
	{
		if (v10 == 1)
		{
			LOBYTE(v8) = v9 == 0;
			return v8;
		}
	}
	else
	{
		return v9;
	}
	return v8;
}
// 140C65948: using guessed type __int64 qword_140C65948;

