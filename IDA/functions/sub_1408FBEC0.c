//----- (00000001408FBEC0) ----------------------------------------------------
__int64 __fastcall sub_1408FBEC0(unsigned __int8* a1, unsigned __int8* a2)
{
	if (dword_140C5F560)
		return sub_1408FBF08(a1, a2, 0i64);
	if (a1 && a2)
		return sub_1408FBE84(a1, a2);
	*(_DWORD*)sub_1407DE1B0() = 22;
	sub_1407DC370();
	return 0x7FFFFFFFi64;
}
// 140C5F560: using guessed type int dword_140C5F560;

