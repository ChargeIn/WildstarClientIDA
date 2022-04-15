//----- (00000001401AE640) ----------------------------------------------------
double __fastcall sub_1401AE640(__int64 a1)
{
	signed int v2; // edi

	v2 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1) >> 5;
	return ((double)((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1) >> 6) + (double)v2 * 67108864.0)
		* 1.110223024625157e-16;
}

