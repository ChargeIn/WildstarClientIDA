//----- (00000001402C25D0) ----------------------------------------------------
double __fastcall sub_1402C25D0(char* a1)
{
	char v1; // al
	double v3; // [rsp+0h] [rbp-18h]

	if (*a1 == (char)0x80)
		LODWORD(v3) = -1082130432;
	else
		*(float*)&v3 = (float)*a1 * 0.0078740157;
	v1 = a1[1];
	if (v1 == (char)0x80)
		HIDWORD(v3) = -1082130432;
	else
		*((float*)&v3 + 1) = (float)v1 * 0.0078740157;
	return v3;
}

