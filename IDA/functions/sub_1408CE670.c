//----- (00000001408CE670) ----------------------------------------------------
__int64 __fastcall sub_1408CE670(__int64 a1, int* a2)
{
	int v5; // xmm0_4
	float v6; // xmm2_4
	float v7; // xmm1_4
	float v8; // xmm0_4

	if (!*a2)
		return 17i64;
	sub_1408CED00(*(_DWORD**)(a1 + 8), (_DWORD*)(a1 + 24));
	v5 = 1153957888;
	v6 = *(float*)(a1 + 64) + *(float*)(a1 + 28);
	if (v6 >= 1600.0 || (v5 = 1103626240, v6 <= 25.0))
		v6 = *(float*)&v5;
	v7 = *(float*)(a1 + 832);
	v8 = (float)((float)((float)*a2 * 100.0) / v6) + v7;
	*(float*)(a1 + 832) = v8;
	*a2 = (int)(float)(v8 - v7);
	return 45i64;
}

