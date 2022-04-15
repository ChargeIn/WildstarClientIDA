#include "../winhttp.h"

//----- (00000001407ABB30) ----------------------------------------------------
__int64 __fastcall sub_1407ABB30(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v5; // rdx
	unsigned int v6; // ebx
	unsigned int* v7; // rbp
	unsigned int v8; // r14d
	unsigned int v9; // r15d
	int v10; // r12d
	__int64 v11; // rsi
	int v12; // r9d
	__int64 v13; // rdx
	int v14; // eax
	int v15; // eax
	int v17[3]; // [rsp+38h] [rbp-90h] BYREF
	int v18; // [rsp+44h] [rbp-84h]
	int v19; // [rsp+48h] [rbp-80h]
	int v20; // [rsp+4Ch] [rbp-7Ch]
	int v21; // [rsp+50h] [rbp-78h]
	__int64 v22; // [rsp+58h] [rbp-70h]
	int v23[8]; // [rsp+60h] [rbp-68h] BYREF

	v5 = *(unsigned int*)(a1 + 4i64 * a2 + 431968) + 8i64 * a2;
	v23[0] = 1;
	v17[0] = 1;
	v6 = 0;
	v7 = (unsigned int*)(88 * v5 + a1 + 66592);
	v8 = *(_DWORD*)(a1 + 4i64 * v7[2] + 431968);
	v23[1] = v8;
	v17[1] = v8;
	v9 = v7[2];
	v23[2] = v9;
	v17[2] = v9;
	v10 = *(_DWORD*)(a1 + 4i64 * v7[2] + 434044);
	v23[6] = 1;
	v21 = 1;
	v23[4] = v10;
	v19 = v10;
	v23[5] = -1;
	v20 = -1;
	v22 = sub_1407ABD10(a1, v8, v9, 0, v10, a3);
	v11 = v22;
	v23[3] = v7[4];
	v12 = v7[3];
	if (v12 == 5)
	{
		v18 = 6;
	}
	else
	{
		v13 = sub_1407ABD10(a1, v8, v9, v12, v10, a3);
		v14 = v7[3];
		v18 = v14;
		if (v13)
		{
			v15 = sub_1407AC430(a1, v13, (__int64)v17, ((v14 - 1) & 0xFFFFFFFD) != 0);
			v11 = v22;
			if (v15)
				v6 = 1;
		}
	}
	if (v11 && (unsigned int)sub_1407AC430(a1, v11, (__int64)v23, 1))
		return 1;
	return v6;
}

