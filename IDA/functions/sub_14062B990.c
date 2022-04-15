#include "../winhttp.h"

//----- (000000014062B990) ----------------------------------------------------
__int64 __fastcall sub_14062B990(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = a1[3];
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[3] = 0i64;
	}
	v4 = a1[4];
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[4] = 0i64;
	}
	v5 = a1[2];
	if (v5)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[2] = 0i64;
	}
	return result;
}

