//----- (0000000140875770) ----------------------------------------------------
__int64 __fastcall sub_140875770(__int64 a1, __int64* a2, __int64 a3)
{
	float v3; // xmm0_4
	float v4; // xmm6_4

	v3 = 0.0;
	v4 = *(float*)(a1 + 96) - *(float*)(a1 + 92);
	if (v4 != 0.0)
		v3 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v4;
	return sub_140875800(
		a1,
		a2,
		a3,
		*(unsigned __int8*)(a1 + 100),
		COERCE_INT((float)(v3 + *(float*)(a1 + 92)) + *(float*)(a1 + 88)));
}

