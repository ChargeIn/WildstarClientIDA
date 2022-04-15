//----- (0000000140393A90) ----------------------------------------------------
__int64 __fastcall sub_140393A90(__int64 a1, __int64 a2)
{
	float v2; // xmm0_4
	float v3; // xmm1_4

	v2 = *(float*)(a1 + 200);
	v3 = *(float*)(a2 + 200);
	if (v2 >= v3)
		return v2 > v3;
	else
		return 0xFFFFFFFFi64;
}

