#include "../winhttp.h"

//----- (000000014079B810) ----------------------------------------------------
__int64 __fastcall sub_14079B810(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rcx

	if (*a1)
		off_140C1B1E8();
	if (a1[1])
		off_140C1B1E8();
	v2 = (_QWORD*)a1[3];
	if (v2)
		*v2 = a1[4];
	v3 = a1[4];
	if (v3)
		*(_QWORD*)(v3 + 24) = a1[3];
	result = 0i64;
	a1[3] = 0i64;
	a1[4] = 0i64;
	v5 = a1[2];
	if (v5)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return result;
}
// 140C1B1E8: using guessed type __int64 (*off_140C1B1E8)(void);

