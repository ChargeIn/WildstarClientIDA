//----- (0000000140726180) ----------------------------------------------------
void __fastcall sub_140726180(__int64 a1, __int64 a2, __m128* a3)
{
	float v6; // xmm9_4
	float v7; // xmm8_4
	double v8; // xmm6_8
	float v9; // xmm7_4
	float v10; // xmm0_4
	float v11; // xmm4_4
	float v12; // xmm7_4
	float v13; // xmm4_4
	char v14[16]; // [rsp+20h] [rbp-68h] BYREF
	int v15[4]; // [rsp+30h] [rbp-58h] BYREF

	if (a3)
	{
		v6 = sub_1408FE3D0(0.0);
		v7 = sub_1408FC950(0.0);
		*(_QWORD*)&v8 = *(unsigned int*)sub_1401B2FE0((__int64)v14, a3);
		*(float*)&v8 = *(float*)&v8 * 0.5;
		v9 = sub_1408FE3D0(v8);
		v10 = sub_1408FC950(v8);
		v11 = v9;
		v12 = v9 * v6;
		v13 = v11 * v7;
		*(float*)v15 = (float)((float)(v10 * v6) * v7) + (float)(v13 * v6);
		*(float*)&v15[2] = (float)((float)(v10 * v7) * v6) - (float)(v12 * v7);
		*(float*)&v15[1] = (float)(v13 * v7) - (float)((float)(v10 * v6) * v6);
		*(float*)&v15[3] = (float)(v12 * v6) + (float)((float)(v10 * v7) * v7);
		sub_1404C3FD0(a1, a2, (__int64)v15);
	}
	else
	{
		sub_1404C3FD0(a1, a2, 0i64);
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140726180: using guessed type char var_68[16];

