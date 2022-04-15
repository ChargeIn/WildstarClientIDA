#include "../winhttp.h"

//----- (00000001406A9890) ----------------------------------------------------
__int64 __fastcall sub_1406A9890(_QWORD* a1)
{
	_DWORD* v2; // rsi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	__int64 v9; // r13
	__int64 v10; // rbp
	_DWORD* v11; // r15
	__int64 v12; // r14
	_DWORD* v13; // r12
	__int64 v14; // rax
	unsigned int v15; // ecx
	_DWORD* v16; // rsi
	_DWORD* v17; // rbx
	int v18; // edx
	_DWORD* v19; // rbp
	__int64 v20; // rax
	unsigned int v21; // ecx
	_DWORD* v22; // rsi
	__int64* v23; // rax
	__int64 v24; // r11
	__int64 v25; // r9
	int v26; // r8d
	__int64 v27; // rdx
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-48h] BYREF
	int v29; // [rsp+28h] [rbp-40h]
	_QWORD* v30; // [rsp+30h] [rbp-38h]
	int v31; // [rsp+38h] [rbp-30h]

	v2 = (_DWORD*)sub_1406A93C0(a1);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = a1[4];
	v28 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v30 = a1;
	v31 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0((__int64)a1);
	v6 = a1[2];
	v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a1[2] += 16i64;
	v29 = sub_1400578C0((__int64)a1);
	if (v2 != (_DWORD*)-8i64)
	{
		v8 = v2[12];
		if (v8 == 1)
		{
			v9 = sub_140203DA0(v2[20]);
			v10 = sub_140203DA0(v2[19]);
			v11 = (_DWORD*)sub_140207D60(v2[18]);
			v12 = sub_140203DA0(v2[21]);
			v13 = (_DWORD*)sub_140207D60(v2[22]);
			v14 = sub_140207D60(v2[23]);
			v15 = v2[24];
			v16 = (_DWORD*)v14;
			v17 = (_DWORD*)sub_140207D60(v15);
			if (v9)
				sub_1406AD5F0(a1, v9, (__int64)&v28);
			if (v11)
				sub_1406AD9F0((__int64)a1, 2, v11, (__int64)&v28);
			if (v10)
				sub_1406AD5F0(a1, v10, (__int64)&v28);
			if (v12)
				sub_1406AD5F0(a1, v12, (__int64)&v28);
			if (v13)
				sub_1406AD9F0((__int64)a1, 5, v13, (__int64)&v28);
			if (v16)
				sub_1406AD9F0((__int64)a1, 6, v16, (__int64)&v28);
			if (!v17)
				goto LABEL_29;
			v18 = 7;
		}
		else
		{
			if (v8 != 5)
				goto LABEL_29;
			v19 = (_DWORD*)sub_140207D60(v2[22]);
			v20 = sub_140207D60(v2[23]);
			v21 = v2[24];
			v22 = (_DWORD*)v20;
			v17 = (_DWORD*)sub_140207D60(v21);
			if (v19)
				sub_1406AD9F0((__int64)a1, 1, v19, (__int64)&v28);
			if (v22)
				sub_1406AD9F0((__int64)a1, 2, v22, (__int64)&v28);
			if (!v17)
				goto LABEL_29;
			v18 = 3;
		}
		sub_1406AD9F0((__int64)a1, v18, v17, (__int64)&v28);
	}
LABEL_29:
	v23 = sub_14005C3C0(*(_QWORD*)(v30[4] + 160i64), v29);
	v25 = *(_QWORD*)(v24 + 16);
	v26 = v29;
	v27 = *v23;
	*(_QWORD*)v25 = *v23;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v24 + 16) += 16i64;
	sub_1400579E0(v24, v27, v26);
	return 1i64;
}
// 1406A9AE1: variable 'v24' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

