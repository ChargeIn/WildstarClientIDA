#include "../winhttp.h"

//----- (0000000140872880) ----------------------------------------------------
__int64 __fastcall sub_140872880(__int64 a1, float a2)
{
	float v3; // xmm6_4
	int v4; // xmm0_4
	double v5; // xmm0_8
	__int64 result; // rax

	v3 = a2;
	if (*(_BYTE*)(a1 + 71) || a2 != *(float*)(a1 + 64))
	{
		v4 = -988413952;
		if (a2 <= -2400.0 || (v4 = 1159069696, a2 >= 2400.0))
			v3 = *(float*)&v4;
		v5 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v3 * 0.00083333335);
		*(float*)(a1 + 64) = v3;
		*(_DWORD*)(a1 + 44) = 1024;
		*(_BYTE*)(a1 + 71) = 0;
		result = (unsigned int)(int)(float)((float)((float)(*(float*)&v5 * *(float*)(a1 + 60)) * 65536.0) + 0.5);
		*(_DWORD*)(a1 + 36) = result;
		*(_DWORD*)(a1 + 40) = result;
	}
	return result;
}

