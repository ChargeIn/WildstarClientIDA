#include "../winhttp.h"

//----- (00000001402E4890) ----------------------------------------------------
__int64 __fastcall sub_1402E4890(__int64 a1, _QWORD* a2, int a3)
{
	if (!a2 || a3 != 1)
		return 2147942487i64;
	*a2 = *(_QWORD*)(a1 + 88);
	(***(void(__fastcall****)(_QWORD))(a1 + 88))(*(_QWORD*)(a1 + 88));
	return 0i64;
}

