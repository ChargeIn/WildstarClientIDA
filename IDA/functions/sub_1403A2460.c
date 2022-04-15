//----- (00000001403A2460) ----------------------------------------------------
bool __fastcall sub_1403A2460(int a1, float a2, float* a3, int a4)
{
	int v4; // r10d
	int v5; // eax
	float v6; // xmm0_4
	int v7; // eax
	float v8; // xmm2_4
	int v9; // edx
	int v10; // eax
	float v11; // xmm2_4

	v4 = *(_DWORD*)qword_140C63750;
	v5 = dword_140C44B20;
	if (*(_DWORD*)qword_140C63750 < dword_140C44B20)
		v5 = *(_DWORD*)qword_140C63750;
	v6 = dword_140C44B30[v5];
	v7 = dword_140C44B80;
	if (v4 < dword_140C44B80)
		v7 = *(_DWORD*)qword_140C63750;
	v8 = dword_140C44B90[v7];
	if (a4)
	{
		v9 = dword_140C44C10;
		v10 = dword_140C44C10;
		if (v4 < dword_140C44C10)
			v10 = *(_DWORD*)qword_140C63750;
		if (v4 < dword_140C44C10)
			v9 = *(_DWORD*)qword_140C63750;
		v8 = v8 * dword_140C44C20[v9];
		v6 = v6 * dword_140C44C20[v10];
	}
	if (a1)
	{
		if (v6 == 0.0)
			*a3 = 1.0;
		else
			*a3 = (float)(a2 / v6) + *a3;
	}
	else if (v8 == 0.0)
	{
		*a3 = 0.0;
	}
	else
	{
		*a3 = *a3 - (float)(a2 / v8);
	}
	v11 = fmaxf(0.0, fminf(*a3, 1.0));
	*a3 = v11;
	return v11 > 0.0;
}
// 140C44B20: using guessed type int dword_140C44B20;
// 140C44B30: using guessed type float dword_140C44B30[14];
// 140C44B80: using guessed type int dword_140C44B80;
// 140C44B90: using guessed type float dword_140C44B90[16];
// 140C44C10: using guessed type int dword_140C44C10;
// 140C44C20: using guessed type float dword_140C44C20[16];
// 140C63750: using guessed type __int64 qword_140C63750;

