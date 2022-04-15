//----- (0000000140870920) ----------------------------------------------------
__m128 __fastcall sub_140870920(float a1)
{
	__int128 v1; // xmm2
	float v2; // xmm0_4
	float v3; // xmm1_4
	float v4; // xmm1_4
	__m128 result; // xmm0
	float v6; // xmm0_4
	float v7; // xmm1_4
	float v8; // xmm0_4
	int v9; // ecx

	v1 = 0i64;
	if (a1 <= 0.0)
	{
		v6 = a1 * 0.050000001;
		if (v6 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v7 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v7 = 27866352.0;
				dword_140C61BF8 = 1272224376;
				dword_140C61BFC |= 1u;
			}
			v8 = (float)(v6 * v7) + 1065353200.0;
			v9 = (int)v8 & 0x7FFFFF;
			v1 = (unsigned int)(v9 + 1065353216);
			*(float*)&v1 = (float)((float)((float)((float)(COERCE_FLOAT(v9 + 1065353216) * 0.32518977) + 0.020805772)
				* COERCE_FLOAT(v9 + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)v8 & 0xFF800000);
		}
		return (__m128)v1;
	}
	else
	{
		v2 = a1 * -0.050000001;
		if (v2 < -37.0)
			return (__m128)0x477FFF00u;
		if ((dword_140C61BFC & 1) != 0)
		{
			v3 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v3 = 27866352.0;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC |= 1u;
		}
		v4 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v2 * v3) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v2 * v3) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v2 * v3) + 1065353200.0) & 0xFF800000);
		if (v4 <= 0.0)
		{
			return (__m128)0x477FFF00u;
		}
		else
		{
			result = (__m128)0x3F800000u;
			result.m128_f32[0] = 1.0 / v4;
		}
	}
	return result;
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

