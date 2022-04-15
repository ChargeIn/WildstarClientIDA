#include "../winhttp.h"

//----- (00000001408D3A10) ----------------------------------------------------
__int64 __fastcall sub_1408D3A10(__int64 a1, int* a2)
{
	float v3; // xmm6_4
	float v4; // xmm8_4
	float v5; // xmm7_4
	float v6; // xmm0_4
	__int64 result; // rax
	int v8[6]; // [rsp+28h] [rbp-39h] BYREF
	int v9[6]; // [rsp+40h] [rbp-21h] BYREF
	int v10[6]; // [rsp+58h] [rbp-9h] BYREF
	int v11[18]; // [rsp+70h] [rbp+Fh] BYREF

	v8[0] = *a2;
	v8[1] = a2[1];
	v8[2] = a2[2];
	v8[3] = a2[3];
	v8[4] = a2[4];
	v9[0] = a2[5];
	v9[1] = a2[6];
	v9[2] = a2[7];
	v9[3] = a2[8];
	v9[4] = a2[9];
	v10[0] = a2[10];
	v10[1] = a2[11];
	v10[2] = a2[12];
	v10[3] = a2[13];
	v10[4] = a2[14];
	v11[0] = a2[15];
	v11[1] = a2[16];
	v11[2] = a2[17];
	v11[3] = a2[18];
	v11[4] = a2[19];
	v3 = sub_1408D9A30((__int64)v8);
	v4 = sub_1408D9A30((__int64)v9);
	v5 = sub_1408D9A30((__int64)v10);
	v6 = sub_1408D9A30((__int64)v11);
	if (v3 <= v5)
		v3 = v5;
	if (v3 == v4 || v3 == v6)
		v3 = v3 * 1.6931472;
	result = (unsigned int)(int)(v3 * 6.91);
	*(_DWORD*)(a1 + 16) = result;
	return result;
}

