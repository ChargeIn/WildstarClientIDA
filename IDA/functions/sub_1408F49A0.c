//----- (00000001408F49A0) ----------------------------------------------------
float* __fastcall sub_1408F49A0(__int64 a1, unsigned int a2, float* a3, float* a4, float* a5, float* a6)
{
	__int64 v6; // rax
	__int64 v7; // rdx
	double v8; // xmm7_8
	double v11; // xmm0_8
	double v12; // xmm0_8
	float v13; // xmm10_4
	unsigned int v14; // xmm6_4
	float v15; // xmm11_4
	float v16; // xmm12_4
	float v17; // xmm6_4
	float* result; // rax

	v6 = a2;
	v7 = *(_QWORD*)(a1 + 16);
	HIDWORD(v8) = 0;
	*(_QWORD*)&v11 = *(unsigned int*)(v7 + 20 * v6);
	*(float*)&v11 = *(float*)&v11 / *(float*)(*(_QWORD*)(a1 + 8) + 20i64);
	*(float*)&v8 = (float)((float)(90.0 - *(float*)(v7 + 20 * v6 + 4)) * 3.1415927) * 0.0055555557;
	v12 = sub_1408FBFC0(v11, 0.16666667);
	v13 = *(float*)&v12;
	*(float*)&v14 = (float)((float)((float)(sub_1408FC950(v8) * *(float*)&v12) * 3.1415927) * 0.25) + 0.78539819;
	v15 = sub_1408FC950(COERCE_DOUBLE((unsigned __int64)v14));
	v16 = sub_1408FE3D0(COERCE_DOUBLE((unsigned __int64)v14));
	*(float*)&v12 = sub_1408FE3D0(v8);
	HIDWORD(v8) = 0;
	*(float*)&v8 = (float)((float)((float)(*(float*)&v12 * v13) * 3.1415927) * 0.25) + 0.78539819;
	v17 = sub_1408FE3D0(v8);
	*(float*)&v12 = sub_1408FC950(v8);
	*a3 = v17 * v15;
	*a4 = v17 * v16;
	*a5 = *(float*)&v12 * v15;
	result = a6;
	*a6 = *(float*)&v12 * v16;
	return result;
}

