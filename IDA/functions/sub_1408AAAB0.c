//----- (00000001408AAAB0) ----------------------------------------------------
__int64 __fastcall sub_1408AAAB0(__int64 a1, float* a2, unsigned int a3)
{
	unsigned __int64 v3; // r10
	__int64 result; // rax
	float* v5; // r9
	float v6; // xmm0_4
	float v7; // xmm1_4
	float v8; // xmm2_4
	float v9; // xmm0_4
	float v10; // xmm3_4
	float v11; // xmm1_4
	float v12; // xmm0_4
	float v13; // xmm1_4
	float v14; // xmm0_4
	float v15; // xmm1_4
	float v16; // xmm0_4
	float v17; // xmm2_4
	float v18; // xmm1_4
	float v19; // xmm0_4
	float v20; // xmm5_4
	float v21; // xmm4_4
	float v22; // xmm1_4
	float v23; // xmm3_4
	float v24; // xmm2_4
	float v25; // xmm1_4
	float v26; // xmm0_4
	float v27; // xmm3_4
	float v28; // xmm2_4
	float v29; // xmm1_4
	float v30; // xmm0_4
	float v31; // xmm3_4
	float v32; // xmm2_4
	float v33; // xmm3_4
	float v34; // xmm0_4
	float v35; // xmm1_4
	float v36; // xmm1_4
	float v37; // xmm3_4

	v3 = (unsigned __int64)&a2[a3];
	result = a3;
	v5 = a2;
	v6 = (float)(int)a3;
	if (*(_DWORD*)(a1 + 16) == 1)
	{
		v7 = *(float*)(a1 + 4);
		v8 = (float)(*(float*)a1 - v7) / v6;
		if ((unsigned __int64)a2 < v3)
		{
			result = (4i64 * a3 + 3) / 4;
			if (result >= 4)
			{
				result = v3 - 12;
				do
				{
					v9 = *v5;
					if (*v5 <= v7)
						v9 = v7;
					v10 = v5[1];
					v11 = v7 + v8;
					*v5 = v9;
					if (v10 <= v11)
						v10 = v11;
					v12 = v5[2];
					v13 = v11 + v8;
					v5[1] = v10;
					if (v12 <= v13)
						v12 = v13;
					v5[2] = v12;
					v14 = v5[3];
					v15 = v13 + v8;
					if (v14 <= v15)
						v14 = v15;
					v5[3] = v14;
					v5 += 4;
					v7 = v15 + v8;
				} while ((__int64)v5 < result);
			}
			for (; (unsigned __int64)v5 < v3; v7 = v7 + v8)
			{
				v16 = *v5;
				if (*v5 <= v7)
					v16 = v7;
				*v5++ = v16;
			}
		}
	}
	else
	{
		v17 = *(float*)(a1 + 4);
		v18 = 1.0 / v6;
		v19 = *(float*)(a1 + 12);
		v20 = (float)(*(float*)a1 - v17) * v18;
		v21 = (float)(*(float*)(a1 + 8) - v19) * v18;
		if ((unsigned __int64)a2 < v3)
		{
			result = (4i64 * a3 + 3) / 4;
			if (result >= 4)
			{
				result = v3 - 12;
				do
				{
					v22 = *v5;
					if (*v5 <= v17)
						v23 = v17;
					else
						v23 = *v5;
					v24 = v17 + v20;
					if (v22 <= 0.0)
						v23 = v23 - (float)(v22 * v19);
					v25 = v5[1];
					*v5 = v23;
					v26 = v19 + v21;
					if (v25 <= v24)
						v27 = v24;
					else
						v27 = v25;
					v28 = v24 + v20;
					if (v25 <= 0.0)
						v27 = v27 - (float)(v25 * v26);
					v29 = v5[2];
					v5[1] = v27;
					v30 = v26 + v21;
					if (v29 <= v28)
						v31 = v28;
					else
						v31 = v29;
					v32 = v28 + v20;
					if (v29 <= 0.0)
						v31 = v31 - (float)(v29 * v30);
					v5[2] = v31;
					v33 = v5[3];
					v34 = v30 + v21;
					if (v33 <= v32)
						v35 = v32;
					else
						v35 = v5[3];
					v17 = v32 + v20;
					if (v33 <= 0.0)
						v35 = v35 - (float)(v33 * v34);
					v5[3] = v35;
					v5 += 4;
					v19 = v34 + v21;
				} while ((__int64)v5 < result);
			}
			for (; (unsigned __int64)v5 < v3; v19 = v19 + v21)
			{
				v36 = *v5;
				if (*v5 <= v17)
					v37 = v17;
				else
					v37 = *v5;
				v17 = v17 + v20;
				if (v36 <= 0.0)
					v37 = v37 - (float)(v36 * v19);
				*v5++ = v37;
			}
		}
	}
	return result;
}

