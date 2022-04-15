#include "../winhttp.h"

//----- (00000001408FBB00) ----------------------------------------------------
__int64 __fastcall sub_1408FBB00(__int64 a1, float* a2, unsigned int a3)
{
	__int64 v3; // r14
	int v6; // edi
	float* v7; // r10
	float v8; // xmm6_4
	float* v9; // r9
	float* v10; // r11
	float* v11; // r8
	float v12; // xmm0_4
	__int64 v13; // rcx
	float v14; // xmm6_4
	float v15; // xmm6_4
	__int64 v16; // rcx
	float v17; // xmm0_4
	float v18; // xmm6_4
	float v19; // xmm0_4
	float v20; // xmm6_4
	__int64 v21; // rcx
	float v22; // xmm0_4
	float v23; // xmm6_4
	float v24; // xmm0_4
	float v25; // xmm6_4
	__int64 v26; // rcx
	float v27; // xmm0_4
	float v28; // xmm6_4
	float v29; // xmm0_4
	char* v30; // r10
	float v31; // xmm0_4
	__int64 v32; // rcx
	float v33; // xmm6_4
	__int64 result; // rax

	v3 = a3;
	sub_1408F6B80((_DWORD*)a1, (unsigned __int64)a2, 2 * a3);
	v6 = *(_DWORD*)(a1 + 16);
	v7 = &a2[v3];
	v8 = *(float*)(a1 + 20);
	v9 = a2;
	v10 = v7;
	if (a2 < v7)
	{
		if ((4 * v3 + 3) / 4 >= 4)
		{
			v11 = v7 - 3;
			do
			{
				v12 = *v7;
				v9 += 4;
				v7 += 4;
				v13 = dword_1409C6350[(unsigned __int64)(125613361
					* ((unsigned __int16)(v6 + 1) & (unsigned int)-(unsigned __int16)(v6 + 1))) >> 27];
				v14 = v8 - *(float*)(a1 + 4 * v13 + 24);
				*(float*)(a1 + 4 * v13 + 24) = v12;
				v15 = v14 + v12;
				v16 = dword_1409C6350[(unsigned __int64)(125613361
					* ((unsigned __int16)(v6 + 2) & (unsigned int)-(unsigned __int16)(v6 + 2))) >> 27];
				v17 = v15 + *(v9 - 4);
				v18 = v15 - *(float*)(a1 + 4 * v16 + 24);
				*(v9 - 4) = v17 * 0.14705883;
				v19 = *(v7 - 3);
				*(float*)(a1 + 4 * v16 + 24) = v19;
				v20 = v18 + v19;
				v21 = dword_1409C6350[(unsigned __int64)(125613361
					* ((unsigned __int16)(v6 + 3) & (unsigned int)-(unsigned __int16)(v6 + 3))) >> 27];
				v6 = (unsigned __int16)(v6 + 4);
				v22 = v20 + *(v9 - 3);
				v23 = v20 - *(float*)(a1 + 4 * v21 + 24);
				*(v9 - 3) = v22 * 0.14705883;
				v24 = *(v7 - 2);
				*(float*)(a1 + 4 * v21 + 24) = v24;
				v25 = v23 + v24;
				v26 = dword_1409C6350[(unsigned __int64)(125613361 * (v6 & (unsigned int)-v6)) >> 27];
				v27 = v25 + *(v9 - 2);
				v28 = v25 - *(float*)(a1 + 4 * v26 + 24);
				*(v9 - 2) = v27 * 0.14705883;
				v29 = *(v7 - 1);
				v8 = v28 + v29;
				*(float*)(a1 + 4 * v26 + 24) = v29;
				*(v9 - 1) = (float)(v8 + *(v9 - 1)) * 0.14705883;
			} while ((__int64)v9 < (__int64)v11);
		}
		if (v9 < v10)
		{
			v30 = (char*)((char*)v7 - (char*)v9);
			do
			{
				v31 = *(float*)((char*)v9++ + (_QWORD)v30);
				v6 = (unsigned __int16)(v6 + 1);
				v32 = dword_1409C6350[(unsigned __int64)(125613361 * (v6 & (unsigned int)-v6)) >> 27];
				v33 = v8 - *(float*)(a1 + 4 * v32 + 24);
				*(float*)(a1 + 4 * v32 + 24) = v31;
				v8 = v33 + v31;
				*(v9 - 1) = (float)(v8 + *(v9 - 1)) * 0.14705883;
			} while (v9 < v10);
		}
	}
	result = sub_1408AAD50((float*)(a1 + 4), a2, v3);
	*(_DWORD*)(a1 + 16) = v6;
	*(float*)(a1 + 20) = v8;
	return result;
}
// 1409C6350: using guessed type int dword_1409C6350[40];

