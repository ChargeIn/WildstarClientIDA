#include "../winhttp.h"

//----- (0000000140345BF0) ----------------------------------------------------
__int64 __fastcall sub_140345BF0(__int64 a1, __int64 a2, float a3)
{
	float v3; // xmm6_4
	int v5; // eax
	unsigned int v6; // ecx

	v3 = a3;
	if (!(unsigned int)sub_1407DDB6C(a3))
		v3 = 1.0;
	v5 = sub_1408285F0(a2, v3);
	v6 = 0;
	if (v5 != 1)
		return (unsigned int)-2147467259;
	return v6;
}

