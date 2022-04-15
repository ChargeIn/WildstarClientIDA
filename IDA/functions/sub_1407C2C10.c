#include "../winhttp.h"

//----- (00000001407C2C10) ----------------------------------------------------
float __fastcall sub_1407C2C10(__int64 a1, __int16 a2)
{
	__int16 v2; // dx
	int v3; // ecx
	int v4; // edx
	float result; // xmm0_4
	unsigned int v6; // eax
	int i; // ecx

	v2 = a2 - *(_WORD*)(a1 + 64);
	if (v2 < 0)
		v2 = (v2 ^ 0x7FFF) + 1;
	v3 = v2 & 0x7FFF;
	v4 = (v2 & 0x8000) << 16;
	if ((v3 & 0x7C00) != 0)
	{
		LODWORD(result) = v4 | ((v3 + 114688) << 13);
	}
	else
	{
		if ((v3 & 0x3FF) != 0)
		{
			v6 = (v3 & 0x3FF) << 13;
			for (i = 113; v6 <= 0x7FFFFF; --i)
				v6 *= 2;
			v3 = v6 & 0x7FFFFF | (i << 23);
		}
		LODWORD(result) = v4 | v3;
	}
	return result;
}

