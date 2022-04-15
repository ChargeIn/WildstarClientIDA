#include "../winhttp.h"

//----- (00000001408F5820) ----------------------------------------------------
__int64 __fastcall sub_1408F5820(__int64 a1, int a2)
{
	unsigned int v2; // r13d
	__int64 result; // rax
	unsigned int v4; // r15d
	int v6; // edi
	float v7; // xmm8_4
	__int64 v8; // rbp
	__int64 v9; // r12
	float v10; // xmm13_4
	__int64 v11; // rbx
	float* v12; // r14
	double v13; // xmm11_8
	double v14; // xmm6_8
	float v15; // xmm7_4
	float v16; // xmm12_4
	float v17; // xmm6_4
	double v18; // xmm0_8
	double v19; // xmm0_8
	double v20; // xmm0_8
	__int64 v21; // r8
	unsigned int v22; // edx
	float v23; // xmm1_4
	float v24; // xmm1_4
	__int64 v25; // rdx

	v2 = *(_DWORD*)(a1 + 196);
	result = (unsigned int)a2;
	v4 = 0;
	if (v2)
	{
		v6 = dword_140C6345C;
		v7 = *(float*)&dword_140C63458;
		v8 = 0i64;
		v9 = 0i64;
		v10 = 1.0 / (float)a2;
		do
		{
			v11 = *(_QWORD*)(a1 + 24);
			v12 = *(float**)(a1 + 8);
			*(_QWORD*)&v13 = *(unsigned int*)(v11 + v8 + 4);
			*(_QWORD*)&v14 = *(unsigned int*)(v9 + *(_QWORD*)(a1 + 16));
			v15 = v12[3];
			v16 = sub_1408F5F80(a1, COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v11 + v8 + 8)), *(float*)(v11 + v8 + 12));
			if (*(float*)&v14 > v15)
			{
				*(float*)&v14 = *(float*)&v14 / v15;
				v18 = sub_1408FE170(v14);
				v19 = sub_1408FBFC0(
					COERCE_DOUBLE(1092616192i64),
					(float)((float)(*(float*)&v18 * 1.442695) * (float)(v12[4] * -6.0)) * 0.050000001);
				v17 = *(float*)&v19;
			}
			else
			{
				v17 = 1.0;
			}
			if ((v6 & 1) == 0)
			{
				v6 |= 1u;
				v7 = 48.0;
			}
			*(float*)&v13 = *(float*)&v13 / v7;
			v20 = sub_1408FBFC0(v13, (float)((float)(v12[6] + 1.0) * 48.0) * 0.041524101);
			result = *(unsigned __int16*)(a1 + 200);
			v21 = v4 & 3;
			v22 = v4++;
			v23 = (float)(*(float*)&v20 * v17) * *(float*)(v11 + v8 + 16);
			v9 += 20i64;
			v8 += 32i64;
			v24 = v23 * v16;
			v25 = *(_QWORD*)(a1 + 32) + (unsigned int)result * (v22 >> 2);
			*(float*)&v20 = v24 - *(float*)(v25 + 4 * v21);
			*(float*)(v25 + 4 * v21 + 32) = v24;
			*(float*)(v25 + 4 * v21 + 16) = *(float*)&v20 * v10;
		} while (v4 < v2);
		dword_140C63458 = LODWORD(v7);
		dword_140C6345C = v6;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C63458: using guessed type int dword_140C63458;
// 140C6345C: using guessed type int dword_140C6345C;

