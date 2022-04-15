//----- (00000001408A0480) ----------------------------------------------------
float* __fastcall sub_1408A0480(__int64 a1, __int64 a2, float* a3)
{
	int v6; // ebx
	double v7; // xmm6_8
	float v8; // xmm7_4
	float v9; // xmm0_4
	int v10; // eax
	float v11; // xmm0_4
	float v12; // xmm9_4
	int v13; // eax
	float* v14; // rax
	float v15; // xmm1_4
	float v16; // xmm6_4
	float v17; // xmm5_4
	float v18; // xmm3_4
	__int64 v19; // rcx
	__int64* v20; // rax
	__int64 v21; // r8
	__int64 v22; // rdx
	int i; // r9d
	unsigned int v24; // r8d
	__int64 v25; // rcx
	float v26; // xmm2_4
	unsigned int v27; // eax
	__int64 v28; // rdx
	float* v29; // rax
	float** v30; // rdx
	__int64 v31; // rcx
	float* v32; // rax
	float v33; // xmm1_4
	float v34; // xmm2_4
	float v35; // xmm0_4
	float v36; // xmm0_4
	float v37; // xmm1_4
	int v38; // eax
	unsigned int v39; // r8d
	__int64 v40; // rcx
	unsigned int v41; // eax
	__int64 v42; // rdx
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rax
	__int64 v46; // rax
	__int64* v47; // rdx
	__int64 v48; // rcx
	__int64 v49; // rax
	float* result; // rax
	__int64 v51[3]; // [rsp+8h] [rbp-120h]
	float v52[2]; // [rsp+20h] [rbp-108h]
	__int64 v53[7]; // [rsp+28h] [rbp-100h] BYREF
	float v54; // [rsp+138h] [rbp+10h]
	float v55; // [rsp+148h] [rbp+20h]

	if ((*(_BYTE*)(a2 + 8) & 8) == 0 || *(_BYTE*)(a1 + 72))
		v6 = *(_DWORD*)(a1 + 28);
	else
		v6 = *(_DWORD*)(a1 + 28) - 1;
	HIDWORD(v7) = 0;
	v8 = (float)(1.0 / a3[1]) - 1.0;
	v55 = *a3;
	v9 = a3[2];
	if (v9 != *(float*)(a1 + 56))
	{
		v10 = *(_DWORD*)(a1 + 32);
		*(float*)(a1 + 56) = v9;
		*(float*)(a1 + 60) = sub_1408FC7F0(COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(-2.2 / (float)((float)v10 * a3[2]))));
	}
	v11 = a3[3];
	v12 = *(float*)(a1 + 60);
	if (v11 != *(float*)(a1 + 64))
	{
		v13 = *(_DWORD*)(a1 + 32);
		*(float*)(a1 + 64) = v11;
		*(float*)&v7 = -2.2 / (float)((float)v13 * a3[3]);
		*(float*)(a1 + 68) = sub_1408FC7F0(v7);
	}
	v14 = *(float**)(a1 + 48);
	v15 = *(float*)(a1 + 40);
	v16 = *(float*)(a1 + 68);
	v17 = v14[1];
	v18 = *v14;
	v54 = v15;
	if (v6)
	{
		v19 = *(_QWORD*)a2;
		v20 = v53;
		v21 = 4i64 * *(unsigned __int16*)(a2 + 16);
		v22 = (unsigned int)v6;
		do
		{
			*v20 = v19;
			v19 += v21;
			++v20;
			--v22;
		} while (v22);
	}
	for (i = *(unsigned __int16*)(a2 + 18) - 1; i >= 0; v15 = v54)
	{
		v24 = 0;
		v25 = 0i64;
		v26 = 0.0;
		if (v6 >= 4)
		{
			v27 = ((unsigned int)(v6 - 4) >> 2) + 1;
			v28 = v27;
			v24 = 4 * v27;
			do
			{
				v29 = (float*)v53[v25];
				v25 += 4i64;
				v26 = (float)((float)((float)(v26 + (float)(*v29 * *v29))
					+ (float)(*(float*)v51[v25 + 1] * *(float*)v51[v25 + 1]))
					+ (float)(*(float*)v51[v25 + 2] * *(float*)v51[v25 + 2]))
					+ (float)(**(float**)&v52[2 * v25] * **(float**)&v52[2 * v25]);
				--v28;
			} while (v28);
			v15 = v54;
		}
		if (v24 < v6)
		{
			v30 = (float**)&v53[v25];
			v31 = v6 - v24;
			do
			{
				v32 = *v30++;
				v26 = v26 + (float)(*v32 * *v32);
				--v31;
			} while (v31);
		}
		v17 = (float)((float)(v17 - (float)((float)(v26 * (float)(1.0 / (float)v6)) + 1.0e-25)) * v15)
			+ (float)((float)(v26 * (float)(1.0 / (float)v6)) + 1.0e-25);
		v33 = (float)(COERCE_FLOAT((LODWORD(v17) & 0x7FFFFF) + 1065353216) - 1.0)
			/ (float)(COERCE_FLOAT((LODWORD(v17) & 0x7FFFFF) + 1065353216) + 1.0);
		v34 = (float)((float)((float)((float)((float)((float)((float)(v33 * v33) * 0.33333334) + 1.0) * (float)(v33 * 2.0))
			+ (float)((float)((float)(unsigned __int8)(LODWORD(v17) >> 23) - 127.0) * 0.69314718))
			* 0.43429449)
			* 10.0)
			- v55;
		if (v34 <= 0.0)
			v34 = 0.0;
		if ((float)(v34 - v18) < 0.0)
			v35 = v16;
		else
			v35 = v12;
		v18 = (float)((float)(v18 - v34) * v35) + v34;
		v36 = (float)(v18 * v8) * 0.050000001;
		if (v36 >= -37.0)
		{
			if ((dword_140C61BFC & 1) == 0)
			{
				dword_140C61BFC |= 1u;
				dword_140C61BF8 = 1272224376;
			}
			v38 = (int)(float)((float)(v36 * *(float*)&dword_140C61BF8) + 1065353200.0);
			LODWORD(v52[0]) = (v38 & 0x7FFFFF) + 1065353216;
			LODWORD(v52[1]) = v38 & 0xFF800000;
			v37 = (float)((float)((float)((float)(v52[0] * 0.32518977) + 0.020805772) * v52[0]) + 0.65304345)
				* COERCE_FLOAT(v38 & 0xFF800000);
		}
		else
		{
			v37 = 0.0;
		}
		v39 = 0;
		v40 = 0i64;
		if (v6 >= 4)
		{
			v41 = ((unsigned int)(v6 - 4) >> 2) + 1;
			v42 = v41;
			v39 = 4 * v41;
			do
			{
				v43 = v53[v40];
				v40 += 4i64;
				v43 += 4i64;
				v51[v40] = v43;
				*(float*)(v43 - 4) = v37 * *(float*)(v43 - 4);
				v44 = v51[v40 + 1] + 4;
				v51[v40 + 1] = v44;
				*(float*)(v44 - 4) = v37 * *(float*)(v44 - 4);
				v45 = v51[v40 + 2] + 4;
				v51[v40 + 2] = v45;
				*(float*)(v45 - 4) = v37 * *(float*)(v45 - 4);
				v46 = *(_QWORD*)&v52[2 * v40] + 4i64;
				*(_QWORD*)&v52[2 * v40] = v46;
				*(float*)(v46 - 4) = v37 * *(float*)(v46 - 4);
				--v42;
			} while (v42);
		}
		if (v39 < v6)
		{
			v47 = &v53[v40];
			v48 = v6 - v39;
			do
			{
				v49 = *v47++;
				v49 += 4i64;
				*(v47 - 1) = v49;
				*(float*)(v49 - 4) = v37 * *(float*)(v49 - 4);
				--v48;
			} while (v48);
		}
		--i;
	}
	*(float*)(*(_QWORD*)(a1 + 48) + 4i64) = v17;
	result = *(float**)(a1 + 48);
	*result = v18;
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C61BF8: using guessed type int dword_140C61BF8;
// 140C61BFC: using guessed type int dword_140C61BFC;
// 1408A0480: using guessed type __int64 var_100[7];

