#include "../winhttp.h"

//----- (00000001406BB960) ----------------------------------------------------
__int64 __fastcall sub_1406BB960(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r14d
	__int64 v4; // rdi
	__int64 v5; // rdi
	unsigned int v6; // ebp
	_DWORD* v7; // rax
	signed int v8; // esi
	int v9; // ecx
	_DWORD* v10; // rax
	__int64 v11; // rax

	v2 = sub_140056AB0(a1, 1u);
	v3 = 0;
	if (v2 && (v4 = *(_QWORD*)(v2 + 8)) != 0)
		v5 = *(_QWORD*)(v4 + 8);
	else
		v5 = 0i64;
	v6 = -1;
	v7 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v8 = -1;
	else
		v8 = sub_140056D60(a1, 2u);
	if (!v5 || v8 < 0)
		goto LABEL_23;
	v9 = -1;
	if (*(_DWORD*)(v5 + 24) != -1)
		v9 = *(_DWORD*)(v5 + 24);
	if (v9)
		v3 = v9;
	if (v8 >= v3)
		goto LABEL_23;
	v10 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v10 < a1[2] && v10 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v6 = sub_140056D60(a1, 3u);
	v11 = sub_1404D1B20(qword_140C65A38, **(_DWORD**)(v5 + 8));
	if (v11)
		sub_1404D1490(v11, v8, v6);
	else
		LABEL_23:
	sub_1403CC530(qword_140C65898, 0x8Bu);
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A38: using guessed type __int64 qword_140C65A38;

