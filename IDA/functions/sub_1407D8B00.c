//----- (00000001407D8B00) ----------------------------------------------------
__int64 __fastcall sub_1407D8B00(__int64 a1, unsigned int a2, float* a3, char* a4)
{
	unsigned int v5; // r9d
	float* v9; // rcx
	__int64 result; // rax
	__int64 v11; // r8
	__int64 v12; // rcx
	unsigned int v13; // r9d
	unsigned int v14; // edx
	int v15; // eax
	__int64 v16; // rdx
	float v17; // xmm0_4
	float v18; // xmm3_4
	__int64 v19; // rsi
	__int64 v20; // r8
	int v21; // ebx
	int v22; // eax
	__int64 v23; // r8
	float v24; // xmm0_4
	float v25; // xmm3_4
	__int64 v26; // r8
	unsigned int v27; // edx
	__int64 v28; // rcx
	__int64 v29; // rsi
	float* v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rdx
	float v33; // xmm3_4
	char v34; // [rsp+10h] [rbp+8h] BYREF

	v5 = *(_DWORD*)a1;
	if (*(_DWORD*)a1 == 1)
	{
		v9 = *(float**)(a1 + 16);
		*a3 = *v9;
		a3[1] = v9[1];
		a3[2] = v9[2];
		a3[3] = v9[3];
		a3[4] = v9[4];
		result = *((unsigned int*)v9 + 5);
		*((_DWORD*)a3 + 5) = result;
		return result;
	}
	if (a4)
	{
		v11 = *(unsigned int*)a4;
		v12 = *(_QWORD*)(a1 + 8);
		v13 = *(_DWORD*)(v12 + 4 * v11);
		if (v13 <= a2)
		{
			v14 = *(_DWORD*)(v12 + 4i64 * (unsigned int)(v11 + 1));
			if (a2 < v14)
			{
				v15 = v14 - v13;
				v16 = *(_QWORD*)(a1 + 16);
				v17 = (float)v15;
				result = 3 * v11;
				v18 = (float)(int)(a2 - v13) / v17;
				*a3 = (float)((float)(*(float*)(v16 + 24i64 * (unsigned int)(v11 + 1)) - *(float*)(v16 + 24 * v11)) * v18)
					+ *(float*)(v16 + 24 * v11);
				a3[1] = (float)((float)(*(float*)(v16 + 24i64 * (unsigned int)(v11 + 1) + 4) - *(float*)(v16 + 24 * v11 + 4))
					* v18)
					+ *(float*)(v16 + 24 * v11 + 4);
				a3[2] = (float)((float)(*(float*)(v16 + 24i64 * (unsigned int)(v11 + 1) + 8) - *(float*)(v16 + 24 * v11 + 8))
					* v18)
					+ *(float*)(v16 + 24 * v11 + 8);
				a3[3] = (float)((float)(*(float*)(v16 + 24i64 * (unsigned int)(v11 + 1) + 12) - *(float*)(v16 + 24 * v11 + 12))
					* v18)
					+ *(float*)(v16 + 24 * v11 + 12);
				a3[4] = (float)((float)(*(float*)(v16 + 24i64 * (unsigned int)(v11 + 1) + 16) - *(float*)(v16 + 24 * v11 + 16))
					* v18)
					+ *(float*)(v16 + 24 * v11 + 16);
				a3[5] = (float)((float)(*(float*)(v16 + 24i64 * (unsigned int)(v11 + 1) + 20) - *(float*)(v16 + 24 * v11 + 20))
					* v18)
					+ *(float*)(v16 + 24 * v11 + 20);
				return result;
			}
		}
		v19 = (unsigned int)(v11 + 1);
		*(_DWORD*)a4 = v19;
		v5 = *(_DWORD*)a1;
		if ((unsigned int)v19 < *(_DWORD*)a1 - 1)
		{
			v20 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(v20 + 4 * v19) <= a2 && a2 < *(_DWORD*)(v20 + 4i64 * (unsigned int)(v19 + 1)))
			{
				v21 = a2 - *(_DWORD*)(v20 + 4 * v19);
				v22 = *(_DWORD*)(v20 + 4i64 * (unsigned int)(v19 + 1)) - *(_DWORD*)(v20 + 4 * v19);
				v23 = *(_QWORD*)(a1 + 16);
				v24 = (float)v22;
				result = (unsigned int)(v19 + 1);
				v25 = (float)v21 / v24;
				*a3 = (float)((float)(*(float*)(v23 + 24 * result) - *(float*)(v23 + 24 * v19)) * v25)
					+ *(float*)(v23 + 24 * v19);
				a3[1] = (float)((float)(*(float*)(v23 + 24 * result + 4) - *(float*)(v23 + 24 * v19 + 4)) * v25)
					+ *(float*)(v23 + 24 * v19 + 4);
				a3[2] = (float)((float)(*(float*)(v23 + 24 * result + 8) - *(float*)(v23 + 24 * v19 + 8)) * v25)
					+ *(float*)(v23 + 24 * v19 + 8);
				a3[3] = (float)((float)(*(float*)(v23 + 24 * result + 12) - *(float*)(v23 + 24 * v19 + 12)) * v25)
					+ *(float*)(v23 + 24 * v19 + 12);
				a3[4] = (float)((float)(*(float*)(v23 + 24 * result + 16) - *(float*)(v23 + 24 * v19 + 16)) * v25)
					+ *(float*)(v23 + 24 * v19 + 16);
				a3[5] = (float)((float)(*(float*)(v23 + 24 * result + 20) - *(float*)(v23 + 24 * v19 + 20)) * v25)
					+ *(float*)(v23 + 24 * v19 + 20);
				return result;
			}
		}
	}
	else
	{
		a4 = &v34;
	}
	v26 = 0i64;
	v27 = v5;
	while ((unsigned int)v26 < v27)
	{
		v28 = (unsigned int)v26 + ((v27 - (unsigned int)v26) >> 1);
		if (a2 >= *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v28))
			v26 = (unsigned int)(v28 + 1);
		else
			v27 = v26 + ((v27 - (unsigned int)v26) >> 1);
	}
	v29 = (unsigned int)(v26 - 1);
	if ((_DWORD)v26)
	{
		if (v5 == (_DWORD)v26)
		{
			v31 = *(_QWORD*)(a1 + 16);
			*a3 = *(float*)(v31 + 24 * v29);
			a3[1] = *(float*)(v31 + 24 * v29 + 4);
			a3[2] = *(float*)(v31 + 24 * v29 + 8);
			a3[3] = *(float*)(v31 + 24 * v29 + 12);
			a3[4] = *(float*)(v31 + 24 * v29 + 16);
			a3[5] = *(float*)(v31 + 24 * v29 + 20);
			result = (unsigned int)(*(_DWORD*)a1 - 2);
			*(_DWORD*)a4 = result;
		}
		else
		{
			v32 = *(_QWORD*)(a1 + 16);
			result = 3 * v29;
			v33 = (float)(int)(a2 - *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v29))
				/ (float)(*(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v26) - *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * v29));
			*a3 = (float)((float)(*(float*)(v32 + 24 * v26) - *(float*)(v32 + 24 * v29)) * v33) + *(float*)(v32 + 24 * v29);
			a3[1] = (float)((float)(*(float*)(v32 + 24 * v26 + 4) - *(float*)(v32 + 24 * v29 + 4)) * v33)
				+ *(float*)(v32 + 24 * v29 + 4);
			a3[2] = (float)((float)(*(float*)(v32 + 24 * v26 + 8) - *(float*)(v32 + 24 * v29 + 8)) * v33)
				+ *(float*)(v32 + 24 * v29 + 8);
			a3[3] = (float)((float)(*(float*)(v32 + 24 * v26 + 12) - *(float*)(v32 + 24 * v29 + 12)) * v33)
				+ *(float*)(v32 + 24 * v29 + 12);
			a3[4] = (float)((float)(*(float*)(v32 + 24 * v26 + 16) - *(float*)(v32 + 24 * v29 + 16)) * v33)
				+ *(float*)(v32 + 24 * v29 + 16);
			a3[5] = (float)((float)(*(float*)(v32 + 24 * v26 + 20) - *(float*)(v32 + 24 * v29 + 20)) * v33)
				+ *(float*)(v32 + 24 * v29 + 20);
			*(_DWORD*)a4 = v29;
		}
	}
	else
	{
		v30 = *(float**)(a1 + 16);
		*a3 = *v30;
		a3[1] = v30[1];
		a3[2] = v30[2];
		a3[3] = v30[3];
		a3[4] = v30[4];
		result = *((unsigned int*)v30 + 5);
		*((_DWORD*)a3 + 5) = result;
		*(_DWORD*)a4 = 0;
	}
	return result;
}

