#include "../winhttp.h"

//----- (000000014085D600) ----------------------------------------------------
__m128 __fastcall sub_14085D600(float* a1, float* a2, float a3, char a4, char a5, __int64 a6)
{
	float v8; // xmm1_4
	float v10; // xmm0_4
	float v11; // xmm9_4
	__m128 v12; // xmm10
	float v13; // xmm4_4
	float v14; // xmm5_4
	double v15; // xmm6_8
	int v16; // xmm8_4
	double v17; // xmm0_8
	float v18; // xmm0_4
	unsigned __int32 v19; // xmm0_4
	float v21; // [rsp+20h] [rbp-68h] BYREF
	float v22; // [rsp+24h] [rbp-64h]
	float v23; // [rsp+28h] [rbp-60h]

	v8 = a2[1] - a1[7];
	v21 = *a2 - a1[6];
	v10 = a2[2];
	v22 = v8;
	v23 = v10 - a1[8];
	v12 = sub_140829600(&v21);
	v11 = v12.m128_f32[0];
	v12.m128_f32[0] = v12.m128_f32[0] / (float)(a3 * a1[9]);
	*(float*)a6 = v12.m128_f32[0];
	if (a4)
	{
		*(_QWORD*)&v15 = LODWORD(v22);
		v13 = (float)((float)(v22 * a1[21]) + (float)(v21 * a1[20])) + (float)(v23 * a1[22]);
		v14 = (float)((float)(v22 * a1[27]) + (float)(v21 * a1[26])) + (float)(v23 * a1[28]);
		*(float*)&v15 = (float)((float)(v22 * a1[24]) + (float)(v21 * a1[23])) + (float)(v23 * a1[25]);
		if (v14 == 0.0)
		{
			if (v13 == 0.0)
			{
				v16 = 0;
				LODWORD(v17) = 0;
			LABEL_10:
				*(_BYTE*)(a6 + 16) |= 2u;
				*(_DWORD*)(a6 + 4) = v16;
				*(_DWORD*)(a6 + 8) = LODWORD(v17);
				goto LABEL_11;
			}
			if (v13 <= 0.0)
				v16 = -1077342245;
			else
				v16 = 1070141403;
		}
		else
		{
			v16 = sub_1408FD190(v13, v14);
		}
		*(float*)&v15 = *(float*)&v15 / v11;
		v17 = sub_1408FCF3C(v15);
		goto LABEL_10;
	}
LABEL_11:
	if (a5)
	{
		if (v11 <= 0.0 || (v18 = -(float)(sub_140829590(&v21, a2 + 3) / v11), v18 >= 1.0))
		{
			v18 = 1.0;
		}
		else if (v18 <= -1.0)
		{
			v18 = -1.0;
		}
		v19 = sub_1408FCCB0(v18).m128_u32[0];
		*(_BYTE*)(a6 + 16) &= ~1u;
		*(_DWORD*)(a6 + 12) = v19;
	}
	return v12;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

