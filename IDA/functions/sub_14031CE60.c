//----- (000000014031CE60) ----------------------------------------------------
__int64 __fastcall sub_14031CE60(unsigned int a1, unsigned int a2)
{
	float v2; // xmm0_4
	float v3; // xmm1_4

	v2 = *(float*)(qword_140C79DF8 + 4i64 * a1);
	v3 = *(float*)(qword_140C79DF8 + 4i64 * a2);
	if (v2 <= v3)
		return v3 > v2;
	else
		return 0xFFFFFFFFi64;
}
// 140C79DF8: using guessed type __int64 qword_140C79DF8;

