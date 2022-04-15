//----- (00000001408A9890) ----------------------------------------------------
__int64 __fastcall sub_1408A9890(float* a1, float* a2, unsigned int a3)
{
	float v3; // xmm3_4
	int v5; // edx
	float v6; // xmm4_4
	float v7; // xmm8_4
	float v8; // xmm10_4
	float v9; // xmm1_4
	float v10; // xmm7_4
	float v11; // xmm0_4
	float v12; // xmm1_4
	__int64 result; // rax
	float* v14; // r8
	float v15; // xmm7_4
	float v16; // xmm4_4
	float v17; // xmm3_4
	float v18; // xmm4_4
	float v19; // xmm0_4
	float v20; // xmm6_4
	int v21; // eax
	int v22; // ecx
	float v23; // xmm0_4
	float v24; // xmm0_4
	float v25; // xmm1_4
	float v26; // xmm4_4
	float v27; // xmm3_4
	float v28; // xmm0_4
	float v29; // xmm6_4
	int v30; // eax
	int v31; // ecx
	float v32; // xmm0_4
	float v33; // xmm0_4
	float v34; // xmm1_4
	float v35; // xmm4_4
	float v36; // xmm3_4
	float v37; // xmm0_4
	float v38; // xmm6_4
	int v39; // eax
	int v40; // ecx
	float v41; // xmm0_4
	float v42; // xmm0_4
	float v43; // xmm1_4
	float v44; // xmm4_4
	float v45; // xmm0_4
	float v46; // xmm6_4
	int v47; // eax
	int v48; // ecx
	float v49; // xmm0_4
	float v50; // xmm0_4
	float v51; // xmm4_4
	float v52; // xmm4_4
	float v53; // xmm0_4
	float v54; // xmm6_4
	int v55; // eax
	int v56; // ecx
	float v57; // xmm0_4
	float v58; // xmm0_4

	v3 = a1[4];
	v5 = dword_140C61BFC;
	v6 = -(float)(a1[1] * 0.0099999998);
	v7 = 1.0 / (float)(int)a3;
	v8 = (float)(a1[3] - v3) * v7;
	if (v6 >= -37.0)
	{
		if ((dword_140C61BFC & 1) != 0)
		{
			v9 = *(float*)&dword_140C61BF8;
		}
		else
		{
			v9 = 27866352.0;
			v5 = dword_140C61BFC | 1;
			dword_140C61BFC |= 1u;
			dword_140C61BF8 = 1272224376;
		}
		v10 = (float)((float)((float)((float)(COERCE_FLOAT(((int)(float)((float)(v9 * v6) + 1065353200.0) & 0x7FFFFF) + 1065353216)
			* 0.32518977)
			+ 0.020805772)
			* COERCE_FLOAT(((int)(float)((float)(v9 * v6) + 1065353200.0) & 0x7FFFFF) + 1065353216))
			+ 0.65304345)
			* COERCE_FLOAT((int)(float)((float)(v9 * v6) + 1065353200.0) & 0xFF800000);
	}
	else
	{
		v9 = *(float*)&dword_140C61BF8;
		v10 = 0.0;
	}
	v11 = -(float)(a1[2] * 0.0099999998);
	if (v11 >= -37.0)
	{
		if ((v5 & 1) == 0)
		{
			v9 = 27866352.0;
			dword_140C61BFC = v5 | 1;
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
	v15 = (float)(v10 - v12) * v7;
	if (a2 < v14)
	{
		result = ((char*)v14 - (char*)a2 + 3) / 4;
		if (result >= 4)
		{
			do
			{
				v16 = v3;
				v17 = v3 + v8;
				v18 = v16 * *a2;
				v19 = -fabs(v18);
				if (v19 >= -37.0)
				{
					v21 = (int)(float)((float)(v19 * 12102203.0) + 1065353200.0);
					v22 = v21 & 0x7FFFFF;
					result = v21 & 0xFF800000;
					v20 = (float)((float)((float)((float)(COERCE_FLOAT(v22 + 1065353216) * 0.32518977) + 0.020805772)
						* COERCE_FLOAT(v22 + 1065353216))
						+ 0.65304345)
						* *(float*)&result;
				}
				else
				{
					v20 = 0.0;
				}
				v23 = 1.0 - v20;
				if ((float)-v18 <= 0.0)
					v23 = -v23;
				v24 = v23 * v12;
				v25 = v12 + v15;
				v26 = v17 * a2[1];
				*a2 = v24;
				v27 = v17 + v8;
				v28 = -fabs(v26);
				if (v28 >= -37.0)
				{
					v30 = (int)(float)((float)(v28 * 12102203.0) + 1065353200.0);
					v31 = v30 & 0x7FFFFF;
					result = v30 & 0xFF800000;
					v29 = (float)((float)((float)((float)(COERCE_FLOAT(v31 + 1065353216) * 0.32518977) + 0.020805772)
						* COERCE_FLOAT(v31 + 1065353216))
						+ 0.65304345)
						* *(float*)&result;
				}
				else
				{
					v29 = 0.0;
				}
				v32 = 1.0 - v29;
				if ((float)-v26 <= 0.0)
					v32 = -v32;
				v33 = v32 * v25;
				v34 = v25 + v15;
				v35 = v27 * a2[2];
				a2[1] = v33;
				v36 = v27 + v8;
				v37 = -fabs(v35);
				if (v37 >= -37.0)
				{
					v39 = (int)(float)((float)(v37 * 12102203.0) + 1065353200.0);
					v40 = v39 & 0x7FFFFF;
					result = v39 & 0xFF800000;
					v38 = (float)((float)((float)((float)(COERCE_FLOAT(v40 + 1065353216) * 0.32518977) + 0.020805772)
						* COERCE_FLOAT(v40 + 1065353216))
						+ 0.65304345)
						* *(float*)&result;
				}
				else
				{
					v38 = 0.0;
				}
				v41 = 1.0 - v38;
				if ((float)-v35 <= 0.0)
					v41 = -v41;
				v42 = v41 * v34;
				v43 = v34 + v15;
				v44 = v36 * a2[3];
				a2[2] = v42;
				v3 = v36 + v8;
				v45 = -fabs(v44);
				if (v45 >= -37.0)
				{
					v47 = (int)(float)((float)(v45 * 12102203.0) + 1065353200.0);
					v48 = v47 & 0x7FFFFF;
					result = v47 & 0xFF800000;
					v46 = (float)((float)((float)((float)(COERCE_FLOAT(v48 + 1065353216) * 0.32518977) + 0.020805772)
						* COERCE_FLOAT(v48 + 1065353216))
						+ 0.65304345)
						* *(float*)&result;
				}
				else
				{
					v46 = 0.0;
				}
				v49 = 1.0 - v46;
				if ((float)-v44 <= 0.0)
					v49 = -v49;
				v50 = v49 * v43;
				a2 += 4;
				v12 = v43 + v15;
				*(a2 - 1) = v50;
			} while ((__int64)a2 < (__int64)(v14 - 3));
		}
		for (; a2 < v14; *(a2 - 1) = v58)
		{
			v51 = v3;
			v3 = v3 + v8;
			v52 = v51 * *a2;
			v53 = -fabs(v52);
			if (v53 >= -37.0)
			{
				v55 = (int)(float)((float)(v53 * 12102203.0) + 1065353200.0);
				v56 = v55 & 0x7FFFFF;
				result = v55 & 0xFF800000;
				v54 = (float)((float)((float)((float)(COERCE_FLOAT(v56 + 1065353216) * 0.32518977) + 0.020805772)
					* COERCE_FLOAT(v56 + 1065353216))
					+ 0.65304345)
					* *(float*)&result;
			}
			else
			{
				v54 = 0.0;
			}
			v57 = 1.0 - v54;
			if ((float)-v52 <= 0.0)
				v57 = -v57;
			v58 = v57 * v12;
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

