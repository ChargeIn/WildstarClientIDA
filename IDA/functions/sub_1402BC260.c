#include "../winhttp.h"

//----- (00000001402BC260) ----------------------------------------------------
__int64 __fastcall sub_1402BC260(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v5; // rcx
	__int64 v6; // rcx

	if (!a2)
		return 2147942487i64;
	if (*(void(__fastcall****)(_QWORD))(a1 + 24) != a2)
	{
		(**a2)(a2);
		v5 = *(_QWORD*)(a1 + 24);
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 24) = a2;
		v6 = *(_QWORD*)(a1 + 64);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(a1 + 64) = 0i64;
		}
	}
	return 0i64;
}

