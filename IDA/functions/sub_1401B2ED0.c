#include "../winhttp.h"

//----- (00000001401B2ED0) ----------------------------------------------------
__int64 __fastcall sub_1401B2ED0(__int64 a1, float* a2)
{
	float v2; // xmm9_4
	float v5; // xmm0_4
	float v6; // xmm0_4
	double v7; // xmm0_8
	float v8; // xmm1_4

	v2 = a2[9];
	if (v2 >= -0.99998999)
	{
		if (v2 <= 0.99998999)
		{
			*(float*)a1 = sub_1408FD190(a2[8], a2[10]);
			v7 = sub_1408FCF3C(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fmaxf(-1.0, fminf(-v2, 1.0)))));
			v8 = a2[5];
			*(_DWORD*)(a1 + 4) = LODWORD(v7);
			*(float*)(a1 + 8) = sub_1408FD190(a2[1], v8);
		}
		else
		{
			v6 = sub_1408FD190(-a2[2], *a2);
			*(_DWORD*)(a1 + 4) = -1077342245;
			*(_DWORD*)(a1 + 8) = 0;
			*(float*)a1 = v6;
		}
	}
	else
	{
		v5 = sub_1408FD190(-a2[2], *a2);
		*(_QWORD*)(a1 + 4) = 1070141403i64;
		*(float*)a1 = v5;
	}
	return a1;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

