//----- (00000001408FAD00) ----------------------------------------------------
float __fastcall sub_1408FAD00(__int64 a1, double a2, float a3)
{
	int v4; // r8d
	double v5; // xmm7_8
	int v6; // r8d
	int v7; // r8d
	float v8; // xmm6_4
	float v9; // xmm9_4
	double v10; // xmm0_8
	float v11; // xmm7_4
	float v13; // [rsp+78h] [rbp+10h]

	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 32i64);
	HIDWORD(v5) = HIDWORD(a2);
	if (v4)
	{
		v6 = v4 - 1;
		if (v6)
		{
			v7 = v6 - 1;
			if (v7)
			{
				if (v7 == 1)
					v8 = 650.0 / *(float*)&a2;
				else
					v8 = v13;
			}
			else
			{
				v8 = *(float*)&a2 * 0.0099999998;
			}
		}
		else
		{
			v8 = fsqrt(*(float*)&a2 * 0.025);
		}
	}
	else
	{
		v8 = 1.0;
	}
	*(float*)&v5 = *(float*)&a2 / a3;
	v10 = sub_1408FE170(v5);
	v9 = *(float*)&v10 * 1.442695;
	*(float*)&v5 = (float)((float)((float)((float)(*(float*)&a2 / a3) * 2.0) * 3.1415927) * *(float*)(a1 + 8)) * -0.5;
	v11 = sub_1408FC7F0(v5);
	if (v11 >= 0.99919999)
		v11 = 0.99919999;
	*(float*)&v10 = (float)((float)(v9 * -0.023) * v9) + (float)((float)(v9 * -0.1648) + 3.9542999);
	return (float)((float)(sub_1408FC7F0(v10) + 0.69999999) * v8) * (float)((float)(1.0 - (float)(v11 * v11)) * 0.5);
}
// 140B79ED0: using guessed type int dword_140B79ED0;

