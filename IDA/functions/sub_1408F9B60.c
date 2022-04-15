#include "../winhttp.h"

//----- (00000001408F9B60) ----------------------------------------------------
__int64 __fastcall sub_1408F9B60(__int64 a1)
{
	__int64 result; // rax
	unsigned int v2; // r14d
	unsigned int v3; // ebp
	double v5; // xmm8_8
	__int64 v6; // rdi
	__int64 v7; // rax
	double v8; // xmm6_8
	float v9; // xmm10_4
	double v10; // xmm0_8
	float v11; // xmm7_4
	__int64 v12; // rbx

	result = *(unsigned int*)(a1 + 4);
	v2 = *(_DWORD*)(a1 + 464);
	HIDWORD(v5) = 0;
	v3 = 0;
	*(float*)&v5 = (float)(int)result * 0.5;
	if (v2)
	{
		v6 = 0i64;
		do
		{
			v7 = *(_QWORD*)(a1 + 40);
			*(_QWORD*)&v8 = *(unsigned int*)(v7 + v6 + 4);
			*(float*)&v8 = (float)(*(float*)&v8 * *(float*)(v7 + v6)) * 0.0625;
			if (*(float*)&v8 >= *(float*)&v5)
				v8 = v5;
			if (*(float*)&v8 <= 20.0)
				*(_QWORD*)&v8 = 1101004800i64;
			v9 = *(float*)(a1 + 8);
			HIDWORD(v10) = HIDWORD(v8);
			*(float*)&v10 = (float)((float)((float)((float)(*(float*)&v8 / *(float*)(v7 + v6 + 8)) * 2.0) * 3.1415927) * v9)
				* -0.5;
			v11 = sub_1408FC7F0(v10);
			if (v11 >= 0.99919999)
				v11 = 0.99919999;
			*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) * v9;
			v12 = (v3 & 3) + 28i64 * (v3 >> 2);
			++v3;
			v6 += 28i64;
			*(float*)(*(_QWORD*)(a1 + 48) + 4 * v12 + 48) = sub_1408FC950(v8) * (float)(v11 * 2.0);
			result = *(_QWORD*)(a1 + 48);
			*(float*)(result + 4 * v12 + 64) = -(float)(v11 * v11);
		} while (v3 < v2);
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

