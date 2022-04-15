#include "../winhttp.h"

//----- (0000000140056700) ----------------------------------------------------
__int64 __fastcall sub_140056700(_QWORD* a1, int a2)
{
	unsigned __int64 v3; // rcx
	int i; // r8d
	unsigned __int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rbx
	char v8[40]; // [rsp+20h] [rbp-98h] BYREF
	unsigned int v9; // [rsp+48h] [rbp-70h]
	char v10[60]; // [rsp+58h] [rbp-60h] BYREF
	int v11; // [rsp+94h] [rbp-24h]

	v3 = a1[5];
	for (i = a2; i > 0; v3 -= 40i64)
	{
		if (v3 <= a1[10])
			break;
		--i;
		if (!*(_BYTE*)(**(_QWORD**)(v3 + 8) + 10i64))
			i -= *(_DWORD*)(v3 + 36);
	}
	if (i)
	{
		if (i >= 0)
			goto LABEL_13;
		v11 = 0;
	}
	else
	{
		v5 = a1[10];
		if (v3 <= v5)
			goto LABEL_13;
		v11 = (__int64)(v3 - v5) / 40;
	}
	sub_140059EF0((__int64)a1, byte_140C1DB1C, (__int64)v8);
	if ((int)v9 > 0)
		return sub_140058780((__int64)a1, (unsigned __int64*)"%s:%d: ", v10, v9);
LABEL_13:
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	result = sub_140062650((__int64)a1, (unsigned __int64*)&unk_140C635FC, 0i64);
	*(_DWORD*)(v7 + 8) = 4;
	*(_QWORD*)v7 = result;
	a1[2] += 16i64;
	return result;
}
// 140C1DB1C: using guessed type _BYTE byte_140C1DB1C[48];
// 140056700: using guessed type char var_98[40];
// 140056700: using guessed type char var_60[60];

