#include "../winhttp.h"

//----- (00000001408A15A0) ----------------------------------------------------
__int64 __fastcall sub_1408A15A0(__int64 a1, char a2, double a3)
{
	double v4; // xmm0_8
	float v5; // xmm0_4
	float v6; // xmm1_4
	__int64 result; // rax

	if (!a2 || *(float*)&a3 == 0.0)
	{
		result = *(unsigned int*)(a1 + 48);
		*(_DWORD*)(a1 + 104) = result;
	}
	else
	{
		v4 = sub_1408FDC10(a3);
		v5 = *(float*)&v4 * 20.0;
		if (v5 >= -0.60000002)
			v6 = 100.0;
		else
			v6 = -60.0 / v5;
		result = (unsigned int)(int)(float)((float)*(int*)(a1 + 48) * v6);
		*(_DWORD*)(a1 + 104) = result;
	}
	return result;
}

