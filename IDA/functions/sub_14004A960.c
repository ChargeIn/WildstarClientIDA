#include "../winhttp.h"

//----- (000000014004A960) ----------------------------------------------------
__int64 __fastcall sub_14004A960(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	_DWORD* v5; // rax
	int v6; // esi
	_DWORD* v7; // rax
	double v8; // xmm0_8
	__int64 v9; // rdx
	float v10; // xmm3_4

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2]) && (v3 = sub_140056AB0(a1, 1u)) != 0)
		v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	else
		v4 = 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = -1;
	else
		v6 = sub_140056D60(a1, 2u);
	v7 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 40i64) <= 0)
		v8 = 0.0;
	else
		v8 = sub_140056C40(a1, 3u);
	if (v4)
	{
		v9 = *(_QWORD*)(v4 + 16);
		if (v9)
		{
			v10 = v8;
			if ((unsigned int)sub_14002FA90(v4 + 32, v9, v6, v10))
				sub_140030080(v4 + 32, *(_QWORD*)(v4 + 16));
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

