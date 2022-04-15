//----- (00000001401D7800) ----------------------------------------------------
__int64 __fastcall sub_1401D7800(unsigned int a1, unsigned int a2, __int64 a3)
{
	float v3; // xmm0_4
	float v4; // xmm1_4

	v3 = *(float*)(a3 + 12i64 * a1 + 4);
	v4 = *(float*)(a3 + 12i64 * a2 + 4);
	if (v3 >= v4)
		return v3 > v4;
	else
		return 0xFFFFFFFFi64;
}

