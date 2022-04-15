#include "../winhttp.h"

//----- (000000014085AB90) ----------------------------------------------------
char __fastcall sub_14085AB90(__int64 a1)
{
	bool v2; // al
	__int64 v3; // rcx
	char v4; // bl
	__int64* v5; // rcx
	__int64 v6; // rcx

	v2 = sub_140853160(a1);
	v3 = *(_QWORD*)(a1 + 72);
	v4 = v2;
	if (v3)
		v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 304i64))(v3, 3i64) & v2;
	v5 = *(__int64**)(a1 + 104);
	if (v5 && (v6 = *v5) != 0)
		return v4 & (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 304i64))(v6, 3i64);
	else
		return v4;
}

