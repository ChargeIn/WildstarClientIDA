#include "../winhttp.h"

//----- (00000001408D95B0) ----------------------------------------------------
__int64 __fastcall sub_1408D95B0(int a1, double a2, double a3, __int64 a4)
{
	__int64 result; // rax
	double v7; // xmm5_8
	double v8; // xmm2_8
	double v9; // xmm0_8
	double v10; // xmm0_8
	double v11; // xmm3_8
	double v12; // xmm3_8
	double v13; // xmm0_8
	double v14; // xmm2_8
	double v15; // xmm0_8
	double v16; // [rsp+20h] [rbp-78h] BYREF
	double v17; // [rsp+28h] [rbp-70h]
	double v18; // [rsp+40h] [rbp-58h]
	__int64 v19[4]; // [rsp+50h] [rbp-48h] BYREF
	double v20; // [rsp+70h] [rbp-28h]

	sub_1408D91C0(a1, a2, (double*)v19);
	sub_1408D93B0(a1, a3, &v16);
	result = 0x3FF0000000000000i64;
	v7 = *(double*)&v19[1];
	v8 = v18;
	v9 = v16;
	*(_QWORD*)(a4 + 24) = 0x3FF0000000000000i64;
	*(double*)a4 = v9 * *(double*)v19;
	v10 = v17 * *(double*)v19;
	v11 = v7 * v16;
	*(double*)(a4 + 16) = v7 * v17;
	v12 = v11 + v10;
	v13 = v8;
	v14 = v8 * v20;
	v15 = v13 + v20;
	*(double*)(a4 + 8) = v12;
	*(double*)(a4 + 32) = v15;
	*(double*)(a4 + 40) = v14;
	return result;
}

