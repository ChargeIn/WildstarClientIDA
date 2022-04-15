#include "../winhttp.h"

//----- (0000000140025B00) ----------------------------------------------------
__int64 __fastcall sub_140025B00(_QWORD* a1)
{
	__int64 v1; // rbx
	_DWORD* v3; // rax
	unsigned int v4; // eax
	_DWORD* v5; // rax
	_DWORD* v6; // rsi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	_QWORD* v12; // rax
	__int64 v13; // rdx
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-28h] BYREF
	int v15; // [rsp+28h] [rbp-20h]
	_QWORD* v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+38h] [rbp-10h]

	v1 = qword_140C66DA8;
	if (!*(_QWORD*)(qword_140C66DA8 + 312))
		sub_140021BB0((_QWORD*)qword_140C66DA8);
	if (!*(_QWORD*)(v1 + 344))
		sub_140021D40(v1);
	v3 = (_DWORD*)a1[3];
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || (int)v3[2] <= 0)
		v4 = 0;
	else
		v4 = sub_140056D60(a1, 1u);
	v5 = (_DWORD*)sub_1401EFEE0(v4);
	v6 = v5;
	if (!v5 || !sub_140029E90(qword_140C66DA8, v5))
		return 0i64;
	v8 = a1[4];
	v16 = a1;
	v14 = off_140B569F0;
	v9 = *(_QWORD*)(v8 + 112);
	v17 = 1;
	if (*(_QWORD*)(v8 + 120) >= v9)
		sub_14005E2C0((__int64)a1);
	v10 = a1[2];
	v11 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	a1[2] += 16i64;
	LODWORD(v10) = sub_1400578C0((__int64)a1);
	v15 = v10;
	sub_140025070((__int64)&v14, v6);
	v12 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
	v13 = a1[2];
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v13, v10);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

