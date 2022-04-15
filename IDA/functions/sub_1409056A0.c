//----- (00000001409056A0) ----------------------------------------------------
double __fastcall sub_1409056A0(double result, double a2)
{
	if ((__int64)(*(_QWORD*)&result ^ *(_QWORD*)&a2) < 0)
		*(_QWORD*)&result ^= 0x8000000000000000ui64;
	return result;
}

