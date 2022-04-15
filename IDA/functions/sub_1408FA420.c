//----- (00000001408FA420) ----------------------------------------------------
_DWORD* __fastcall sub_1408FA420(__int64 a1, float a2, double a3, float* a4, _DWORD* a5)
{
	double v6; // xmm0_8
	double v7; // xmm8_8
	double v8; // xmm0_8
	_DWORD* result; // rax

	HIDWORD(v6) = 0;
	*(float*)&v6 = fsqrt((float)(a2 * a2) + (float)(*(float*)&a3 * *(float*)&a3));
	v7 = sub_1408FBFC0(v6, 0.16666667);
	HIDWORD(v8) = HIDWORD(a3);
	*(float*)&v8 = sub_1408FD190(*(float*)&a3, a2);
	*(float*)&v7 = (float)((float)((float)(*(float*)&v7 * sub_1408FC950(v8)) * 3.1415927) * 0.25) + 0.78539819;
	*a4 = sub_1408FC950(v7);
	*(float*)&v8 = sub_1408FE3D0(v7);
	result = a5;
	*a5 = LODWORD(v8);
	return result;
}

