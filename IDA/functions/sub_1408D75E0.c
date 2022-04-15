//----- (00000001408D75E0) ----------------------------------------------------
__int64 __fastcall sub_1408D75E0(__int64 a1, _DWORD* a2)
{
	double v3; // xmm0_8
	float v4; // xmm6_4
	double v5; // xmm0_8
	float v6; // xmm11_4
	double v7; // xmm0_8
	float v8; // xmm10_4
	double v9; // xmm0_8
	float v10; // xmm9_4
	double v11; // xmm0_8
	float v12; // xmm8_4
	double v13; // xmm0_8
	float v14; // xmm7_4
	double v15; // xmm0_8
	__int64 result; // rax
	int v17[6]; // [rsp+28h] [rbp-E0h] BYREF
	int v18[6]; // [rsp+40h] [rbp-C8h] BYREF
	int v19[6]; // [rsp+58h] [rbp-B0h] BYREF
	int v20[6]; // [rsp+70h] [rbp-98h] BYREF
	int v21[6]; // [rsp+88h] [rbp-80h] BYREF
	int v22[6]; // [rsp+A0h] [rbp-68h] BYREF
	int v23[32]; // [rsp+B8h] [rbp-50h] BYREF

	v18[0] = a2[2];
	v18[1] = a2[3];
	v18[2] = a2[4];
	v18[3] = a2[5];
	v18[4] = a2[6];
	v22[0] = a2[7];
	v22[1] = a2[8];
	v22[2] = a2[9];
	v22[3] = a2[10];
	v22[4] = a2[11];
	v20[0] = a2[12];
	v20[1] = a2[13];
	v20[2] = a2[14];
	v20[3] = a2[15];
	v20[4] = a2[16];
	v17[0] = a2[17];
	v17[1] = a2[18];
	v17[2] = a2[19];
	v17[3] = a2[20];
	v17[4] = a2[21];
	v19[0] = a2[22];
	v19[1] = a2[23];
	v19[2] = a2[24];
	v19[3] = a2[25];
	v19[4] = a2[26];
	v21[0] = a2[27];
	v21[1] = a2[28];
	v21[2] = a2[29];
	v21[3] = a2[30];
	v21[4] = a2[31];
	v23[0] = a2[32];
	v23[1] = a2[33];
	v23[2] = a2[34];
	v23[3] = a2[35];
	v23[4] = a2[36];
	v3 = sub_1408E4D60(v18);
	v4 = *(float*)&v3;
	v5 = sub_1408E4D60(v22);
	v6 = *(float*)&v5;
	v7 = sub_1408E4D60(v20);
	v8 = *(float*)&v7;
	v9 = sub_1408E4D60(v17);
	v10 = *(float*)&v9;
	v11 = sub_1408E4D60(v19);
	v12 = *(float*)&v11;
	v13 = sub_1408E4D60(v21);
	v14 = *(float*)&v13;
	v15 = sub_1408E4D60(v23);
	if (v4 <= v6)
		v4 = v6;
	if (v4 <= v8)
		v4 = v8;
	if (v4 <= v10)
		v4 = v10;
	if (v4 <= v12)
		v4 = v12;
	if (v4 <= v14)
		v4 = v14;
	if (v4 <= *(float*)&v15)
		v4 = *(float*)&v15;
	result = (unsigned int)(int)(v4 * 6.91);
	*(_DWORD*)(a1 + 16) = result;
	return result;
}
// 1408E4D60: using guessed type double __fastcall sub_1408E4D60(_QWORD);

