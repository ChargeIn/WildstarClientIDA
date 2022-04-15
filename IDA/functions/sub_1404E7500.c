#include "../winhttp.h"

//----- (00000001404E7500) ----------------------------------------------------
__int64 __fastcall sub_1404E7500(_QWORD* a1)
{
	_DWORD* v3; // rax
	int v4; // ebp
	_DWORD* v5; // rax
	unsigned int v6; // esi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // rdx
	__int64(__fastcall * *v13)(); // [rsp+20h] [rbp-28h] BYREF
	int v14; // [rsp+28h] [rbp-20h]
	_QWORD* v15; // [rsp+30h] [rbp-18h]
	int v16; // [rsp+38h] [rbp-10h]

	if (!qword_140C65898)
		return 0i64;
	v3 = (_DWORD*)a1[3];
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || (int)v3[2] <= 0)
		v4 = 40;
	else
		v4 = sub_140056D60(a1, 1u);
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v6 = 0;
	else
		v6 = sub_140056D60(a1, 2u);
	v7 = a1[4];
	v15 = a1;
	v13 = off_140B569F0;
	v8 = *(_QWORD*)(v7 + 112);
	v16 = 1;
	if (*(_QWORD*)(v7 + 120) >= v8)
		sub_14005E2C0((__int64)a1);
	v9 = a1[2];
	v10 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	a1[2] += 16i64;
	LODWORD(v9) = sub_1400578C0((__int64)a1);
	v14 = v9;
	sub_1403ABC00(qword_140C65898 + 7160, v4, v6, (__int64)&v13);
	v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	v12 = a1[2];
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v12, v9);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

