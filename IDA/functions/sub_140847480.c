#include "../winhttp.h"

//----- (0000000140847480) ----------------------------------------------------
void __fastcall sub_140847480(__int64 a1, float a2)
{
	float* v2; // rax
	float v5; // xmm4_4
	bool v6; // zf
	float* v7; // rcx
	float v8; // xmm1_4
	float v9; // xmm2_4
	float v10; // xmm3_4
	float v11; // xmm2_4
	float v12; // xmm3_4
	float* v13; // rcx
	__int64 v14; // rdx
	float v15; // xmm0_4
	float v16; // xmm0_4
	__int64 v17; // rcx
	__int64 v18; // rdi
	float v19; // xmm2_4
	float v20; // xmm6_4
	double v21; // xmm0_8
	__int64 v22; // rax
	float v23; // xmm0_4

	v2 = *(float**)(a1 + 40);
	if (*(float**)(a1 + 48) == v2)
	{
		*(_DWORD*)(a1 + 68) = 0;
	}
	else
	{
		v5 = *(float*)(a1 + 64);
		v6 = *(_BYTE*)(a1 + 92) == 0;
		v7 = *(float**)(a1 + 48);
		v8 = 0.0;
		if (v6)
		{
			do
			{
				if (v8 <= (float)((float)(v5 * v2[5]) * a2))
					v8 = (float)(v5 * v2[5]) * a2;
				v2 += 9;
			} while (v2 != v7);
		}
		else
		{
			v9 = 0.0;
			v10 = 0.0;
			do
			{
				if (v8 <= (float)((float)(v5 * v2[5]) * a2))
					v8 = (float)(v5 * v2[5]) * a2;
				if (v9 <= v2[6])
					v9 = v2[6];
				if (v10 <= v2[7])
					v10 = v2[7];
				v2 += 9;
			} while (v2 != v7);
			v11 = v9 * v5;
			v12 = v10 * v5;
			if (*(_BYTE*)(a1 + 464))
			{
				v13 = (float*)(a1 + 224);
				v14 = *(unsigned __int8*)(a1 + 464);
				do
				{
					if (*((_DWORD*)v13 + 2))
						v15 = v12;
					else
						v15 = v11;
					v16 = (float)(v15 * *(v13 - 4)) * *(float*)(*(_QWORD*)v13 + 1120i64);
					if (v8 <= v16)
						v8 = v16;
					v13 += 8;
					--v14;
				} while (v14);
			}
		}
		v17 = *(_QWORD*)(a1 + 32);
		*(float*)(a1 + 68) = v8;
		if (v17)
		{
			v18 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24i64);
			v6 = (*(_BYTE*)(v18 + 232) & 2) == 0;
			v19 = (float)(COERCE_FLOAT((LODWORD(v8) & 0x7FFFFF) + 1065353216) - 1.0)
				/ (float)(COERCE_FLOAT((LODWORD(v8) & 0x7FFFFF) + 1065353216) + 1.0);
			v20 = (float)((float)((float)((float)((float)((float)(v19 * v19) * 0.33333334) + 1.0) * (float)(v19 * 2.0))
				+ (float)((float)((float)(unsigned __int8)(LODWORD(v8) >> 23) - 127.0) * 0.69314718))
				* 0.43429449)
				* 20.0;
			*(float*)(a1 + 72) = v20;
			if (v6)
			{
				if (v20 > *(float*)(v17 + 1136))
					*(float*)(v17 + 1136) = v20;
			}
			else
			{
				v21 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
				if ((float)-*(float*)&v21 < *(float*)(v18 + 228))
				{
					v22 = *(_QWORD*)(a1 + 32);
					v23 = *(float*)&v21 + v20;
					if (v23 > *(float*)(v22 + 1136))
						*(float*)(v22 + 1136) = v23;
				}
			}
		}
	}
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

