//----- (00000001408B0680) ----------------------------------------------------
void __fastcall sub_1408B0680(__int64 a1, __m128* a2, __int64 a3, int** a4, __m128* a5)
{
	if (*(_BYTE*)(a1 + 13))
		sub_1408B09F0(a1, a5);
	sub_1408AF1D0(a4, a5->m128_f32, a2);
	sub_1408B1060(
		a2,
		COERCE_DOUBLE((unsigned __int64)COERCE_UNSIGNED_INT(1.0 / (float)*(int*)(a1 + 8))),
		*(_DWORD*)(a1 + 8));
}
// 140B79ED0: using guessed type int dword_140B79ED0;

