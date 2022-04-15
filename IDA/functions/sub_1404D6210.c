#include "../winhttp.h"

//----- (00000001404D6210) ----------------------------------------------------
__int64 __fastcall sub_1404D6210(__int64 a1, void(__fastcall*** a2)(_QWORD), void(__fastcall*** a3)(_QWORD))
{
	__int64 v4; // rcx
	__int64 v7; // rcx

	v4 = *(_QWORD*)(a1 + 96);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	*(_QWORD*)(a1 + 96) = a2;
	if (a2)
		(**a2)(a2);
	v7 = *(_QWORD*)(a1 + 88);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	*(_QWORD*)(a1 + 88) = a3;
	if (a3)
		(**a3)(a3);
	return 0i64;
}

