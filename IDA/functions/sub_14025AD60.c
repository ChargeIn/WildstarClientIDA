#include "../winhttp.h"

//----- (000000014025AD60) ----------------------------------------------------
__int64 __fastcall sub_14025AD60(_DWORD* a1, unsigned __int8 a2, unsigned __int8 a3)
{
	if (a1[12])
		return 2147500037i64;
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 424i64))(
		qword_140C65670,
		(unsigned int)a2 | a1[602],
		(unsigned int)a1[603],
		(unsigned int)a3 | a1[604]);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

