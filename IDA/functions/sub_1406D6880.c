#include "../winhttp.h"

//----- (00000001406D6880) ----------------------------------------------------
__int64 __fastcall sub_1406D6880(_QWORD* a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdi
	int v4; // ebp
	_DWORD* v5; // rax
	int v6; // esi
	_DWORD* v7; // rax
	int v8; // r9d
	int v9; // r10d
	int v10; // r11d
	int v11; // ecx
	int v12; // r9d

	v2 = sub_1406D5FA0(a1);
	v3 = (_DWORD*)v2;
	if (v2)
	{
		v4 = *(_DWORD*)(v2 + 2012);
		v5 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v5 < a1[2] && v5 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
			v4 = sub_140056D60(a1, 2u);
		v6 = v3[504];
		v7 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v7 < a1[2] && v7 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
			v6 = sub_140056D60(a1, 3u);
		v8 = v3[181];
		v9 = 1;
		v10 = 1;
		v11 = abs32(v4);
		if (v11 > 1)
			v10 = v11;
		v3[503] = v10;
		v3[504] = (int)(v10 * abs32(v6)) / v11;
		v12 = v8 - v3[179];
		if (v12 > 0)
		{
			if ((v12 - v10) / (v10 + v3[501]) + 1 > 1)
				v9 = (v12 - v10) / (v10 + v3[501]) + 1;
			v3[500] = v9;
			sub_1406D0EC0(v3);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

