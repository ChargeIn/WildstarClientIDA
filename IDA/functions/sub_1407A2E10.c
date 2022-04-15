//----- (00000001407A2E10) ----------------------------------------------------
float __fastcall sub_1407A2E10(__int64 a1)
{
	double v1; // xmm0_8
	float v2; // xmm2_4
	float result; // xmm0_4

	v1 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 112i64))(a1);
	v2 = *(float*)&v1;
	result = 1.0;
	if (v2 != 0.0)
		return 1.0 / v2;
	return result;
}

