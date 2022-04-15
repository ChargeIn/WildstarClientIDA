#include "../winhttp.h"

//----- (0000000140333C80) ----------------------------------------------------
__int64 __fastcall sub_140333C80(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = *a1;
	if (v2)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
	v4 = a1[1];
	if (v4)
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v4 + 48i64))(v4, 0xFFFFFFFFi64);
	v5 = a1[1];
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	if (*a1)
		return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
	return result;
}

