//----- (000000014013E3A0) ----------------------------------------------------
float* __fastcall sub_14013E3A0(_QWORD* a1, float* a2)
{
	unsigned __int64 v2; // rsi
	__int64 v3; // r14
	unsigned __int64 v6; // rdi
	float v7; // xmm9_4
	float i; // xmm8_4
	float v9; // xmm1_4
	float v11[4]; // [rsp+20h] [rbp-58h] BYREF

	v2 = 0i64;
	v3 = 0i64;
	for (*(_OWORD*)a2 = 0i64; v2 < a1[9]; *a2 = v9)
	{
		v6 = 0i64;
		v7 = 0.0;
		for (i = 0.0; v6 < *(_QWORD*)(a1[8] + 8 * v2); v7 = v7 + *(float*)(a1[10] + 4 * v6 - 4))
		{
			sub_140141910(*(_QWORD*)(a1[12] + 8 * v3), v11);
			++v6;
			i = fmaxf(i, v11[1]);
			++v3;
		}
		++v2;
		v9 = fmaxf(*a2, v7);
		a2[1] = i + a2[1];
	}
	return a2;
}

