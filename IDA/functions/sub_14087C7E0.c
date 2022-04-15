//----- (000000014087C7E0) ----------------------------------------------------
float __fastcall sub_14087C7E0(float a1, char a2)
{
	float v3; // xmm2_4

	if (a2)
		return 187.5 - (float)(a1 * 1.865);
	if (a1 < 30.0)
		return (float)((float)(30.0 - a1) * 433.33334) + 7000.0;
	if ((dword_140C628F4 & 1) != 0)
	{
		v3 = *(float*)&dword_140C628F0;
	}
	else
	{
		v3 = 1042939.9;
		dword_140C628F0 = 1233035199;
		dword_140C628F4 |= 1u;
	}
	return (float)((float)((float)((float)((float)(COERCE_FLOAT(
		((int)(float)((float)((float)(100.0 - a1) * v3) + 1065353200.0) & 0x7FFFFF)
		+ 1065353216)
		* 0.32518977)
		+ 0.020805772)
		* COERCE_FLOAT(
			((int)(float)((float)((float)(100.0 - a1) * v3) + 1065353200.0) & 0x7FFFFF)
			+ 1065353216))
		+ 0.65304345)
		* COERCE_FLOAT((int)(float)((float)((float)(100.0 - a1) * v3) + 1065353200.0) & 0xFF800000))
		* 16.797443;
}
// 140C628F0: using guessed type int dword_140C628F0;
// 140C628F4: using guessed type int dword_140C628F4;

