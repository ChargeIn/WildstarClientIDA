#include "../winhttp.h"

//----- (00000001401E7D70) ----------------------------------------------------
__int64 __fastcall sub_1401E7D70(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v2 = a1[6];
	if (v2)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 936i64))(v2);
	v4 = a1[7];
	if (v4)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 936i64))(v4);
	v5 = a1[9];
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 936i64))(v5);
	v6 = a1[10];
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 936i64))(v6);
	v7 = a1[11];
	if (v7)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 936i64))(v7);
	return result;
}

