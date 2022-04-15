//----- (0000000140828AE0) ----------------------------------------------------
__int64 __fastcall sub_140828AE0(float a1, int a2)
{
	float v3; // xmm6_4
	float v5; // xmm9_4
	__m128 v6; // xmm0
	int v7; // edx
	float v8; // xmm3_4
	float v9; // xmm2_4
	float v10; // xmm4_4
	float v11; // xmm9_4
	int v12; // ecx
	__m128 v14; // [rsp+20h] [rbp-68h]

	if (a1 < -96.300003)
		return 31i64;
	v3 = 0.0;
	if (a1 > 0.0)
		return 31i64;
	if (a2 <= dword_140C10F18)
	{
		dword_140C10F18 = a2;
		v6 = (__m128)0x41200000u;
		v5 = a1 * 0.050000001;
		*(double*)v6.m128_u64 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), v5);
		v7 = dword_140C61BFC;
		v8 = v6.m128_f32[0];
		if (v5 >= -37.0)
		{
			if ((dword_140C61BFC & 1) != 0)
			{
				v9 = *(float*)&dword_140C61BF8;
			}
			else
			{
				v9 = 27866352.0;
				v7 = dword_140C61BFC | 1;
				dword_140C61BFC |= 1u;
				dword_140C61BF8 = 1272224376;
			}
			v11 = (float)(v5 * v9) + 1065353200.0;
			v12 = (int)v11 & 0x7FFFFF;
			v6 = (__m128)(unsigned int)(v12 + 1065353216);
			v10 = (float)((float)((float)((float)(COERCE_FLOAT(v12 + 1065353216) * 0.32518977) + 0.020805772)
				* COERCE_FLOAT(v12 + 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)v11 & 0xFF800000);
		}
		else
		{
			v9 = *(float*)&dword_140C61BF8;
			v10 = 0.0;
		}
		v6.m128_f32[0] = a1;
		v14 = _mm_shuffle_ps(v6, v6, 0);
		if ((float)(v14.m128_f32[0] * 0.050000001) >= -37.0)
		{
			if ((v7 & 1) == 0)
			{
				v9 = 27866352.0;
				v7 |= 1u;
				dword_140C61BFC = v7;
				dword_140C61BF8 = 1272224376;
			}
			v3 = (float)((float)((float)((float)(COERCE_FLOAT(
				((int)(float)((float)(v9 * (float)(v14.m128_f32[0] * 0.050000001))
					+ 1065353200.0) & 0x7FFFFF)
				+ 1065353216)
				* 0.32518977)
				+ 0.020805772)
				* COERCE_FLOAT(
					((int)(float)((float)(v9 * (float)(v14.m128_f32[0] * 0.050000001)) + 1065353200.0) & 0x7FFFFF)
					+ 1065353216))
				+ 0.65304345)
				* COERCE_FLOAT((int)(float)((float)(v9 * (float)(v14.m128_f32[0] * 0.050000001)) + 1065353200.0) & 0xFF800000);
		}
		if ((float)(v14.m128_f32[1] * 0.050000001) >= -37.0 && (v7 & 1) == 0)
		{
			v7 |= 1u;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC = v7;
		}
		if ((float)(v14.m128_f32[2] * 0.050000001) >= -37.0 && (v7 & 1) == 0)
		{
			v7 |= 1u;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC = v7;
		}
		if ((float)(v14.m128_f32[1] * 0.050000001) >= -37.0 && (v7 & 1) == 0)
		{
			v7 |= 1u;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC = v7;
		}
		if ((float)(v14.m128_f32[3] * 0.050000001) >= -37.0 && (v7 & 1) == 0)
		{
			v7 |= 1u;
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC = v7;
		}
		if ((float)(v14.m128_f32[0] * 0.050000001) >= -37.0 && (v7 & 1) == 0)
		{
			dword_140C61BF8 = 1272224376;
			dword_140C61BFC = v7 | 1;
		}
		if (v8 <= v10)
			v8 = v10;
		if (v8 > v3)
		{
			dword_140C10F58 = LODWORD(v8);
			dword_140C10F5C = LODWORD(a1);
			return 1i64;
		}
		dword_140C10F58 = LODWORD(v3);
		dword_140C10F5C = LODWORD(a1);
	}
	return 1i64;
}
// 140C10F18: using guessed type int dword_140C10F18;
// 140C10F58: using guessed type int dword_140C10F58;
// 140C10F5C: using guessed type int dword_140C10F5C;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

