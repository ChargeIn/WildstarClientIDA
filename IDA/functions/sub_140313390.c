//----- (0000000140313390) ----------------------------------------------------
__int64 __fastcall sub_140313390(unsigned int a1, unsigned int a2, __int64 a3)
{
	float v3; // xmm0_4
	float v4; // xmm1_4

	v3 = *(float*)(28i64 * a1 + a3 + 8);
	v4 = *(float*)(28i64 * a2 + a3 + 8);
	if (v3 >= v4)
		return (unsigned int)(v3 <= v4) - 1;
	else
		return 1i64;
}

