//----- (00000001408A4860) ----------------------------------------------------
void __fastcall sub_1408A4860(__int64 a1, unsigned __int64 a2, int a3, float a4, float a5, float a6)
{
	int v6; // xmm1_4
	float v7; // xmm5_4
	float v8; // xmm4_4
	unsigned __int64 v10; // r9
	float v11; // xmm8_4
	float v12; // xmm10_4
	float v13; // xmm6_4
	float v14; // xmm11_4
	float v15; // xmm9_4
	bool v16; // r11
	__m128 v17; // xmm1
	int v18; // ecx
	int v19; // eax
	unsigned __int64 v20; // rcx
	unsigned __int64 v21; // rax
	__m128 v22; // xmm1
	int v23; // ecx
	int v24; // eax
	unsigned __int64 v25; // rcx
	unsigned __int64 v26; // rax
	float v27; // xmm3_4
	__m128 v28; // xmm1
	int v29; // ecx
	int v30; // eax
	unsigned __int64 v31; // rcx
	unsigned __int64 v32; // rax
	__m128 v33; // xmm1
	int v34; // ecx
	int v35; // eax
	unsigned __int64 v36; // rcx
	unsigned __int64 v37; // rax
	float v38; // xmm3_4
	__m128 v39; // xmm1
	int v40; // ecx
	int v41; // eax
	unsigned __int64 v42; // rcx
	unsigned __int64 v43; // rax
	__m128 v44; // xmm1
	int v45; // ecx
	int v46; // eax
	unsigned __int64 v47; // rcx
	unsigned __int64 v48; // rax
	__m128 v49; // xmm2
	float v50; // xmm3_4
	__m128 v51; // xmm1
	int v52; // ecx
	int v53; // eax
	unsigned __int64 v54; // rcx
	unsigned __int64 v55; // rax
	__m128 v56; // xmm1
	int v57; // ecx
	int v58; // eax
	unsigned __int64 v59; // rcx
	unsigned __int64 v60; // rax
	__m128 v61; // xmm1
	int v62; // ecx
	int v63; // eax
	unsigned __int64 v64; // rcx
	unsigned __int64 v65; // rax
	__m128 v66; // xmm1
	int v67; // ecx
	int v68; // eax
	unsigned __int64 v69; // rcx
	unsigned __int64 v70; // rax
	float v71; // xmm3_4
	int v72; // xmm1_4
	int v73; // [rsp+34h] [rbp-B4h]
	int v74; // [rsp+100h] [rbp+18h]

	v6 = *(_DWORD*)(a1 + 20);
	v7 = *(float*)a1;
	v8 = *(float*)(a1 + 12);
	v10 = a2 + 4i64 * (unsigned int)a3;
	v11 = *(float*)(a1 + 16);
	v12 = *(float*)(a1 + 4);
	v13 = a5;
	v14 = *(float*)(a1 + 8);
	v74 = v6;
	v73 = v6;
	v15 = (float)(a4 - a5) / (float)a3;
	v16 = v11 == 0.0;
	if (v11 <= 0.0000000099999999)
		v11 = 0.0000000099999999;
	switch (v6)
	{
	case 0:
		if (a2 >= v10)
			goto LABEL_150;
		v49 = (__m128)0x40490FDBu;
		v50 = 1.0 / v11;
		do
		{
			v51 = (__m128)0x3FC90FDBu;
			v51.m128_f32[0] = (float)(1.5707964 - v8) * v50;
			v52 = (int)v51.m128_f32[0];
			if ((int)v51.m128_f32[0] != 0x80000000 && (float)v52 != v51.m128_f32[0])
				v51.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v51, v51)) & 1) + v52);
			v53 = (int)v51.m128_f32[0];
			if ((int)v51.m128_f32[0] >= 0)
			{
				if (v53 > a3)
					v53 = a3;
			}
			else
			{
				v53 = -1;
			}
			v54 = a2 + 4i64 * v53;
			v55 = v10;
			if (v54 < v10)
				v55 = v54;
			if (a2 < v55)
			{
				do
				{
					v8 = v8 + v11;
					v13 = v13 + v15;
					a2 += 4i64;
					*(float*)(a2 - 4) = (float)((float)((float)((float)((float)((float)(0.0083063254
						- (float)((float)(v8 * v8) * 0.00018363654))
						* (float)(v8 * v8))
						- 0.16664828)
						* (float)(v8 * v8))
						+ 0.9999966)
						* v8)
						* v13;
				} while (a2 < v55);
				v49 = (__m128)0x40490FDBu;
			}
			v56 = v49;
			v56.m128_f32[0] = (float)(v49.m128_f32[0] - v8) * v50;
			v57 = (int)v56.m128_f32[0];
			if ((int)v56.m128_f32[0] != 0x80000000 && (float)v57 != v56.m128_f32[0])
				v56.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v56, v56)) & 1) + v57);
			v58 = (int)v56.m128_f32[0];
			if ((int)v56.m128_f32[0] >= 0)
			{
				if (v58 > a3)
					v58 = a3;
			}
			else
			{
				v58 = -1;
			}
			v59 = a2 + 4i64 * v58;
			v60 = v10;
			if (v59 < v10)
				v60 = v59;
			if (a2 < v60)
			{
				do
				{
					v8 = v8 + v11;
					v13 = v13 + v15;
					a2 += 4i64;
					*(float*)(a2 - 4) = (float)((float)((float)((float)((float)((float)(0.0083063254
						- (float)((float)((float)(v49.m128_f32[0] - v8)
							* (float)(v49.m128_f32[0] - v8))
							* 0.00018363654))
						* (float)((float)(v49.m128_f32[0] - v8)
							* (float)(v49.m128_f32[0] - v8)))
						- 0.16664828)
						* (float)((float)(v49.m128_f32[0] - v8)
							* (float)(v49.m128_f32[0] - v8)))
						+ 0.9999966)
						* (float)(v49.m128_f32[0] - v8))
						* v13;
					v49.m128_i32[0] = 1078530011;
				} while (a2 < v60);
				v50 = 1.0 / v11;
			}
			v61 = (__m128)0x4096CBE4u;
			v61.m128_f32[0] = (float)(4.712389 - v8) * v50;
			v62 = (int)v61.m128_f32[0];
			if ((int)v61.m128_f32[0] != 0x80000000 && (float)v62 != v61.m128_f32[0])
				v61.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v61, v61)) & 1) + v62);
			v63 = (int)v61.m128_f32[0];
			if ((int)v61.m128_f32[0] >= 0)
			{
				if (v63 > a3)
					v63 = a3;
			}
			else
			{
				v63 = -1;
			}
			v64 = a2 + 4i64 * v63;
			v65 = v10;
			if (v64 < v10)
				v65 = v64;
			if (a2 < v65)
			{
				do
				{
					v8 = v8 + v11;
					v13 = v13 + v15;
					a2 += 4i64;
					*(float*)(a2 - 4) = -(float)((float)((float)((float)((float)((float)((float)(0.0083063254
						- (float)((float)((float)(v8 - v49.m128_f32[0]) * (float)(v8 - v49.m128_f32[0]))
							* 0.00018363654))
						* (float)((float)(v8 - v49.m128_f32[0])
							* (float)(v8 - v49.m128_f32[0])))
						- 0.16664828)
						* (float)((float)(v8 - v49.m128_f32[0])
							* (float)(v8 - v49.m128_f32[0])))
						+ 0.9999966)
						* (float)(v8 - v49.m128_f32[0]))
						* v13);
					v49.m128_i32[0] = 1078530011;
				} while (a2 < v65);
				v50 = 1.0 / v11;
			}
			v66 = (__m128)0x40C90FDBu;
			v66.m128_f32[0] = (float)(6.2831855 - v8) * v50;
			v67 = (int)v66.m128_f32[0];
			if ((int)v66.m128_f32[0] != 0x80000000 && (float)v67 != v66.m128_f32[0])
				v66.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v66, v66)) & 1) + v67);
			v68 = (int)v66.m128_f32[0];
			if ((int)v66.m128_f32[0] >= 0)
			{
				if (v68 > a3)
					v68 = a3;
			}
			else
			{
				v68 = -1;
			}
			v69 = a2 + 4i64 * v68;
			v70 = v10;
			if (v69 < v10)
				v70 = v69;
			if (a2 < v70)
			{
				do
				{
					v8 = v8 + v11;
					v71 = 6.2831855 - v8;
					v13 = v13 + v15;
					a2 += 4i64;
					*(float*)(a2 - 4) = -(float)((float)((float)((float)((float)((float)((float)(0.0083063254
						- (float)((float)(v71 * v71)
							* 0.00018363654))
						* (float)(v71 * v71))
						- 0.16664828)
						* (float)(v71 * v71))
						+ 0.9999966)
						* v71)
						* v13);
				} while (a2 < v70);
				v50 = 1.0 / v11;
			}
			if (v8 >= 6.2831855)
				v8 = v8 + -6.2831855;
			v49 = (__m128)0x40490FDBu;
		} while (a2 < v10);
		goto LABEL_149;
	case 1:
		if (a2 >= v10)
			goto LABEL_150;
		v38 = 1.0 / v11;
		do
		{
			v39 = (__m128)0x3F000000u;
			v39.m128_f32[0] = (float)(0.5 - v8) * v38;
			v40 = (int)v39.m128_f32[0];
			if ((int)v39.m128_f32[0] != 0x80000000 && (float)v40 != v39.m128_f32[0])
				v39.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v39, v39)) & 1) + v40);
			v41 = (int)v39.m128_f32[0];
			if ((int)v39.m128_f32[0] >= 0)
			{
				if (v41 > a3)
					v41 = a3;
			}
			else
			{
				v41 = -1;
			}
			v42 = a2 + 4i64 * v41;
			v43 = v10;
			if (v42 < v10)
				v43 = v42;
			for (; a2 < v43; *(float*)(a2 - 4) = v7)
			{
				v8 = v8 + v11;
				v13 = v13 + v15;
				a2 += 4i64;
				v7 = (float)((float)((float)((float)(v8 * 4.0) - 1.0) * v13) * v12) - (float)(v7 * v14);
			}
			v44 = (__m128)0x3F800000u;
			v44.m128_f32[0] = (float)(1.0 - v8) * v38;
			v45 = (int)v44.m128_f32[0];
			if ((int)v44.m128_f32[0] != 0x80000000 && (float)v45 != v44.m128_f32[0])
				v44.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v44, v44)) & 1) + v45);
			v46 = (int)v44.m128_f32[0];
			if ((int)v44.m128_f32[0] >= 0)
			{
				if (v46 > a3)
					v46 = a3;
			}
			else
			{
				v46 = -1;
			}
			v47 = a2 + 4i64 * v46;
			v48 = v10;
			if (v47 < v10)
				v48 = v47;
			for (; a2 < v48; *(float*)(a2 - 4) = v7)
			{
				v8 = v8 + v11;
				v13 = v13 + v15;
				a2 += 4i64;
				v7 = (float)((float)((float)((float)((float)(1.0 - v8) * 4.0) - 1.0) * v13) * v12) - (float)(v7 * v14);
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while (a2 < v10);
		goto LABEL_149;
	case 2:
		if (a2 >= v10)
			goto LABEL_150;
		v27 = 1.0 / v11;
		do
		{
			v28 = (__m128)LODWORD(a6);
			v28.m128_f32[0] = (float)(a6 - v8) * v27;
			v29 = (int)v28.m128_f32[0];
			if ((int)v28.m128_f32[0] != 0x80000000 && (float)v29 != v28.m128_f32[0])
				v28.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v28, v28)) & 1) + v29);
			v30 = (int)v28.m128_f32[0];
			if ((int)v28.m128_f32[0] >= 0)
			{
				if (v30 > a3)
					v30 = a3;
			}
			else
			{
				v30 = -1;
			}
			v31 = a2 + 4i64 * v30;
			v32 = v10;
			if (v31 < v10)
				v32 = v31;
			for (; a2 < v32; *(float*)(a2 - 4) = v7)
			{
				v13 = v13 + v15;
				a2 += 4i64;
				v8 = v8 + v11;
				v7 = (float)(v12 * v13) - (float)(v7 * v14);
			}
			v33 = (__m128)0x3F800000u;
			v33.m128_f32[0] = (float)(1.0 - v8) * v27;
			v34 = (int)v33.m128_f32[0];
			if ((int)v33.m128_f32[0] != 0x80000000 && (float)v34 != v33.m128_f32[0])
				v33.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v33, v33)) & 1) + v34);
			v35 = (int)v33.m128_f32[0];
			if ((int)v33.m128_f32[0] >= 0)
			{
				if (v35 > a3)
					v35 = a3;
			}
			else
			{
				v35 = -1;
			}
			v36 = a2 + 4i64 * v35;
			v37 = v10;
			if (v36 < v10)
				v37 = v36;
			for (; a2 < v37; *(float*)(a2 - 4) = v7)
			{
				v13 = v13 + v15;
				a2 += 4i64;
				v8 = v8 + v11;
				v7 = (float)-(float)(v12 * v13) - (float)(v7 * v14);
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while (a2 < v10);
		goto LABEL_149;
	case 3:
		if (a2 >= v10)
			goto LABEL_150;
		do
		{
			v22 = (__m128)0x3F800000u;
			v22.m128_f32[0] = (float)(1.0 - v8) * (float)(1.0 / v11);
			v23 = (int)v22.m128_f32[0];
			if ((int)v22.m128_f32[0] != 0x80000000 && (float)v23 != v22.m128_f32[0])
				v22.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1) + v23);
			v24 = (int)v22.m128_f32[0];
			if ((int)v22.m128_f32[0] >= 0)
			{
				if (v24 > a3)
					v24 = a3;
			}
			else
			{
				v24 = -1;
			}
			v25 = a2 + 4i64 * v24;
			v26 = v10;
			if (v25 < v10)
				v26 = v25;
			for (; a2 < v26; *(float*)(a2 - 4) = v7)
			{
				v8 = v8 + v11;
				v13 = v13 + v15;
				a2 += 4i64;
				v7 = (float)((float)((float)((float)(v8 * 2.0) - 1.0) * v13) * v12) - (float)(v7 * v14);
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while (a2 < v10);
		goto LABEL_149;
	}
	if (v6 == 4 && a2 < v10)
	{
		do
		{
			v17 = (__m128)0x3F800000u;
			v17.m128_f32[0] = (float)(1.0 - v8) * (float)(1.0 / v11);
			v18 = (int)v17.m128_f32[0];
			if ((int)v17.m128_f32[0] != 0x80000000 && (float)v18 != v17.m128_f32[0])
				v17.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v17, v17)) & 1) + v18);
			v19 = (int)v17.m128_f32[0];
			if ((int)v17.m128_f32[0] >= 0)
			{
				if (v19 > a3)
					v19 = a3;
			}
			else
			{
				v19 = -1;
			}
			v20 = a2 + 4i64 * v19;
			v21 = v10;
			if (v20 < v10)
				v21 = v20;
			for (; a2 < v21; *(float*)(a2 - 4) = v7)
			{
				v8 = v8 + v11;
				v13 = v13 + v15;
				a2 += 4i64;
				v7 = (float)((float)((float)(1.0 - (float)(v8 * 2.0)) * v13) * v12) - (float)(v7 * v14);
			}
			if (v8 >= 1.0)
				v8 = v8 - 1.0;
		} while (a2 < v10);
	LABEL_149:
		v6 = v74;
	}
LABEL_150:
	if (!v16)
	{
		*(float*)a1 = v7;
		*(float*)(a1 + 4) = v12;
		*(float*)(a1 + 8) = v14;
		*(float*)(a1 + 12) = v8;
		*(float*)(a1 + 16) = v11;
		*(_DWORD*)(a1 + 20) = v6;
		if (v73)
			v72 = 1065353216;
		else
			v72 = 1086918619;
		*(float*)(a1 + 12) = sub_1408FDE98(v8, *(float*)&v72);
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

