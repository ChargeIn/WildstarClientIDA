#include "../winhttp.h"

//----- (00000001408F5290) ----------------------------------------------------
void __fastcall sub_1408F5290(__int64 a1)
{
	int v1; // r14d
	unsigned int v2; // r12d
	__int64 v4; // xmm7_8
	float v5; // xmm10_4
	float v6; // xmm6_4
	__int64 v7; // r13
	__int64 v8; // r15
	__int64 v9; // rsi
	__int64 v10; // rbp
	__int64 v11; // rbx
	double v12; // xmm0_8
	__int64 v13; // rcx
	__int64 v14; // rdx
	unsigned int v15; // eax
	__int64 v16; // r8
	__int64 v17; // rcx
	__int64 v18; // rdx

	v1 = *(_DWORD*)(a1 + 196);
	v2 = 0;
	v4 = *(unsigned int*)(a1 + 72);
	*(float*)&v4 = (float)(*(float*)&v4 * 3.1415927) * 0.0055555557;
	v5 = *(float*)(*(_QWORD*)(a1 + 8) + 20i64);
	v6 = v5 * 2.0;
	if (v1)
	{
		v7 = *(_QWORD*)(a1 + 24);
		v8 = (unsigned int)v1;
		v9 = 0i64;
		v10 = 0i64;
		do
		{
			v11 = *(_QWORD*)(a1 + 16);
			HIDWORD(v12) = HIDWORD(v4);
			*(float*)&v12 = *(float*)&v4 - (float)((float)(*(float*)(v11 + v10 + 4) * 3.1415927) * 0.0055555557);
			*(float*)(v9 + v7) = v5 - (float)(sub_1408FC950(v12) * *(float*)(v11 + v10));
			v7 = *(_QWORD*)(a1 + 24);
			if (v6 >= *(float*)(v9 + v7))
				v6 = *(float*)(v9 + v7);
			v10 += 20i64;
			v9 += 32i64;
			--v8;
		} while (v8);
	}
	v13 = 0i64;
	if (v1 >= 4)
	{
		v14 = 0i64;
		v15 = ((unsigned int)(v1 - 4) >> 2) + 1;
		v16 = v15;
		v2 = 4 * v15;
		v13 = 4i64 * v15;
		do
		{
			v14 += 128i64;
			*(float*)(v14 + *(_QWORD*)(a1 + 24) - 128) = *(float*)(v14 + *(_QWORD*)(a1 + 24) - 128) - v6;
			*(float*)(v14 + *(_QWORD*)(a1 + 24) - 96) = *(float*)(v14 + *(_QWORD*)(a1 + 24) - 96) - v6;
			*(float*)(v14 + *(_QWORD*)(a1 + 24) - 64) = *(float*)(v14 + *(_QWORD*)(a1 + 24) - 64) - v6;
			*(float*)(v14 + *(_QWORD*)(a1 + 24) - 32) = *(float*)(v14 + *(_QWORD*)(a1 + 24) - 32) - v6;
			--v16;
		} while (v16);
	}
	if (v2 < v1)
	{
		v17 = 32 * v13;
		v18 = v1 - v2;
		do
		{
			v17 += 32i64;
			*(float*)(v17 + *(_QWORD*)(a1 + 24) - 32) = *(float*)(v17 + *(_QWORD*)(a1 + 24) - 32) - v6;
			--v18;
		} while (v18);
	}
}

