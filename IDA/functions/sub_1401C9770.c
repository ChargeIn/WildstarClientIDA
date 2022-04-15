//----- (00000001401C9770) ----------------------------------------------------
float __fastcall sub_1401C9770(unsigned __int16* a1)
{
	int v1; // r8d
	unsigned int v2; // edx
	unsigned int v3; // r8d
	float result; // xmm0_4
	unsigned int v5; // eax
	int i; // ecx

	v1 = *a1;
	v2 = v1 & 0xFFFF7FFF;
	v3 = (v1 & 0xFFFF8000) << 16;
	if ((v2 & 0x7C00) != 0)
	{
		LODWORD(result) = v3 | ((v2 + 114688) << 13);
	}
	else if ((v2 & 0x3FF) != 0)
	{
		v5 = (v2 & 0x3FF) << 13;
		for (i = 113; v5 <= 0x7FFFFF; --i)
			v5 *= 2;
		LODWORD(result) = v3 | (i << 23) | v5 & 0x7FFFFF;
	}
	else
	{
		LODWORD(result) = v3 | v2;
	}
	return result;
}

