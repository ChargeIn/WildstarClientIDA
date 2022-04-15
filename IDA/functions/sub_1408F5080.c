#include "../winhttp.h"

//----- (00000001408F5080) ----------------------------------------------------
void __fastcall sub_1408F5080(__int64 a1)
{
	unsigned int v1; // r15d
	unsigned int v2; // r14d
	float v4; // xmm9_4
	__int64 v5; // rbp
	__int64 v6; // rax
	double v7; // xmm0_8
	double v8; // xmm6_8
	double v9; // xmm0_8
	float v10; // xmm7_4
	__int64 v11; // rbx
	__int64 v12; // rdi
	float v13; // xmm0_4

	v1 = *(_DWORD*)(a1 + 196);
	v2 = 0;
	v4 = 1.0 / (float)*(int*)(a1 + 192);
	if (v1)
	{
		v5 = 0i64;
		do
		{
			HIDWORD(v7) = 0;
			v6 = *(_QWORD*)(a1 + 24);
			*(_QWORD*)&v8 = *(unsigned int*)(v6 + v5 + 8);
			*(float*)&v7 = (float)*(int*)(a1 + 192) * 0.5;
			*(float*)&v8 = (float)(*(float*)&v8 * *(float*)(v6 + v5 + 4)) * 0.125;
			if (*(float*)&v8 >= *(float*)&v7)
				v8 = v7;
			if (*(float*)&v8 <= 20.0)
				*(_QWORD*)&v8 = 1101004800i64;
			HIDWORD(v9) = HIDWORD(v8);
			*(float*)&v9 = (float)((float)((float)((float)(*(float*)&v8 / *(float*)(v6 + v5 + 12)) * 2.0) * 3.1415927) * v4)
				* -0.5;
			v10 = sub_1408FC7F0(v9);
			if (v10 >= 0.99919999)
				v10 = 0.99919999;
			v11 = v2 & 3;
			*(float*)&v8 = (float)(*(float*)&v8 * 6.2831855) * v4;
			v12 = *(_QWORD*)(a1 + 32) + *(unsigned __int16*)(a1 + 200) * (v2 >> 2);
			v13 = sub_1408FC950(v8);
			++v2;
			v5 += 32i64;
			*(float*)(v12 + 4 * v11 + 64) = -(float)(v10 * v10);
			*(float*)(v12 + 4 * v11 + 48) = v13 * (float)(v10 * 2.0);
		} while (v2 < v1);
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

