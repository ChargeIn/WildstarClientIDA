#include "../winhttp.h"

//----- (00000001403FB770) ----------------------------------------------------
bool __fastcall sub_1403FB770(__int64 a1, float* a2, float* a3)
{
	bool result; // al
	float v4; // xmm0_4
	float v5; // xmm1_4
	float v6; // xmm0_4
	float v7; // xmm1_4

	result = 1;
	if (*a2 >= *a3)
	{
		if (*a2 != *a3)
			return 0;
		v4 = a2[1];
		v5 = a3[1];
		if (v4 >= v5)
		{
			if (v4 != v5)
				return 0;
			v6 = a2[2];
			v7 = a3[2];
			if (v6 >= v7 && (v6 != v7 || a3[3] <= a2[3]))
				return 0;
		}
	}
	return result;
}

