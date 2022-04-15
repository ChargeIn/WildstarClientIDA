#include "../winhttp.h"

//----- (00000001403D3470) ----------------------------------------------------
__int64 __fastcall sub_1403D3470(_QWORD* a1, int* a2)
{
	_QWORD* v4; // rsi
	int* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	int v11; // [rsp+28h] [rbp-10h]

	v4 = (_QWORD*)sub_140059170(a1, 0x10ui64);
	v5 = sub_14018B280(16i64, 0);
	if (v5)
	{
		v5[2] = *a2;
		*(_QWORD*)v5 = off_140B6FE30;
	}
	*v4 = 14672i64;
	v4[1] = v5;
	v6 = a1[4];
	v7 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.Spell", 0xAui64);
	v8 = a1[2];
	v10 = v7;
	v11 = 4;
	sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v10, v8);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();

