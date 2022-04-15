#include "../winhttp.h"

//----- (00000001405D6B30) ----------------------------------------------------
__int64 __fastcall sub_1405D6B30(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
	v2 = *(_QWORD**)(a1 + 8);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a1 + 16);
	if (v3)
		*(_QWORD*)(v3 + 8) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 64i64))(a1);
}

