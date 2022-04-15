//----- (00000001408C7BC0) ----------------------------------------------------
__int64 __fastcall sub_1408C7BC0(float* a1, float* a2)
{
	float v2; // xmm0_4

	v2 = *a1 - *a2;
	if (v2 >= 0.0)
		return v2 > 0.0;
	else
		return 0xFFFFFFFFi64;
}

