#include "../winhttp.h"

//----- (0000000140865E90) ----------------------------------------------------
__int64 __fastcall sub_140865E90(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx

	v2 = a1[1];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[1] = 0i64;
	}
	v4 = a1[3];
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
		a1[3] = 0i64;
	}
	if (*a1)
	{
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 16i64))(*a1);
		*a1 = 0i64;
	}
	return result;
}

