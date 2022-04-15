#include "../winhttp.h"

//----- (0000000140796FC0) ----------------------------------------------------
__int64 __fastcall sub_140796FC0(_QWORD* a1)
{
	unsigned __int64 v2; // rcx
	int v3; // r8d
	unsigned __int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 result; // rax
	char v8[116]; // [rsp+20h] [rbp-98h] BYREF
	int v9; // [rsp+94h] [rbp-24h]

	v2 = a1[5];
	v3 = 1;
	v4 = a1[10];
	do
	{
		if (v2 <= v4)
			break;
		--v3;
		if (!*(_BYTE*)(**(_QWORD**)(v2 + 8) + 10i64))
			v3 -= *(_DWORD*)(v2 + 36);
		v2 -= 40i64;
	} while (v3 > 0);
	if (v3)
	{
		if (v3 >= 0)
			goto LABEL_14;
		v9 = 0;
	}
	else
	{
		if (v2 <= v4)
			goto LABEL_14;
		v9 = (__int64)(v2 - v4) / 40;
	}
	if (!(unsigned int)sub_140059EF0((__int64)a1, asc_140C39F7C, (__int64)v8)
		|| (v5 = a1[2], *(_DWORD*)(v5 - 8) == 6) && *(_BYTE*)(*(_QWORD*)(v5 - 16) + 10i64))
	{
	LABEL_14:
		sub_140056830(a1, (unsigned __int64*)aModuleNotCalle);
	}
	v6 = a1[2];
	*(_QWORD*)v6 = *(_QWORD*)(v6 - 32);
	*(_DWORD*)(v6 + 8) = *(_DWORD*)(v6 - 24);
	a1[2] += 16i64;
	result = sub_140058CF0((__int64)a1, -2);
	a1[2] -= 16i64;
	return result;
}
// 140796FC0: using guessed type char var_98[116];

