//----- (0000000140466A70) ----------------------------------------------------
double __fastcall sub_140466A70(__int64 a1, unsigned int a2)
{
	double result; // xmm0_8

	if (a2 > 0xC4)
		return 0.0;
	*(_QWORD*)&result = *(unsigned int*)(a1 + 8i64 * (int)a2 + 1476);
	return result;
}

