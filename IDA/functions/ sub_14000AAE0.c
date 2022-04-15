#include "../winhttp.h"

//----- (000000014000AAE0) ----------------------------------------------------
__int64 sub_14000AAE0()
{
	int v0; // ecx
	int v1; // r9d
	int v2; // eax
	int v3; // r15d
	int v4; // eax
	int v5; // r14d
	int v6; // eax
	__int64 v7; // rsi
	int v8; // ecx
	__int64 v9; // rbp
	int v10; // eax
	__int64 v11; // rdi
	int v12; // eax
	__int64 v13; // rbx
	int v14; // ecx
	int v15; // r11d
	int v16; // eax
	int v17; // r10d
	int v18; // eax
	__int64 v19; // r8
	int v20; // eax
	__int64 v21; // rdx
	__int64 v22; // rcx
	int v23; // eax
	int v25; // [rsp+20h] [rbp-88h]
	int v26; // [rsp+28h] [rbp-80h]
	int v27; // [rsp+30h] [rbp-78h]
	int v28; // [rsp+38h] [rbp-70h]
	int v29; // [rsp+40h] [rbp-68h]
	int v30; // [rsp+48h] [rbp-60h]
	int v31; // [rsp+50h] [rbp-58h]
	int v32; // [rsp+58h] [rbp-50h]
	int v33; // [rsp+60h] [rbp-48h]
	int v34; // [rsp+68h] [rbp-40h]
	int v35; // [rsp+70h] [rbp-38h]
	__int64 v36; // [rsp+B0h] [rbp+8h] BYREF

	v0 = dword_140C3B290;
	v1 = *(_DWORD*)qword_140C63750;
	v36 = 0x141CD8E00i64;
	v2 = dword_140C3B350;
	if (v1 < dword_140C3B350)
		v2 = v1;
	v3 = *((unsigned __int8*)&dword_140C3B360 + v2);
	v4 = dword_140C3B310;
	v35 = v3;
	if (v1 < dword_140C3B310)
		v4 = v1;
	v5 = *((unsigned __int8*)&dword_140C3B320 + v4);
	v6 = dword_140C3B290;
	if (v1 < dword_140C3B290)
		v0 = v1;
	if (v1 < dword_140C3B290)
		v6 = v1;
	v7 = v0;
	v8 = dword_140C3B210;
	v9 = v6;
	v10 = dword_140C3B210;
	if (v1 < dword_140C3B210)
		v10 = v1;
	if (v1 < dword_140C3B210)
		v8 = v1;
	v34 = v5;
	v11 = v10;
	v12 = dword_140C3B1D0;
	v13 = v8;
	v14 = dword_140C66CD0;
	if (v1 < dword_140C3B1D0)
		v12 = v1;
	v15 = *((unsigned __int8*)&dword_140C3B1E0 + v12);
	v16 = dword_140C3B190;
	if (v1 < dword_140C3B190)
		v16 = v1;
	v17 = *((unsigned __int8*)&dword_140C3B1A0 + v16);
	v18 = dword_140C66CD0;
	if (v1 < dword_140C66CD0)
		v18 = v1;
	v19 = 3i64 * v18;
	v20 = dword_140C66CD0;
	if (v1 < dword_140C66CD0)
	{
		v14 = v1;
		if (v1 < dword_140C66CD0)
			v20 = v1;
	}
	v21 = 3i64 * v20;
	v22 = 3i64 * v14;
	v23 = dword_140C3B150;
	if (v1 < dword_140C3B150)
		v23 = v1;
	v33 = *((_DWORD*)&xmmword_140C3B2A0 + 2 * v9 + 1);
	v32 = *((_DWORD*)&xmmword_140C3B2A0 + 2 * v7);
	v31 = *((_DWORD*)&xmmword_140C3B220 + 2 * v11 + 1);
	v30 = *((_DWORD*)&xmmword_140C3B220 + 2 * v13);
	v29 = v15;
	v28 = v17;
	v27 = dword_140C66CE8[v19];
	v26 = dword_140C66CE4[v21];
	v25 = dword_140C66CE0[v22];
	return sub_1401A3130(
		22,
		2,
		&v36,
		*((unsigned __int8*)&dword_140C3B160 + v23),
		v25,
		v26,
		v27,
		v28,
		v29,
		v30,
		v31,
		v32,
		v33,
		v34,
		v35);
}
// 140C3B150: using guessed type int dword_140C3B150;
// 140C3B160: using guessed type int dword_140C3B160;
// 140C3B190: using guessed type int dword_140C3B190;
// 140C3B1A0: using guessed type int dword_140C3B1A0;
// 140C3B1D0: using guessed type int dword_140C3B1D0;
// 140C3B1E0: using guessed type int dword_140C3B1E0;
// 140C3B210: using guessed type int dword_140C3B210;
// 140C3B220: using guessed type __int128 xmmword_140C3B220;
// 140C3B290: using guessed type int dword_140C3B290;
// 140C3B2A0: using guessed type __int128 xmmword_140C3B2A0;
// 140C3B310: using guessed type int dword_140C3B310;
// 140C3B320: using guessed type int dword_140C3B320;
// 140C3B350: using guessed type int dword_140C3B350;
// 140C3B360: using guessed type int dword_140C3B360;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C66CD0: using guessed type int dword_140C66CD0;
// 140C66CE0: using guessed type int dword_140C66CE0[];
// 140C66CE4: using guessed type int dword_140C66CE4[];
// 140C66CE8: using guessed type int dword_140C66CE8[];

