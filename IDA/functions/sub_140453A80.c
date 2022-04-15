#include "../winhttp.h"

//----- (0000000140453A80) ----------------------------------------------------
__int64 __fastcall sub_140453A80(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, float a6, float a7)
{
	__int64 result; // rax
	float v8; // xmm7_4
	float v9; // xmm1_4
	float v10; // xmm0_4
	double v11; // xmm2_8
	float v12; // xmm0_4

	result = 0i64;
	v8 = (float)(*(float*)&dword_140DC2958 / (float)a3) * *(float*)&dword_140DC295C;
	v9 = (float)((float)(*(float*)&dword_140DC2960 - *(float*)&dword_140DC2968) - (float)(a6 * 100.0)) / v8;
	v10 = 0.0;
	if (a7 >= v9)
	{
		HIDWORD(v11) = 0;
		*(float*)&v11 = (float)((float)(a7 - v9) / (float)(*(float*)&dword_140DC2964 + (float)(a7 - v9)))
			* (float)(*(float*)&dword_140C45858 * 0.5);
		v12 = sub_1408FC950(v11);
		result = 1i64;
		v10 = (float)(v12 * (float)((float)(a7 - v9) * v8)) + *(float*)&dword_140DC2960;
	}
	if (v10 > (float)dword_140DC296C)
		return 2i64;
	return result;
}
// 140C45858: using guessed type int dword_140C45858;
// 140DC2958: using guessed type int dword_140DC2958;
// 140DC295C: using guessed type int dword_140DC295C;
// 140DC2960: using guessed type int dword_140DC2960;
// 140DC2964: using guessed type int dword_140DC2964;
// 140DC2968: using guessed type int dword_140DC2968;
// 140DC296C: using guessed type int dword_140DC296C;

