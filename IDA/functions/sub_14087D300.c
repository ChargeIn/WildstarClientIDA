#include "../winhttp.h"

//----- (000000014087D300) ----------------------------------------------------
__int64 __fastcall sub_14087D300(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	unsigned int v4; // r11d
	unsigned int v5; // esi
	unsigned int v6; // r12d
	float v7; // xmm5_4
	float v8; // xmm6_4
	__int64 v9; // r10
	unsigned int v10; // r13d
	__int64 v11; // r14
	__int64 v12; // rbx
	int v13; // ebp
	float* v14; // rdi
	unsigned int v15; // r15d
	__int64 v16; // r8
	unsigned int v17; // edx
	float v18; // xmm3_4
	float v19; // xmm4_4
	int v20; // eax
	float v21; // xmm2_4
	unsigned int v22; // r10d
	unsigned int i; // r15d
	int v24; // eax
	__int64 v25; // rdx
	float v26; // xmm2_4
	float v27; // xmm0_4
	__int64 v28; // rdx
	float v29; // eax
	unsigned int v30; // ecx
	unsigned int v34; // [rsp+88h] [rbp+20h]

	v4 = *(_DWORD*)(a4 + 32);
	v5 = *(_DWORD*)(a4 + 36);
	v6 = *(unsigned __int16*)(a1 + 18);
	v7 = *(float*)a4;
	v8 = *(float*)(a4 + 4);
	v9 = *(unsigned int*)(a4 + 28);
	v10 = a3 - v9;
	v11 = *(unsigned __int16*)(a2 + 16);
	v12 = HIWORD(v4);
	v13 = (unsigned __int16)v4;
	v14 = (float*)(*(_QWORD*)a1 + 4i64 * *(unsigned int*)(a4 + 24));
	v15 = (v5 - v4 + 0xFFFF) / v5;
	v16 = *(_QWORD*)a2 + 4 * v9;
	if (v10 < v15)
		v15 = v10;
	v34 = v15;
	v17 = v15;
	if (v15)
	{
		v18 = *v14 - v7;
		v19 = v14[(unsigned int)(v11 + 1) - 1] - v8;
		do
		{
			v20 = v13;
			v4 += v5;
			v16 += 4i64;
			v12 = HIWORD(v4);
			v13 = (unsigned __int16)v4;
			v21 = (float)v20 * 0.000015258789;
			*(float*)(v16 - 4) = (float)(v21 * v18) + v7;
			*(float*)(v16 + 4 * v11 - 4) = (float)(v19 * v21) + v8;
			--v17;
		} while (v17);
	}
	v22 = (v5 + (v6 << 16) - v4 - 1) / v5;
	if (v10 - v15 < v22)
		v22 = v10 - v15;
	for (i = v22; i; --i)
	{
		v24 = v13;
		v25 = (unsigned int)(v11 + v12);
		v4 += v5;
		v16 += 4i64;
		v13 = (unsigned __int16)v4;
		v26 = (float)v24 * 0.000015258789;
		v27 = (float)((float)(v14[(unsigned int)(v12 + 1) - 1] - v14[v12 - 1]) * v26) + v14[v12 - 1];
		v12 = HIWORD(v4);
		*(float*)(v16 - 4) = v27;
		*(float*)(v16 + 4 * v11 - 4) = (float)((float)(v14[(unsigned int)(v25 + 1) - 1] - v14[v25 - 1]) * v26)
			+ v14[v25 - 1];
	}
	v28 = v6;
	if ((unsigned int)v12 < v6)
		v28 = (unsigned int)v12;
	if ((_DWORD)v28)
	{
		v29 = v14[(unsigned int)(v28 + v11) - 1];
		*(float*)a4 = v14[v28 - 1];
		*(float*)(a4 + 4) = v29;
	}
	v30 = v22 + v34;
	*(_DWORD*)(a4 + 32) = v4 - ((_DWORD)v28 << 16);
	*(_WORD*)(a1 + 18) -= v28;
	*(_WORD*)(a2 + 18) = *(_WORD*)(a4 + 28) + v22 + v34;
	if ((_DWORD)v28 == v6)
		*(_DWORD*)(a4 + 24) = 0;
	else
		*(_DWORD*)(a4 + 24) += v28;
	if (v30 == v10)
		return 45i64;
	*(_DWORD*)(a4 + 28) += v30;
	return 43i64;
}

