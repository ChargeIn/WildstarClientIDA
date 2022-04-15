//----- (00000001408FA4E0) ----------------------------------------------------
float* __fastcall sub_1408FA4E0(__int64 a1, float a2, double a3, float* a4, float* a5, float* a6, float* a7)
{
	double v8; // xmm0_8
	double v9; // xmm14_8
	double v10; // xmm0_8
	float v11; // xmm11_4
	double v12; // xmm6_8
	float v13; // xmm12_4
	float v14; // xmm13_4
	double v15; // xmm7_8
	float* result; // rax

	HIDWORD(v8) = HIDWORD(a3);
	*(float*)&v8 = sub_1408FD190(*(float*)&a3, a2);
	v9 = v8;
	v10 = sub_1408FBFC0(
		COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(fsqrt((float)(a2 * a2) + (float)(*(float*)&a3
			* *(float*)&a3)))),
		0.16666667);
	v11 = *(float*)&v10;
	HIDWORD(v12) = HIDWORD(v9);
	*(float*)&v12 = (float)((float)((float)(sub_1408FC950(v9) * *(float*)&v10) * 3.1415927) * 0.25) + 0.78539819;
	v13 = sub_1408FC950(v12);
	v14 = sub_1408FE3D0(v12);
	HIDWORD(v15) = HIDWORD(v9);
	*(float*)&v15 = (float)((float)((float)(sub_1408FE3D0(v9) * v11) * 3.1415927) * 0.25) + 0.78539819;
	LODWORD(v12) = sub_1408FE3D0(v15);
	*(float*)&v10 = sub_1408FC950(v15);
	*a4 = *(float*)&v12 * v13;
	*a5 = *(float*)&v12 * v14;
	*a6 = *(float*)&v10 * v13;
	result = a7;
	*a7 = *(float*)&v10 * v14;
	return result;
}

