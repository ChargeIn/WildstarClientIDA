#include "../winhttp.h"

//----- (00000001401AE7B0) ----------------------------------------------------
void __fastcall sub_1401AE7B0(unsigned __int64 a1, __int64 a2, float* a3, __int64 a4)
{
	__int64 v4; // r14
	unsigned __int64 v6; // r10
	__int64 v7; // r11
	__int64 v8; // rbp
	char* v9; // r8
	char* v11; // rdi
	unsigned __int64 v12; // rdx
	float v13; // xmm1_4
	float* v14; // rax
	unsigned __int64 v15; // rcx
	float v16; // xmm0_4
	float v17; // xmm0_4
	float v18; // xmm1_4
	float v19; // xmm0_4
	float* v20; // rax
	unsigned __int64 v21; // rcx
	float v22; // xmm0_4

	if (a1)
	{
		v4 = 4 * a1;
		v6 = 0i64;
		v7 = a2 - (_QWORD)a3;
		v8 = -4i64 * a1;
		v9 = (char*)a3 - a2;
		v11 = v9 + 12;
		do
		{
			v12 = 1i64;
			v13 = *(float*)((char*)a3 + v7) * *a3;
			*(float*)(a4 + 4 * v6) = v13;
			if (a1 > 1)
			{
				if ((__int64)(a1 - 1) >= 4)
				{
					v14 = (float*)((char*)a3 + v7 + 4);
					v15 = ((a1 - 5) >> 2) + 1;
					v12 = 4 * v15 + 1;
					do
					{
						v16 = *(float*)&v9[(_QWORD)v14];
						v14 += 4;
						v17 = (float)(v16 * *(v14 - 4)) + v13;
						*(float*)(a4 + 4 * v6) = v17;
						v18 = (float)(*(float*)&v9[(_QWORD)v14 - 12] * *(v14 - 3)) + v17;
						*(float*)(a4 + 4 * v6) = v18;
						v19 = (float)(*(float*)&v11[(_QWORD)v14 - 20] * *(v14 - 2)) + v18;
						*(float*)(a4 + 4 * v6) = v19;
						v13 = (float)(*(float*)&v11[(_QWORD)v14 - 16] * *(v14 - 1)) + v19;
						*(float*)(a4 + 4 * v6) = v13;
						--v15;
					} while (v15);
				}
				if (v12 < a1)
				{
					v20 = &a3[v12];
					v21 = a1 - v12;
					do
					{
						v22 = *(float*)((char*)v20++ + v7);
						v13 = v13 + (float)(v22 * *(v20 - 1));
						*(float*)(a4 + 4 * v6) = v13;
						--v21;
					} while (v21);
				}
			}
			++v6;
			v11 += v8;
			v9 += v8;
			v7 += v4;
		} while (v6 < a1);
	}
}

