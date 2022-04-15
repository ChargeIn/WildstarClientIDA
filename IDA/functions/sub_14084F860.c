//----- (000000014084F860) ----------------------------------------------------
__int64 __fastcall sub_14084F860(double a1)
{
	double v1; // xmm1_8

	v1 = (double)dword_140C110B4 * a1;
	if (v1 <= 0.0)
		return (unsigned int)(int)(v1 + -0.5);
	else
		return (unsigned int)(int)(v1 + 0.5);
}
// 140C110B4: using guessed type int dword_140C110B4;

