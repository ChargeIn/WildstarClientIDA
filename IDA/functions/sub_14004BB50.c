#include "../winhttp.h"

//----- (000000014004BB50) ----------------------------------------------------
__int64 __fastcall sub_14004BB50(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rax
	__int64 v4; // rsi
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // r11
	__int64 v11; // r9
	int v12; // r8d
	__int64 v13; // rdx
	__int64(__fastcall * *v15)(); // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	_QWORD* v17; // [rsp+30h] [rbp-18h]
	int v18; // [rsp+38h] [rbp-10h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)v3 + 16i64);
	if (!v4)
		return 0i64;
	v5 = a1[4];
	v15 = off_140B569F0;
	v6 = *(_QWORD*)(v5 + 112);
	v17 = a1;
	v18 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v16 = sub_1400578C0((__int64)a1);
	sub_1400307C0((_DWORD*)(v4 + 32), (__int64)&v15);
	v9 = sub_14005C3C0(*(_QWORD*)(v17[4] + 160i64), v16);
	v11 = *(_QWORD*)(v10 + 16);
	v12 = v16;
	*(_QWORD*)v11 = *v9;
	v13 = *((unsigned int*)v9 + 2);
	*(_DWORD*)(v11 + 8) = v13;
	*(_QWORD*)(v10 + 16) += 16i64;
	sub_1400579E0(v10, v13, v12);
	return 1i64;
}
// 14004BC31: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

