//----- (00000001408F10C0) ----------------------------------------------------
__int64 __fastcall sub_1408F10C0(__int64* a1, __int64 a2, float a3, float* a4, float a5, float* a6, unsigned int a7)
{
	__int64 result; // rax
	float v10; // xmm4_4
	__int64 v11; // r11
	int v12; // edi
	__int64 v13; // r15
	float v14; // xmm3_4
	__int64 v15; // r10
	__int64 v16; // rbx
	__int64 v17; // rsi
	unsigned __int64 v18; // rcx
	__int64 v19; // r8
	unsigned __int64 v20; // r9
	float v21; // xmm1_4
	float v22; // xmm1_4
	__int64 v23; // r8
	float v24; // xmm2_4
	float v25; // xmm5_4
	float v26; // xmm6_4
	float v27; // xmm1_4
	float v28; // xmm1_4
	float v29; // xmm0_4
	float v30; // xmm1_4
	float v31; // xmm0_4
	float v32; // xmm2_4
	float v33; // xmm0_4
	float v34; // xmm1_4
	float v35; // xmm0_4
	float v36; // xmm0_4

	result = a7;
	if (a7)
	{
		v10 = *a4;
		v11 = *a1;
		v12 = *((unsigned __int16*)a1 + 8);
		v13 = *((unsigned __int16*)a1 + 9);
		v14 = *a6;
		v15 = 0i64;
		v16 = a7;
		v17 = 4i64 * *((unsigned __int16*)a1 + 8);
		do
		{
			v18 = a2 + 4 * v15;
			v19 = v11;
			v20 = v18 + 4 * v13;
			if (a3 == v10 && a5 == v14)
			{
				if (v18 < v20)
				{
					result = (4 * v13 + 3) / 4;
					if (result >= 4)
					{
						result = v20 - 12;
						do
						{
							v18 += 16i64;
							v19 += 16i64;
							v21 = (float)((float)(v10 * *(float*)(v19 - 12)) + *(float*)(v18 - 12)) * v14;
							*(float*)(v19 - 16) = (float)((float)(v10 * *(float*)(v19 - 16)) + *(float*)(v18 - 16)) * v14;
							*(float*)(v19 - 12) = v21;
							v22 = (float)(v10 * *(float*)(v19 - 4)) + *(float*)(v18 - 4);
							*(float*)(v19 - 8) = (float)((float)(v10 * *(float*)(v19 - 8)) + *(float*)(v18 - 8)) * v14;
							*(float*)(v19 - 4) = v22 * v14;
						} while ((__int64)v18 < result);
					}
					if (v18 < v20)
					{
						v23 = v19 - v18;
						do
						{
							v18 += 4i64;
							*(float*)(v23 + v18 - 4) = (float)((float)(v10 * *(float*)(v23 + v18 - 4)) + *(float*)(v18 - 4)) * v14;
						} while (v18 < v20);
					}
				}
			}
			else
			{
				v24 = v10;
				v25 = (float)(a3 - v10) * (float)(1.0 / (float)v12);
				v26 = (float)(a5 - v14) * (float)(1.0 / (float)v12);
				v27 = v14;
				if (v18 < v20)
				{
					result = (4 * v13 + 3) / 4;
					if (result >= 4)
					{
						result = v20 - 12;
						do
						{
							v28 = v27 + v26;
							v18 += 16i64;
							v19 += 16i64;
							v29 = (float)((float)((float)(v24 + v25) * *(float*)(v19 - 16)) + *(float*)(v18 - 16)) * v28;
							v30 = v28 + v26;
							*(float*)(v19 - 16) = v29;
							v31 = (float)(v24 + v25) + v25;
							v32 = v31 + v25;
							v33 = (float)((float)(v31 * *(float*)(v19 - 12)) + *(float*)(v18 - 12)) * v30;
							v34 = v30 + v26;
							*(float*)(v19 - 12) = v33;
							v35 = v32;
							v24 = v32 + v25;
							v36 = (float)((float)(v35 * *(float*)(v19 - 8)) + *(float*)(v18 - 8)) * v34;
							v27 = v34 + v26;
							*(float*)(v19 - 8) = v36;
							*(float*)(v19 - 4) = (float)((float)(v24 * *(float*)(v19 - 4)) + *(float*)(v18 - 4)) * v27;
						} while ((__int64)v18 < result);
					}
					for (; v18 < v20; *(float*)(v19 - 4) = (float)((float)(v24 * *(float*)(v19 - 4)) + *(float*)(v18 - 4))
						* v27)
					{
						v24 = v24 + v25;
						v27 = v27 + v26;
						v18 += 4i64;
						v19 += 4i64;
					}
				}
			}
			v15 = (unsigned int)(v12 + v15);
			v11 += v17;
			--v16;
		} while (v16);
		*a4 = a3;
		*a6 = a5;
	}
	else
	{
		result = (__int64)a6;
		*a4 = a3;
		*a6 = a5;
	}
	return result;
}

