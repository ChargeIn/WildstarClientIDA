#include "../winhttp.h"

//----- (00000001406A9B20) ----------------------------------------------------
__int64 __fastcall sub_1406A9B20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // r14
	unsigned __int64 v6; // r8
	unsigned int v7; // ecx
	__int64 v8; // r9
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rdx
	unsigned __int64 v12; // rcx
	int v13; // r15d
	__int64 v14; // rbx
	__int64 v15; // rax
	int v16; // edx
	unsigned int i; // ebx
	__int64 v18; // rax
	__int64 v19; // rsi
	unsigned int v20; // ebp
	_DWORD* v21; // rax
	__int64* v22; // rax
	__int64 v23; // r11
	__int64 v24; // r9
	int v25; // r8d
	__int64 v26; // rdx
	__int64(__fastcall * *v27)(); // [rsp+20h] [rbp-38h] BYREF
	int v28; // [rsp+28h] [rbp-30h]
	_QWORD* v29; // [rsp+30h] [rbp-28h]
	int v30; // [rsp+38h] [rbp-20h]

	v2 = sub_1406A93C0(a1);
	v3 = 0i64;
	v4 = v2;
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v6 = *(_QWORD*)(qword_140C63650 + 768);
	v7 = 0;
	if (v6)
	{
		v8 = *(_QWORD*)(qword_140C63650 + 760);
		v9 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v8 + 8 * v9) + 400i64) != a1)
		{
			v9 = ++v7;
			if (v7 >= v6)
				goto LABEL_9;
		}
		v3 = *(_QWORD*)(v8 + 8i64 * v7);
	}
LABEL_9:
	v10 = sub_1400F26A0(v3 + 384, 2);
	v11 = a1[4];
	v29 = a1;
	v12 = *(_QWORD*)(v11 + 112);
	v13 = v10;
	v27 = off_140B569F0;
	v30 = 1;
	if (*(_QWORD*)(v11 + 120) >= v12)
		sub_14005E2C0((__int64)a1);
	v14 = a1[2];
	v15 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v14 + 8) = 5;
	*(_QWORD*)v14 = v15;
	a1[2] += 16i64;
	v28 = sub_1400578C0((__int64)a1);
	for (i = 1; i < 7; ++i)
	{
		v18 = sub_1405AC6C0(v4, v16, i, v13);
		v19 = v18;
		if (!v18)
			continue;
		v20 = *(_DWORD*)(v18 + 108);
		if (qword_140C63840)
		{
			v21 = (_DWORD*)qword_140C63840(off_140A6AA60, v20, qword_140C63858);
		}
		else
		{
			if (dword_140C63A64 || (int)sub_140207B00() < 0)
				continue;
			v21 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63E68 + 24i64))(
				qword_140C63E68,
				v20);
		}
		if (v21)
		{
			if (*(_DWORD*)(v19 + 108) != 5)
				sub_1406AD9F0((__int64)a1, i, v21, (__int64)&v27);
		}
	}
	v22 = sub_14005C3C0(*(_QWORD*)(v29[4] + 160i64), v28);
	v24 = *(_QWORD*)(v23 + 16);
	v25 = v28;
	v26 = *v22;
	*(_QWORD*)v24 = *v22;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v23 + 16) += 16i64;
	sub_1400579E0(v23, v26, v25);
	return 1i64;
}
// 1406A9C29: variable 'v16' is possibly undefined
// 1406A9CB7: variable 'v23' is possibly undefined
// 140A6AA60: using guessed type wchar_t *off_140A6AA60[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A64: using guessed type int dword_140C63A64;
// 140C63E68: using guessed type __int64 qword_140C63E68;

