//----- (00000001407E1640) ----------------------------------------------------
float __fastcall sub_1407E1640(float a1, float* a2)
{
	float v2; // xmm1_4
	int v3; // ecx
	unsigned int v4; // xmm0_4
	float result; // xmm0_4

	v2 = a1;
	v3 = (unsigned __int8)(LODWORD(a1) >> 23) - 127;
	if (v3 < 0)
	{
		v4 = LODWORD(a1) & 0x80000000;
	LABEL_3:
		*a2 = *(float*)&v4;
		return v2;
	}
	if (v3 < 23)
	{
		v4 = LODWORD(a1) & ~((1 << (23 - v3)) - 1);
		v2 = v2 - *(float*)&v4;
		goto LABEL_3;
	}
	*a2 = a1;
	if ((LODWORD(a1) & 0x7FFFFFFFu) > 0x7F800000)
		return a1 + a1;
	LODWORD(result) = LODWORD(a1) & 0x80000000;
	return result;
}

