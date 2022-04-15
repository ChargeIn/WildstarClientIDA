#include "../winhttp.h"

//----- (0000000140786070) ----------------------------------------------------
float __fastcall sub_140786070(__int64 a1, int a2, int a3)
{
	float result; // xmm0_4
	float v6; // xmm6_4
	float v7; // xmm7_4
	double v8; // xmm0_8
	float v9; // xmm0_4
	float v10; // xmm1_4
	float v11; // xmm1_4

	if (a3)
	{
		result = sub_140787470(a1, a2);
		*(_DWORD*)(a1 + 32) = a2;
		*(float*)(a1 + 36) = result;
	}
	else
	{
		v6 = sub_140787470(a1, *(_DWORD*)(a1 + 32));
		v7 = sub_140787470(a1, a2);
		v8 = 0.0;
		if (a2 - *(_DWORD*)(a1 + 32) >= 0)
			*(float*)&v8 = (float)(a2 - *(_DWORD*)(a1 + 32)) * 0.001;
		*(float*)&v8 = (float)(*(float*)&v8 * -0.69314718) * 6.0240965;
		v9 = sub_1408FC7F0(v8);
		v10 = *(float*)(a1 + 36);
		*(_DWORD*)(a1 + 32) = a2;
		v11 = (float)((float)(v10 - v6) * v9) + v7;
		*(float*)(a1 + 36) = v11;
		return v11;
	}
	return result;
}

