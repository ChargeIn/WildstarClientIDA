//----- (000000014087D150) ----------------------------------------------------
__int64 __fastcall sub_14087D150(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	unsigned int v4; // esi
	unsigned int v5; // r11d
	__int64 v6; // r10
	unsigned int v7; // ebp
	unsigned int v10; // r15d
	float v11; // xmm2_4
	int v12; // edi
	__int64 v13; // r9
	float* v14; // r14
	unsigned int v15; // r12d
	__int64 v16; // r8
	unsigned int v17; // ecx
	float v18; // xmm1_4
	int v19; // eax
	unsigned int v20; // r10d
	unsigned int i; // edx
	int v22; // eax
	float v23; // xmm1_4
	__int64 v24; // rdx
	unsigned int v25; // ecx

	v4 = *(_DWORD*)(a4 + 36);
	v5 = *(_DWORD*)(a4 + 32);
	v6 = *(unsigned int*)(a4 + 28);
	v7 = *(unsigned __int16*)(a1 + 18);
	v10 = a3 - v6;
	v11 = *(float*)a4;
	v12 = (unsigned __int16)v5;
	v13 = HIWORD(v5);
	v14 = (float*)(*(_QWORD*)a1 + 4i64 * *(unsigned int*)(a4 + 24));
	v15 = (v4 - v5 + 0xFFFF) / v4;
	v16 = *(_QWORD*)a2 + 4 * v6;
	if (v10 < v15)
		v15 = v10;
	v17 = v15;
	if (v15)
	{
		v18 = *v14 - v11;
		do
		{
			v19 = v12;
			v5 += v4;
			v16 += 4i64;
			v12 = (unsigned __int16)v5;
			v13 = HIWORD(v5);
			*(float*)(v16 - 4) = (float)((float)((float)v19 * 0.000015258789) * v18) + v11;
			--v17;
		} while (v17);
	}
	v20 = (v4 + (v7 << 16) - v5 - 1) / v4;
	if (v10 - v15 < v20)
		v20 = v10 - v15;
	for (i = v20; i; --i)
	{
		v5 += v4;
		v16 += 4i64;
		v22 = v12;
		v12 = (unsigned __int16)v5;
		v23 = (float)((float)(v14[(unsigned int)(v13 + 1) - 1] - v14[v13 - 1]) * (float)((float)v22 * 0.000015258789))
			+ v14[v13 - 1];
		v13 = HIWORD(v5);
		*(float*)(v16 - 4) = v23;
	}
	v24 = v7;
	if ((unsigned int)v13 < v7)
		v24 = (unsigned int)v13;
	if ((_DWORD)v24)
		*(float*)a4 = v14[v24 - 1];
	v25 = v20 + v15;
	*(_DWORD*)(a4 + 32) = v5 - ((_DWORD)v24 << 16);
	*(_WORD*)(a1 + 18) -= v24;
	*(_WORD*)(a2 + 18) = *(_WORD*)(a4 + 28) + v20 + v15;
	if ((_DWORD)v24 == v7)
		*(_DWORD*)(a4 + 24) = 0;
	else
		*(_DWORD*)(a4 + 24) += v24;
	if (v25 == v10)
		return 45i64;
	*(_DWORD*)(a4 + 28) += v25;
	return 43i64;
}

