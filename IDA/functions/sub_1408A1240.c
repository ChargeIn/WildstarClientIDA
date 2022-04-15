#include "../winhttp.h"

//----- (00000001408A1240) ----------------------------------------------------
__int64 __fastcall sub_1408A1240(void(__fastcall*** a1)(_QWORD, _QWORD), __int64 a2)
{
	sub_1408A1D40(a1 + 1);
	if (a1)
	{
		(**a1)(a1, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 16i64))(a2, a1);
	}
	return 1i64;
}
// 1408A1D40: using guessed type __int64 __fastcall sub_1408A1D40(_QWORD);

