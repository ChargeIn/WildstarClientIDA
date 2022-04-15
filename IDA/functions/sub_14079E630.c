#include "../winhttp.h"

//----- (000000014079E630) ----------------------------------------------------
__m128 __fastcall sub_14079E630(float* a1, float* a2, int a3)
{
	float v3; // r10d
	__int128 v6; // xmm2
	float v7; // xmm0_4
	__int64 v8; // r8
	__int64 v9; // rcx
	int v10; // eax
	float v11; // xmm0_4

	v3 = *a1;
	if (*(_DWORD*)a1 == 2)
	{
		v6 = 0i64;
	}
	else
	{
		if (LODWORD(v3) != 3)
			return (__m128)0x3F800000u;
		v6 = 0x3F800000u;
	}
	if (!a3)
	{
		v7 = a1[1];
		if (LODWORD(v3) == 3)
			*(float*)&v6 = *(float*)&v6 * v7;
		else
			*(float*)&v6 = *(float*)&v6 + v7;
	}
	v8 = *((_QWORD*)a1 + 3);
	if (v8)
	{
		v9 = *((_QWORD*)a1 + 2);
		do
		{
			if (!a3 || !*(_DWORD*)v9 || *(_DWORD*)v9 == a3)
			{
				v10 = *(_DWORD*)(v9 + 8);
				if (!v10
					|| (v10 != 1 || *a2 > 0.0)
					&& (v10 != 2 || a2[1] > 0.0)
					&& (v10 != 3 || *a2 < 0.0)
					&& (v10 != 4 || a2[1] < 0.0))
				{
					v11 = *(float*)(v9 + 12);
					if (LODWORD(v3) == 3)
						*(float*)&v6 = *(float*)&v6 * v11;
					else
						*(float*)&v6 = *(float*)&v6 + v11;
				}
			}
			v9 += 20i64;
			--v8;
		} while (v8);
	}
	return (__m128)v6;
}

