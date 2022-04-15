#include "../winhttp.h"

//----- (00000001408F4650) ----------------------------------------------------
void __fastcall sub_1408F4650(__int64 a1, int a2, __int64 a3, char a4)
{
	float* v4; // rdi
	double v9; // xmm0_8
	float v10; // xmm0_4
	float v11; // xmm1_4
	float v12; // xmm0_4
	float v13; // xmm1_4
	float v14; // xmm7_4
	float v15; // xmm0_4
	unsigned int v16; // r11d
	int v17; // eax
	__int64 v18; // r10
	float v19; // xmm6_4

	v4 = *(float**)(a1 + 8);
	v9 = sub_1408FBFC0(
		COERCE_DOUBLE(0x40000000i64),
		(float)((float)(v4[8] + *(float*)(a1 + 84)) + *(float*)(a1 + 40)) * 0.00083333335);
	v10 = *(float*)&v9 * 8.0;
	if (v10 <= 2.0)
		v10 = 2.0;
	*(float*)(a1 + 68) = v10;
	*(float*)(a1 + 72) = (float)(v4[9] + *(float*)(a1 + 88)) + *(float*)(a1 + 44);
	v11 = (float)(v4[10] + *(float*)(a1 + 92)) + *(float*)(a1 + 48);
	if (v11 < 1.0)
	{
		if (v11 <= 0.0)
			v11 = 0.0;
	}
	else
	{
		v11 = 1.0;
	}
	*(float*)(a1 + 76) = v11;
	v12 = (float)(v4[11] + *(float*)(a1 + 96)) + *(float*)(a1 + 52);
	if (v12 < 1.0)
	{
		if (v12 <= 0.0)
			v12 = 0.0;
	}
	else
	{
		v12 = 1.0;
	}
	v13 = *(float*)(a1 + 56);
	*(float*)(a1 + 80) = v12;
	sub_1408F5BD0(a1, v13);
	sub_1408F5C90(a1, *(float*)(a1 + 60));
	sub_1408F5DA0(a1, *(float*)(a1 + 64));
	v14 = (double)a2 / (double)*(int*)(a1 + 192);
	v15 = sub_1408F4040(a3 + 20, *(float*)(a1 + 68), *(float*)(a1 + 76), *(float*)(a1 + 80), v14);
	if (v15 <= *(float*)(a3 + 40))
		v15 = *(float*)(a3 + 40);
	*(float*)(*(_QWORD*)(a3 + 8) + 4i64 * (unsigned int)(*(_DWORD*)(a3 + 16))++) = v15;
	v16 = *(_DWORD*)a3;
	v17 = *(_DWORD*)(a3 + 16);
	v18 = *(_QWORD*)(a3 + 8);
	if (v17 == *(_DWORD*)a3)
		v17 = 0;
	*(_DWORD*)(a3 + 16) = v17;
	v19 = (float)((float)(*(float*)(v18 + 4i64 * ((v17 + v16 - 2) % v16))
		+ *(float*)(v18 + 4i64 * ((v17 + v16 - 1) % v16)))
		+ *(float*)(v18 + 4i64 * ((v17 + v16 - 3) % v16)))
		* 0.33333334;
	if (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 89i64) || (a4 & 0x15) != 0 || *(_BYTE*)(a1 + 202))
		sub_1408F5290(a1);
	sub_1408F4EE0(a1, v19, v14, a3);
	if (*(_BYTE*)(a1 + 202))
		sub_1408F55C0(a1);
	else
		sub_1408F5820(a1, a2);
	sub_1408F5080(a1);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

