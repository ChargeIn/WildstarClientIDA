//----- (0000000140849720) ----------------------------------------------------
float __fastcall sub_140849720(float a1, float a2, float a3, float a4, float* a5)
{
	float v5; // xmm0_4
	float v6; // xmm1_4
	float v8; // xmm0_4

	v5 = sub_1408295C0(a1, 0.0, a2, 1.0, a4);
	*a5 = v5;
	v6 = (float)(v5 * a3) * 0.050000001;
	if (v6 < -37.0)
		return 0.0;
	if ((dword_140C61BFC & 1) != 0)
	{
		v8 = *(float*)&dword_140C61BF8;
	}
	else
	{
		v8 = 27866352.0;
		dword_140C61BF8 = 1272224376;
		dword_140C61BFC |= 1u;
	}
	return (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v6 * v8) + 1065353200.0) & 0x7FFFFF) + 1065353216)
		* 0.32518977)
		+ 0.020805772)
		* COERCE_FLOAT(((int)(float)((float)(v6 * v8) + 1065353200.0) & 0x7FFFFF) + 1065353216))
		+ 0.65304345)
		* COERCE_FLOAT((int)(float)((float)(v6 * v8) + 1065353200.0) & 0xFF800000);
}
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

