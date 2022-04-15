#include "../winhttp.h"

//----- (00000001407AB070) ----------------------------------------------------
__int64 __fastcall sub_1407AB070(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
	__int64 v5; // rcx
	__int64 v7; // rbx
	unsigned int v8; // edi
	unsigned int v9; // r12d
	unsigned int v10; // r13d
	int v11; // eax
	__int64 v12; // rax
	int v13; // r8d
	int v14; // ecx
	int v15; // r14d
	__int64 v16; // rax
	int v17; // eax
	int v19; // [rsp+38h] [rbp-49h]
	__int64 v21; // [rsp+48h] [rbp-39h]
	int v22[3]; // [rsp+50h] [rbp-31h] BYREF
	int v23; // [rsp+5Ch] [rbp-25h]
	int v24; // [rsp+60h] [rbp-21h]
	int v25; // [rsp+64h] [rbp-1Dh]
	int v26; // [rsp+68h] [rbp-19h]
	__int64 v27; // [rsp+70h] [rbp-11h]
	int v28[3]; // [rsp+78h] [rbp-9h] BYREF
	int v29; // [rsp+84h] [rbp+3h]
	int v30; // [rsp+88h] [rbp+7h]
	int v31; // [rsp+8Ch] [rbp+Bh]
	int v32; // [rsp+90h] [rbp+Fh]

	v5 = *(unsigned int*)(a1 + 96);
	v28[0] = 2;
	v22[0] = 2;
	v7 = 88 * (v5 + 8i64 * a2) + a1 + 427040;
	v8 = 0;
	v9 = *(_DWORD*)(a1 + 4i64 * *(unsigned int*)(v7 + 8) + 434016);
	v28[1] = v9;
	v22[1] = v9;
	v10 = *(_DWORD*)(v7 + 8);
	v28[2] = v10;
	v22[2] = v10;
	v11 = *(_DWORD*)(a1 + 4i64 * *(unsigned int*)(v7 + 8) + 436092);
	v32 = a3;
	v26 = a3;
	v31 = -1;
	v19 = v11;
	v30 = v11;
	v24 = v11;
	v25 = -1;
	v12 = sub_1407ABE40(a1, v9, v10, 0, v11, a4);
	v13 = dword_140C549C0;
	v27 = v12;
	v14 = dword_140C549C0;
	if (*(_DWORD*)qword_140C63750 < dword_140C549C0)
		v14 = *(_DWORD*)qword_140C63750;
	if ((unsigned int)(*(_DWORD*)(v7 + 28) - *(_DWORD*)(v7 + 32)) > *((_DWORD*)&off_140C549B0 + v14 + 8))
	{
		v15 = 2;
		v29 = 2;
	}
	else
	{
		v15 = 4;
		v29 = 4;
		if (*(_DWORD*)qword_140C63750 < dword_140C549C0)
			v13 = *(_DWORD*)qword_140C63750;
		if ((unsigned int)(*(_DWORD*)(v7 + 32) - *(_DWORD*)(v7 + 36)) <= *((_DWORD*)&off_140C549B0 + v13 + 8))
		{
			v21 = sub_1407ABE40(a1, v9, v10, 5, v19, a4);
			if (v21)
			{
				v23 = 5;
				goto LABEL_21;
			}
		}
		v21 = sub_1407ABE40(a1, v9, v10, 3, v19, a4);
		if (v21)
		{
			v23 = 3;
			goto LABEL_21;
		}
		if (a3)
		{
			v21 = sub_1407ABE40(a1, v9, v10, 4, v19, a4);
			if (v21)
			{
				v23 = 4;
				goto LABEL_21;
			}
		}
	}
	v21 = sub_1407ABE40(a1, v9, v10, 1, v19, a4);
	if (v21)
	{
		v23 = 1;
	}
	else if (a3 && (v21 = sub_1407ABE40(a1, v9, v10, 2, v19, a4)) != 0)
	{
		v23 = 2;
	}
	else
	{
		v21 = 0i64;
		v23 = 6;
	}
LABEL_21:
	if (v27)
	{
		*(_DWORD*)(v7 + 16) = v15;
		*(_DWORD*)(v7 + 24) = v30;
		if (v27)
		{
			if ((unsigned int)sub_1407AC2C0((_QWORD*)a1, v27, (__int64)v28, a3, 1))
				v8 = 1;
		}
	}
	if (v21)
	{
		*(_DWORD*)(v7 + 12) = v23;
		*(_DWORD*)(v7 + 20) = v24;
		if (v23 == 5 && !*(_QWORD*)(v7 + 72))
		{
			*(_QWORD*)(v7 + 72) = a1 + 436128;
			*(_QWORD*)(v7 + 80) = *(_QWORD*)(a1 + 436128);
			*(_QWORD*)(a1 + 436128) = v7;
			v16 = *(_QWORD*)(v7 + 80);
			if (v16)
				*(_QWORD*)(v16 + 72) = v7 + 80;
		}
		v17 = *(_DWORD*)(a1 + 436340) || ((v23 - 1) & 0xFFFFFFFD) == 0 || !a3;
		if ((unsigned int)sub_1407AC2C0((_QWORD*)a1, v21, (__int64)v22, a3, v17))
			return 1;
	}
	return v8;
}
// 1407AB367: conditional instruction was optimized away because %var_90.8!=0
// 140C549B0: using guessed type __int64 (__fastcall *off_140C549B0)();
// 140C549C0: using guessed type int dword_140C549C0;
// 140C63750: using guessed type __int64 qword_140C63750;

