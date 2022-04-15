#include "../winhttp.h"

//----- (00000001406DCD10) ----------------------------------------------------
__int64 __fastcall sub_1406DCD10(__int64 a1, int* a2, int a3)
{
	float v3; // xmm0_4
	float v4; // xmm0_4
	__int64 result; // rax

	if (*(char*)(a1 + 28) >= 0)
		return sub_1400D2660(a1, a2, a3);
	v3 = *(float*)(a1 + 1188);
	if (a3 >= 0)
	{
		v4 = v3 * 0.5;
		if (v4 < 0.25)
			v4 = 0.25;
	}
	else
	{
		v4 = v3 * 2.0;
		if (v4 > 32.0)
		{
			result = 0i64;
			*(_DWORD*)(a1 + 1188) = 1107296256;
			return result;
		}
	}
	*(float*)(a1 + 1188) = v4;
	return 0i64;
}

