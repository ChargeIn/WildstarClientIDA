//----- (00000001407A4CE0) ----------------------------------------------------
__int64 __fastcall sub_1407A4CE0(_QWORD* a1, float* a2)
{
	__int64 result; // rax
	__int64 v5; // rdx
	float v6; // xmm0_4
	__int64 v7; // rcx
	__int64 v8; // rax
	bool v9; // cf
	int* v10; // rbx
	int* v11; // rax
	unsigned __int64 v12; // r15
	__int64 v13; // rbp
	unsigned __int64 v14; // rsi
	unsigned __int64 v15; // r9
	__int64 v16; // r10
	float v17; // xmm1_4
	__int64 v18; // r8
	unsigned __int64 v19; // r11
	__int64 v20; // rdx
	float v21; // xmm1_4
	__int64 v22; // rdx
	float v23; // xmm1_4
	__int64 v24; // rdx
	float v25; // xmm1_4
	__int64 v26; // rdx
	__int64 v27; // r8
	unsigned __int64 v28; // r9
	__int64 v29; // rdx
	float v30; // xmm2_4
	float v31; // xmm8_4
	float v32; // xmm0_4
	float v33; // xmm8_4
	float v34; // xmm7_4
	float v35; // xmm10_4
	__int64 v36; // rsi
	__int64 v37; // r9
	float v38; // xmm3_4
	__int64 v39; // rax
	unsigned __int64 v40; // r8
	unsigned __int64 v41; // rdx
	__int64 v42; // rcx
	float v43; // xmm3_4
	float v44; // xmm4_4
	float v45; // xmm0_4
	float v46; // xmm2_4
	__int64 v47; // rcx
	__int64 v48; // rdx
	double v49; // xmm3_8
	float v50; // xmm7_4
	__int64 v51; // rcx
	int* v52; // rax
	float v53; // xmm0_4
	_QWORD v54[2]; // [rsp+20h] [rbp-A8h] BYREF
	__int64 v55; // [rsp+E0h] [rbp+18h] BYREF
	int* v56; // [rsp+E8h] [rbp+20h] BYREF

	result = sub_1407A4700((__int64)a1);
	if ((int)result >= 0)
	{
		if (*a2 < 0.0000099999997)
			*a2 = -1.0;
		v5 = a1[8];
		v6 = *a2;
		v7 = v5;
		v8 = *(_QWORD*)(v5 + 8);
		while (v8)
		{
			if (v6 > *(float*)(v8 + 32))
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v7 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v7 == v5 || (v9 = v6 < *(float*)(v7 + 32), v55 = v7, v9))
			v55 = v5;
		if (v55 == v5 || (v10 = *(int**)(v55 + 40)) == 0i64)
		{
			v11 = sub_14018B280(64i64, 0);
			v10 = v11;
			if (v11)
			{
				*((_QWORD*)v11 + 1) = 0i64;
				*(_QWORD*)v11 = 0i64;
			}
			else
			{
				v10 = 0i64;
			}
		}
		else if (*((_QWORD*)v10 + 1))
		{
			return 0i64;
		}
		v12 = a1[6];
		sub_140052360((__int64*)v10, v12);
		v13 = a1[4];
		v14 = 1i64;
		v15 = v13 - 1;
		v16 = 112i64;
		v17 = 0.0;
		if ((unsigned __int64)(v13 - 1) > 1)
		{
			if (v13 - 2 >= 4)
			{
				v18 = 112i64;
				v19 = ((unsigned __int64)(v13 - 6) >> 2) + 1;
				v14 = 4 * v19 + 1;
				do
				{
					v20 = a1[3];
					v18 += 448i64;
					*(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(v18 + v20 - 352)) = *(float*)(v18 + v20 - 368) - v17;
					v21 = v17 + *(float*)(v18 + v20 - 344);
					v22 = a1[3];
					*(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(v22 + v18 - 240)) = *(float*)(v22 + v18 - 256) - v21;
					v23 = v21 + *(float*)(v22 + v18 - 232);
					v24 = a1[3];
					*(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(v24 + v18 - 128)) = *(float*)(v24 + v18 - 144) - v23;
					v25 = v23 + *(float*)(v24 + v18 - 120);
					v26 = a1[3];
					*(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(v18 + v26 - 16)) = *(float*)(v18 + v26 - 32) - v25;
					v17 = v25 + *(float*)(v18 + v26 - 8);
					--v19;
				} while (v19);
			}
			if (v14 < v15)
			{
				v27 = 112 * v14;
				v28 = v15 - v14;
				do
				{
					v29 = a1[3];
					*(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(v27 + v29 + 96)) = *(float*)(v27 + v29 + 80) - v17;
					v17 = v17 + *(float*)(v27 + v29 + 104);
					v27 += 112i64;
					--v28;
				} while (v28);
			}
		}
		v30 = *(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(112 * v13 + a1[3] - 128));
		if (*a2 == -1.0)
			v31 = *(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(112 * v13 + a1[3] - 128));
		else
			v31 = *(float*)(a1[5] + 24 * v12 - 24) / *a2;
		v32 = v31 + v17;
		if (v30 <= 0.0)
			v33 = 0.0;
		else
			v33 = v31 / v30;
		if (v32 <= 0.0000099999997)
			v34 = 0.0;
		else
			v34 = 1.0 / v32;
		**(_DWORD**)v10 = 0;
		v35 = 0.0;
		if ((unsigned __int64)(v13 - 2) > 1)
		{
			v36 = v13 - 3;
			do
			{
				v37 = a1[3];
				*(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(v37 + v16 + 96)) = fmaxf(
					0.0,
					fminf(
						(float)((float)(v33
							* *(float*)(*(_QWORD*)v10 + 4i64 * *(_QWORD*)(v37 + v16 + 96)))
							+ v35)
						* v34,
						1.0));
				v38 = *(float*)(v37 + v16 + 104);
				v39 = *(_QWORD*)(v37 + v16 + 96);
				v40 = *(_QWORD*)(v37 + v16 + 208);
				v41 = v39 + 1;
				v35 = v35 + v38;
				if (v40 > v39 + 1)
				{
					v42 = a1[5];
					v43 = (float)(v38 * v34) + *(float*)(*(_QWORD*)v10 + 4 * v39);
					v44 = *(float*)(v42 + 24 * v39);
					v45 = *(float*)(v42 + 24 * v40) - v44;
					v46 = v45 <= 0.0000099999997
						? 0.0
						: (float)((float)((float)((float)(v33 * *(float*)(*(_QWORD*)v10 + 4 * v40)) + v35) * v34) - v43) / v45;
					if (v41 < v40)
					{
						v47 = 24 * v41;
						do
						{
							++v41;
							v47 += 24i64;
							*(float*)(*(_QWORD*)v10 + 4 * v41 - 4) = fmaxf(
								0.0,
								fminf(
									(float)((float)(*(float*)(a1[5] + v47 - 24) - v44) * v46)
									+ v43,
									1.0));
						} while (v41 < *(_QWORD*)(v37 + v16 + 208));
					}
				}
				v16 += 112i64;
				--v36;
			} while (v36);
		}
		v48 = a1[8];
		*(_DWORD*)(*(_QWORD*)v10 + 4 * v12 - 4) = 1065353216;
		*((float*)v10 + 14) = v34;
		v49 = (float)(v34 * *(float*)(a1[5] + 4i64));
		*((double*)v10 + 2) = v49;
		v50 = v34 * *(float*)(a1[5] + 24i64 * a1[6] - 20);
		v51 = *(_QWORD*)(v48 + 8);
		*((double*)v10 + 4) = 1.0 - v49;
		v52 = (int*)v48;
		*((double*)v10 + 3) = v50;
		*((double*)v10 + 5) = 1.0 - v50;
		*((double*)v10 + 6) = 1.0 - v50 + 1.0 - v49;
		while (v51)
		{
			if (*a2 > *(float*)(v51 + 32))
			{
				v51 = *(_QWORD*)(v51 + 24);
			}
			else
			{
				v52 = (int*)v51;
				v51 = *(_QWORD*)(v51 + 16);
			}
		}
		if (v52 == (int*)v48 || *((float*)v52 + 8) > *a2)
		{
			v53 = *a2;
			v54[1] = 0i64;
			*(float*)v54 = v53;
			v55 = (__int64)v52;
			sub_1407A7320((__int64)(a1 + 7), &v56, &v55, v54);
			v52 = v56;
		}
		*((_QWORD*)v52 + 5) = v10;
		return 0i64;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

