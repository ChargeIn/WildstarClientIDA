#include "../winhttp.h"

//----- (000000014052F370) ----------------------------------------------------
__int64 __fastcall sub_14052F370(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbx
	_DWORD* v4; // rax
	signed int v5; // eax
	__int64(__fastcall * **v6)(_QWORD); // rcx
	__int64 v7; // rbp
	__int64 v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned int v10; // esi
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // ebx
	__int64 v14; // rdx
	_QWORD* v15; // rax
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	_QWORD* v18; // [rsp+30h] [rbp-18h]
	int v19; // [rsp+38h] [rbp-10h]

	result = sub_14052E9B0(a1);
	v3 = result;
	if (!result)
		return result;
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
	{
		v5 = -1;
		goto LABEL_8;
	}
	v5 = sub_140056D60(a1, 2u);
	if (v5 < 0)
	{
	LABEL_8:
		v6 = *(__int64(__fastcall****)(_QWORD))(v3 + 1152);
		if (v6)
			v5 = (**v6)(v6);
	}
	if (!qword_140C658F8)
		return 0i64;
	v7 = sub_140448420((__int64)v6, v5);
	if (!v7)
		return 0i64;
	v8 = a1[4];
	v9 = *(_QWORD*)(v8 + 112);
	v10 = 1;
	v16 = off_140B569F0;
	v18 = a1;
	v19 = 1;
	if (*(_QWORD*)(v8 + 120) >= v9)
		sub_14005E2C0((__int64)a1);
	v11 = a1[2];
	v12 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	a1[2] += 16i64;
	v13 = sub_1400578C0((__int64)a1);
	v17 = v13;
	if ((int)sub_14052ED60(v7, (__int64)&v16) >= 0)
	{
		v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		v14 = a1[2];
		*(_QWORD*)v14 = *v15;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v15 + 2);
		a1[2] += 16i64;
	}
	else
	{
		v10 = 0;
	}
	sub_1400579E0((__int64)a1, v14, v13);
	return v10;
}
// 14052F3F1: variable 'v6' is possibly undefined
// 14052F4A7: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F8: using guessed type __int64 qword_140C658F8;

