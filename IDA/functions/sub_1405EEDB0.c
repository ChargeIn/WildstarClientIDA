#include "../winhttp.h"

//----- (00000001405EEDB0) ----------------------------------------------------
__int64 __fastcall sub_1405EEDB0(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	int* v6; // rcx
	unsigned int v7; // eax
	__int64 v9[2]; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+30h] [rbp-18h]
	int v11; // [rsp+34h] [rbp-14h]

	v1 = (_DWORD*)a1[3];
	if (((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || v1[2])
		&& (v3 = sub_140056AB0(a1, 1u)) != 0
		&& (v4 = *(_QWORD*)(v3 + 8)) != 0
		&& (v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120))) != 0
		&& (v6 = *(int**)(v5 + 112), (v6[66] & 0x20000000) != 0))
	{
		v7 = sub_1405A4D90((__int64)v6, *v6);
		v9[1] = 15i64;
		v11 = 9;
		v9[0] = v7;
		v10 = 0;
		sub_140501210(a1, v9);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

