#include "../winhttp.h"

//----- (0000000140024FC0) ----------------------------------------------------
__int64 __fastcall sub_140024FC0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // r9d
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rcx
	__int64 result; // rax
	__int64 v10; // [rsp+30h] [rbp+8h]

	v2 = sub_140020690(qword_140C658C8, 0);
	v3 = 0;
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(int*)(v6 + 32) < 29)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v7 = *(_DWORD*)(v5 + 32), v7 > 29) || v7 >= 29 && *(_DWORD*)(v5 + 36))
		v10 = v4;
	else
		v10 = v5;
	if (v10 != v4 && *(_DWORD*)(v10 + 48) == 1)
		v3 = *(_DWORD*)(v10 + 52);
	v8 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	result = 1i64;
	*(double*)v8 = (double)v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C658C8: using guessed type __int64 qword_140C658C8;

