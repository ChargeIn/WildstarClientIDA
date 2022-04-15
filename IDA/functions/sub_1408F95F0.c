#include "../winhttp.h"

//----- (00000001408F95F0) ----------------------------------------------------
float __fastcall sub_1408F95F0(float a1, float a2, float a3, float a4)
{
	double v5; // xmm7_8
	float v6; // xmm9_4
	float v7; // xmm10_4
	float v8; // xmm8_4
	double v9; // xmm0_8
	float v10; // xmm6_4
	double v12; // xmm0_8

	if ((dword_140C63464 & 1) != 0)
	{
		*(_QWORD*)&v5 = (unsigned int)dword_140C63460;
	}
	else
	{
		dword_140C63464 |= 1u;
		v5 = sub_1408FE170(COERCE_DOUBLE(0x40000000i64));
		dword_140C63460 = LODWORD(v5);
	}
	v6 = a3 - a1;
	v7 = (float)(a4 * 0.02) + 2.0;
	v8 = (float)(a2 * 0.02) + 2.0;
	if ((float)(v7 - v8) == 0.0)
	{
		v12 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v8);
		return *(float*)&v12 * v6;
	}
	else
	{
		HIDWORD(v9) = HIDWORD(v5);
		*(float*)&v9 = *(float*)&v5 * v7;
		v10 = sub_1408FC7F0(v9);
		HIDWORD(v9) = HIDWORD(v5);
		*(float*)&v9 = *(float*)&v5 * v8;
		return (float)((float)(v10 - sub_1408FC7F0(v9)) * (float)(v6 / (float)(v7 - v8))) / *(float*)&v5;
	}
}
// 140C63460: using guessed type int dword_140C63460;
// 140C63464: using guessed type int dword_140C63464;

