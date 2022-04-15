#include "../winhttp.h"

//----- (000000014087DA40) ----------------------------------------------------
__int64 __fastcall sub_14087DA40(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	unsigned int v4; // r13d
	__int64 v6; // r10
	float v7; // xmm2_4
	unsigned int v8; // r12d
	unsigned int v9; // ebx
	float* v10; // r15
	__int64 v11; // r9
	__int64 v12; // r8
	int v13; // eax
	int v14; // r10d
	int v15; // edi
	__int64 v16; // r9
	__int64 v17; // r11
	int v18; // r14d
	__int64 v19; // rbp
	unsigned int v20; // ecx
	int v21; // eax
	float v22; // xmm0_4
	__int64 v23; // r9
	unsigned int v24; // ebp
	int v25; // edx
	unsigned int v26; // edi
	int v27; // eax
	float v28; // xmm0_4
	float v29; // xmm1_4
	__int64 v30; // rdx
	__int64 v31; // r8
	__int64 v33; // [rsp+0h] [rbp-58h]
	int v36; // [rsp+70h] [rbp+18h]
	int v37; // [rsp+78h] [rbp+20h]

	v4 = *(unsigned __int16*)(a1 + 18);
	v6 = *(unsigned int*)(a4 + 28);
	v7 = *(float*)a4;
	v8 = *(_DWORD*)(a4 + 48);
	v9 = *(_DWORD*)(a4 + 32);
	v10 = (float*)(*(_QWORD*)a1 + 4i64 * *(unsigned int*)(a4 + 24));
	v11 = (unsigned int)(a3 - v6);
	v12 = *(_QWORD*)a2 + 4 * v6;
	v13 = *(_DWORD*)(a4 + 36);
	v14 = *(_DWORD*)(a4 + 44);
	v15 = *(_DWORD*)(a4 + 40) - v13;
	v36 = v13 << 10;
	v37 = v11;
	v16 = v12 + 4 * v11;
	v17 = HIWORD(v9);
	v18 = (unsigned __int16)v9;
	v33 = v12;
	v19 = (v16 - v12) >> 2;
	if ((unsigned int)v19 >= (1024 - v14) / v8)
		LODWORD(v19) = (1024 - v14) / v8;
	if (!(_DWORD)v17)
	{
		v20 = v36 + v14 * v15;
		do
		{
			v21 = v19;
			LODWORD(v19) = v19 - 1;
			if (!v21)
				break;
			v22 = (float)v18;
			v20 += v8 * v15;
			v12 += 4i64;
			v14 += v8;
			v9 += v20 >> 10;
			v18 = (unsigned __int16)v9;
			v17 = HIWORD(v9);
			*(float*)(v12 - 4) = (float)((float)(*v10 - v7) * (float)(v22 * 0.000015258789)) + v7;
		} while (!(_DWORD)v17);
	}
	v23 = (v16 - v12) >> 2;
	v24 = v4 - 1;
	if ((unsigned int)v23 >= (1024 - v14) / v8)
		LODWORD(v23) = (1024 - v14) / v8;
	if ((unsigned int)v17 <= v24)
	{
		v25 = v8 * v15;
		v26 = v36 + v14 * v15;
		do
		{
			v27 = v23;
			LODWORD(v23) = v23 - 1;
			if (!v27)
				break;
			v26 += v25;
			v12 += 4i64;
			v14 += v8;
			v28 = (float)v18;
			v9 += v26 >> 10;
			v18 = (unsigned __int16)v9;
			v29 = (float)((float)(v10[(unsigned int)(v17 + 1) - 1] - v10[v17 - 1]) * (float)(v28 * 0.000015258789))
				+ v10[v17 - 1];
			v17 = HIWORD(v9);
			*(float*)(v12 - 4) = v29;
		} while ((unsigned int)v17 <= v24);
	}
	v30 = v4;
	*(_DWORD*)(a4 + 44) = v14;
	if ((unsigned int)v17 < v4)
		v30 = (unsigned int)v17;
	if ((_DWORD)v30)
		*(float*)a4 = v10[v30 - 1];
	v31 = (v12 - v33) >> 2;
	*(_DWORD*)(a4 + 32) = v9 - ((_DWORD)v30 << 16);
	*(_WORD*)(a1 + 18) -= v30;
	*(_WORD*)(a2 + 18) = *(_WORD*)(a4 + 28) + v31;
	if ((_DWORD)v30 == v4)
		*(_DWORD*)(a4 + 24) = 0;
	else
		*(_DWORD*)(a4 + 24) += v30;
	if ((_DWORD)v31 == v37)
		return 45i64;
	*(_DWORD*)(a4 + 28) += v31;
	return 43i64;
}

