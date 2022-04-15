#include "../winhttp.h"

//----- (00000001407F8138) ----------------------------------------------------
__int64 __fastcall sub_1407F8138(unsigned __int8* a1, unsigned __int8* a2, unsigned __int64 a3)
{
	if (dword_140C5F560)
		return sub_1407F8188(a1, a2, a3, 0i64);
	if (a1 && a2 && a3 <= 0x7FFFFFFF)
		return sub_1407F80F0(a1, a2, a3);
	*(_DWORD*)sub_1407DE1B0() = 22;
	sub_1407DC370();
	return 0x7FFFFFFFi64;
}
// 140C5F560: using guessed type int dword_140C5F560;

