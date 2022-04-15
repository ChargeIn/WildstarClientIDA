#include "../winhttp.h"

//----- (00000001406A6BA0) ----------------------------------------------------
__int64 __fastcall sub_1406A6BA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	unsigned __int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	unsigned int v8; // ecx
	__int64 v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	LABEL_11:
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = sub_1405B15C0(*(_QWORD*)(qword_140C659F0 + 824), *(_DWORD*)(*(_QWORD*)(v2 + 8) + 4i64));
	if (!v4
		|| (v5 = **(unsigned int**)(v3 + 8), v5 >= (__int64)(*(_QWORD*)(v4 + 256) - *(_QWORD*)(v4 + 248)) >> 3)
		|| (v6 = *(_QWORD*)(*(_QWORD*)(v4 + 248) + 8 * v5)) == 0
		|| (v7 = sub_140206C60(*(_DWORD*)(v6 + 4))) == 0
		|| (v8 = *(_DWORD*)(v7 + 92)) == 0
		|| (v9 = sub_140206C60(v8)) == 0
		|| !(unsigned int)sub_1406A6C80(a1, v9, 0i64, 1))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		goto LABEL_11;
	}
	return 1i64;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;

