#include "../winhttp.h"

//----- (00000001408C8350) ----------------------------------------------------
__int64 __fastcall sub_1408C8350(__int64 a1, int a2, unsigned int a3, int* a4)
{
	unsigned int v4; // ebx
	int* v7; // r10
	__int64 v8; // rsi
	float v9; // xmm2_4
	int v10; // edx
	__int64 result; // rax
	__m128d v12; // xmm0
	int v13; // r9d
	unsigned int v14; // ecx
	unsigned int v15; // r8d
	int v16; // r11d
	__m128d v17; // xmm0
	int v18; // r9d
	unsigned int v19; // ecx
	unsigned int v20; // r8d

	if (a3)
	{
		v4 = 0;
		v7 = a4;
		v8 = a1 - (_QWORD)a4;
		v9 = (float)a2;
		do
		{
			v10 = (int)(float)((float)(*(float*)((char*)v7 + v8) * 0.001) * v9);
			*v7 = v10;
			if (!v4)
			{
				if ((v10 & 1) == 0)
					*v7 = v10 + 1;
				result = (unsigned int)*v7;
				v12 = 0i64;
				v12.m128d_f64[0] = (double)(int)result;
				v13 = (int)_mm_sqrt_pd(v12).m128d_f64[0] + 1;
				while (1)
				{
					v14 = 3;
					if (v13 <= 3)
					{
					LABEL_11:
						v15 = *v7;
						if (*v7)
							goto LABEL_22;
					}
					else
					{
						v15 = *v7;
						while (1)
						{
							result = v15 / v14;
							if (!(v15 % v14))
								break;
							v14 += 2;
							if ((int)v14 >= v13)
								goto LABEL_11;
						}
					}
					result = v15 + 2;
					*v7 = result;
				}
			}
			v16 = a4[v4 - 1];
			if ((v10 & 1) == 0)
				*v7 = v10 + 1;
			result = (unsigned int)*v7;
			v17 = 0i64;
			v17.m128d_f64[0] = (double)(int)result;
			v18 = (int)_mm_sqrt_pd(v17).m128d_f64[0] + 1;
			while (1)
			{
				v19 = 3;
				if (v18 <= 3)
					break;
				v20 = *v7;
				while (1)
				{
					result = v20 / v19;
					if (!(v20 % v19))
						break;
					v19 += 2;
					if ((int)v19 >= v18)
						goto LABEL_20;
				}
			LABEL_21:
				result = v20 + 2;
				*v7 = result;
			}
		LABEL_20:
			v20 = *v7;
			if (*v7 == v16)
				goto LABEL_21;
		LABEL_22:
			++v4;
			++v7;
		} while (v4 < a3);
	}
	return result;
}

