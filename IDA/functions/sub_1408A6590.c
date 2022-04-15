//----- (00000001408A6590) ----------------------------------------------------
void** __fastcall sub_1408A6590(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	void** result; // rax
	float v5; // xmm2_4
	float v6; // xmm3_4
	unsigned int v7; // edi
	unsigned int v9; // r8d
	float v12; // xmm8_4
	float v13; // xmm9_4
	float v14; // xmm10_4
	unsigned int v15; // r14d
	float v17; // xmm4_4
	float v18; // xmm1_4
	float v19; // xmm5_4
	float v20; // xmm6_4
	float i; // xmm7_4
	int v22; // r9d
	__int64 v23; // rdx
	unsigned int v24; // ecx
	float v25; // xmm1_4
	__int64 v26; // rax
	float v27; // xmm0_4
	void* retaddr; // [rsp+58h] [rbp+0h] BYREF

	result = &retaddr;
	v5 = *(float*)(a1 + 28);
	v6 = *(float*)(a1 + 32);
	v7 = *(_DWORD*)(a1 + 8);
	v9 = *(_DWORD*)(a1 + 24);
	v12 = *(float*)(a1 + 40);
	v13 = *(float*)(a1 + 44);
	v14 = *(float*)(a1 + 48);
	v15 = v7 - *(_DWORD*)a1;
	v17 = *(float*)(a1 + 36);
	v18 = 1.0 / (float)a3;
	v19 = (float)(v12 - v5) * v18;
	v20 = (float)(v13 - v6) * v18;
	for (i = (float)(v14 - v17) * v18; a3; v9 %= v7)
	{
		v22 = a3;
		v23 = (v15 + v9) % v7;
		v24 = v7 - v23;
		if (v7 - v9 < v7 - (unsigned int)v23)
			v24 = v7 - v9;
		if (v24 < a3)
			v22 = v24;
		for (a3 -= v22; v22; --v22)
		{
			v25 = *(float*)(a4 + 4 * v23);
			v26 = v9;
			v5 = v5 + v19;
			a2 += 4i64;
			++v9;
			v23 = (unsigned int)(v23 + 1);
			v6 = v6 + v20;
			v17 = v17 + i;
			v27 = (float)(v25 * v5) + *(float*)(a2 - 4);
			*(float*)(a4 + 4 * v26) = v27;
			*(float*)(a2 - 4) = (float)(v27 * v17) + (float)(v25 * v6);
		}
		result = (void**)(v9 / v7);
	}
	*(float*)(a1 + 28) = v12;
	*(float*)(a1 + 32) = v13;
	*(float*)(a1 + 36) = v14;
	*(_DWORD*)(a1 + 24) = v9;
	return result;
}

