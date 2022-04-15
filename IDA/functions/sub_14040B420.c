#include "../winhttp.h"

//----- (000000014040B420) ----------------------------------------------------
__int64 __fastcall sub_14040B420(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v4; // r9
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 result; // rax
	__int64 v9; // [rsp+38h] [rbp+10h]

	v4 = *(_QWORD*)(qword_140C65998 + 16);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v9 = v5, a3 < *(_DWORD*)(v5 + 32)))
		v9 = *(_QWORD*)(qword_140C65998 + 16);
	if (v9 == v4)
		v7 = 0i64;
	else
		v7 = *(_QWORD*)(v9 + 40);
	result = sub_140432F20(*(_QWORD**)(a1 + 16), v7);
	if ((_DWORD)result)
	{
		sub_1400FB540(a1);
		result = *(_QWORD*)(a1 + 16);
		*(_QWORD*)(result + 16) -= 16i64;
	}
	return result;
}
// 140C65998: using guessed type __int64 qword_140C65998;

