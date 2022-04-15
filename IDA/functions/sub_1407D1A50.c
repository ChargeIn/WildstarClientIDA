#include "../winhttp.h"

//----- (00000001407D1A50) ----------------------------------------------------
__int64 __fastcall sub_1407D1A50(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = a1[10];
	if (v2)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v4 = a1[8];
	if (v4)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[6];
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = a1[4];
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = a1[2];
	if (v7)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
	return result;
}

