#include "../winhttp.h"

//----- (0000000140859BE0) ----------------------------------------------------
__int64 __fastcall sub_140859BE0(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64* v4; // rcx
	__int64 v5; // rcx

	result = sub_140851C70(a1);
	v3 = *(_QWORD*)(a1 + 72);
	if (v3)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 312i64))(v3, 3i64);
	v4 = *(__int64**)(a1 + 104);
	if (v4)
	{
		v5 = *v4;
		if (v5)
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 312i64))(v5, 3i64);
	}
	return result;
}

