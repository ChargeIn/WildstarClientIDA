//----- (00000001408A9390) ----------------------------------------------------
__int64 __fastcall sub_1408A9390(float* a1, float* a2, unsigned int a3)
{
	int v4; // edx
	float v5; // xmm4_4
	float v6; // xmm8_4
	float v7; // xmm3_4
	float v8; // xmm15_4
	float v9; // xmm1_4
	float v10; // xmm10_4
	float v11; // xmm0_4
	float v12; // xmm2_4
	__int64 result; // rax
	float* v14; // rcx
	float v15; // xmm10_4
	float v16; // xmm8_4
	float v17; // xmm3_4
	float v18; // xmm8_4
	float v19; // xmm4_4
	float v20; // xmm0_4
	float v21; // xmm0_4
	float v22; // xmm2_4
	float v23; // xmm8_4
	float v24; // xmm3_4
	float v25; // xmm4_4
	float v26; // xmm0_4
	float v27; // xmm0_4
	float v28; // xmm2_4
	float v29; // xmm8_4
	float v30; // xmm3_4
	float v31; // xmm4_4
	float v32; // xmm0_4
	float v33; // xmm0_4
	float v34; // xmm2_4
	float v35; // xmm8_4
	float v36; // xmm4_4
	float v37; // xmm0_4
	float v38; // xmm0_4
	float v39; // xmm8_4
	float v40; // xmm8_4
	float v41; // xmm4_4
	float v42; // xmm0_4
	float v43; // xmm0_4

	v4 = dword_140C61BFC;
	v5 = -(float)(a1[1] * 0.0099999998);
	v6 = 1.0 / (float)(int)a3;
	v7 = (float)((float)((float)(a1[6] * 0.0099999998) * 0.33333331) + 0.66666663) * a1[4];
	v8 = (float)((float)((float)((float)((float)(a1[5] * 0.0099999998) * 0.33333331) + 0.66666663) * a1[3]) - v7) * v6;
	if (v5 >= -37.0)
	{
		if ((dword_140C61BFC & 1) != 0)
		{
			v9 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v9 = 27866352.0;
			v4 = dword_140C61BFC | 1;
			dword_140C61BFC |= 1u;
			dword_140C61BF8 = 1272224376;
		}
		v10 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v5) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v9 * v5) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v9 * v5) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		v9 = *(float*)&dword_140C61BF8;
		v10 = 0.0;
	}
	v11 = -(float)(a1[2] * 0.0099999998);
	if (v11 >= -37.0)
	{
		if ((v4 & 1) == 0)
		{
			v9 = 27866352.0;
			dword_140C61BFC = v4 | 1;
			dword_140C61BF8 = 1272224376;
		}
		v12 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v11) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v9 * v11) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v9 * v11) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		v12 = 0.0;
	}
	result = a3;
	v14 = &a2[a3];
	v15 = (float)(v10 - v12) * v6;
	if (a2 < v14)
	{
		result = (4i64 * a3 + 3) / 4;
		if (result >= 4)
		{
			result = (__int64)(v14 - 3);
			do
			{
				v16 = v7;
				v17 = v7 + v8;
				v18 = v16 * *a2;
				v19 = fabs(v18);
				if (v19 <= 0.66666663)
					v20 = (float)(3.0 - (float)((float)(2.0 - (float)(v19 * 3.0)) * (float)(2.0 - (float)(v19 * 3.0))))
					* 0.33333331;
				else
					v20 = 1.0;
				if (v19 <= 0.33333331)
					v20 = v19 * 2.0;
				if (v18 <= 0.0)
					v20 = -v20;
				v21 = v20 * v12;
				v22 = v12 + v15;
				v23 = v17 * a2[1];
				*a2 = v21;
				v24 = v17 + v8;
				v25 = fabs(v23);
				if (v25 <= 0.66666663)
					v26 = (float)(3.0 - (float)((float)(2.0 - (float)(v25 * 3.0)) * (float)(2.0 - (float)(v25 * 3.0))))
					* 0.33333331;
				else
					v26 = 1.0;
				if (v25 <= 0.33333331)
					v26 = v25 * 2.0;
				if (v23 <= 0.0)
					v26 = -v26;
				v27 = v26 * v22;
				v28 = v22 + v15;
				v29 = v24 * a2[2];
				a2[1] = v27;
				v30 = v24 + v8;
				v31 = fabs(v29);
				if (v31 <= 0.66666663)
					v32 = (float)(3.0 - (float)((float)(2.0 - (float)(v31 * 3.0)) * (float)(2.0 - (float)(v31 * 3.0))))
					* 0.33333331;
				else
					v32 = 1.0;
				if (v31 <= 0.33333331)
					v32 = v31 * 2.0;
				if (v29 <= 0.0)
					v32 = -v32;
				v33 = v32 * v28;
				v34 = v28 + v15;
				v35 = v30 * a2[3];
				a2[2] = v33;
				v7 = v30 + v8;
				v36 = fabs(v35);
				if (v36 <= 0.66666663)
					v37 = (float)(3.0 - (float)((float)(2.0 - (float)(v36 * 3.0)) * (float)(2.0 - (float)(v36 * 3.0))))
					* 0.33333331;
				else
					v37 = 1.0;
				if (v36 <= 0.33333331)
					v37 = v36 * 2.0;
				if (v35 <= 0.0)
					v37 = -v37;
				v38 = v37 * v34;
				a2 += 4;
				v12 = v34 + v15;
				*(a2 - 1) = v38;
			} while ((__int64)a2 < result);
		}
		for (; a2 < v14; *(a2 - 1) = v43)
		{
			v39 = v7;
			v7 = v7 + v8;
			v40 = v39 * *a2;
			v41 = fabs(v40);
			if (v41 <= 0.66666663)
				v42 = (float)(3.0 - (float)((float)(2.0 - (float)(v41 * 3.0)) * (float)(2.0 - (float)(v41 * 3.0)))) * 0.33333331;
			else
				v42 = 1.0;
			if (v41 <= 0.33333331)
				v42 = v41 * 2.0;
			if (v40 <= 0.0)
				v42 = -v42;
			v43 = v42 * v12;
			++a2;
			v12 = v12 + v15;
		}
	}
	return result;
}
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

