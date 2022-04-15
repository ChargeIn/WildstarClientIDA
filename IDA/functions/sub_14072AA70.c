#include "../winhttp.h"

//----- (000000014072AA70) ----------------------------------------------------
_BOOL8 __fastcall sub_14072AA70(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx
	unsigned int(__fastcall * **v6)(_QWORD, __int64); // rcx
	unsigned int(__fastcall * **v7)(_QWORD, __int64); // rcx
	unsigned int(__fastcall * **v8)(_QWORD, __int64); // rcx
	unsigned int(__fastcall * **v9)(_QWORD, __int64); // rcx
	unsigned int(__fastcall * **v10)(_QWORD, __int64); // rcx
	unsigned int(__fastcall * **v11)(_QWORD, __int64); // rcx
	unsigned int(__fastcall * **v12)(_QWORD, __int64); // rcx

	if (!(***(unsigned int(__fastcall****)(_QWORD))(a1 + 1168))(*(_QWORD*)(a1 + 1168)))
		return 0i64;
	v4 = *(_QWORD*)(a1 + 1152);
	if (!v4)
		return 0i64;
	if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v4 + 24i64))(v4, a2, 0i64))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 1160);
	if (!v5)
		return 0i64;
	return (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v5 + 24i64))(v5, a2, 0i64)
		&& (v6 = *(unsigned int(__fastcall****)(_QWORD, __int64))(a1 + 1392)) != 0i64
		&& (**v6)(v6, a2)
		&& (v7 = *(unsigned int(__fastcall****)(_QWORD, __int64))(a1 + 1176)) != 0i64
		&& (**v7)(v7, a2)
		&& (v8 = *(unsigned int(__fastcall****)(_QWORD, __int64))(a1 + 1184)) != 0i64
		&& (**v8)(v8, a2)
		&& (v9 = *(unsigned int(__fastcall****)(_QWORD, __int64))(a1 + 1368)) != 0i64
		&& (**v9)(v9, a2)
		&& (v10 = *(unsigned int(__fastcall****)(_QWORD, __int64))(a1 + 1400)) != 0i64
		&& (**v10)(v10, a2)
		&& (v11 = *(unsigned int(__fastcall****)(_QWORD, __int64))(a1 + 1408)) != 0i64
		&& (**v11)(v11, a2)
		&& (v12 = *(unsigned int(__fastcall****)(_QWORD, __int64))(a1 + 1416)) != 0i64
		&& (**v12)(v12, a2);
}

