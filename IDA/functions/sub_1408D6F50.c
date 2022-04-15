#include "../winhttp.h"

//----- (00000001408D6F50) ----------------------------------------------------
void __fastcall sub_1408D6F50(__int64 a1, int a2, double a3)
{
	unsigned int i; // esi
	__int64 v5; // rbx
	double v6[6]; // [rsp+50h] [rbp-158h] BYREF
	double v7[6]; // [rsp+80h] [rbp-128h] BYREF
	double v8[6]; // [rsp+B0h] [rbp-F8h] BYREF
	double v9[6]; // [rsp+E0h] [rbp-C8h] BYREF
	double v10[6]; // [rsp+110h] [rbp-98h] BYREF
	double v11[6]; // [rsp+140h] [rbp-68h] BYREF
	double v12[7]; // [rsp+170h] [rbp-38h] BYREF

	sub_1408DA390(*(_DWORD*)a1, a2, a3 * 0.01, v7, v11, v9, v6, v8, v10, v12);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
	{
		v5 = 360i64 * i;
		sub_1408D8E70(a1, v7, v5 + *(_QWORD*)(a1 + 8), 2);
		sub_1408D8E70(a1, v11, v5 + *(_QWORD*)(a1 + 8), 7);
		sub_1408D8E70(a1, v9, v5 + *(_QWORD*)(a1 + 8), 12);
		sub_1408D8E70(a1, v6, v5 + *(_QWORD*)(a1 + 8), 17);
		sub_1408D8E70(a1, v8, v5 + *(_QWORD*)(a1 + 8), 22);
		sub_1408D8E70(a1, v10, v5 + *(_QWORD*)(a1 + 8), 27);
		sub_1408D8E70(a1, v12, v5 + *(_QWORD*)(a1 + 8), 32);
	}
}
// 1408D6F50: using guessed type double var_158[6];
// 1408D6F50: using guessed type double var_128[6];
// 1408D6F50: using guessed type double var_68[6];
// 1408D6F50: using guessed type double var_C8[6];
// 1408D6F50: using guessed type double var_F8[6];
// 1408D6F50: using guessed type double var_98[6];
// 1408D6F50: using guessed type double var_38[7];

