#include "../winhttp.h"

//----- (000000014040F470) ----------------------------------------------------
__int64 __fastcall sub_14040F470(__int64 a1, float a2, int a3)
{
	unsigned int v3; // ebx
	unsigned int v5; // r14d
	unsigned int v6; // r15d
	unsigned int v7; // esi
	unsigned int v8; // edi
	float v9; // xmm0_4
	float v10; // ecx
	unsigned int v11; // ecx

	v3 = 50;
	if ((unsigned int)(2 * a3) > 0x32)
		v3 = 2 * a3;
	if (a3 + 50 < v3)
		v3 = a3 + 50;
	v5 = v3;
	v6 = 8 * v3;
	if (v3 + 150 < 8 * v3)
		v6 = v3 + 150;
	v7 = 0;
	if (!v3)
		return v7;
	while (1)
	{
		v8 = (v5 + v7) >> 1;
		v9 = sub_14040F570(a1, v8);
		v10 = v9;
		if ((LODWORD(v9) ^ LODWORD(a2)) < 0)
			LODWORD(v10) = 0x80000000 - LODWORD(v9);
		if ((int)abs32(LODWORD(v10) - LODWORD(a2)) <= 84)
			break;
		if (a2 >= v9)
		{
			v7 = v8 + 1;
			if (v8 + 1 >= v3)
			{
				v11 = v3 + 50;
				v7 = v3;
				v3 *= 2;
				if (v11 < v3)
					v3 = v11;
				if (v3 >= v6)
					return v6;
				v5 = v3;
			}
		}
		else
		{
			if (!v8)
				return 0i64;
			v5 = v8 - 1;
		}
		if (v7 >= v5)
			return v7;
	}
	return v8;
}

