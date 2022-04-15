#include "../winhttp.h"

//----- (00000001408F5DA0) ----------------------------------------------------
void __fastcall sub_1408F5DA0(__int64 a1, float a2)
{
	float v3; // xmm6_4
	double v4; // xmm0_8
	int v5; // r10d
	unsigned int v6; // r11d
	__int64 v7; // rdi
	float v8; // xmm3_4
	__int64 v9; // rcx
	__int64 v10; // rdx
	unsigned int v11; // eax
	__int64 v12; // r9
	__int64 v13; // r8
	float v14; // xmm0_4
	__int64 v15; // r8
	float v16; // xmm0_4
	__int64 v17; // r8
	float v18; // xmm0_4
	__int64 v19; // r8
	float v20; // xmm0_4
	float v21; // xmm0_4
	__int64 v22; // rdx
	__int64 v23; // rcx
	__int64 v24; // r9
	__int64 v25; // r8
	float v26; // xmm0_4
	float v27; // xmm0_4

	v3 = *(float*)(*(_QWORD*)(a1 + 8) + 56i64);
	v4 = sub_1408FBFC0(COERCE_DOUBLE(1092616192i64), a2 * 0.050000001);
	v5 = *(_DWORD*)(a1 + 196);
	v6 = 0;
	v7 = 0i64;
	v8 = *(float*)&v4;
	if (v5 >= 4)
	{
		v9 = 0i64;
		v10 = 0i64;
		v11 = ((unsigned int)(v5 - 4) >> 2) + 1;
		v12 = v11;
		v6 = 4 * v11;
		v7 = 4i64 * v11;
		do
		{
			v13 = *(_QWORD*)(a1 + 24);
			v14 = (float)(v3 * *(float*)(v13 + v9 + 28)) * v8;
			if (v14 < 16.0)
			{
				if (v14 <= 0.0)
					v14 = 0.0;
			}
			else
			{
				v14 = 16.0;
			}
			*(float*)(v13 + v9 + 16) = v14 * *(float*)(*(_QWORD*)(a1 + 16) + v10 + 16);
			v15 = *(_QWORD*)(a1 + 24);
			v16 = (float)(v3 * *(float*)(v15 + v9 + 60)) * v8;
			if (v16 < 16.0)
			{
				if (v16 <= 0.0)
					v16 = 0.0;
			}
			else
			{
				v16 = 16.0;
			}
			*(float*)(v15 + v9 + 48) = v16 * *(float*)(*(_QWORD*)(a1 + 16) + v10 + 36);
			v17 = *(_QWORD*)(a1 + 24);
			v18 = (float)(v3 * *(float*)(v17 + v9 + 92)) * v8;
			if (v18 < 16.0)
			{
				if (v18 <= 0.0)
					v18 = 0.0;
			}
			else
			{
				v18 = 16.0;
			}
			*(float*)(v17 + v9 + 80) = v18 * *(float*)(*(_QWORD*)(a1 + 16) + v10 + 56);
			v19 = *(_QWORD*)(a1 + 24);
			v20 = (float)(v3 * *(float*)(v19 + v9 + 124)) * v8;
			if (v20 < 16.0)
			{
				if (v20 <= 0.0)
					v20 = 0.0;
			}
			else
			{
				v20 = 16.0;
			}
			v21 = v20 * *(float*)(*(_QWORD*)(a1 + 16) + v10 + 76);
			v9 += 128i64;
			v10 += 80i64;
			*(float*)(v19 + v9 - 16) = v21;
			--v12;
		} while (v12);
	}
	if (v6 < v5)
	{
		v22 = 20 * v7;
		v23 = 32 * v7;
		v24 = v5 - v6;
		do
		{
			v25 = *(_QWORD*)(a1 + 24);
			v26 = (float)(v3 * *(float*)(v25 + v23 + 28)) * v8;
			if (v26 < 16.0)
			{
				if (v26 <= 0.0)
					v26 = 0.0;
			}
			else
			{
				v26 = 16.0;
			}
			v27 = v26 * *(float*)(*(_QWORD*)(a1 + 16) + v22 + 16);
			v23 += 32i64;
			v22 += 20i64;
			*(float*)(v25 + v23 - 16) = v27;
			--v24;
		} while (v24);
	}
}

