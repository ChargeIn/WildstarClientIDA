//----- (000000014087DC50) ----------------------------------------------------
__int64 __fastcall sub_14087DC50(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	__int64 v4; // rdi
	__int64 v5; // r10
	int v6; // ebp
	unsigned int v7; // r12d
	float v8; // xmm2_4
	float v9; // xmm3_4
	unsigned int v10; // ebx
	int v11; // r14d
	__int64 v12; // r15
	__int64 v13; // r9
	float* v14; // rsi
	int v15; // ecx
	__int64 v16; // r8
	int v17; // r14d
	int v18; // ecx
	__int64 v19; // r9
	__int64 v20; // r11
	int v21; // r13d
	__int64 v22; // r10
	unsigned int v23; // edx
	int v24; // ecx
	int v25; // eax
	float v26; // xmm1_4
	__int64 v27; // r9
	unsigned int v28; // ecx
	int v29; // r10d
	unsigned int v30; // r14d
	int v31; // eax
	__int64 v32; // rdx
	float v33; // xmm2_4
	__int64 v34; // rdx
	float v35; // eax
	__int64 v36; // r8
	unsigned int v38; // [rsp+0h] [rbp-68h]
	int v39; // [rsp+4h] [rbp-64h]
	int v40; // [rsp+8h] [rbp-60h]
	__int64 v41; // [rsp+10h] [rbp-58h]

	v4 = a4;
	v5 = *(unsigned int*)(a4 + 28);
	v6 = *(_DWORD*)(a4 + 44);
	v7 = *(_DWORD*)(a4 + 48);
	v8 = *(float*)a4;
	v9 = *(float*)(a4 + 4);
	v10 = *(_DWORD*)(a4 + 32);
	v11 = *(_DWORD*)(a4 + 40);
	v38 = *(unsigned __int16*)(a1 + 18);
	v12 = *(unsigned __int16*)(a2 + 16);
	v13 = (unsigned int)(a3 - v5);
	v14 = (float*)(*(_QWORD*)a1 + 4i64 * *(unsigned int*)(v4 + 24));
	v15 = *(_DWORD*)(v4 + 36);
	v16 = *(_QWORD*)a2 + 4 * v5;
	v17 = v11 - v15;
	v18 = v15 << 10;
	v40 = v13;
	v19 = v16 + 4 * v13;
	v20 = HIWORD(v10);
	v21 = (unsigned __int16)v10;
	v22 = (v19 - v16) >> 2;
	v41 = v16;
	v39 = v18;
	if ((unsigned int)v22 >= (1024 - v6) / v7)
		LODWORD(v22) = (1024 - v6) / v7;
	if (!(_DWORD)v20)
	{
		v23 = v18 + v6 * v17;
		v24 = (unsigned __int16)v10;
		do
		{
			v25 = v22;
			LODWORD(v22) = v22 - 1;
			if (!v25)
				break;
			v23 += v7 * v17;
			v16 += 4i64;
			v6 += v7;
			v26 = (float)v24 * 0.000015258789;
			*(float*)(v16 - 4) = (float)((float)(*v14 - v8) * v26) + v8;
			v10 += v23 >> 10;
			v24 = (unsigned __int16)v10;
			v20 = HIWORD(v10);
			*(float*)(v16 + 4 * v12 - 4) = (float)((float)(v14[(unsigned int)(v12 + 1) - 1] - v9) * v26) + v9;
		} while (!(_DWORD)v20);
		v21 = v24;
	}
	v27 = (v19 - v16) >> 2;
	v28 = v38 - 1;
	if ((unsigned int)v27 >= (1024 - v6) / v7)
		LODWORD(v27) = (1024 - v6) / v7;
	if ((unsigned int)v20 <= v28)
	{
		v29 = v7 * v17;
		v30 = v39 + v6 * v17;
		do
		{
			v31 = v27;
			LODWORD(v27) = v27 - 1;
			if (!v31)
				break;
			v32 = (unsigned int)(v12 + v20);
			v30 += v29;
			v16 += 4i64;
			v6 += v7;
			v33 = (float)v21 * 0.000015258789;
			*(float*)(v16 - 4) = (float)((float)(v14[(unsigned int)(v20 + 1) - 1] - v14[v20 - 1]) * v33) + v14[v20 - 1];
			v10 += v30 >> 10;
			v21 = (unsigned __int16)v10;
			v20 = HIWORD(v10);
			*(float*)(v16 + 4 * v12 - 4) = (float)((float)(v14[(unsigned int)(v32 + 1) - 1] - v14[v32 - 1]) * v33)
				+ v14[v32 - 1];
		} while ((unsigned int)v20 <= v28);
		v4 = a4;
	}
	*(_DWORD*)(v4 + 44) = v6;
	v34 = v38;
	if ((unsigned int)v20 < v38)
		v34 = (unsigned int)v20;
	if ((_DWORD)v34)
	{
		v35 = v14[(unsigned int)(v34 + v12) - 1];
		*(float*)v4 = v14[v34 - 1];
		*(float*)(v4 + 4) = v35;
	}
	v36 = (v16 - v41) >> 2;
	*(_DWORD*)(v4 + 32) = v10 - ((_DWORD)v34 << 16);
	*(_WORD*)(a1 + 18) -= v34;
	*(_WORD*)(a2 + 18) = *(_WORD*)(v4 + 28) + v36;
	if ((_DWORD)v34 == v38)
		*(_DWORD*)(v4 + 24) = 0;
	else
		*(_DWORD*)(v4 + 24) += v34;
	if ((_DWORD)v36 == v40)
		return 45i64;
	*(_DWORD*)(v4 + 28) += v36;
	return 43i64;
}

