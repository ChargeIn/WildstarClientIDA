//----- (0000000140891010) ----------------------------------------------------
__int64 __fastcall sub_140891010(__int64 a1, __int64 a2)
{
	double v3; // xmm3_8
	double v4; // xmm0_8
	double v5; // xmm1_8
	int v6; // ecx
	double v7; // xmm3_8
	double v8; // xmm1_8
	double v9; // xmm1_8
	__int64 result; // rax

	if (a2)
	{
		*(_BYTE*)(a1 + 208) |= 1u;
		v3 = 4.0 / (double)*(unsigned __int8*)(a2 + 21) * (60.0 / *(float*)(a2 + 16)) * (double)dword_140C110B4;
		v4 = 0.5;
		if (v3 <= 0.0)
			v5 = -0.5;
		else
			v5 = 0.5;
		v6 = (int)(v5 + v3);
		*(_DWORD*)(a1 + 192) = v6;
		*(_DWORD*)(a1 + 196) = v6 * *(unsigned __int8*)(a2 + 20);
		v7 = (double)dword_140C110B4 * *(double*)a2 * 0.001;
		if (v7 <= 0.0)
			v8 = -0.5;
		else
			v8 = 0.5;
		*(_DWORD*)(a1 + 200) = (int)(v8 + v7);
		v9 = (double)dword_140C110B4 * *(double*)(a2 + 8) * 0.001;
		if (v9 <= 0.0)
			v4 = -0.5;
		result = (unsigned int)(int)(v4 + v9);
		*(_DWORD*)(a1 + 204) = result;
	}
	else
	{
		*(_BYTE*)(a1 + 208) &= ~1u;
	}
	return result;
}
// 140C110B4: using guessed type int dword_140C110B4;

