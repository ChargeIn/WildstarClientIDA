#include "../winhttp.h"

//----- (00000001403D67D0) ----------------------------------------------------
__int64 __fastcall sub_1403D67D0(__int64 a1, unsigned int* a2, unsigned int* a3)
{
	unsigned int v6; // r9d
	unsigned int v7; // r8d
	unsigned int v8; // edx
	unsigned int v9; // ebx
	int v10; // eax
	int v11; // ecx
	__int64 v12; // rdx
	unsigned int v13; // ebp
	__int64 v14; // rsi
	__int64 v15; // rax
	unsigned int v16; // ecx
	int v17; // edx
	__int64 v18; // rcx
	unsigned int v19; // ecx
	int v20; // ecx
	__int64 v21; // rax
	unsigned int v22; // r8d
	__int64 v23; // rax
	int v24; // [rsp+20h] [rbp-28h]
	__int64 v25; // [rsp+58h] [rbp+10h] BYREF

	if (!a2)
		return 6i64;
	if (!a3)
		a3 = a2 + 2;
	if ((a2[83] & 0x100) != 0)
		return 72i64;
	v6 = a3[1];
	v7 = *a2;
	v8 = a2[81];
	v9 = 0;
	v25 = 0i64;
	if (!sub_1404AA7D0(a1, v8, v7, v6, v24, &v25))
		return 72i64;
	v10 = dword_140C8A718;
	if ((dword_140C8A718 & 1) != 0)
	{
		v11 = dword_140C8A724;
	}
	else
	{
		v10 = dword_140C8A718 | 1;
		v11 = 0;
		dword_140C8A724 = 0;
		dword_140C8A718 |= 1u;
	}
	v12 = *(_QWORD*)(a1 + 120);
	if (v12)
		v13 = *(_DWORD*)(v12 + 56);
	else
		v13 = 0;
	v14 = v25;
	if (v11)
	{
		v16 = dword_140C8A720;
	}
	else
	{
		dword_140C8A724 = 1;
		v15 = sub_140200220(0x40Au);
		if (!v15)
		{
			v10 = dword_140C8A718;
			dword_140C8A720 = 0;
			goto LABEL_23;
		}
		v16 = *(_DWORD*)(v15 + 4);
		v10 = dword_140C8A718;
		dword_140C8A720 = v16;
	}
	if (v13 < v16 && (!v14 || (*(_BYTE*)(v14 + 8) & 1) == 0))
		return 42i64;
LABEL_23:
	if (!v14)
		return 0i64;
	v17 = *(_DWORD*)(v14 + 8);
	if ((v17 & 2) != 0)
	{
		v18 = *(_QWORD*)(a1 + 120);
		v19 = v18 ? *(_DWORD*)(v18 + 56) : 0;
		if (v19 < a2[87])
			return 42i64;
	}
	if ((v17 & 4) == 0)
		return 0i64;
	if ((v10 & 2) != 0)
	{
		v20 = dword_140C8A70C;
	}
	else
	{
		v10 |= 2u;
		v20 = 0;
		dword_140C8A70C = 0;
		dword_140C8A718 = v10;
	}
	if ((v10 & 4) == 0)
	{
		dword_140C8A714 = 0;
		dword_140C8A718 = v10 | 4;
	}
	if (v20)
	{
		v22 = dword_140C8A708;
	}
	else
	{
		dword_140C8A70C = 1;
		v21 = sub_140200220(0x942u);
		if (v21)
		{
			v22 = *(_DWORD*)(v21 + 4);
			dword_140C8A708 = v22;
		}
		else
		{
			v22 = 0;
			dword_140C8A708 = 0;
		}
	}
	if ((unsigned int)sub_1403AC590(a1 + 160, 1799, v22))
		return 0i64;
	if (dword_140C8A714)
	{
		v9 = dword_140C8A710;
	}
	else
	{
		dword_140C8A714 = 1;
		v23 = sub_140200220(0x942u);
		if (v23)
			v9 = *(_DWORD*)(v23 + 8);
		dword_140C8A710 = v9;
	}
	if ((unsigned int)sub_1403AC590(a1 + 160, 1799, v9))
		return 0i64;
	else
		return 32i64;
}
// 1403D6833: variable 'v24' is possibly undefined
// 140C8A708: using guessed type int dword_140C8A708;
// 140C8A70C: using guessed type int dword_140C8A70C;
// 140C8A710: using guessed type int dword_140C8A710;
// 140C8A714: using guessed type int dword_140C8A714;
// 140C8A718: using guessed type int dword_140C8A718;
// 140C8A720: using guessed type int dword_140C8A720;
// 140C8A724: using guessed type int dword_140C8A724;

