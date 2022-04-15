#include "../winhttp.h"

//----- (00000001401280F0) ----------------------------------------------------
__int64 __fastcall sub_1401280F0(float a1, float a2, float a3)
{
	float v4; // xmm2_4
	float v5; // xmm4_4
	int v6; // ecx
	float v7; // xmm3_4
	float v8; // xmm0_4
	float v9; // xmm8_4
	float v10; // xmm3_4

	v4 = 0.0;
	v5 = 0.0;
	v6 = (int)(float)(a1 * 0.016666668) % 6;
	v7 = (float)(a1 * 0.016666668) - (float)v6;
	v8 = 1.0 - v7;
	v9 = (float)(1.0 - (float)(v7 * a2)) * a3;
	v10 = 0.0;
	switch (v6)
	{
	case 0:
		v10 = (float)(1.0 - (float)(v8 * a2)) * a3;
		v5 = (float)(1.0 - a2) * a3;
		goto LABEL_8;
	case 1:
		v4 = v9;
		v10 = a3;
		v5 = (float)(1.0 - a2) * a3;
		break;
	case 2:
		v4 = (float)(1.0 - a2) * a3;
		v10 = a3;
		v5 = (float)(1.0 - (float)(v8 * a2)) * a3;
		break;
	case 3:
		v4 = (float)(1.0 - a2) * a3;
		v10 = v9;
		v5 = a3;
		break;
	case 4:
		v4 = (float)(1.0 - (float)(v8 * a2)) * a3;
		v10 = (float)(1.0 - a2) * a3;
		v5 = a3;
		break;
	case 5:
		v10 = (float)(1.0 - a2) * a3;
		v5 = v9;
	LABEL_8:
		v4 = a3;
		break;
	default:
		return (int)(float)((float)(v5 * 255.0) + 0.5) | (((int)(float)((float)(v10 * 255.0) + 0.5) | (((int)(float)((float)(v4 * 255.0) + 0.5) | 0xFFFFFF00) << 8)) << 8);
	}
	return (int)(float)((float)(v5 * 255.0) + 0.5) | (((int)(float)((float)(v10 * 255.0) + 0.5) | (((int)(float)((float)(v4 * 255.0) + 0.5) | 0xFFFFFF00) << 8)) << 8);
}

