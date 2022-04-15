#include "../winhttp.h"

//----- (00000001402D5280) ----------------------------------------------------
void __fastcall sub_1402D5280(__int64 a1, unsigned int* a2, unsigned int a3)
{
	__int64 v5; // rbp
	__int64 v6; // rsi
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64 v11; // r8
	float* v12; // rax
	float v13; // xmm0_4
	float v14; // xmm1_4
	float v15; // xmm2_4
	float v16; // xmm3_4
	float v17; // xmm4_4
	float v18; // xmm5_4
	float v19; // xmm6_4
	float v20; // xmm7_4
	unsigned __int8 v21; // r11
	float v22; // xmm0_4
	float v23; // xmm1_4
	float v24; // xmm2_4
	char v25; // r9
	float v26; // xmm0_4
	float v27; // xmm1_4
	float v28; // xmm2_4

	if (a3)
	{
		v5 = a3;
		do
		{
			v6 = *a2;
			v7 = *(_QWORD*)(a1 + 8);
			v8 = *(_DWORD*)(a1 + 16);
			if (*(_DWORD*)(v7 + 4 * v6) != v8)
			{
				*(_DWORD*)(v7 + 4 * v6) = v8;
				if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 2 * v6) & *(_BYTE*)(a1 + 32)) != 0)
				{
					v9 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
					v10 = *(_QWORD*)(*(_QWORD*)a1 + 16i64);
					v11 = (unsigned int)(3 * v6);
					v12 = **(float***)a1;
					v13 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11) + 8);
					v14 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11) + 4);
					v15 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11));
					v16 = v12[6];
					v17 = v12[2];
					v18 = v12[5];
					v19 = v12[1];
					v20 = v12[4];
					v21 = (*v12 > v15) | (2
						* ((v15 > v20) | (2
							* ((v19 > v14) | (2
								* ((v14 > v18) | (2 * ((v17 > v13) | (2 * (v13 > v16))))))))));
					v22 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11 + 4) + 8);
					v23 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11 + 4) + 4);
					v24 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11 + 4));
					v25 = (*v12 > v24) | (2
						* ((v24 > v20) | (2
							* ((v19 > v23) | (2
								* ((v23 > v18) | (2 * ((v17 > v22) | (2 * (v22 > v16))))))))));
					v26 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11 + 8) + 8);
					v27 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11 + 8) + 4);
					v28 = *(float*)(v9 + 12i64 * *(unsigned int*)(v10 + 4 * v11 + 8));
					if (((unsigned __int8)(v25 & ((*v12 > v28) | (2
						* ((v28 > v20) | (2
							* ((v19 > v27) | (2
								* ((v27 > v18) | (2 * ((v17 > v26) | (2 * (v26 > v16)))))))))))) & v21) == 0)
						sub_1402D43A0(*(__int64**)(*(_QWORD*)a1 + 8i64), v6);
				}
			}
			++a2;
			--v5;
		} while (v5);
	}
}

