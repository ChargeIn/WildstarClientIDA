#include "../winhttp.h"

//----- (00000001408F6890) ----------------------------------------------------
__int64 __fastcall sub_1408F6890(__int64 a1, float* a2, unsigned int a3)
{
	__int64 v3; // r14
	int v6; // edi
	float v7; // xmm6_4
	float* v8; // r10
	float* v9; // r9
	float* v10; // r11
	float* v11; // r8
	float v12; // xmm0_4
	__int64 v13; // rcx
	float v14; // xmm6_4
	float v15; // xmm6_4
	float v16; // xmm0_4
	__int64 v17; // rcx
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
	__int64 v34; // rax
	__int64 result; // rax
	__int64 v36; // [rsp+20h] [rbp-58h]
	__int64 v37; // [rsp+28h] [rbp-50h]
	__int64 v38; // [rsp+30h] [rbp-48h]
	__int64 v39; // [rsp+38h] [rbp-40h]
	__int64 v40; // [rsp+40h] [rbp-38h]
	__int64 v41; // [rsp+48h] [rbp-30h]
	__int64 v42; // [rsp+50h] [rbp-28h]
	__int64 v43; // [rsp+58h] [rbp-20h]

	v3 = a3;
	sub_1408F6B80((_DWORD*)a1, (unsigned __int64)a2, 2 * a3);
	v6 = *(_DWORD*)(a1 + 16);
	v7 = *(float*)(a1 + 20);
	v36 = *(_QWORD*)(a1 + 24);
	v8 = &a2[v3];
	v37 = *(_QWORD*)(a1 + 32);
	v9 = a2;
	v38 = *(_QWORD*)(a1 + 40);
	v10 = v8;
	v39 = *(_QWORD*)(a1 + 48);
	v40 = *(_QWORD*)(a1 + 56);
	v41 = *(_QWORD*)(a1 + 64);
	v42 = *(_QWORD*)(a1 + 72);
	v43 = *(_QWORD*)(a1 + 80);
	if (a2 < v8)
	{
		if ((4 * v3 + 3) / 4 >= 4)
		{
			v11 = v8 - 3;
			do
			{
				v12 = *v8;
				v9 += 4;
				v8 += 4;
				v13 = dword_1409C61B0[(unsigned __int64)(125613361
					* ((unsigned __int16)(v6 + 1) & (unsigned int)-(unsigned __int16)(v6 + 1))) >> 27];
				v14 = v7 - *((float*)&v36 + v13);
				*((float*)&v36 + v13) = v12;
				v15 = v14 + v12;
				v16 = v15 + *(v9 - 4);
				v17 = dword_1409C61B0[(unsigned __int64)(125613361
					* ((unsigned __int16)(v6 + 2) & (unsigned int)-(unsigned __int16)(v6 + 2))) >> 27];
				v18 = v15 - *((float*)&v36 + v17);
				*(v9 - 4) = v16 * 0.14705883;
				v19 = *(v8 - 3);
				*((float*)&v36 + v17) = v19;
				v20 = v18 + v19;
				v21 = dword_1409C61B0[(unsigned __int64)(125613361
					* ((unsigned __int16)(v6 + 3) & (unsigned int)-(unsigned __int16)(v6 + 3))) >> 27];
				v6 = (unsigned __int16)(v6 + 4);
				v22 = v20 + *(v9 - 3);
				v23 = v20 - *((float*)&v36 + v21);
				*(v9 - 3) = v22 * 0.14705883;
				v24 = *(v8 - 2);
				*((float*)&v36 + v21) = v24;
				v25 = v23 + v24;
				v26 = dword_1409C61B0[(unsigned __int64)(125613361 * (v6 & (unsigned int)-v6)) >> 27];
				v27 = v25 + *(v9 - 2);
				v28 = v25 - *((float*)&v36 + v26);
				*(v9 - 2) = v27 * 0.14705883;
				v29 = *(v8 - 1);
				v7 = v28 + v29;
				*((float*)&v36 + v26) = v29;
				*(v9 - 1) = (float)(v7 + *(v9 - 1)) * 0.14705883;
			} while ((__int64)v9 < (__int64)v11);
		}
		if (v9 < v10)
		{
			v30 = (char*)((char*)v8 - (char*)v9);
			do
			{
				v31 = *(float*)((char*)v9++ + (_QWORD)v30);
				v6 = (unsigned __int16)(v6 + 1);
				v32 = dword_1409C61B0[(unsigned __int64)(125613361 * (v6 & (unsigned int)-v6)) >> 27];
				v33 = v7 - *((float*)&v36 + v32);
				*((float*)&v36 + v32) = v31;
				v7 = v33 + v31;
				*(v9 - 1) = (float)(v7 + *(v9 - 1)) * 0.14705883;
			} while (v9 < v10);
		}
	}
	sub_1408AAD50((float*)(a1 + 4), a2, v3);
	v34 = v36;
	*(_DWORD*)(a1 + 16) = v6;
	*(float*)(a1 + 20) = v7;
	*(_QWORD*)(a1 + 24) = v34;
	*(_QWORD*)(a1 + 32) = v37;
	*(_QWORD*)(a1 + 40) = v38;
	*(_QWORD*)(a1 + 48) = v39;
	*(_QWORD*)(a1 + 56) = v40;
	*(_QWORD*)(a1 + 64) = v41;
	*(_QWORD*)(a1 + 72) = v42;
	result = v43;
	*(_QWORD*)(a1 + 80) = v43;
	return result;
}
// 1409C61B0: using guessed type int dword_1409C61B0[35];

