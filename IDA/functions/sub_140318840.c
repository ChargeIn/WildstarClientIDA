#include "../winhttp.h"

//----- (0000000140318840) ----------------------------------------------------
void __fastcall sub_140318840(float a1, __int64 a2, __int64 a3, float* a4, unsigned int a5)
{
	unsigned int v6; // r10d
	unsigned int i; // ecx
	__int64 v8; // rcx
	__int64 v9; // r10
	__int64 v10; // rcx
	float v11; // xmm4_4
	float v12; // xmm3_4
	__int64 v13; // rax
	float v14; // xmm0_4
	float v15; // xmm3_4

	if (a5)
	{
		v6 = 0;
		if (a5 > 1)
		{
			for (i = 1; i < a5; ++i)
			{
				if (a1 < *(float*)(a2 + 16i64 * i))
					break;
				++v6;
			}
		}
		if (v6 == a5 - 1)
		{
			if (a5 > 1)
			{
				v8 = v6;
				v9 = 2i64 * (v6 - 1);
				v10 = 2 * v8;
				v11 = *(float*)(a2 + 8 * v9);
				v12 = *(float*)(a2 + 8 * v10);
				if (v12 == v11)
					*a4 = *(float*)(a3 + 8 * v10);
				else
					*a4 = (float)((float)((float)(*(float*)(a3 + 8 * v10) - *(float*)(a3 + 8 * v9)) / (float)(v12 - v11))
						* (float)(a1 - v11))
					+ *(float*)(a3 + 8 * v9);
				return;
			}
			v13 = 2i64 * v6;
		}
		else
		{
			v13 = 2i64 * v6;
			v14 = *(float*)(a2 + 16i64 * (v6 + 1));
			v15 = *(float*)(a2 + 16i64 * v6);
			if (v14 != v15)
			{
				*a4 = (float)((float)((float)(a1 - v15) / (float)(v14 - v15))
					* (float)(*(float*)(a3 + 16i64 * (v6 + 1)) - *(float*)(a3 + 16i64 * v6)))
					+ *(float*)(a3 + 16i64 * v6);
				return;
			}
		}
		*a4 = *(float*)(a3 + 8 * v13);
	}
}

