#include "../winhttp.h"

//----- (00000001401491E0) ----------------------------------------------------
__int64 __fastcall sub_1401491E0(_QWORD* a1, _OWORD* a2)
{
	_OWORD* v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r9
	__int64 v9; // [rsp+20h] [rbp-18h] BYREF
	int v10; // [rsp+28h] [rbp-10h]

	v4 = (_OWORD*)sub_140059170(a1, 0x20ui64);
	*v4 = *a2;
	v4[1] = a2[1];
	v5 = a1[4];
	v6 = sub_140062650((__int64)a1, (unsigned __int64*)"AaRect", 6ui64);
	v7 = a1[2];
	v9 = v6;
	v10 = 4;
	sub_14005E8E0((__int64)a1, v5 + 160, (int*)&v9, v7);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

