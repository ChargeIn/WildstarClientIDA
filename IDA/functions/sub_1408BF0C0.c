//----- (00000001408BF0C0) ----------------------------------------------------
__int64 __fastcall sub_1408BF0C0(__int64 a1, float* a2, __int64 a3, unsigned int a4)
{
	float v4; // xmm7_4
	float v5; // xmm8_4
	__int64 result; // rax
	float v9; // xmm9_4
	float v10; // xmm10_4
	float v11; // xmm11_4
	unsigned int v12; // r9d
	float* v13; // r10
	__int64 v14; // rsi
	__int64 v15; // rdi
	float v16; // xmm5_4
	float v17; // xmm3_4
	float v18; // xmm4_4
	float v19; // xmm6_4
	float* v20; // r8
	__int64 v21; // rax
	float* v22; // rcx
	float v23; // xmm2_4
	float v24; // xmm1_4
	float v25; // xmm3_4
	float v26; // xmm6_4
	float v27; // xmm3_4
	float v28; // xmm4_4
	float v29; // xmm5_4
	float v30; // xmm2_4
	float v31; // xmm5_4
	float v32; // xmm1_4
	float v33; // xmm1_4
	float v34; // xmm2_4
	float v35; // xmm2_4
	float v36; // xmm2_4
	float v37; // xmm2_4

	v4 = *a2;
	v5 = a2[1];
	result = a4;
	v9 = a2[2];
	v10 = a2[3];
	v11 = a2[4];
	if (a4)
	{
		v12 = 0;
		v13 = (float*)(a3 + 8);
		v14 = (unsigned int)result;
		v15 = 0i64;
		do
		{
			v16 = *(v13 - 2);
			v17 = *(v13 - 1);
			v18 = *v13;
			v19 = v13[1];
			v20 = (float*)(*(_QWORD*)a1 + 4 * v15 * *(unsigned __int16*)(a1 + 16));
			v21 = *(unsigned __int16*)(a1 + 18);
			v22 = &v20[v21];
			if (v20 < v22)
			{
				if ((4 * v21 + 3) / 4 >= 4)
				{
					do
					{
						v23 = *v20;
						v24 = v18;
						v20 += 4;
						v25 = (float)((float)((float)(v17 * v9) + (float)(v23 * v4)) + (float)(v16 * v5)) + (float)(v19 * v11);
						v26 = v23;
						v27 = v25 + (float)(v18 * v10);
						v28 = *(v20 - 3);
						*(v20 - 4) = v27;
						v29 = (float)((float)(v16 * v9) + (float)(v28 * v4)) + (float)(v23 * v5);
						v30 = v27 * v11;
						v31 = (float)(v29 + (float)(v24 * v11)) + (float)(v27 * v10);
						v17 = *(v20 - 2);
						*(v20 - 3) = v31;
						v32 = v31 * v11;
						v19 = (float)((float)((float)((float)(v26 * v9) + (float)(v17 * v4)) + (float)(v28 * v5)) + v30)
							+ (float)(v31 * v10);
						v16 = *(v20 - 1);
						*(v20 - 2) = v19;
						v18 = (float)((float)((float)((float)(v28 * v9) + (float)(v16 * v4)) + (float)(v17 * v5)) + v32)
							+ (float)(v19 * v10);
						*(v20 - 1) = v18;
					} while ((__int64)v20 < (__int64)(v22 - 3));
				}
				for (; v20 < v22; v18 = v37)
				{
					v33 = *v20++;
					v34 = (float)(v17 * v9) + (float)(v33 * v4);
					v17 = v16;
					v35 = v34 + (float)(v16 * v5);
					v16 = v33;
					v36 = v35 + (float)(v19 * v11);
					v19 = v18;
					v37 = v36 + (float)(v18 * v10);
					*(v20 - 1) = v37;
				}
			}
			++v15;
			v13 += 4;
			*(float*)(a3 + 4i64 * v12) = v16;
			*(float*)(a3 + 4i64 * (v12 + 1)) = v17;
			*(float*)(a3 + 4i64 * (v12 + 2)) = v18;
			result = v12 + 3;
			v12 += 4;
			*(float*)(a3 + 4 * result) = v19;
			--v14;
		} while (v14);
	}
	return result;
}

