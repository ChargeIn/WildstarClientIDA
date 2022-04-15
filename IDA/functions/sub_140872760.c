//----- (0000000140872760) ----------------------------------------------------
__int64 __fastcall sub_140872760(__int64 a1, float a2)
{
	int v2; // xmm0_4
	float v3; // xmm6_4
	double v5; // xmm0_8
	int v6; // edi
	double v7; // xmm0_8
	__int64 result; // rax

	v2 = -988413952;
	v3 = a2;
	if (a2 <= -2400.0 || (v2 = 1159069696, a2 >= 2400.0))
		v3 = *(float*)&v2;
	if (*(_BYTE*)(a1 + 71))
	{
		v5 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v3 * 0.00083333335);
		*(float*)(a1 + 64) = v3;
		*(_DWORD*)(a1 + 44) = 1024;
		*(_BYTE*)(a1 + 71) = 0;
		*(float*)&v5 = (float)((float)(*(float*)&v5 * *(float*)(a1 + 60)) * 65536.0) + 0.5;
		*(_DWORD*)(a1 + 36) = (int)*(float*)&v5;
		*(_DWORD*)(a1 + 40) = (int)*(float*)&v5;
	}
	v6 = 0;
	if (v3 != *(float*)(a1 + 64))
	{
		if (*(_DWORD*)(a1 + 56) == 2)
			*(_DWORD*)(a1 + 36) += *(_DWORD*)(a1 + 44) * (*(_DWORD*)(a1 + 40) - *(_DWORD*)(a1 + 36)) / 1024;
		*(_DWORD*)(a1 + 44) = 0;
		v7 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), v3 * 0.00083333335);
		*(float*)(a1 + 64) = v3;
		*(_DWORD*)(a1 + 40) = (int)(float)((float)((float)(*(float*)&v7 * *(float*)(a1 + 60)) * 65536.0) + 0.5);
	}
	result = *(unsigned int*)(a1 + 36);
	if ((_DWORD)result == *(_DWORD*)(a1 + 40))
	{
		LOBYTE(v6) = (_DWORD)result != 0x10000;
		*(_DWORD*)(a1 + 56) = v6;
	}
	else
	{
		*(_DWORD*)(a1 + 56) = 2;
	}
	return result;
}

