//----- (000000014087B910) ----------------------------------------------------
unsigned __int64 __fastcall sub_14087B910(__int64 a1, __int64 a2, __int64 a3)
{
	double v5; // xmm7_8
	float v7; // xmm6_4

	*(_QWORD*)&v5 = *(unsigned int*)(a2 + 28);
	v7 = (float)(*(float*)(a2 + 24) - *(float*)&v5) * *(float*)(a1 + 4);
	sub_14087ADA0((unsigned __int16*)a1, *(_QWORD*)a2, *(_QWORD*)a3, v5, v7);
	return sub_14087ADA0(
		(unsigned __int16*)a1,
		*(_QWORD*)a2 + 4i64 * *(unsigned __int16*)(a2 + 16),
		*(_QWORD*)a3 + 4i64 * *(unsigned __int16*)(a3 + 16),
		v5,
		v7);
}

