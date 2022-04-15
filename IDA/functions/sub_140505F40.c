//----- (0000000140505F40) ----------------------------------------------------
__int64 __fastcall sub_140505F40(__int64 a1, float a2)
{
	__int64 v2; // rax
	int v3; // r8d
	float v4; // xmm2_4
	__int64 result; // rax
	float v6; // xmm1_4

	v2 = *(_QWORD*)(a1 + 1080);
	v3 = 0;
	if (*(_QWORD*)(a1 + 1096) != v2)
	{
		v3 = 1;
		v4 = a2 + *(float*)(a1 + 1072);
		*(float*)(a1 + 1072) = v4;
		if (v4 <= 0.5)
			*(_QWORD*)(a1 + 1096) = *(_QWORD*)(a1 + 1104)
			+ (unsigned int)(int)(float)((float)(int)(v2 - *(_QWORD*)(a1 + 1104)) * (float)(v4 * 2.0));
		else
			*(_QWORD*)(a1 + 1096) = v2;
		*(_BYTE*)(a1 + 1076) = 0;
	}
	result = *(_QWORD*)(a1 + 1312);
	if (*(_QWORD*)(a1 + 1328) == result)
	{
		if (!v3)
			return result;
	}
	else
	{
		if (!v3)
			*(float*)(a1 + 1072) = a2 + *(float*)(a1 + 1072);
		v6 = *(float*)(a1 + 1072);
		if (v6 <= 0.5)
			result = *(_QWORD*)(a1 + 1336)
			+ (unsigned int)(int)(float)((float)(int)(result - *(_QWORD*)(a1 + 1336)) * (float)(v6 * 2.0));
		*(_QWORD*)(a1 + 1328) = result;
		*(_BYTE*)(a1 + 1076) = 0;
	}
	if (*(float*)(a1 + 1072) > 0.5)
		*(_DWORD*)(a1 + 1072) = 0;
	return result;
}

