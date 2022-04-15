#include "../winhttp.h"

//----- (00000001407ED198) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407ED198(WCHAR* a1, WCHAR** a2, int a3)
{
	void** v6; // rcx

	if (dword_140C5F560)
		v6 = 0i64;
	else
		v6 = &off_140C10448;
	return sub_1407ECF30(v6, a1, a2, a3, 0);
}
// 140C10448: using guessed type void *off_140C10448;
// 140C5F560: using guessed type int dword_140C5F560;

