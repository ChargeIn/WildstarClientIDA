//----- (00000001408A5AA0) ----------------------------------------------------
__int64 __fastcall sub_1408A5AA0(float* a1, unsigned __int64 a2, unsigned int a3)
{
	__int64 result; // rax
	unsigned __int64 v4; // r9
	unsigned __int64 v5; // r8
	float v6; // xmm4_4
	float v7; // xmm5_4
	float v8; // xmm2_4
	float v9; // xmm1_4
	float v10; // xmm3_4
	float v11; // xmm2_4
	float v12; // xmm1_4
	float v13; // xmm3_4
	float v14; // xmm1_4
	float v15; // xmm2_4
	float v16; // xmm3_4
	float v17; // xmm1_4

	result = a3;
	v4 = a2;
	v5 = a2 + 4i64 * a3;
	if (a2 < v5)
	{
		result = (__int64)(v5 - a2 + 3) / 4;
		if (result >= 4)
		{
			v6 = a1[1];
			v7 = a1[2];
			result = v5 - 12;
			do
			{
				v4 += 16i64;
				v8 = v6 * *(float*)(v4 - 12);
				v9 = (float)(v6 * *(float*)(v4 - 16)) - (float)(v7 * *a1);
				*(float*)(v4 - 16) = v9;
				v10 = v6 * *(float*)(v4 - 8);
				v11 = v8 - (float)(v7 * v9);
				*(float*)(v4 - 12) = v11;
				v12 = v6 * *(float*)(v4 - 4);
				v13 = v10 - (float)(v7 * v11);
				*(float*)(v4 - 8) = v13;
				v14 = v12 - (float)(v7 * v13);
				*(float*)(v4 - 4) = v14;
				*a1 = v14;
			} while ((__int64)v4 < result);
		}
		if (v4 < v5)
		{
			v15 = a1[1];
			v16 = a1[2];
			do
			{
				v4 += 4i64;
				v17 = (float)(v15 * *(float*)(v4 - 4)) - (float)(v16 * *a1);
				*(float*)(v4 - 4) = v17;
				*a1 = v17;
			} while (v4 < v5);
		}
	}
	return result;
}

