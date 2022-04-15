//----- (00000001401D77D0) ----------------------------------------------------
__int64 __fastcall sub_1401D77D0(unsigned int a1, unsigned int a2, __int64 a3)
{
	float v3; // xmm0_4
	float v4; // xmm1_4

	v3 = *(float*)(a3 + 12i64 * a1);
	v4 = *(float*)(a3 + 12i64 * a2);
	if (v3 >= v4)
		return v3 > v4;
	else
		return 0xFFFFFFFFi64;
}

