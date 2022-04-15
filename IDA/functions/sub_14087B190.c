#include "../winhttp.h"

//----- (000000014087B190) ----------------------------------------------------
unsigned __int64 __fastcall sub_14087B190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	int v4; // r10d
	unsigned int v5; // ebp
	unsigned int i; // edi
	float v11; // xmm1_4
	unsigned __int64 v12; // rdx
	__int64 v13; // rbx
	double v14; // xmm8_8
	double v15; // xmm10_8
	double v16; // xmm12_8
	double v17; // xmm14_8
	double v18; // xmm15_8
	float v19; // xmm6_4
	float v20; // xmm7_4
	float v21; // xmm9_4
	float v22; // xmm11_4
	float v23; // xmm13_4
	unsigned __int64 result; // rax

	v4 = *(_DWORD*)(a2 + 8);
	v5 = 0;
	for (i = 0; v4; v4 &= v4 - 1)
		++i;
	do
	{
		v11 = *(float*)(a1 + 4);
		v12 = (unsigned __int64)v5 << 6;
		v13 = *(_QWORD*)a2 + 4 * v5 * (unsigned __int64)*(unsigned __int16*)(a2 + 16);
		*(_QWORD*)&v14 = *(unsigned int*)(v12 + a4 + 36);
		*(_QWORD*)&v15 = *(unsigned int*)(v12 + a4 + 40);
		*(_QWORD*)&v16 = *(unsigned int*)(v12 + a4 + 52);
		*(_QWORD*)&v17 = *(unsigned int*)(v12 + a4 + 44);
		*(_QWORD*)&v18 = *(unsigned int*)(v12 + a4 + 48);
		v19 = (float)(*(float*)(v12 + a4 + 4) - *(float*)&v14) * v11;
		v20 = (float)(*(float*)(v12 + a4 + 8) - *(float*)&v15) * v11;
		v21 = (float)(*(float*)(v12 + a4 + 20) - *(float*)&v16) * v11;
		v22 = (float)(*(float*)(v12 + a4 + 12) - *(float*)&v17) * v11;
		v23 = (float)(*(float*)(v12 + a4 + 16) - *(float*)&v18) * v11;
		sub_14087ADA0(
			(unsigned __int16*)a1,
			v13,
			*(_QWORD*)a3,
			COERCE_DOUBLE((unsigned __int64)*(_DWORD*)(v12 + a4 + 32)),
			(float)(*(float*)(v12 + a4) - *(float*)(v12 + a4 + 32)) * v11);
		sub_14087ADA0((unsigned __int16*)a1, v13, *(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16), v14, v19);
		sub_14087ADA0((unsigned __int16*)a1, v13, *(_QWORD*)a3 + 8i64 * *(unsigned __int16*)(a3 + 16), v15, v20);
		sub_14087ADA0((unsigned __int16*)a1, v13, *(_QWORD*)a3 + 20i64 * *(unsigned __int16*)(a3 + 16), v16, v21);
		sub_14087ADA0((unsigned __int16*)a1, v13, *(_QWORD*)a3 + 12i64 * *(unsigned __int16*)(a3 + 16), v17, v22);
		result = sub_14087ADA0(
			(unsigned __int16*)a1,
			v13,
			*(_QWORD*)a3 + 16i64 * *(unsigned __int16*)(a3 + 16),
			v18,
			v23);
		++v5;
	} while (v5 < i);
	return result;
}

