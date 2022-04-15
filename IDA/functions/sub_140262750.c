#include "../winhttp.h"

//----- (0000000140262750) ----------------------------------------------------
__int64 __fastcall sub_140262750(__int64 a1, __int64 a2, _DWORD* a3)
{
	float v3; // xmm1_4
	float v4; // xmm0_4
	float v8; // xmm1_4
	double v9; // xmm0_8
	float v10; // xmm0_4
	float v11; // xmm1_4
	float v12; // xmm1_4
	float v13; // xmm0_4
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm1_4
	__int64 result; // rax
	float v18; // xmm1_4
	float v19; // xmm0_4
	float v20; // xmm0_4

	v3 = *(float*)(a1 + 700);
	v4 = *(float*)(a1 + 696);
	if (v3 <= v4)
	{
		*(_QWORD*)a2 = 0i64;
	}
	else
	{
		v8 = -1.0 / (float)((float)((float)(v4 + v3) * 0.5) * (float)((float)(v4 + v3) * 0.5));
		*(float*)a2 = v8;
		*(_QWORD*)&v9 = *(unsigned int*)(a1 + 700);
		*(float*)&v9 = (float)((float)(*(float*)&v9 * *(float*)&v9) * v8) * 0.69314718;
		*(float*)(a2 + 4) = 1.0 / (float)(sub_1408FC7F0(v9) - 1.0);
	}
	if (*(float*)(a1 + 756) <= 0.0)
	{
		v14 = *(float*)(a1 + 708);
		v15 = *(float*)(a1 + 704);
		if (v14 > v15)
		{
			v16 = v15 + v14;
			*(float*)(a2 + 8) = -2.0 / v16;
			v13 = (float)(-2.0 / v16) * *(float*)(a1 + 708);
			goto LABEL_9;
		}
	}
	else
	{
		v10 = *(float*)(a1 + 716);
		v11 = *(float*)(a1 + 712);
		if (v10 > v11)
		{
			v12 = v11 + v10;
			*(float*)(a2 + 8) = -2.0 / v12;
			v13 = (float)(-2.0 / v12) * *(float*)(a1 + 716);
		LABEL_9:
			*(float*)(a2 + 12) = 1.0
				/ (float)(sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(v13 * 0.69314718)))
					- 1.0);
			goto LABEL_11;
		}
	}
	*(_QWORD*)(a2 + 8) = 0i64;
LABEL_11:
	*(_DWORD*)(a2 + 16) = *(_DWORD*)(a1 + 208);
	*(_DWORD*)(a2 + 20) = *(_DWORD*)(a1 + 212);
	*(_DWORD*)(a2 + 24) = *(_DWORD*)(a1 + 216);
	*(_DWORD*)(a2 + 32) = a3[4];
	*(_DWORD*)(a2 + 36) = a3[5];
	result = (unsigned int)a3[6];
	*(_DWORD*)(a2 + 40) = result;
	v18 = *(float*)(a1 + 748);
	v19 = *(float*)(a1 + 752);
	if (v18 >= v19)
	{
		*(_DWORD*)(a2 + 28) = 0;
		*(_DWORD*)(a2 + 44) = 0;
	}
	else
	{
		v20 = v19 - v18;
		*(float*)(a2 + 28) = 1.0 / v20;
		*(float*)(a2 + 44) = -(float)((float)(1.0 / v20) * *(float*)(a1 + 748));
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

