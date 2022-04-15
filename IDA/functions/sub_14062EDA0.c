#include "../winhttp.h"

//----- (000000014062EDA0) ----------------------------------------------------
__int64 __fastcall sub_14062EDA0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx

	v2 = a1[17];
	if (v2)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v4 = a1[15];
	if (v4)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	v5 = a1[13];
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	v6 = a1[11];
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	v7 = a1[9];
	if (v7)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	v8 = a1[7];
	if (v8)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	v9 = a1[5];
	if (v9)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	v10 = a1[3];
	if (v10)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	v11 = a1[1];
	if (v11)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	return result;
}

