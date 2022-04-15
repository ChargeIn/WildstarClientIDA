//----- (00000001408FA750) ----------------------------------------------------
void* __fastcall sub_1408FA750(float* a1, int a2)
{
	void* result; // rax
	float* v5; // rbp
	float* v6; // rdi
	float* v7; // rsi
	float v8; // xmm2_4
	float v9; // xmm0_4
	float v10; // xmm1_4
	float v11; // xmm0_4
	float* v12; // rdi
	float v13; // xmm2_4
	float v14; // xmm0_4

	result = (void*)*(unsigned int*)a1;
	if ((_DWORD)result == 2)
	{
		v12 = a1 + 34;
		result = sub_1408FA420(
			(__int64)a1,
			a1[126],
			COERCE_DOUBLE((unsigned __int64)*((_DWORD*)a1 + 127)),
			a1 + 33,
			(_DWORD*)a1 + 34);
		v13 = 1.0 / (float)a2;
		v14 = (float)(*v12 - a1[26]) * v13;
		a1[29] = (float)(a1[33] - a1[25]) * v13;
		a1[30] = v14;
	}
	else if ((_DWORD)result == 4)
	{
		v5 = a1 + 36;
		v6 = a1 + 34;
		v7 = a1 + 35;
		result = sub_1408FA4E0(
			(__int64)a1,
			a1[126],
			COERCE_DOUBLE((unsigned __int64)*((_DWORD*)a1 + 127)),
			a1 + 33,
			a1 + 34,
			a1 + 35,
			a1 + 36);
		v8 = 1.0 / (float)a2;
		v9 = (float)(*v6 - a1[26]) * v8;
		a1[29] = (float)(a1[33] - a1[25]) * v8;
		v10 = *v7 - a1[27];
		a1[30] = v9;
		v11 = *v5 - a1[28];
		a1[31] = v10 * v8;
		a1[32] = v11 * v8;
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

