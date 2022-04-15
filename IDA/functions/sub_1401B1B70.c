#include "../winhttp.h"

//----- (00000001401B1B70) ----------------------------------------------------
float* __fastcall sub_1401B1B70(float* a1, float* a2)
{
	float v2; // xmm0_4
	double v5; // xmm6_8
	float v6; // xmm0_4
	int v7; // ecx
	float v8; // xmm6_4
	float* result; // rax
	float v10; // xmm0_4
	float v11; // xmm1_4
	float v12; // eax

	v2 = a1[3];
	if (v2 >= 1.0)
	{
		v12 = *a1;
		a2[3] = 0.0;
		*a2 = v12;
		a2[1] = a1[1];
		a2[2] = a1[2];
		return a2;
	}
	else
	{
		*(_QWORD*)&v5 = sub_1408FCCB0(v2).m128_u64[0];
		v6 = sub_1408FE3D0(v5);
		v7 = LODWORD(v6);
		if (v6 < 0.0)
			v7 = 0x80000000 - LODWORD(v6);
		a2[3] = 0.0;
		if ((int)abs32(v7) <= 84)
		{
			*a2 = *a1;
			a2[1] = a1[1];
			a2[2] = a1[2];
			return a2;
		}
		else
		{
			v8 = *(float*)&v5 / v6;
			result = a2;
			v10 = v8 * *a1;
			v11 = v8 * a1[1];
			a2[2] = v8 * a1[2];
			*a2 = v10;
			a2[1] = v11;
		}
	}
	return result;
}

