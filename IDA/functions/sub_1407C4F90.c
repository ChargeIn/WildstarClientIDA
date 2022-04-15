//----- (00000001407C4F90) ----------------------------------------------------
__int64 __fastcall sub_1407C4F90(__int64 a1, __int64 a2)
{
	float v2; // xmm0_4
	float v3; // xmm1_4

	v2 = *(float*)(a1 + 252);
	v3 = *(float*)(a2 + 252);
	if (v2 >= v3)
		return (unsigned int)(v2 <= v3) - 1;
	else
		return 1i64;
}

