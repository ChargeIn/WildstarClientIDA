//----- (00000001402887A0) ----------------------------------------------------
__int64 __fastcall sub_1402887A0(__int64 a1, int a2, float a3, float a4)
{
	double v6; // xmm0_8
	float v7; // xmm8_4
	int v9; // eax

	v6 = sub_1408FE170(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT((float)*(int*)(a1 + 68) * a4)));
	v7 = fmaxf((float)(*(float*)&v6 * 1.442695) + a3, (float)a2);
	if (v7 < 1.0)
		return 0i64;
	v9 = *(_DWORD*)(a1 + 76);
	if (v7 < (float)v9)
		return (unsigned int)(int)v7;
	else
		return (unsigned int)(v9 - 1);
}

