#include "../winhttp.h"

//----- (0000000140719190) ----------------------------------------------------
void __fastcall sub_140719190(__int64 a1, int a2, _QWORD* a3)
{
	__int64 v5; // rcx

	if ((a2 & 0x40000000) != 0)
		sub_140719BB0((__int64)a3, 0);
	if (a2 < 0)
	{
		v5 = a3[81];
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			a3[81] = 0i64;
		}
		(*(void(__fastcall**)(_QWORD*))(*a3 + 8i64))(a3);
	}
}

