//----- (00000001401AE2D0) ----------------------------------------------------
float __fastcall sub_1401AE2D0(__int64 a1, float a2, float a3)
{
	float v3; // xmm0_4

	v3 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1) * (float)(a3 - a2);
	return v3 + a2;
}

