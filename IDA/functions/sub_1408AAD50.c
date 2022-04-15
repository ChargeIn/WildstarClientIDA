//----- (00000001408AAD50) ----------------------------------------------------
__int64 __fastcall sub_1408AAD50(float* a1, float* a2, unsigned int a3)
{
	float v3; // xmm5_4
	float v4; // xmm4_4
	float v5; // xmm3_4
	__int64 result; // rax
	float* v7; // r9
	unsigned __int64 v8; // r8
	float v9; // xmm0_4
	float v10; // xmm1_4
	float v11; // xmm2_4
	float v12; // xmm2_4
	float v13; // xmm3_4
	float v14; // xmm0_4
	float v15; // xmm3_4
	float v16; // xmm2_4
	float v17; // xmm0_4
	float v18; // xmm1_4
	float v19; // xmm1_4

	v3 = a1[2];
	v4 = *a1;
	v5 = a1[1];
	result = a3;
	v7 = a2;
	v8 = (unsigned __int64)&a2[a3];
	if ((unsigned __int64)a2 < v8)
	{
		result = (__int64)(v8 - (_QWORD)a2 + 3) / 4;
		if (result >= 4)
		{
			result = v8 - 12;
			do
			{
				v9 = *v7;
				v10 = v7[1];
				v7 += 4;
				v11 = v9 - v4;
				v4 = *(v7 - 1);
				v12 = v11 + (float)(v5 * v3);
				*(v7 - 4) = v12;
				v13 = v10 - v9;
				v14 = *(v7 - 2);
				v15 = v13 + (float)(v12 * v3);
				*(v7 - 3) = v15;
				v16 = (float)(v14 - v10) + (float)(v15 * v3);
				*(v7 - 2) = v16;
				v5 = (float)(v4 - v14) + (float)(v16 * v3);
				*(v7 - 1) = v5;
			} while ((__int64)v7 < result);
		}
		for (; (unsigned __int64)v7 < v8; v5 = v19)
		{
			v17 = *v7++;
			v18 = v17 - v4;
			v4 = v17;
			v19 = v18 + (float)(v5 * v3);
			*(v7 - 1) = v19;
		}
	}
	*a1 = v4;
	a1[1] = v5;
	return result;
}

