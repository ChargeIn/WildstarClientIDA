//----- (00000001408CA650) ----------------------------------------------------
__int64 __fastcall sub_1408CA650(int* a1, float* a2, unsigned int a3)
{
	int v3; // r11d
	int v4; // edi
	float* v5; // rsi
	__int64 result; // rax
	unsigned int v8; // r9d
	float* v9; // r10
	unsigned int v10; // eax
	float v11; // xmm2_4
	float v12; // xmm1_4
	float v13; // xmm0_4
	float v14; // xmm1_4
	unsigned int v15; // ecx
	float v16; // xmm3_4
	float v17; // xmm0_4
	float v18; // xmm1_4
	float v19; // xmm2_4
	float v20; // xmm1_4
	float v21; // xmm0_4
	float v22; // xmm2_4
	float v23; // xmm1_4
	float v24; // xmm2_4
	float v25; // xmm0_4
	float v26; // xmm1_4
	float v27; // xmm2_4
	float v28; // xmm1_4
	float v29; // xmm0_4
	float v30; // xmm2_4
	float v31; // xmm2_4
	float v32; // xmm2_4
	__int64 v33; // rcx
	float v34; // xmm1_4
	float v35; // xmm0_4
	float v36; // xmm1_4

	v3 = a1[4];
	v4 = *a1;
	v5 = (float*)*((_QWORD*)a1 + 1);
	result = (unsigned int)(2 * v3);
	v8 = *a1 - v3;
	v9 = &v5[result];
	if (v8 <= a3)
	{
		do
		{
			v15 = 0;
			if (a3 < v8)
				v8 = a3;
			if ((int)v8 >= 4)
			{
				v16 = *((float*)a1 + 5);
				result = ((v8 - 4) >> 2) + 1;
				v15 = 4 * result;
				do
				{
					v17 = *v9;
					v18 = *a2;
					v19 = a2[1];
					v9 += 8;
					a2 += 4;
					*(v9 - 8) = v18;
					v20 = (float)((float)(v18 - *(v9 - 7)) * v16) + v17;
					*(v9 - 7) = v20;
					v21 = *(v9 - 6);
					*(v9 - 6) = v19;
					v22 = v19 - *(v9 - 5);
					*(a2 - 4) = v20;
					v23 = *(a2 - 2);
					v24 = (float)(v22 * v16) + v21;
					*(v9 - 5) = v24;
					v25 = *(v9 - 4);
					*(v9 - 4) = v23;
					v26 = v23 - *(v9 - 3);
					*(a2 - 3) = v24;
					v27 = *(a2 - 1);
					v28 = (float)(v26 * v16) + v25;
					*(v9 - 3) = v28;
					v29 = *(v9 - 2);
					*(v9 - 2) = v27;
					v30 = v27 - *(v9 - 1);
					*(a2 - 2) = v28;
					v31 = (float)(v30 * v16) + v29;
					*(v9 - 1) = v31;
					*(a2 - 1) = v31;
					--result;
				} while (result);
			}
			if (v15 < v8)
			{
				v32 = *((float*)a1 + 5);
				result = v8 - v15;
				v33 = result;
				do
				{
					v34 = *a2;
					v35 = *v9;
					v9 += 2;
					++a2;
					*(v9 - 2) = v34;
					v36 = (float)((float)(v34 - *(v9 - 1)) * v32) + v35;
					*(v9 - 1) = v36;
					*(a2 - 1) = v36;
					--v33;
				} while (v33);
			}
			v3 += v8;
			a1[4] = v3;
			if (v3 == v4)
			{
				v9 = v5;
				v3 = 0;
				a1[4] = 0;
			}
			a3 -= v8;
			v8 = v4 - v3;
		} while (a3);
	}
	else
	{
		v10 = a3;
		if (a3)
		{
			v11 = *((float*)a1 + 5);
			do
			{
				v12 = *a2;
				v13 = *v9;
				v9 += 2;
				++a2;
				*(v9 - 2) = v12;
				v14 = (float)((float)(v12 - *(v9 - 1)) * v11) + v13;
				*(v9 - 1) = v14;
				*(a2 - 1) = v14;
				--v10;
			} while (v10);
		}
		result = v3 + a3;
		a1[4] = result;
	}
	return result;
}

