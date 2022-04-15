#include "../winhttp.h"

//----- (00000001404F9390) ----------------------------------------------------
__int64 __fastcall sub_1404F9390(_QWORD* a1)
{
	__int64 v2; // r14
	_DWORD* v3; // rax
	int v4; // edi
	int v5; // esi
	_DWORD* v6; // rax
	__int64 v8; // [rsp+30h] [rbp-D0h] BYREF
	int v9; // [rsp+38h] [rbp-C8h]
	int v10; // [rsp+3Ch] [rbp-C4h]
	int v11; // [rsp+40h] [rbp-C0h]
	int v12; // [rsp+44h] [rbp-BCh]
	int v13; // [rsp+48h] [rbp-B8h]
	int v14[16]; // [rsp+4Ch] [rbp-B4h] BYREF
	__int64 v15; // [rsp+8Ch] [rbp-74h]
	__int64 v16; // [rsp+94h] [rbp-6Ch]
	__int64 v17; // [rsp+9Ch] [rbp-64h]
	__int64 v18; // [rsp+A8h] [rbp-58h]
	__int64 v19; // [rsp+B0h] [rbp-50h]
	__int64 v20; // [rsp+B8h] [rbp-48h]
	__int64 v21; // [rsp+C0h] [rbp-40h]
	__int64 v22; // [rsp+C8h] [rbp-38h]
	__int64 v23; // [rsp+D0h] [rbp-30h]
	int v24; // [rsp+D8h] [rbp-28h]
	__int64 v25; // [rsp+E0h] [rbp-20h]
	__int64 v26; // [rsp+E8h] [rbp-18h]
	__int64 v27; // [rsp+F0h] [rbp-10h]
	__int64 v28; // [rsp+F8h] [rbp-8h]
	__int64 v29; // [rsp+100h] [rbp+0h]
	__int64 v30; // [rsp+108h] [rbp+8h]
	__int64 v31; // [rsp+110h] [rbp+10h]
	int v32; // [rsp+118h] [rbp+18h]

	v2 = sub_1404F87C0(a1, 1u);
	if (v2)
	{
		v3 = (_DWORD*)(a1[3] + 32i64);
		v4 = -1;
		if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
			v5 = -1;
		else
			v5 = sub_140056D60(a1, 3u);
		v6 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v6 < a1[2] && v6 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v4 = sub_140056D60(a1, 2u);
		v10 = v4;
		v13 = 1065353216;
		v8 = 0i64;
		v11 = v5;
		v12 = 0;
		v9 = 0;
		sub_1407E4830(v14, 0i64, 0x40ui64);
		v15 = 0i64;
		v16 = 0i64;
		v17 = 0i64;
		v18 = 0i64;
		v19 = 0i64;
		v20 = 0i64;
		v21 = 0i64;
		v22 = 0i64;
		v23 = 0i64;
		v24 = 0;
		v25 = 0i64;
		v26 = 0i64;
		v27 = 0i64;
		v28 = 0i64;
		v29 = 0i64;
		v30 = 0i64;
		v31 = 0i64;
		v32 = 0;
		sub_1404F7040(v2, (__int64)&v8);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 1404F9390: using guessed type int var_F4[16];

