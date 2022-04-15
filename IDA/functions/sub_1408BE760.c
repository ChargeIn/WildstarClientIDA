#include "../winhttp.h"

//----- (00000001408BE760) ----------------------------------------------------
__int64 __fastcall sub_1408BE760(float a1, int a2, __int64 a3, __int64 a4)
{
	float v4; // xmm1_4
	__int64 result; // rax
	float v6; // xmm2_4
	float v7; // xmm0_4
	float v8; // xmm3_4
	__int64 v9; // rcx
	int v10; // esi
	int v11; // edx
	__int64 v12; // r12
	__int64 v13; // rdi
	__int64 v14; // rbx
	__int64 v15; // r14
	__int64 v16; // r15
	unsigned __int64 v17; // rdx
	int v18; // eax
	__int64 v19; // rbx
	unsigned int* v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rcx
	unsigned __int64 v24; // r11
	__int64 v25; // r10
	__int64 v26; // rcx
	float v27; // xmm0_4
	float v28; // xmm1_4
	float v29; // xmm2_4
	float v30; // xmm1_4

	v4 = a1;
	if (a1 > *(float*)(a4 + 12))
	{
		*(_DWORD*)(a4 + 4) = 0;
		*(_DWORD*)(a4 + 16) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a4 + 20) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a4 + 24) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a4 + 28) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a4 + 32) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a4 + 36) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a4 + 40) = *(_DWORD*)(a3 + 8);
		*(_DWORD*)(a4 + 44) = *(_DWORD*)(a3 + 8);
		if (*(float*)a3 != 0.0
			&& a1 >= (float)((float)((float)((float)((float)a2 / (float)*(int*)a4) / *(float*)a3) * 10.0)
				+ *(float*)(a4 + 12)))
		{
			v4 = (float)((float)((float)((float)a2 / (float)*(int*)a4) / *(float*)a3) * 10.0) + *(float*)(a4 + 12);
		}
		*(float*)(a4 + 12) = v4;
		result = *(unsigned int*)(a4 + 12);
		*(_DWORD*)(a4 + 8) = result;
		return result;
	}
	v6 = (float)a2 / (float)*(int*)a4;
	v7 = v6 + *(float*)(a4 + 4);
	*(float*)(a4 + 4) = v7;
	v8 = *(float*)(a3 + 16);
	if (v7 < v8)
	{
		v27 = (float)((float)(v7 / v8) * 8.0) + 0.5;
		result = (unsigned int)((int)v27 - 1);
		if ((int)v27 - 1 >= 0 && v4 > *(float*)(a4 + 4i64 * (int)result + 16))
			*(float*)(a4 + 4i64 * (int)result + 16) = v4;
		if (v4 <= *(float*)(a4 + 8))
			goto LABEL_43;
	}
	else
	{
		v9 = a4 + 16;
		v10 = 0;
		v11 = 8;
		if (*(float*)(a4 + 16) >= v4)
		{
			v4 = *(float*)(a4 + 16);
			v11 = 0;
		}
		if (*(float*)(a4 + 20) >= v4)
		{
			v4 = *(float*)(a4 + 20);
			v11 = 1;
		}
		if (*(float*)(a4 + 24) >= v4)
		{
			v4 = *(float*)(a4 + 24);
			v11 = 2;
		}
		if (*(float*)(a4 + 28) >= v4)
		{
			v4 = *(float*)(a4 + 28);
			v11 = 3;
		}
		if (*(float*)(a4 + 32) >= v4)
		{
			v4 = *(float*)(a4 + 32);
			v11 = 4;
		}
		if (*(float*)(a4 + 36) >= v4)
		{
			v4 = *(float*)(a4 + 36);
			v11 = 5;
		}
		if (*(float*)(a4 + 40) >= v4)
		{
			v4 = *(float*)(a4 + 40);
			v11 = 6;
		}
		if (*(float*)(a4 + 44) >= v4)
		{
			v4 = *(float*)(a4 + 44);
			v11 = 7;
		}
		v12 = 0i64;
		result = (unsigned int)(v11 + 1);
		v13 = (int)result;
		*(float*)(a4 + 4) = (float)(8 - v11) * (float)(v8 * 0.11111111);
		if ((int)result < 8i64)
		{
			result = 8i64 - (int)result;
			if (8 - v13 >= 4)
			{
				v14 = 4 * v13;
				v15 = 4 * v13 + 8;
				v16 = 4 * v13 + 12;
				v17 = ((unsigned __int64)(4 - v13) >> 2) + 1;
				v12 = 4 * v17;
				v10 = 4 * v17;
				v13 += 4 * v17;
				do
				{
					v18 = *(_DWORD*)(v14 + v9);
					v9 += 16i64;
					*(_DWORD*)(v9 - 16) = v18;
					*(_DWORD*)(v9 - 12) = *(_DWORD*)(v14 + v9 - 12);
					*(_DWORD*)(v9 - 8) = *(_DWORD*)(v15 + v9 - 16);
					result = *(unsigned int*)(v16 + v9 - 16);
					*(_DWORD*)(v9 - 4) = result;
					--v17;
				} while (v17);
			}
			if (v13 < 8)
			{
				v19 = 8 - v13;
				v20 = (unsigned int*)(a4 + 16 + 4 * v13);
				v21 = a4 + 16 + 4 * v12;
				v10 += 8 - v13;
				do
				{
					result = *v20;
					v21 += 4i64;
					++v20;
					*(_DWORD*)(v21 - 4) = result;
					--v19;
				} while (v19);
			}
		}
		v22 = v10;
		if (v10 < 8i64)
		{
			result = 8i64 - v10;
			if (result >= 4)
			{
				v23 = a4 + 20 + 4i64 * v10;
				v24 = ((unsigned __int64)(4i64 - v10) >> 2) + 1;
				v22 = v10 + 4 * v24;
				do
				{
					v23 += 16i64;
					*(_DWORD*)(v23 - 20) = *(_DWORD*)(a3 + 8);
					*(_DWORD*)(v23 - 16) = *(_DWORD*)(a3 + 8);
					*(_DWORD*)(v23 - 12) = *(_DWORD*)(a3 + 8);
					result = *(unsigned int*)(a3 + 8);
					*(_DWORD*)(v23 - 8) = result;
					--v24;
				} while (v24);
			}
			if (v22 < 8)
			{
				v25 = 8 - v22;
				v26 = a4 + 16 + 4 * v22;
				do
				{
					result = *(unsigned int*)(a3 + 8);
					v26 += 4i64;
					*(_DWORD*)(v26 - 4) = result;
					--v25;
				} while (v25);
			}
		}
	}
	*(float*)(a4 + 8) = v4;
LABEL_43:
	v28 = *(float*)(a3 + 4);
	if (v28 == 0.0)
	{
		result = *(unsigned int*)(a4 + 8);
		*(_DWORD*)(a4 + 12) = result;
	}
	else
	{
		v29 = v6 / v28;
		v30 = *(float*)(a4 + 8);
		if (v30 <= (float)(*(float*)(a4 + 12) - (float)(v29 * 10.0)))
			v30 = *(float*)(a4 + 12) - (float)(v29 * 10.0);
		*(float*)(a4 + 12) = v30;
	}
	return result;
}

