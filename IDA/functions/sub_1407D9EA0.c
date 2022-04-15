#include "../winhttp.h"

//----- (00000001407D9EA0) ----------------------------------------------------
__int64 __fastcall sub_1407D9EA0(int* a1, unsigned int a2, float* a3, char* a4)
{
	unsigned int v5; // r9d
	float* v9; // rcx
	__int64 result; // rax
	__int64 v11; // rcx
	__int64 v12; // r8
	unsigned int v13; // esi
	unsigned int v14; // r9d
	int v15; // r9d
	float* v16; // rdx
	float* v17; // rcx
	float v18; // xmm3_4
	__int64 v19; // rsi
	__int64 v20; // r14
	float* v21; // rdx
	float v22; // xmm3_4
	unsigned int v23; // edx
	unsigned int v24; // r8d
	__int64 v25; // rcx
	__int64 v26; // rsi
	float* v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rdx
	__int64 v30; // r9
	__int64 v31; // rdx
	float* v32; // r9
	float* v33; // r8
	float v34; // xmm3_4
	char v35; // [rsp+10h] [rbp+8h] BYREF

	v5 = *a1;
	if (*a1 == 1)
	{
		v9 = (float*)*((_QWORD*)a1 + 2);
		*a3 = *v9;
		a3[1] = v9[1];
		a3[2] = v9[2];
		a3[3] = v9[3];
		a3[4] = v9[4];
		a3[5] = v9[5];
		a3[6] = v9[6];
		a3[7] = v9[7];
		a3[8] = v9[8];
		a3[9] = v9[9];
		a3[10] = v9[10];
		a3[11] = v9[11];
		a3[12] = v9[12];
		a3[13] = v9[13];
		a3[14] = v9[14];
		a3[15] = v9[15];
		a3[16] = v9[16];
		a3[17] = v9[17];
		a3[18] = v9[18];
		a3[19] = v9[19];
		a3[20] = v9[20];
		a3[21] = v9[21];
		a3[22] = v9[22];
		a3[23] = v9[23];
		a3[24] = v9[24];
		a3[25] = v9[25];
		result = *((unsigned int*)v9 + 26);
		*((_DWORD*)a3 + 26) = result;
		return result;
	}
	if (a4)
	{
		v11 = *(unsigned int*)a4;
		v12 = *((_QWORD*)a1 + 1);
		v13 = *(_DWORD*)(v12 + 4 * v11);
		if (v13 <= a2)
		{
			v14 = *(_DWORD*)(v12 + 4i64 * (unsigned int)(v11 + 1));
			if (a2 < v14)
			{
				v15 = v14 - v13;
				result = (unsigned int)v15;
				v16 = (float*)(*((_QWORD*)a1 + 2) + 108i64 * (unsigned int)(v11 + 1));
				v17 = (float*)(*((_QWORD*)a1 + 2) + 108 * v11);
				v18 = (float)(int)(a2 - v13) / (float)v15;
				*a3 = (float)((float)(*v16 - *v17) * v18) + *v17;
				a3[9] = (float)((float)(v16[9] - v17[9]) * v18) + v17[9];
				a3[18] = (float)((float)(v16[18] - v17[18]) * v18) + v17[18];
				a3[1] = (float)((float)(v16[1] - v17[1]) * v18) + v17[1];
				a3[10] = (float)((float)(v16[10] - v17[10]) * v18) + v17[10];
				a3[19] = (float)((float)(v16[19] - v17[19]) * v18) + v17[19];
				a3[2] = (float)((float)(v16[2] - v17[2]) * v18) + v17[2];
				a3[11] = (float)((float)(v16[11] - v17[11]) * v18) + v17[11];
				a3[20] = (float)((float)(v16[20] - v17[20]) * v18) + v17[20];
				a3[3] = (float)((float)(v16[3] - v17[3]) * v18) + v17[3];
				a3[12] = (float)((float)(v16[12] - v17[12]) * v18) + v17[12];
				a3[21] = (float)((float)(v16[21] - v17[21]) * v18) + v17[21];
				a3[4] = (float)((float)(v16[4] - v17[4]) * v18) + v17[4];
				a3[13] = (float)((float)(v16[13] - v17[13]) * v18) + v17[13];
				a3[22] = (float)((float)(v16[22] - v17[22]) * v18) + v17[22];
				a3[5] = (float)((float)(v16[5] - v17[5]) * v18) + v17[5];
				a3[14] = (float)((float)(v16[14] - v17[14]) * v18) + v17[14];
				a3[23] = (float)((float)(v16[23] - v17[23]) * v18) + v17[23];
				a3[6] = (float)((float)(v16[6] - v17[6]) * v18) + v17[6];
				a3[15] = (float)((float)(v16[15] - v17[15]) * v18) + v17[15];
				a3[24] = (float)((float)(v16[24] - v17[24]) * v18) + v17[24];
				a3[7] = (float)((float)(v16[7] - v17[7]) * v18) + v17[7];
				a3[16] = (float)((float)(v16[16] - v17[16]) * v18) + v17[16];
				a3[25] = (float)((float)(v16[25] - v17[25]) * v18) + v17[25];
				a3[8] = (float)((float)(v16[8] - v17[8]) * v18) + v17[8];
				a3[17] = (float)((float)(v16[17] - v17[17]) * v18) + v17[17];
				a3[26] = (float)((float)(v16[26] - v17[26]) * v18) + v17[26];
				return result;
			}
		}
		v19 = (unsigned int)(v11 + 1);
		*(_DWORD*)a4 = v19;
		v5 = *a1;
		if ((unsigned int)v19 < *a1 - 1)
		{
			v20 = *((_QWORD*)a1 + 1);
			if (*(_DWORD*)(v20 + 4 * v19) <= a2 && a2 < *(_DWORD*)(v20 + 4i64 * (unsigned int)(v11 + 2)))
			{
				v21 = (float*)(*((_QWORD*)a1 + 2) + 108i64 * (unsigned int)(v11 + 2));
				result = *((_QWORD*)a1 + 2) + 108i64 * (unsigned int)v19;
				v22 = (float)(int)(a2 - *(_DWORD*)(v20 + 4 * v19))
					/ (float)(*(_DWORD*)(v20 + 4i64 * (unsigned int)(v11 + 2))
						- *(_DWORD*)(v20 + 4i64 * (unsigned int)(v11 + 1)));
				*a3 = (float)((float)(*v21 - *(float*)result) * v22) + *(float*)result;
				a3[9] = (float)((float)(v21[9] - *(float*)(result + 36)) * v22) + *(float*)(result + 36);
				a3[18] = (float)((float)(v21[18] - *(float*)(result + 72)) * v22) + *(float*)(result + 72);
				a3[1] = (float)((float)(v21[1] - *(float*)(result + 4)) * v22) + *(float*)(result + 4);
				a3[10] = (float)((float)(v21[10] - *(float*)(result + 40)) * v22) + *(float*)(result + 40);
				a3[19] = (float)((float)(v21[19] - *(float*)(result + 76)) * v22) + *(float*)(result + 76);
				a3[2] = (float)((float)(v21[2] - *(float*)(result + 8)) * v22) + *(float*)(result + 8);
				a3[11] = (float)((float)(v21[11] - *(float*)(result + 44)) * v22) + *(float*)(result + 44);
				a3[20] = (float)((float)(v21[20] - *(float*)(result + 80)) * v22) + *(float*)(result + 80);
				a3[3] = (float)((float)(v21[3] - *(float*)(result + 12)) * v22) + *(float*)(result + 12);
				a3[12] = (float)((float)(v21[12] - *(float*)(result + 48)) * v22) + *(float*)(result + 48);
				a3[21] = (float)((float)(v21[21] - *(float*)(result + 84)) * v22) + *(float*)(result + 84);
				a3[4] = (float)((float)(v21[4] - *(float*)(result + 16)) * v22) + *(float*)(result + 16);
				a3[13] = (float)((float)(v21[13] - *(float*)(result + 52)) * v22) + *(float*)(result + 52);
				a3[22] = (float)((float)(v21[22] - *(float*)(result + 88)) * v22) + *(float*)(result + 88);
				a3[5] = (float)((float)(v21[5] - *(float*)(result + 20)) * v22) + *(float*)(result + 20);
				a3[14] = (float)((float)(v21[14] - *(float*)(result + 56)) * v22) + *(float*)(result + 56);
				a3[23] = (float)((float)(v21[23] - *(float*)(result + 92)) * v22) + *(float*)(result + 92);
				a3[6] = (float)((float)(v21[6] - *(float*)(result + 24)) * v22) + *(float*)(result + 24);
				a3[15] = (float)((float)(v21[15] - *(float*)(result + 60)) * v22) + *(float*)(result + 60);
				a3[24] = (float)((float)(v21[24] - *(float*)(result + 96)) * v22) + *(float*)(result + 96);
				a3[7] = (float)((float)(v21[7] - *(float*)(result + 28)) * v22) + *(float*)(result + 28);
				a3[16] = (float)((float)(v21[16] - *(float*)(result + 64)) * v22) + *(float*)(result + 64);
				a3[25] = (float)((float)(v21[25] - *(float*)(result + 100)) * v22) + *(float*)(result + 100);
				a3[8] = (float)((float)(v21[8] - *(float*)(result + 32)) * v22) + *(float*)(result + 32);
				a3[17] = (float)((float)(v21[17] - *(float*)(result + 68)) * v22) + *(float*)(result + 68);
				a3[26] = (float)((float)(v21[26] - *(float*)(result + 104)) * v22) + *(float*)(result + 104);
				return result;
			}
		}
	}
	else
	{
		a4 = &v35;
	}
	v23 = 0;
	v24 = v5;
	while (v23 < v24)
	{
		v25 = v23 + ((v24 - v23) >> 1);
		if (a2 >= *(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v25))
			v23 = v25 + 1;
		else
			v24 = v23 + ((v24 - v23) >> 1);
	}
	v26 = v23 - 1;
	if (v23)
	{
		if (v5 == v23)
		{
			v28 = *((_QWORD*)a1 + 2);
			v29 = 108i64 * (unsigned int)v26;
			*a3 = *(float*)(v29 + v28);
			a3[1] = *(float*)(v29 + v28 + 4);
			a3[2] = *(float*)(v29 + v28 + 8);
			a3[3] = *(float*)(v29 + v28 + 12);
			a3[4] = *(float*)(v29 + v28 + 16);
			a3[5] = *(float*)(v29 + v28 + 20);
			a3[6] = *(float*)(v29 + v28 + 24);
			a3[7] = *(float*)(v29 + v28 + 28);
			a3[8] = *(float*)(v29 + v28 + 32);
			a3[9] = *(float*)(v29 + v28 + 36);
			a3[10] = *(float*)(v29 + v28 + 40);
			a3[11] = *(float*)(v29 + v28 + 44);
			a3[12] = *(float*)(v29 + v28 + 48);
			a3[13] = *(float*)(v29 + v28 + 52);
			a3[14] = *(float*)(v29 + v28 + 56);
			a3[15] = *(float*)(v29 + v28 + 60);
			a3[16] = *(float*)(v29 + v28 + 64);
			a3[17] = *(float*)(v29 + v28 + 68);
			a3[18] = *(float*)(v29 + v28 + 72);
			a3[19] = *(float*)(v29 + v28 + 76);
			a3[20] = *(float*)(v29 + v28 + 80);
			a3[21] = *(float*)(v29 + v28 + 84);
			a3[22] = *(float*)(v29 + v28 + 88);
			a3[23] = *(float*)(v29 + v28 + 92);
			a3[24] = *(float*)(v29 + v28 + 96);
			a3[25] = *(float*)(v29 + v28 + 100);
			a3[26] = *(float*)(v29 + v28 + 104);
			result = (unsigned int)(*a1 - 2);
			*(_DWORD*)a4 = result;
		}
		else
		{
			v30 = v23;
			v31 = *((_QWORD*)a1 + 1);
			result = (unsigned int)(*(_DWORD*)(v31 + 4 * v30) - *(_DWORD*)(v31 + 4 * v26));
			v32 = (float*)(*((_QWORD*)a1 + 2) + 108 * v30);
			v33 = (float*)(*((_QWORD*)a1 + 2) + 108i64 * (unsigned int)v26);
			v34 = (float)(int)(a2 - *(_DWORD*)(v31 + 4 * v26)) / (float)(int)result;
			*a3 = (float)((float)(*v32 - *v33) * v34) + *v33;
			a3[9] = (float)((float)(v32[9] - v33[9]) * v34) + v33[9];
			a3[18] = (float)((float)(v32[18] - v33[18]) * v34) + v33[18];
			a3[1] = (float)((float)(v32[1] - v33[1]) * v34) + v33[1];
			a3[10] = (float)((float)(v32[10] - v33[10]) * v34) + v33[10];
			a3[19] = (float)((float)(v32[19] - v33[19]) * v34) + v33[19];
			a3[2] = (float)((float)(v32[2] - v33[2]) * v34) + v33[2];
			a3[11] = (float)((float)(v32[11] - v33[11]) * v34) + v33[11];
			a3[20] = (float)((float)(v32[20] - v33[20]) * v34) + v33[20];
			a3[3] = (float)((float)(v32[3] - v33[3]) * v34) + v33[3];
			a3[12] = (float)((float)(v32[12] - v33[12]) * v34) + v33[12];
			a3[21] = (float)((float)(v32[21] - v33[21]) * v34) + v33[21];
			a3[4] = (float)((float)(v32[4] - v33[4]) * v34) + v33[4];
			a3[13] = (float)((float)(v32[13] - v33[13]) * v34) + v33[13];
			a3[22] = (float)((float)(v32[22] - v33[22]) * v34) + v33[22];
			a3[5] = (float)((float)(v32[5] - v33[5]) * v34) + v33[5];
			a3[14] = (float)((float)(v32[14] - v33[14]) * v34) + v33[14];
			a3[23] = (float)((float)(v32[23] - v33[23]) * v34) + v33[23];
			a3[6] = (float)((float)(v32[6] - v33[6]) * v34) + v33[6];
			a3[15] = (float)((float)(v32[15] - v33[15]) * v34) + v33[15];
			a3[24] = (float)((float)(v32[24] - v33[24]) * v34) + v33[24];
			a3[7] = (float)((float)(v32[7] - v33[7]) * v34) + v33[7];
			a3[16] = (float)((float)(v32[16] - v33[16]) * v34) + v33[16];
			a3[25] = (float)((float)(v32[25] - v33[25]) * v34) + v33[25];
			a3[8] = (float)((float)(v32[8] - v33[8]) * v34) + v33[8];
			a3[17] = (float)((float)(v32[17] - v33[17]) * v34) + v33[17];
			a3[26] = (float)((float)(v32[26] - v33[26]) * v34) + v33[26];
			*(_DWORD*)a4 = v26;
		}
	}
	else
	{
		v27 = (float*)*((_QWORD*)a1 + 2);
		*a3 = *v27;
		a3[1] = v27[1];
		a3[2] = v27[2];
		a3[3] = v27[3];
		a3[4] = v27[4];
		a3[5] = v27[5];
		a3[6] = v27[6];
		a3[7] = v27[7];
		a3[8] = v27[8];
		a3[9] = v27[9];
		a3[10] = v27[10];
		a3[11] = v27[11];
		a3[12] = v27[12];
		a3[13] = v27[13];
		a3[14] = v27[14];
		a3[15] = v27[15];
		a3[16] = v27[16];
		a3[17] = v27[17];
		a3[18] = v27[18];
		a3[19] = v27[19];
		a3[20] = v27[20];
		a3[21] = v27[21];
		a3[22] = v27[22];
		a3[23] = v27[23];
		a3[24] = v27[24];
		a3[25] = v27[25];
		result = *((unsigned int*)v27 + 26);
		*((_DWORD*)a3 + 26) = result;
		*(_DWORD*)a4 = 0;
	}
	return result;
}

