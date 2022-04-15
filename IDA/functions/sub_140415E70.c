#include "../winhttp.h"

//----- (0000000140415E70) ----------------------------------------------------
__int64 __fastcall sub_140415E70(_QWORD* a1, _DWORD* a2)
{
	_QWORD* v4; // rsi
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // r9
	__int64 v11; // [rsp+20h] [rbp-18h] BYREF
	int v12; // [rsp+28h] [rbp-10h]

	if (*a2 && a2[1])
	{
		v4 = (_QWORD*)sub_140059170(a1, 8ui64);
		v5 = sub_14018B280(1216i64, 0);
		if (v5)
			v6 = sub_14040FAE0((__int64)v5);
		else
			v6 = 0i64;
		*v4 = v6;
		sub_1404124E0(v6, a2, 1);
		v7 = a1[4];
		v8 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.ItemData", 0xDui64);
		v9 = a1[2];
		v11 = v8;
		v12 = 4;
		sub_14005E8E0((__int64)a1, v7 + 160, (int*)&v11, v9);
		a1[2] += 16i64;
		sub_140058BF0((__int64)a1, -2);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

