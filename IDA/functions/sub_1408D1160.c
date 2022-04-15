//----- (00000001408D1160) ----------------------------------------------------
void __fastcall sub_1408D1160(__int64 a1, int a2, float* a3, float a4)
{
	int v6; // xmm5_4
	int v7; // xmm7_4
	int v8; // xmm9_4
	int v9; // xmm10_4
	float v10; // xmm1_4
	float v11; // xmm2_4
	int v12; // xmm1_4
	__int64 v13; // [rsp+30h] [rbp-68h]

	sub_1408A5270(a1, a2, a3);
	v6 = *(_DWORD*)(a1 + 16);
	v7 = *(_DWORD*)(a1 + 20);
	v8 = *(_DWORD*)(a1 + 4);
	v9 = *(_DWORD*)(a1 + 8);
	v13 = *(_QWORD*)(a1 + 16);
	if (*(_DWORD*)a3)
		v10 = 1.0;
	else
		v10 = 6.2831855;
	v11 = (float)(v10 * a4) * 0.0027777778;
	if (HIDWORD(v13) == 1)
	{
		v11 = v11 + 0.25;
	}
	else if (HIDWORD(v13) == 3)
	{
		v11 = v11 + 0.5;
	}
	if (v11 < 0.0)
		v11 = v11 + v10;
	if (v11 >= v10)
		v11 = v11 - v10;
	*(_DWORD*)a1 = *(_DWORD*)a1;
	*(_DWORD*)(a1 + 4) = v8;
	*(_DWORD*)(a1 + 8) = v9;
	*(float*)(a1 + 12) = v11;
	*(_DWORD*)(a1 + 16) = v6;
	*(_DWORD*)(a1 + 20) = v7;
	if (HIDWORD(v13))
		v12 = 1065353216;
	else
		v12 = 1086918619;
	*(float*)(a1 + 12) = sub_1408FDE98(v11, *(float*)&v12);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

