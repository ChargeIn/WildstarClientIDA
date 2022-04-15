#include "../winhttp.h"

//----- (000000014088C2D0) ----------------------------------------------------
__int64 __fastcall sub_14088C2D0(_QWORD* a1, _DWORD* a2)
{
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rbp
	__int64 v7; // rsi
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // ebx
	char v12[264]; // [rsp+20h] [rbp-138h] BYREF
	__int64 v13[5]; // [rsp+128h] [rbp-30h] BYREF

	sub_140890370((__int64)v12, (__int64)a1, 0);
	v4 = v13[0];
	if (v13[0])
	{
		v5 = a1[2];
		v6 = *(_QWORD*)(a1[13] + 8i64);
		v7 = a1[14];
		if (v5)
			v7 += sub_14088C230(v5);
		if (*(_QWORD*)(v4 + 24))
		{
			v8 = sub_1408904A0((__int64)v12, 0);
			v9 = sub_14088FAE0(v13, v6 - v7 - v8);
		}
		else
		{
			v9 = 0;
		}
		v10 = sub_14088CE10(v4, v9, a2);
	}
	else
	{
		v10 = 2;
	}
	nullsub_1(v12);
	return v10;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 14088C2D0: using guessed type __int64 var_30[5];

