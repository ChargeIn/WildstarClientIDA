#include "../winhttp.h"

//----- (00000001402CA240) ----------------------------------------------------
void __fastcall sub_1402CA240(__int64* a1, unsigned __int64 a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
	__int128 v5; // [rsp+20h] [rbp-B8h] BYREF
	__int64 v6; // [rsp+30h] [rbp-A8h]
	int v7; // [rsp+38h] [rbp-A0h]
	__int64 v8; // [rsp+40h] [rbp-98h]
	__int64 v9; // [rsp+50h] [rbp-88h]
	__int64 v10; // [rsp+80h] [rbp-58h]
	__int128 v11; // [rsp+90h] [rbp-48h]
	__int64 v12; // [rsp+A0h] [rbp-38h]
	__int128 v13; // [rsp+B0h] [rbp-28h]
	__int64 v14; // [rsp+C0h] [rbp-18h]
	int v15; // [rsp+C8h] [rbp-10h]

	v2 = a1[1];
	v7 = 0;
	v9 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v13 = 0i64;
	v5 = 0i64;
	v12 = 0i64;
	v14 = 0i64;
	v15 = 0;
	v6 = 0i64;
	v8 = 0i64;
	v4 = (a1[2] - v2) / 176;
	if (a2 >= v4)
		sub_1402CA870(a1, a1[2], a2 - v4, (__int64)&v5);
	else
		sub_1402CA320((__int64)a1, (_QWORD*)(v2 + 176 * a2), a1[2]);
	sub_1402D3190(&v5);
}

