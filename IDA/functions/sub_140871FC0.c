//----- (0000000140871FC0) ----------------------------------------------------
__int64 __fastcall sub_140871FC0(__int64 a1, float* a2, unsigned int a3, unsigned int a4)
{
	__int64 result; // rax
	__int64 v5; // r8
	__int64 v6; // r9
	__int64 v7; // r8
	unsigned __int64 v8; // r11
	float* v9; // r10
	float v10; // xmm8_4
	float v11; // xmm7_4
	float v12; // xmm6_4
	float v13; // xmm5_4
	float v14; // xmm9_4
	float v15; // xmm10_4
	float v16; // xmm11_4
	float v17; // xmm13_4
	float v18; // xmm12_4
	float v19; // xmm1_4
	float v20; // xmm2_4
	float v21; // xmm0_4
	float v22; // xmm3_4
	float v23; // xmm3_4
	float v24; // xmm4_4
	float v25; // xmm3_4
	float v26; // xmm4_4
	float v27; // xmm3_4
	float v28; // xmm4_4
	float v29; // xmm9_4
	float v30; // xmm10_4
	float v31; // xmm11_4
	float v32; // xmm1_4
	float v33; // xmm0_4
	float v34; // xmm2_4
	float v35; // xmm2_4
	float v36; // xmm2_4

	result = a3;
	v5 = a4;
	v6 = *(_QWORD*)(a1 + 160);
	v7 = 2 * v5;
	v8 = (unsigned __int64)&a2[result];
	v9 = a2;
	v10 = *(float*)(v6 + 8 * v7);
	v11 = *(float*)(v6 + 8 * v7 + 4);
	v12 = *(float*)(v6 + 8 * v7 + 8);
	v13 = *(float*)(v6 + 8 * v7 + 12);
	if ((unsigned __int64)a2 < v8)
	{
		result = (4 * result + 3) / 4;
		if (result >= 4)
		{
			v14 = *(float*)(a1 + 136);
			v15 = *(float*)(a1 + 128);
			v16 = *(float*)(a1 + 132);
			result = v8 - 12;
			v17 = *(float*)(a1 + 140);
			v18 = *(float*)(a1 + 144);
			do
			{
				v19 = *v9;
				v20 = v9[1];
				v21 = v16 * v10;
				v22 = *v9;
				v9 += 4;
				v23 = (float)(v22 * v15) + (float)(v11 * v14);
				v11 = *(v9 - 2);
				v24 = (float)(v20 * v15) + (float)(v10 * v14);
				v10 = *(v9 - 1);
				v25 = (float)((float)(v23 + v21) + (float)(v13 * v18)) + (float)(v17 * v12);
				*(v9 - 4) = v25;
				v26 = (float)((float)(v24 + (float)(v16 * v19)) + (float)(v12 * v18)) + (float)(v17 * v25);
				*(v9 - 3) = v26;
				v13 = (float)((float)((float)((float)(v11 * v15) + (float)(v19 * v14)) + (float)(v16 * v20)) + (float)(v25 * v18))
					+ (float)(v17 * v26);
				*(v9 - 2) = v13;
				v12 = (float)((float)((float)((float)(v10 * v15) + (float)(v20 * v14)) + (float)(v16 * v11)) + (float)(v26 * v18))
					+ (float)(v17 * v13);
				*(v9 - 1) = v12;
			} while ((__int64)v9 < result);
		}
		if ((unsigned __int64)v9 < v8)
		{
			v27 = *(float*)(a1 + 136);
			v28 = *(float*)(a1 + 128);
			v29 = *(float*)(a1 + 132);
			v30 = *(float*)(a1 + 144);
			v31 = *(float*)(a1 + 140);
			do
			{
				v32 = *v9;
				v33 = v29 * v10;
				++v9;
				v34 = (float)(v32 * v28) + (float)(v11 * v27);
				v11 = v10;
				v10 = v32;
				v35 = (float)(v34 + v33) + (float)(v13 * v30);
				v13 = v12;
				v36 = v35 + (float)(v31 * v12);
				*(v9 - 1) = v36;
				v12 = v36;
			} while ((unsigned __int64)v9 < v8);
		}
	}
	*(float*)(v6 + 8 * v7) = v10;
	*(float*)(v6 + 8 * v7 + 4) = v11;
	*(float*)(v6 + 8 * v7 + 8) = v12;
	*(float*)(v6 + 8 * v7 + 12) = v13;
	return result;
}

