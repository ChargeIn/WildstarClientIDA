//----- (00000001402C2550) ----------------------------------------------------
__int64 __fastcall sub_1402C2550(float a1)
{
	unsigned int v1; // edx
	int v2; // r8d
	unsigned int v4; // edx

	v1 = LODWORD(a1) & 0x7FFFFFFF;
	v2 = HIWORD(LODWORD(a1)) & 0x8000;
	if ((LODWORD(a1) & 0x7FFFFFFFu) > 0x47FFEFFF)
		return v2 | 0x7FFFu;
	if (v1 >= 0x38800000)
		v4 = v1 - 939524096;
	else
		v4 = (LODWORD(a1) & 0x7FFFFF | 0x800000u) >> (113 - (v1 >> 23));
	return v2 | ((v4 + ((v4 >> 13) & 1) + 4095) >> 13) & 0x7FFF;
}

