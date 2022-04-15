#include "../winhttp.h"

//----- (0000000140893DF0) ----------------------------------------------------
__int64 __fastcall sub_140893DF0(__int64 a1, __int64 a2)
{
	double v3; // xmm6_8
	_DWORD* v4; // rax
	double v6; // xmm0_8
	double v7; // xmm3_8
	double v8; // xmm1_8
	double v9; // xmm3_8
	double v10; // xmm1_8
	double v11; // xmm3_8
	double v12; // xmm1_8
	int v13; // r8d
	double v14; // xmm1_8
	int v15; // edx

	v3 = *(double*)(a2 + 24) + *(double*)(a2 + 32) - *(double*)(a2 + 16);
	if (v3 > 0.0)
	{
		v4 = (_DWORD*)sub_140893D70(a1 + 224);
		if (!v4)
			return 2i64;
		*v4 = *(_DWORD*)a2;
		v4[1] = *(_DWORD*)(a2 + 4);
		v6 = 0.5;
		v7 = (*(double*)(a2 + 8) + *(double*)(a2 + 16)) * (double)dword_140C110B4 * 0.001;
		if (v7 <= 0.0)
			v8 = -0.5;
		else
			v8 = 0.5;
		v4[2] = (int)(v8 + v7);
		v9 = (double)dword_140C110B4 * v3 * 0.001;
		if (v9 <= 0.0)
			v10 = -0.5;
		else
			v10 = 0.5;
		v4[3] = (int)(v10 + v9);
		v11 = (double)dword_140C110B4 * *(double*)(a2 + 32) * 0.001;
		if (v11 <= 0.0)
			v12 = -0.5;
		else
			v12 = 0.5;
		v13 = (int)(v12 + v11);
		v4[4] = v13;
		v14 = (double)dword_140C110B4 * *(double*)(a2 + 16) * 0.001;
		if (v14 <= 0.0)
			v6 = -0.5;
		v15 = (int)(v6 + v14) % v13;
		v4[5] = v15;
		if (v15 < 0)
			v4[5] = v15 + v13;
	}
	return 1i64;
}
// 140C110B4: using guessed type int dword_140C110B4;

