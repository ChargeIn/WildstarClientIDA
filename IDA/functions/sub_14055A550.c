//----- (000000014055A550) ----------------------------------------------------
__int64 __fastcall sub_14055A550(__int64 a1, __int64 a2, __int64 a3)
{
	float v3; // xmm0_4
	float v4; // xmm1_4

	v3 = *(float*)(32 * a1 + a3 + 16);
	v4 = *(float*)(32 * a2 + a3 + 16);
	if (v3 >= v4)
		return v3 > v4;
	else
		return 0xFFFFFFFFi64;
}

