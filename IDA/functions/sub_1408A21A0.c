//----- (00000001408A21A0) ----------------------------------------------------
__int64 __fastcall sub_1408A21A0(__int64 a1, __int64 a2, float* a3)
{
	double v3; // xmm6_8
	float v7; // xmm0_4
	float v8; // xmm11_4
	int v9; // eax
	float v10; // xmm0_4
	float v11; // xmm10_4
	int v12; // eax
	float v13; // xmm1_4
	float v14; // xmm9_4
	__int64 result; // rax
	__int64 v16; // r11
	__int64 v17; // rbp
	__int64 v18; // rbx
	float* v19; // r8
	float* v20; // r10
	__int64 v21; // rax
	float v22; // xmm7_4
	float v23; // xmm3_4
	float v24; // xmm5_4
	int v25; // edx
	float v26; // xmm6_4
	float v27; // xmm7_4
	float v28; // xmm1_4
	float v29; // xmm1_4
	float v30; // xmm0_4
	float v31; // xmm3_4
	float v32; // xmm0_4
	float v33; // xmm1_4
	float v34; // xmm6_4
	float v35; // xmm7_4
	float v36; // xmm1_4
	float v37; // xmm1_4
	float v38; // xmm0_4
	float v39; // xmm3_4
	float v40; // xmm0_4
	float v41; // xmm1_4
	float v42; // xmm6_4
	float v43; // xmm7_4
	float v44; // xmm1_4
	float v45; // xmm1_4
	float v46; // xmm0_4
	float v47; // xmm3_4
	float v48; // xmm0_4
	float v49; // xmm1_4
	float v50; // xmm6_4
	float v51; // xmm1_4
	float v52; // xmm1_4
	float v53; // xmm0_4
	float v54; // xmm0_4
	float v55; // xmm1_4
	float v56; // xmm6_4
	float v57; // xmm6_4
	float v58; // xmm1_4
	float v59; // xmm1_4
	float v60; // xmm0_4
	float v61; // xmm0_4
	float v62; // xmm1_4
	float v63; // xmm6_4
	float v64; // [rsp+20h] [rbp-D8h]
	float v65; // [rsp+24h] [rbp-D4h]

	HIDWORD(v3) = 0;
	v65 = *a3;
	v7 = a3[2];
	v8 = a3[1] - 1.0;
	if (v7 != *(float*)(a1 + 56))
	{
		v9 = *(_DWORD*)(a1 + 32);
		*(float*)(a1 + 56) = v7;
		*(float*)(a1 + 60) = sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(-2.2 / (float)((float)v9 * a3[2]))));
	}
	v10 = a3[3];
	v11 = *(float*)(a1 + 60);
	if (v10 != *(float*)(a1 + 64))
	{
		v12 = *(_DWORD*)(a1 + 32);
		*(float*)(a1 + 64) = v10;
		*(float*)&v3 = -2.2 / (float)((float)v12 * a3[3]);
		*(float*)(a1 + 68) = sub_1408FC7F0(v3);
	}
	v13 = *(float*)(a1 + 40);
	v14 = *(float*)(a1 + 68);
	v64 = v13;
	if ((*(_BYTE*)(a2 + 8) & 8) == 0 || *(_BYTE*)(a1 + 72))
		result = *(unsigned int*)(a1 + 28);
	else
		result = (unsigned int)(*(_DWORD*)(a1 + 28) - 1);
	if ((_DWORD)result)
	{
		v16 = 0i64;
		v17 = (unsigned int)result;
		v18 = 0i64;
		do
		{
			v19 = (float*)(*(_QWORD*)a2 + 4 * v18 * *(unsigned __int16*)(a2 + 16));
			v20 = &v19[*(unsigned __int16*)(a2 + 18)];
			v21 = *(_QWORD*)(a1 + 48);
			v22 = *(float*)(v21 + v16 + 4);
			v23 = *(float*)(v21 + v16);
			if (v19 < v20)
			{
				v24 = *(float*)&dword_140C61BF8;
				v25 = dword_140C61BFC;
				if ((4i64 * *(unsigned __int16*)(a2 + 18) + 3) / 4 >= 4)
				{
					do
					{
						v26 = *v19;
						v27 = (float)((float)(v22 - (float)((float)(v26 * v26) + 1.0e-25)) * v13)
							+ (float)((float)(v26 * v26) + 1.0e-25);
						v28 = (float)(COERCE_FLOAT((LODWORD(v27) & 0x7FFFFF) + 1065353216) - 1.0)
							/ (float)(COERCE_FLOAT((LODWORD(v27) & 0x7FFFFF) + 1065353216) + 1.0);
						v29 = v65
							- (float)((float)((float)((float)((float)((float)((float)(v28 * v28) * 0.33333334) + 1.0)
								* (float)(v28 * 2.0))
								+ (float)((float)((float)(unsigned __int8)(LODWORD(v27) >> 23) - 127.0)
									* 0.69314718))
								* 0.43429449)
								* 10.0);
						if (v29 <= 0.0)
							v29 = 0.0;
						if ((float)(v29 - v23) < 0.0)
							v30 = v11;
						else
							v30 = v14;
						v31 = (float)((float)(v23 - v29) * v30) + v29;
						v32 = (float)-(float)(v31 * v8) * 0.050000001;
						if (v32 >= -37.0)
						{
							if ((v25 & 1) == 0)
							{
								v24 = 27866352.0;
								v25 |= 1u;
								dword_140C61BFC = v25;
								dword_140C61BF8 = 1272224376;
							}
							v33 = (float)((float)((float)((float)(COERCE_FLOAT(
								((int)(float)((float)(v32 * v24) + 1065353200.0) & 0x7FFFFF)
								+ 1065353216)
								* 0.32518977)
								+ 0.020805772)
								* COERCE_FLOAT(((int)(float)((float)(v32 * v24) + 1065353200.0) & 0x7FFFFF) + 1065353216))
								+ 0.65304345)
								* COERCE_FLOAT((int)(float)((float)(v32 * v24) + 1065353200.0) & 0xFF800000);
						}
						else
						{
							v33 = 0.0;
						}
						*v19 = v26 * v33;
						v34 = v19[1];
						v35 = (float)((float)(v27 - (float)((float)(v34 * v34) + 1.0e-25)) * v64)
							+ (float)((float)(v34 * v34) + 1.0e-25);
						v36 = (float)(COERCE_FLOAT((LODWORD(v35) & 0x7FFFFF) + 1065353216) - 1.0)
							/ (float)(COERCE_FLOAT((LODWORD(v35) & 0x7FFFFF) + 1065353216) + 1.0);
						v37 = v65
							- (float)((float)((float)((float)((float)((float)((float)(v36 * v36) * 0.33333334) + 1.0)
								* (float)(v36 * 2.0))
								+ (float)((float)((float)(unsigned __int8)(LODWORD(v35) >> 23) - 127.0)
									* 0.69314718))
								* 0.43429449)
								* 10.0);
						if (v37 <= 0.0)
							v37 = 0.0;
						if ((float)(v37 - v31) < 0.0)
							v38 = v11;
						else
							v38 = v14;
						v39 = (float)((float)(v31 - v37) * v38) + v37;
						v40 = (float)-(float)(v39 * v8) * 0.050000001;
						if (v40 >= -37.0)
						{
							if ((v25 & 1) == 0)
							{
								v24 = 27866352.0;
								v25 |= 1u;
								dword_140C61BFC = v25;
								dword_140C61BF8 = 1272224376;
							}
							v41 = (float)((float)((float)((float)(COERCE_FLOAT(
								((int)(float)((float)(v40 * v24) + 1065353200.0) & 0x7FFFFF)
								+ 1065353216)
								* 0.32518977)
								+ 0.020805772)
								* COERCE_FLOAT(((int)(float)((float)(v40 * v24) + 1065353200.0) & 0x7FFFFF) + 1065353216))
								+ 0.65304345)
								* COERCE_FLOAT((int)(float)((float)(v40 * v24) + 1065353200.0) & 0xFF800000);
						}
						else
						{
							v41 = 0.0;
						}
						v19[1] = v34 * v41;
						v42 = v19[2];
						v43 = (float)((float)(v35 - (float)((float)(v42 * v42) + 1.0e-25)) * v64)
							+ (float)((float)(v42 * v42) + 1.0e-25);
						v44 = (float)(COERCE_FLOAT((LODWORD(v43) & 0x7FFFFF) + 1065353216) - 1.0)
							/ (float)(COERCE_FLOAT((LODWORD(v43) & 0x7FFFFF) + 1065353216) + 1.0);
						v45 = v65
							- (float)((float)((float)((float)((float)((float)((float)(v44 * v44) * 0.33333334) + 1.0)
								* (float)(v44 * 2.0))
								+ (float)((float)((float)(unsigned __int8)(LODWORD(v43) >> 23) - 127.0)
									* 0.69314718))
								* 0.43429449)
								* 10.0);
						if (v45 <= 0.0)
							v45 = 0.0;
						if ((float)(v45 - v39) < 0.0)
							v46 = v11;
						else
							v46 = v14;
						v47 = (float)((float)(v39 - v45) * v46) + v45;
						v48 = (float)-(float)(v47 * v8) * 0.050000001;
						if (v48 >= -37.0)
						{
							if ((v25 & 1) == 0)
							{
								v24 = 27866352.0;
								v25 |= 1u;
								dword_140C61BFC = v25;
								dword_140C61BF8 = 1272224376;
							}
							v49 = (float)((float)((float)((float)(COERCE_FLOAT(
								((int)(float)((float)(v48 * v24) + 1065353200.0) & 0x7FFFFF)
								+ 1065353216)
								* 0.32518977)
								+ 0.020805772)
								* COERCE_FLOAT(((int)(float)((float)(v48 * v24) + 1065353200.0) & 0x7FFFFF) + 1065353216))
								+ 0.65304345)
								* COERCE_FLOAT((int)(float)((float)(v48 * v24) + 1065353200.0) & 0xFF800000);
						}
						else
						{
							v49 = 0.0;
						}
						v19[2] = v42 * v49;
						v50 = v19[3];
						v22 = (float)((float)(v43 - (float)((float)(v50 * v50) + 1.0e-25)) * v64)
							+ (float)((float)(v50 * v50) + 1.0e-25);
						v51 = (float)(COERCE_FLOAT((LODWORD(v22) & 0x7FFFFF) + 1065353216) - 1.0)
							/ (float)(COERCE_FLOAT((LODWORD(v22) & 0x7FFFFF) + 1065353216) + 1.0);
						v52 = v65
							- (float)((float)((float)((float)((float)((float)((float)(v51 * v51) * 0.33333334) + 1.0)
								* (float)(v51 * 2.0))
								+ (float)((float)((float)(unsigned __int8)(LODWORD(v22) >> 23) - 127.0)
									* 0.69314718))
								* 0.43429449)
								* 10.0);
						if (v52 <= 0.0)
							v52 = 0.0;
						if ((float)(v52 - v47) < 0.0)
							v53 = v11;
						else
							v53 = v14;
						v23 = (float)((float)(v47 - v52) * v53) + v52;
						v54 = (float)-(float)(v23 * v8) * 0.050000001;
						if (v54 >= -37.0)
						{
							if ((v25 & 1) == 0)
							{
								v24 = 27866352.0;
								v25 |= 1u;
								dword_140C61BFC = v25;
								dword_140C61BF8 = 1272224376;
							}
							v55 = (float)((float)((float)((float)(COERCE_FLOAT(
								((int)(float)((float)(v54 * v24) + 1065353200.0) & 0x7FFFFF)
								+ 1065353216)
								* 0.32518977)
								+ 0.020805772)
								* COERCE_FLOAT(((int)(float)((float)(v54 * v24) + 1065353200.0) & 0x7FFFFF) + 1065353216))
								+ 0.65304345)
								* COERCE_FLOAT((int)(float)((float)(v54 * v24) + 1065353200.0) & 0xFF800000);
						}
						else
						{
							v55 = 0.0;
						}
						v56 = v50 * v55;
						v13 = v64;
						v19 += 4;
						*(v19 - 1) = v56;
					} while ((__int64)v19 < (__int64)(v20 - 3));
				}
				if (v19 < v20)
				{
					do
					{
						v57 = *v19;
						v22 = (float)((float)(v22 - (float)((float)(v57 * v57) + 1.0e-25)) * v13)
							+ (float)((float)(v57 * v57) + 1.0e-25);
						v58 = (float)(COERCE_FLOAT((LODWORD(v22) & 0x7FFFFF) + 1065353216) - 1.0)
							/ (float)(COERCE_FLOAT((LODWORD(v22) & 0x7FFFFF) + 1065353216) + 1.0);
						v59 = v65
							- (float)((float)((float)((float)((float)((float)((float)(v58 * v58) * 0.33333334) + 1.0)
								* (float)(v58 * 2.0))
								+ (float)((float)((float)(unsigned __int8)(LODWORD(v22) >> 23) - 127.0)
									* 0.69314718))
								* 0.43429449)
								* 10.0);
						if (v59 <= 0.0)
							v59 = 0.0;
						if ((float)(v59 - v23) < 0.0)
							v60 = v11;
						else
							v60 = v14;
						v23 = (float)((float)(v23 - v59) * v60) + v59;
						v61 = (float)-(float)(v23 * v8) * 0.050000001;
						if (v61 >= -37.0)
						{
							if ((v25 & 1) == 0)
							{
								v25 |= 1u;
								v24 = 27866352.0;
							}
							v62 = (float)((float)((float)((float)(COERCE_FLOAT(
								((int)(float)((float)(v61 * v24) + 1065353200.0) & 0x7FFFFF)
								+ 1065353216)
								* 0.32518977)
								+ 0.020805772)
								* COERCE_FLOAT(((int)(float)((float)(v61 * v24) + 1065353200.0) & 0x7FFFFF) + 1065353216))
								+ 0.65304345)
								* COERCE_FLOAT((int)(float)((float)(v61 * v24) + 1065353200.0) & 0xFF800000);
						}
						else
						{
							v62 = 0.0;
						}
						v63 = v57 * v62;
						v13 = v64;
						*v19++ = v63;
					} while (v19 < v20);
					dword_140C61BF8 = LODWORD(v24);
					dword_140C61BFC = v25;
				}
			}
			v13 = v64;
			v16 += 8i64;
			++v18;
			*(float*)(*(_QWORD*)(a1 + 48) + v16 - 4) = v22;
			result = *(_QWORD*)(a1 + 48);
			*(float*)(v16 + result - 8) = v23;
			--v17;
		} while (v17);
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;

