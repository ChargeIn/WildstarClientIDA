#include "../winhttp.h"

//----- (00000001408D8CE0) ----------------------------------------------------
void __fastcall sub_1408D8CE0(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, int a5)
{
	int v5; // r11d
	int v8; // r9d
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // r9
	__int64 v14; // r8
	__int64 v15; // rdx
	unsigned __int64 v16; // rax
	double v17; // xmm0_8
	float v18; // xmm1_4
	__int64 v19; // rdx
	double v20; // xmm0_8

	v5 = 0;
	if (a3 >= 4 && (a4 + 4i64 * a5 > a2 + 8i64 * (a3 - 1) || a4 + 4i64 * (a3 - 1 + a5) < a2))
	{
		v8 = a5 + 2;
		do
		{
			v9 = v5;
			v5 += 4;
			v10 = v8 - a5;
			*(_QWORD*)(a4 + 4i64 * (v8 - 2)) = *(_QWORD*)(a2 + 8 * v9);
			v11 = v8;
			v8 += 4;
			*(_QWORD*)(a4 + 4 * v11) = *(_QWORD*)(a2 + 8i64 * v10);
		} while (v5 < a3 - (a3 & 3));
	}
	v12 = v5;
	v13 = a3;
	if (v5 < (__int64)a3)
	{
		if (a3 - (__int64)v5 >= 4)
		{
			v14 = a4 + 4 * (v5 + (__int64)a5);
			v15 = a2 + 16 + 8i64 * v5;
			v16 = ((unsigned __int64)(v13 - v5 - 4) >> 2) + 1;
			v12 = v5 + 4 * v16;
			do
			{
				v17 = *(double*)(v15 - 16);
				v14 += 16i64;
				v15 += 32i64;
				*(float*)&v17 = v17;
				*(_DWORD*)(v14 - 16) = LODWORD(v17);
				v18 = *(double*)(v15 - 40);
				*(float*)(v14 - 12) = v18;
				*(float*)(v14 - 8) = *(double*)(v15 - 32);
				*(float*)(v14 - 4) = *(double*)(v15 - 24);
				--v16;
			} while (v16);
		}
		if (v12 < v13)
		{
			v19 = a4 + 4 * (v12 + a5);
			do
			{
				v20 = *(double*)(a2 + 8 * v12++);
				v19 += 4i64;
				*(float*)(v19 - 4) = v20;
			} while (v12 < v13);
		}
	}
}
// 1408D8D3D: conditional instruction was optimized away because r8d.4>=4
// 1408D8D38: mask 0x80000003 is shortened because r8d.4 <= 0x7FFFFFFF

