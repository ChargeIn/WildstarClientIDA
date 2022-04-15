#include "../winhttp.h"

//----- (0000000140346690) ----------------------------------------------------
__int64 __fastcall sub_140346690(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
	unsigned int v9; // eax

	if (!a3)
		return 2147942487i64;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 48i64))(a3);
	return sub_140345630(a1, -1i64, a2, v9, a4, a5);
}

