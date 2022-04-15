//----- (00000001400F9B70) ----------------------------------------------------
float __fastcall sub_1400F9B70(__int64 a1)
{
	int v1; // r8d
	int v2; // edx
	float v3; // xmm3_4
	float v4; // xmm4_4
	float v6; // xmm5_4
	float v7; // xmm3_4

	v1 = *(_DWORD*)(a1 + 8);
	v2 = dword_140C636A8;
	if (v1 != dword_140C636A8)
	{
		v3 = *(float*)(a1 + 16);
		v4 = *(float*)(a1 + 24);
		if (v3 == v4)
		{
			*(_BYTE*)(a1 + 20) = 0;
			*(_DWORD*)(a1 + 8) = v2;
			return v3;
		}
		*(_BYTE*)(a1 + 20) = 1;
		v6 = (float)((float)(v2 - v1) * 0.001) * *(float*)(a1 + 28);
		if (fabs(v6) > fabs(v4 - v3))
		{
			*(float*)(a1 + 16) = v4;
			*(_DWORD*)(a1 + 8) = v2;
			return v4;
		}
		if (v3 > v4)
		{
			v7 = v3 - v6;
			*(_DWORD*)(a1 + 8) = v2;
			*(float*)(a1 + 16) = v7;
			return v7;
		}
		*(_DWORD*)(a1 + 8) = v2;
		*(float*)(a1 + 16) = v3 + v6;
	}
	return *(float*)(a1 + 16);
}
// 140C636A8: using guessed type int dword_140C636A8;

