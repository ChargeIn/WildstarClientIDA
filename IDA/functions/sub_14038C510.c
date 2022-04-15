//----- (000000014038C510) ----------------------------------------------------
float __fastcall sub_14038C510(__int64 a1, int a2)
{
	int v2; // r9d
	int v3; // r8d
	float result; // xmm0_4
	float v5; // xmm4_4

	v2 = *(_DWORD*)(a1 + 248);
	v3 = *(_DWORD*)(a1 + 252);
	if (v2 - v3 >= 0)
		return *(float*)(a1 + 244);
	if (a2 - v2 < 0)
		return *(float*)(a1 + 240);
	if (a2 - v3 >= 0)
	{
		result = *(float*)(a1 + 244);
		*(_DWORD*)(a1 + 248) = v3;
		*(float*)(a1 + 240) = result;
	}
	else
	{
		v5 = fmaxf(
			0.0,
			fminf(
				(float)((float)((float)(a2 - v2) / (float)(v3 - v2)) * (float)(*(float*)(a1 + 244) - *(float*)(a1 + 240)))
				+ *(float*)(a1 + 240),
				1.0));
		return (float)((float)(3.0 - (float)(v5 * 2.0)) * v5) * v5;
	}
	return result;
}

