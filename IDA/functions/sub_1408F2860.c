#include "../winhttp.h"

//----- (00000001408F2860) ----------------------------------------------------
__int64 __fastcall sub_1408F2860(__int64 a1, int* a2)
{
	int v2; // r15d
	__int64 v4; // rsi
	__int64 v5; // rbp
	float* v6; // rdi
	float v7; // xmm6_4
	__int64 v8; // r14
	__int64 v9; // rax
	float v10; // xmm0_4
	float v11; // xmm1_4
	float v12; // xmm0_4
	float v13; // xmm0_4
	unsigned int v14; // eax

	v2 = *a2;
	if (*(_DWORD*)(a1 + 292))
	{
		v4 = 0i64;
		v5 = 0i64;
		v6 = (float*)(a1 + 136);
		v7 = *(float*)(a1 + 56) / *(float*)(a1 + 60);
		v8 = 7i64;
		do
		{
			v9 = *(_QWORD*)(a1 + 8);
			if (*(_BYTE*)(v4 + v9 + 208))
				*v6 = sub_140835CA0((_DWORD*)(v5 + v9 + 8), v7 * *(float*)(a1 + 52), *((_DWORD*)v6 - 17), (_DWORD*)v6 - 17);
			else
				*v6 = 0.0;
			++v4;
			v5 += 16i64;
			++v6;
			--v8;
		} while (v8);
	}
	v10 = (double)v2 / (double)*(int*)(a1 + 288);
	v11 = *(float*)(a1 + 60);
	v12 = (float)(v10 * *(float*)(*(_QWORD*)(a1 + 8) + 148i64)) + *(float*)(a1 + 52);
	*(float*)(a1 + 52) = v12;
	if (v12 >= v11)
	{
		v13 = sub_1408FDE98(v12, v11);
		++* (_DWORD*)(a1 + 40);
		*(float*)(a1 + 52) = v13;
		*(_QWORD*)(a1 + 68) = 0i64;
		*(_QWORD*)(a1 + 76) = 0i64;
		*(_QWORD*)(a1 + 84) = 0i64;
		*(_DWORD*)(a1 + 92) = 0;
		v14 = *(_DWORD*)(a1 + 44);
		if (v14 && *(_DWORD*)(a1 + 40) >= v14)
			return 17i64;
		sub_1408F2D20(a1);
	}
	return 45i64;
}

