#include "../winhttp.h"

//----- (00000001404E7650) ----------------------------------------------------
__int64 __fastcall sub_1404E7650(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned int v2; // ebp
	_DWORD* v4; // rbx
	unsigned int v5; // esi
	_DWORD* v6; // rax
	int v7; // r14d
	_DWORD* v8; // rax
	unsigned __int64 v9; // rcx
	_DWORD* v10; // rax
	int v11; // eax
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rsi
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	_QWORD* v18; // rax
	__int64 v19; // rdx
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-28h] BYREF
	int v22; // [rsp+28h] [rbp-20h]
	_QWORD* v23; // [rsp+30h] [rbp-18h]
	int v24; // [rsp+38h] [rbp-10h]

	v1 = (_DWORD*)a1[3];
	v2 = 0;
	v4 = dword_140A12138;
	if ((unsigned __int64)v1 >= a1[2] || v1 == dword_140A12138 || (int)v1[2] <= 0)
		v5 = 0;
	else
		v5 = sub_140056D60(a1, 1u);
	v6 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v6 >= a1[2] || v6 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v7 = 40;
	else
		v7 = sub_140056D60(a1, 2u);
	v8 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
		v2 = sub_140056D60(a1, 3u);
	v9 = a1[2];
	v10 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v10 >= v9 || v10 == dword_140A12138 || *(_DWORD*)(a1[3] + 56i64) != 1)
		goto LABEL_26;
	if ((unsigned __int64)v10 < v9)
		v4 = (_DWORD*)(a1[3] + 48i64);
	v11 = v4[2];
	if (v11 && (v11 != 1 || *v4))
	{
		if (v5 > *(_DWORD*)(qword_140C658C8 + 4))
			v5 = *(_DWORD*)(qword_140C658C8 + 4);
		v12 = sub_140020690(qword_140C658C8, v5);
	}
	else
	{
	LABEL_26:
		if (v5 > *(_DWORD*)(qword_140C658C8 + 4))
			v5 = *(_DWORD*)(qword_140C658C8 + 4);
		v12 = sub_140436D70(qword_140C658C8, v5);
	}
	v13 = a1[4];
	v14 = v12;
	v21 = off_140B569F0;
	v15 = *(_QWORD*)(v13 + 112);
	v23 = a1;
	v24 = 1;
	if (*(_QWORD*)(v13 + 120) >= v15)
		sub_14005E2C0((__int64)a1);
	v16 = a1[2];
	v17 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	a1[2] += 16i64;
	LODWORD(v16) = sub_1400578C0((__int64)a1);
	v22 = v16;
	sub_1403ABC00(v14, v7, v2, (__int64)&v21);
	v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
	v19 = a1[2];
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v19, v16);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658C8: using guessed type __int64 qword_140C658C8;

