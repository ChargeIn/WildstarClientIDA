//----- (00000001408CA850) ----------------------------------------------------
__int64 __fastcall sub_1408CA850(int* a1, float* a2, __int64 a3, unsigned int a4)
{
	int v4; // ebx
	int v5; // esi
	float* v6; // r14
	__int64 result; // rax
	unsigned int v9; // r10d
	float* v10; // r11
	unsigned int v11; // eax
	float v12; // xmm2_4
	float v13; // xmm0_4
	float v14; // xmm1_4
	float v15; // xmm1_4
	unsigned int v16; // ecx
	float v17; // xmm3_4
	float v18; // xmm0_4
	float v19; // xmm1_4
	float v20; // xmm2_4
	float v21; // xmm1_4
	float v22; // xmm0_4
	float v23; // xmm2_4
	float v24; // xmm1_4
	float v25; // xmm2_4
	float v26; // xmm0_4
	float v27; // xmm1_4
	float v28; // xmm2_4
	float v29; // xmm1_4
	float v30; // xmm0_4
	float v31; // xmm2_4
	float v32; // xmm2_4
	float v33; // xmm2_4
	__int64 v34; // rcx
	float v35; // xmm0_4
	float v36; // xmm1_4
	float v37; // xmm1_4

	v4 = a1[4];
	v5 = *a1;
	v6 = (float*)*((_QWORD*)a1 + 1);
	result = (unsigned int)(2 * v4);
	v9 = *a1 - v4;
	v10 = &v6[result];
	if (v9 <= a4)
	{
		for (; a4; v9 = v5 - v4)
		{
			v16 = 0;
			if (a4 < v9)
				v9 = a4;
			if ((int)v9 >= 4)
			{
				v17 = *((float*)a1 + 5);
				result = ((v9 - 4) >> 2) + 1;
				v16 = 4 * result;
				do
				{
					v18 = *v10;
					v19 = *a2;
					v20 = a2[1];
					v10 += 8;
					a3 += 16i64;
					a2 += 4;
					*(v10 - 8) = v19;
					v21 = (float)((float)(v19 - *(v10 - 7)) * v17) + v18;
					*(v10 - 7) = v21;
					v22 = *(v10 - 6);
					*(v10 - 6) = v20;
					v23 = v20 - *(v10 - 5);
					*(float*)(a3 - 16) = v21;
					v24 = *(a2 - 2);
					v25 = (float)(v23 * v17) + v22;
					*(v10 - 5) = v25;
					v26 = *(v10 - 4);
					*(v10 - 4) = v24;
					v27 = v24 - *(v10 - 3);
					*(float*)(a3 - 12) = v25;
					v28 = *(a2 - 1);
					v29 = (float)(v27 * v17) + v26;
					*(v10 - 3) = v29;
					v30 = *(v10 - 2);
					*(v10 - 2) = v28;
					v31 = v28 - *(v10 - 1);
					*(float*)(a3 - 8) = v29;
					v32 = (float)(v31 * v17) + v30;
					*(v10 - 1) = v32;
					*(float*)(a3 - 4) = v32;
					--result;
				} while (result);
			}
			if (v16 < v9)
			{
				v33 = *((float*)a1 + 5);
				result = v9 - v16;
				v34 = result;
				do
				{
					v35 = *v10;
					v36 = *a2;
					v10 += 2;
					a3 += 4i64;
					++a2;
					*(v10 - 2) = v36;
					v37 = (float)((float)(v36 - *(v10 - 1)) * v33) + v35;
					*(v10 - 1) = v37;
					*(float*)(a3 - 4) = v37;
					--v34;
				} while (v34);
			}
			v4 += v9;
			a1[4] = v4;
			if (v4 == v5)
			{
				v10 = v6;
				v4 = 0;
				a1[4] = 0;
			}
			a4 -= v9;
		}
	}
	else
	{
		v11 = a4;
		if (a4)
		{
			v12 = *((float*)a1 + 5);
			do
			{
				v13 = *v10;
				v14 = *a2;
				v10 += 2;
				a3 += 4i64;
				++a2;
				*(v10 - 2) = v14;
				v15 = (float)((float)(v14 - *(v10 - 1)) * v12) + v13;
				*(v10 - 1) = v15;
				*(float*)(a3 - 4) = v15;
				--v11;
			} while (v11);
		}
		result = v4 + a4;
		a1[4] = result;
	}
	return result;
}

