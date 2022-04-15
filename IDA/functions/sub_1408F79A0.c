//----- (00000001408F79A0) ----------------------------------------------------
__int64 __fastcall sub_1408F79A0(__int64 a1)
{
	__int64 v1; // rdx
	float v2; // xmm7_4
	float v4; // xmm11_4
	float v5; // xmm6_4
	unsigned int v7; // r8d
	unsigned int v8; // r10d
	unsigned int v9; // r11d
	__int64 v10; // r9
	float v11; // xmm4_4
	float v12; // xmm5_4
	__int64 v13; // rdx
	__int64 v14; // rbp
	unsigned int v15; // eax
	__int64 v16; // rsi
	__int64 v17; // rcx
	int v18; // eax
	float v19; // xmm2_4
	float v20; // xmm5_4
	int v21; // eax
	__int64 v22; // rcx
	int v23; // eax
	float v24; // xmm3_4
	float v25; // xmm5_4
	int v26; // eax
	__int64 v27; // rcx
	int v28; // eax
	float v29; // xmm2_4
	float v30; // xmm5_4
	int v31; // eax
	__int64 v32; // rcx
	int v33; // eax
	int v34; // eax
	__int64 v35; // r9
	__int64 v36; // rdx
	__int64 v37; // r10
	__int64 v38; // rcx
	int v39; // eax
	float v40; // xmm0_4
	float v41; // xmm2_4
	int v42; // eax
	__int64 v43; // rcx
	unsigned int v44; // r9d
	float v45; // xmm4_4
	__int64 v46; // r10
	int v47; // eax
	__int64 v48; // rcx
	unsigned int v49; // eax
	__int64 v50; // rdx
	__int64 v51; // rcx
	__int64 v52; // rdx
	unsigned int v53; // r10d
	__int64 v54; // r11
	__int64 v55; // rdx
	unsigned int v56; // eax
	__int64 v57; // r9
	__int64 v58; // rcx
	int v59; // eax
	__int64 v60; // rcx
	int v61; // eax
	__int64 v62; // rcx
	int v63; // eax
	__int64 v64; // rcx
	int v65; // eax
	__int64 v66; // rdx
	__int64 v67; // r9
	__int64 v68; // rcx
	int v69; // eax

	v1 = *(_QWORD*)(a1 + 24);
	v2 = 0.0;
	v4 = *(float*)(v1 + 108);
	v5 = *(float*)(v1 + 112);
	if (*(_BYTE*)(v1 + 152) && (v4 != 0.0 || v5 != 0.0))
	{
		if ((unsigned int)sub_140837E30(a1 + 8, *(int**)(v1 + 8), *(_DWORD*)(v1 + 16), *(_DWORD*)(v1 + 20)) == 52)
			return 2i64;
		v7 = *(_DWORD*)(a1 + 16);
		if (v7 <= 2 || v4 == 0.0)
		{
			v53 = 0;
			v54 = 0i64;
			if ((int)v7 >= 4)
			{
				v55 = 0i64;
				v56 = ((v7 - 4) >> 2) + 1;
				v57 = v56;
				v53 = 4 * v56;
				v54 = 4i64 * v56;
				do
				{
					v58 = *(_QWORD*)(a1 + 8);
					v55 += 48i64;
					v59 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v59;
					*(float*)(v55 + v58 - 44) = (float)((float)((float)((float)((float)v59 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v55 + v58 - 44);
					v60 = *(_QWORD*)(a1 + 8);
					v61 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v61;
					*(float*)(v60 + v55 - 32) = (float)((float)((float)((float)((float)v61 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v60 + v55 - 32);
					v62 = *(_QWORD*)(a1 + 8);
					v63 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v63;
					*(float*)(v62 + v55 - 20) = (float)((float)((float)((float)((float)v63 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v62 + v55 - 20);
					v64 = *(_QWORD*)(a1 + 8);
					v65 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v65;
					*(float*)(v55 + v64 - 8) = (float)((float)((float)((float)((float)v65 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v55 + v64 - 8);
					--v57;
				} while (v57);
			}
			if (v53 < v7)
			{
				v66 = 12 * v54;
				v67 = v7 - v53;
				do
				{
					v68 = *(_QWORD*)(a1 + 8);
					v66 += 12i64;
					v69 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v69;
					*(float*)(v66 + v68 - 8) = (float)((float)((float)((float)((float)v69 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v66 + v68 - 8);
					--v67;
				} while (v67);
			}
		}
		else
		{
			v8 = 0;
			v9 = v7 - 1;
			v10 = 0i64;
			v11 = *(float*)(*(_QWORD*)(a1 + 24) + 72i64);
			v12 = 0.0;
			if ((int)(v7 - 1) >= 4)
			{
				v13 = 24i64;
				v14 = 0i64;
				v15 = ((v7 - 5) >> 2) + 1;
				v16 = v15;
				v8 = 4 * v15;
				v10 = 4i64 * v15;
				do
				{
					v17 = *(_QWORD*)(a1 + 8);
					v18 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					v19 = *(float*)(v17 + v13 - 12);
					*(_DWORD*)(a1 + 248) = v18;
					v20 = v12
						+ (float)((float)((float)((float)((float)((float)((float)((float)v18 * 2.3283064e-10) * 2.0) - 1.0) * v4)
							* (float)(v19 - v2))
							* 0.99000001)
							+ (float)(v19 - v2));
					*(float*)(v17 + v13 - 12) = (float)((float)((float)((float)((float)((float)((float)((float)v18 * 2.3283064e-10)
						* 2.0)
						- 1.0)
						* v4)
						* (float)(v19 - v2))
						* 0.99000001)
						+ (float)(v19 - v2))
						+ *(float*)(v17 + v14);
					v21 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v21;
					*(float*)(v17 + v13 - 8) = (float)((float)((float)((float)((float)v21 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v17 + v13 - 8);
					v22 = *(_QWORD*)(a1 + 8);
					v23 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					v24 = *(float*)(v22 + v13);
					*(_DWORD*)(a1 + 248) = v23;
					v25 = v20
						+ (float)((float)((float)((float)((float)((float)((float)((float)v23 * 2.3283064e-10) * 2.0) - 1.0) * v4)
							* (float)(v24 - v19))
							* 0.99000001)
							+ (float)(v24 - v19));
					*(float*)(v22 + v13) = (float)((float)((float)((float)((float)((float)((float)((float)v23 * 2.3283064e-10)
						* 2.0)
						- 1.0)
						* v4)
						* (float)(v24 - v19))
						* 0.99000001)
						+ (float)(v24 - v19))
						+ *(float*)(v22 + v14 + 12);
					v26 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v26;
					*(float*)(v22 + v13 + 4) = (float)((float)((float)((float)((float)v26 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v22 + v13 + 4);
					v27 = *(_QWORD*)(a1 + 8);
					v28 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					v29 = *(float*)(v27 + v13 + 12);
					*(_DWORD*)(a1 + 248) = v28;
					v13 += 48i64;
					v14 += 48i64;
					v30 = v25
						+ (float)((float)((float)((float)((float)((float)((float)((float)v28 * 2.3283064e-10) * 2.0) - 1.0) * v4)
							* (float)(v29 - v24))
							* 0.99000001)
							+ (float)(v29 - v24));
					*(float*)(v27 + v13 - 36) = (float)((float)((float)((float)((float)((float)((float)((float)v28 * 2.3283064e-10)
						* 2.0)
						- 1.0)
						* v4)
						* (float)(v29 - v24))
						* 0.99000001)
						+ (float)(v29 - v24))
						+ *(float*)(v27 + v14 - 24);
					v31 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v31;
					*(float*)(v27 + v13 - 32) = (float)((float)((float)((float)((float)v31 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v27 + v13 - 32);
					v32 = *(_QWORD*)(a1 + 8);
					v33 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					v2 = *(float*)(v32 + v13 - 24);
					*(_DWORD*)(a1 + 248) = v33;
					v12 = v30
						+ (float)((float)((float)((float)((float)((float)((float)((float)v33 * 2.3283064e-10) * 2.0) - 1.0) * v4)
							* (float)(v2 - v29))
							* 0.99000001)
							+ (float)(v2 - v29));
					*(float*)(v32 + v13 - 24) = (float)((float)((float)((float)((float)((float)((float)((float)v33 * 2.3283064e-10)
						* 2.0)
						- 1.0)
						* v4)
						* (float)(v2 - v29))
						* 0.99000001)
						+ (float)(v2 - v29))
						+ *(float*)(v32 + v14 - 12);
					v34 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v34;
					*(float*)(v32 + v13 - 20) = (float)((float)((float)((float)((float)v34 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v32 + v13 - 20);
					--v16;
				} while (v16);
			}
			if (v8 < v9)
			{
				v35 = 12 * v10;
				v36 = 12i64 * (v8 + 1);
				v37 = v9 - v8;
				do
				{
					v38 = *(_QWORD*)(a1 + 8);
					v36 += 12i64;
					v35 += 12i64;
					v39 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					v40 = *(float*)(v38 + v36 - 12);
					*(_DWORD*)(a1 + 248) = v39;
					v41 = v40 - v2;
					v2 = v40;
					v12 = v12
						+ (float)((float)((float)((float)((float)((float)((float)((float)v39 * 2.3283064e-10) * 2.0) - 1.0) * v4)
							* v41)
							* 0.99000001)
							+ v41);
					*(float*)(v38 + v36 - 12) = (float)((float)((float)((float)((float)((float)((float)((float)v39 * 2.3283064e-10)
						* 2.0)
						- 1.0)
						* v4)
						* v41)
						* 0.99000001)
						+ v41)
						+ *(float*)(v38 + v35 - 12);
					v42 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
					*(_DWORD*)(a1 + 248) = v42;
					*(float*)(v38 + v36 - 8) = (float)((float)((float)((float)((float)v42 * 2.3283064e-10) * 2.0) - 1.0) * v5)
						+ *(float*)(v38 + v36 - 8);
					--v37;
				} while (v37);
			}
			v43 = *(_QWORD*)(a1 + 8);
			v44 = 1;
			v45 = v11 / v12;
			v46 = 1i64;
			v47 = 214013 * *(_DWORD*)(a1 + 248) + 2531011;
			*(_DWORD*)(a1 + 248) = v47;
			*(float*)(v43 + 4) = (float)((float)((float)((float)((float)v47 * 2.3283064e-10) * 2.0) - 1.0) * v5)
				+ *(float*)(v43 + 4);
			if ((int)(v7 - 1) >= 4)
			{
				v48 = 12i64;
				v49 = ((v7 - 5) >> 2) + 1;
				v50 = v49;
				v44 = 4 * v49 + 1;
				v46 = 4i64 * v49 + 1;
				do
				{
					v48 += 48i64;
					*(float*)(v48 + *(_QWORD*)(a1 + 8) - 48) = v45 * *(float*)(v48 + *(_QWORD*)(a1 + 8) - 48);
					*(float*)(*(_QWORD*)(a1 + 8) + v48 - 36) = v45 * *(float*)(*(_QWORD*)(a1 + 8) + v48 - 36);
					*(float*)(*(_QWORD*)(a1 + 8) + v48 - 24) = v45 * *(float*)(*(_QWORD*)(a1 + 8) + v48 - 24);
					*(float*)(v48 + *(_QWORD*)(a1 + 8) - 12) = v45 * *(float*)(v48 + *(_QWORD*)(a1 + 8) - 12);
					--v50;
				} while (v50);
			}
			if (v44 < v7)
			{
				v51 = 12 * v46;
				v52 = v7 - v44;
				do
				{
					v51 += 12i64;
					*(float*)(v51 + *(_QWORD*)(a1 + 8) - 12) = v45 * *(float*)(v51 + *(_QWORD*)(a1 + 8) - 12);
					--v52;
				} while (v52);
			}
		}
	}
	return 1i64;
}
// 1408F7EB0: conditional instruction was optimized away because r8d.4>=3u
// 140B79ED0: using guessed type int dword_140B79ED0;

