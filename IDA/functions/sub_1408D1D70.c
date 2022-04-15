#include "../winhttp.h"

//----- (00000001408D1D70) ----------------------------------------------------
__int64 __fastcall sub_1408D1D70(void(__fastcall*** a1)(_QWORD, _QWORD), __int64 a2)
{
	sub_1408D3440((__int64)(a1 + 8), a2);
	sub_1408D3440((__int64)(a1 + 12), a2);
	sub_1408D3440((__int64)(a1 + 16), a2);
	sub_1408D3440((__int64)(a1 + 20), a2);
	sub_1408D3440((__int64)(a1 + 24), a2);
	sub_1408D3440((__int64)(a1 + 28), a2);
	sub_1408D3440((__int64)(a1 + 32), a2);
	if (a1)
	{
		(**a1)(a1, 0i64);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 16i64))(a2, a1);
	}
	return 1i64;
}

