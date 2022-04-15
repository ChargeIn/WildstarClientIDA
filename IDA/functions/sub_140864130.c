#include "../winhttp.h"

//----- (0000000140864130) ----------------------------------------------------
__int64 __fastcall sub_140864130(int a1, float a2, __int64 a3)
{
	__int64 result; // rax
	float v5; // xmm1_4
	float v6; // xmm0_4
	float v7; // xmm1_4
	float v8; // xmm2_4
	float v9; // xmm1_4
	float v10; // xmm1_4
	float v11; // xmm0_4
	float v12; // xmm5_4
	float v13; // xmm3_4
	float v14; // xmm0_4
	float v15; // xmm0_4
	float v16; // xmm3_4
	float v17; // xmm1_4
	float v18; // xmm2_4
	float v19; // xmm1_4
	float v20; // xmm0_4

	result = (unsigned int)dword_140C61C54;
	if (dword_140C61C54)
	{
		if (dword_140C61C54 == 1)
		{
			if (a1 >= 256)
				a1 = 512 - a1;
			v18 = 1.0;
			if (a1 < 256)
				v18 = flt_140C62470[a1 / 2];
			result = 0i64;
			v19 = (float)(1.0 - v18) + *(float*)(a3 + 4);
			v20 = v18 + *(float*)a3;
			*(_QWORD*)(a3 + 8) = 0i64;
			*(_QWORD*)(a3 + 16) = 0i64;
			*(float*)(a3 + 4) = v19;
			*(float*)a3 = v20;
		}
	}
	else
	{
		result = a1;
		if (a1 < 256)
		{
			v8 = flt_140C62470[a1];
			v9 = 1.0 - v8;
			if (a1 < 128)
			{
				if (a2 <= 0.0)
				{
					v17 = v9 + *(float*)(a3 + 4);
					*(float*)a3 = v8 + *(float*)a3;
					*(float*)(a3 + 4) = v17;
				}
				else
				{
					v11 = flt_140C62470[2 * a1];
					v12 = (float)(1.0 - v11) * a2;
					*(float*)(a3 + 8) = (float)(v11 * a2) + *(float*)(a3 + 8);
					v13 = (float)(1.0 - a2) * v9;
					v14 = (float)(1.0 - a2) * v8;
					if (a1 < 64)
					{
						v16 = (float)(v13 + v12) + *(float*)(a3 + 4);
						*(float*)a3 = v14 + *(float*)a3;
						*(float*)(a3 + 4) = v16;
					}
					else
					{
						v15 = (float)(v14 + v12) + *(float*)a3;
						*(float*)(a3 + 4) = v13 + *(float*)(a3 + 4);
						*(float*)a3 = v15;
					}
				}
			}
			else
			{
				v10 = v9 + *(float*)(a3 + 12);
				*(float*)a3 = v8 + *(float*)a3;
				*(float*)(a3 + 12) = v10;
			}
		}
		else
		{
			v5 = flt_140C62470[a1 - 256];
			v6 = 1.0 - v5;
			v7 = v5 + *(float*)(a3 + 16);
			if (a1 < 384)
				*(float*)(a3 + 12) = v6 + *(float*)(a3 + 12);
			else
				*(float*)(a3 + 4) = v6 + *(float*)(a3 + 4);
			*(float*)(a3 + 16) = v7;
		}
	}
	return result;
}
// 140C61C54: using guessed type int dword_140C61C54;
// 140C62470: using guessed type float flt_140C62470[256];

