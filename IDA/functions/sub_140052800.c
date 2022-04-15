#include "../winhttp.h"

//----- (0000000140052800) ----------------------------------------------------
LRESULT __fastcall sub_140052800(__int64 a1, HWND a2, UINT a3, WPARAM a4, LPARAM a5)
{
	__int64 v6; // rdx

	if (a3 == 256)
	{
		if (a4 > 0x20)
			return DefWindowProcW(a2, a3, a4, a5);
		v6 = 0x108002000i64;
		if (!_bittest64(&v6, a4))
			return DefWindowProcW(a2, a3, a4, a5);
	}
	else if (a3 != 513)
	{
		return DefWindowProcW(a2, a3, a4, a5);
	}
	if ((*(_BYTE*)(a1 + 72) & 2) == 0)
		*(_DWORD*)(a1 + 76) = 4;
	return DefWindowProcW(a2, a3, a4, a5);
}

