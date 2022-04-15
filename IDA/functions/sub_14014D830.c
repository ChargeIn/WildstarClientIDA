//----- (000000014014D830) ----------------------------------------------------
__int64 __fastcall sub_14014D830(_QWORD* a1)
{
	unsigned int* v2; // rbx
	double v3; // xmm6_8
	float v4; // xmm11_4
	float v5; // xmm0_4
	double v6; // xmm6_8
	float v7; // xmm10_4
	float v8; // xmm9_4
	float v9; // xmm0_4
	double v10; // xmm6_8
	float v11; // xmm8_4
	float v12; // xmm7_4
	float v13; // xmm0_4
	float v14; // xmm4_4
	float v15; // xmm7_4
	float v16; // xmm4_4
	__int64 v17; // rbx
	__int64 v18; // rax
	__int64 v19; // r9
	__int128 v21; // [rsp+20h] [rbp-78h] BYREF

	v2 = (unsigned int*)sub_140056AB0(a1, 1u);
	*(_QWORD*)&v3 = v2[2];
	*(float*)&v3 = *(float*)&v3 * 0.5;
	v4 = sub_1408FE3D0(v3);
	v5 = sub_1408FC950(v3);
	*(_QWORD*)&v6 = v2[1];
	*(float*)&v6 = *(float*)&v6 * 0.5;
	v7 = v5;
	v8 = sub_1408FE3D0(v6);
	v9 = sub_1408FC950(v6);
	*(_QWORD*)&v10 = *v2;
	*(float*)&v10 = *(float*)&v10 * 0.5;
	v11 = v9;
	v12 = sub_1408FE3D0(v10);
	v13 = sub_1408FC950(v10);
	v14 = v12;
	v15 = v12 * v8;
	v16 = v14 * v11;
	*(float*)&v21 = (float)((float)(v13 * v8) * v7) + (float)(v16 * v4);
	*((float*)&v21 + 2) = (float)((float)(v13 * v11) * v4) - (float)(v15 * v7);
	*((float*)&v21 + 1) = (float)(v16 * v7) - (float)((float)(v13 * v8) * v4);
	*((float*)&v21 + 3) = (float)(v15 * v4) + (float)((float)(v13 * v11) * v7);
	*(_OWORD*)sub_140059170(a1, 0x10ui64) = v21;
	v17 = a1[4];
	v18 = sub_140062650((__int64)a1, (unsigned __int64*)"Quaternion", 0xAui64);
	v19 = a1[2];
	*(_QWORD*)&v21 = v18;
	DWORD2(v21) = 4;
	sub_14005E8E0((__int64)a1, v17 + 160, (int*)&v21, v19);
	a1[2] += 16i64;
	sub_140058BF0((__int64)a1, -2);
	return 1i64;
}

