#include "../winhttp.h"

//----- (00000001400C4090) ----------------------------------------------------
__int64 __fastcall sub_1400C4090(__int64 a1, float a2)
{
	char v2; // al
	float v3; // xmm0_4
	bool v4; // cc
	__int64 result; // rax
	float v6; // xmm1_4
	float v7; // xmm0_4

	v2 = *(_BYTE*)(a1 + 412);
	if ((v2 & 0x40) == 0
		|| *(_DWORD*)(a1 + 296) == 1
		|| (v3 = a2 + *(float*)(a1 + 392), v4 = v3 <= *(float*)(a1 + 396), *(float*)(a1 + 392) = v3, v4)
		|| (v2 & 2) != 0)
	{
		if (*(_DWORD*)(a1 + 296) == 2
			&& (v2 & 0x40) != 0
			&& v2 < 0
			&& (v6 = a2 + *(float*)(a1 + 404), v7 = *(float*)(a1 + 400), *(float*)(a1 + 404) = v6, v6 >= v7))
		{
			result = 2i64;
			*(float*)(a1 + 404) = v6 - v7;
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		*(_BYTE*)(a1 + 412) = v2 | 2;
		return 1i64;
	}
	return result;
}

