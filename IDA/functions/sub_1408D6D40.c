//----- (00000001408D6D40) ----------------------------------------------------
void __fastcall sub_1408D6D40(float* a1, float* a2, __int64 a3, int a4)
{
	float v5; // xmm0_4
	int v6; // edx
	float v7; // xmm2_4
	float v8; // xmm0_4
	float v9; // xmm0_4
	float v10; // xmm1_4
	float v11; // xmm0_4
	float v12; // xmm2_4
	float v13; // xmm0_4
	float v14; // xmm0_4

	for (; a4; *(float*)(a3 - 4) = v14)
	{
		v5 = *a2;
		--a4;
		v6 = 0;
		a1[13] = *a2;
		v7 = a1[14];
		++a2;
		if (fabs(a1[3]) > fabs(v5))
		{
			v7 = a1[5];
			v6 = 1;
		}
		v8 = a1[15];
		if (v6 < 1)
			v8 = a1[6];
		v9 = v8 + -1.0;
		if (v9 >= 0.0)
		{
			if (v9 > 0.0)
				v7 = a1[14];
		}
		else
		{
			v9 = 0.0;
		}
		a1[15] = v9;
		v10 = a1[16];
		v11 = a1[7];
		v12 = v7 - v10;
		if (v12 > 0.0)
			v11 = a1[8];
		a3 += 4i64;
		v13 = (float)(v11 * v12) + v10;
		a1[16] = v13;
		a1[10] = v13;
		v14 = v13 * a1[13];
		a1[18] = v14;
	}
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;

