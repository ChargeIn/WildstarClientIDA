#include "../winhttp.h"

//----- (0000000140415BB0) ----------------------------------------------------
__int64 __fastcall sub_140415BB0(_QWORD* a1, __int64 a2)
{
	_QWORD* v4; // rsi
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int64 v8; // r9
	__int64 v10; // [rsp+20h] [rbp-18h] BYREF
	int v11; // [rsp+28h] [rbp-10h]

	v4 = (_QWORD*)sub_140059170(a1, 8ui64);
	v5 = (__int64)sub_14018B280(1216i64, 8u);
	if (v5)
		v5 = sub_14040FAE0(v5);
	*v4 = v5;
	sub_140410300(v5, a2, 1);
	v6 = a1[4];
	v7 = sub_140062650((__int64)a1, (unsigned __int64*)"Game.ItemData", 0xDui64);
	v8 = a1[2];
	v10 = v7;
	v11 = 4;
	sub_14005E8E0((__int64)a1, v6 + 160, (int*)&v10, v8);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

