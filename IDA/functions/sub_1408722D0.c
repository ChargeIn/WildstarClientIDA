#include "../winhttp.h"

//----- (00000001408722D0) ----------------------------------------------------
void __fastcall sub_1408722D0(__m128* a1)
{
	bool v2; // zf
	float v3; // xmm0_4
	float v4; // xmm2_4
	float v5; // xmm0_4
	float v6; // xmm1_4
	float v7; // xmm2_4
	float v8; // xmm1_4
	bool v9; // al

	if (a1[11].m128_i8[14])
	{
		v2 = a1[11].m128_i8[15] == 0;
		a1[11].m128_i8[14] = 0;
		if (v2)
		{
			v9 = a1[11].m128_f32[0] <= 0.1 && a1[11].m128_f32[1] <= 0.1;
			a1[11].m128_i8[13] = v9;
			a1[11].m128_i16[4] = v9 ? 8 : 0;
		}
		else
		{
			v3 = a1[11].m128_f32[1];
			a1[11].m128_i8[15] = 0;
			a1[11].m128_i16[4] = 8;
			a1[11].m128_f32[0] = v3;
			a1[11].m128_i8[13] = v3 <= 0.1;
			if (v3 > 0.1)
			{
				v4 = 0.44999999;
				v5 = sub_14087C7E0(v3, a1[11].m128_i8[12]) / (float)dword_140C110B4;
				if (v5 <= 0.44999999)
					v4 = v5;
				v6 = 1.0 / sub_1408FD8A4(v4 * 3.1415927);
				v7 = v6 * v6;
				v8 = v6 * 1.4142135;
				sub_1408A8E90(
					a1,
					1.0 / (float)((float)(v8 + 1.0) + v7),
					(float)(1.0 / (float)((float)(v8 + 1.0) + v7)) * 2.0,
					1.0 / (float)((float)(v8 + 1.0) + v7),
					(float)((float)(1.0 - v7) * 2.0) * (float)(1.0 / (float)((float)(v8 + 1.0) + v7)),
					(float)((float)(1.0 - v8) + v7) * (float)(1.0 / (float)((float)(v8 + 1.0) + v7)));
			}
		}
	}
}
// 140C110B4: using guessed type int dword_140C110B4;

