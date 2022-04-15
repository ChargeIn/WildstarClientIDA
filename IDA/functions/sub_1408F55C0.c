#include "../winhttp.h"

//----- (00000001408F55C0) ----------------------------------------------------
void** __fastcall sub_1408F55C0(__int64 a1)
{
	void** result; // rax
	unsigned int v2; // r13d
	unsigned int v3; // r12d
	int v5; // esi
	float v6; // xmm7_4
	__int64 v7; // rbp
	__int64 v8; // r15
	__int64 v9; // rbx
	float* v10; // r14
	double v11; // xmm11_8
	double v12; // xmm6_8
	float v13; // xmm8_4
	float v14; // xmm12_4
	float v15; // xmm6_4
	double v16; // xmm0_8
	double v17; // xmm0_8
	double v18; // xmm0_8
	__int64 v19; // r8
	unsigned int v20; // edx
	__int64 v21; // rdx
	void* retaddr; // [rsp+E8h] [rbp+0h] BYREF

	result = &retaddr;
	v2 = *(_DWORD*)(a1 + 196);
	v3 = 0;
	if (v2)
	{
		v5 = dword_140C6345C;
		v6 = *(float*)&dword_140C63458;
		v7 = 0i64;
		v8 = 0i64;
		do
		{
			v9 = *(_QWORD*)(a1 + 24);
			v10 = *(float**)(a1 + 8);
			*(_QWORD*)&v11 = *(unsigned int*)(v9 + v7 + 4);
			*(_QWORD*)&v12 = *(unsigned int*)(v8 + *(_QWORD*)(a1 + 16));
			v13 = v10[3];
			v14 = sub_1408F5F80(a1, COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v9 + v7 + 8)), *(float*)(v9 + v7 + 12));
			if (*(float*)&v12 > v13)
			{
				*(float*)&v12 = *(float*)&v12 / v13;
				v16 = sub_1408FE170(v12);
				v17 = sub_1408FBFC0(
					COERCE_DOUBLE(1092616192i64),
					(float)((float)(*(float*)&v16 * 1.442695) * (float)(v10[4] * -6.0)) * 0.050000001);
				v15 = *(float*)&v17;
			}
			else
			{
				v15 = 1.0;
			}
			if ((v5 & 1) == 0)
			{
				v5 |= 1u;
				v6 = 48.0;
			}
			*(float*)&v11 = *(float*)&v11 / v6;
			v18 = sub_1408FBFC0(v11, (float)((float)(v10[6] + 1.0) * 48.0) * 0.041524101);
			result = (void**)*(unsigned __int16*)(a1 + 200);
			v19 = v3 & 3;
			v20 = v3++;
			*(float*)&v18 = (float)(*(float*)&v18 * v15) * *(float*)(v9 + v7 + 16);
			v8 += 20i64;
			v7 += 32i64;
			*(float*)&v18 = *(float*)&v18 * v14;
			v21 = *(_QWORD*)(a1 + 32) + (unsigned int)result * (v20 >> 2);
			*(_DWORD*)(v21 + 4 * v19 + 32) = LODWORD(v18);
			*(_DWORD*)(v21 + 4 * v19) = LODWORD(v18);
			*(_DWORD*)(v21 + 4 * v19 + 16) = 0;
		} while (v3 < v2);
		dword_140C63458 = LODWORD(v6);
		dword_140C6345C = v5;
		*(_BYTE*)(a1 + 202) = 0;
	}
	else
	{
		*(_BYTE*)(a1 + 202) = 0;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C63458: using guessed type int dword_140C63458;
// 140C6345C: using guessed type int dword_140C6345C;

