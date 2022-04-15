//----- (0000000140543240) ----------------------------------------------------
void __fastcall sub_140543240(__int64 a1, float a2, float a3)
{
	float v3; // xmm3_4
	float v4; // xmm0_4
	float v5; // edx

	v3 = *(float*)(a1 + 420);
	if (!*(_DWORD*)(a1 + 428))
	{
		*(_DWORD*)(a1 + 428) = 1;
	LABEL_6:
		*(float*)(a1 + 420) = a2;
		goto LABEL_7;
	}
	v4 = (float)((float)(v3 - a2) * a3) + a2;
	*(float*)(a1 + 420) = v4;
	v5 = v4;
	if ((LODWORD(v4) ^ LODWORD(a2)) < 0)
		LODWORD(v5) = 0x80000000 - LODWORD(v4);
	if ((int)abs32(LODWORD(v5) - LODWORD(a2)) <= 84)
		goto LABEL_6;
LABEL_7:
	if (v3 != *(float*)(a1 + 420))
		sub_1405432C0(a1);
}

