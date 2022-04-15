#include "../winhttp.h"

//----- (000000014025F0C0) ----------------------------------------------------
__int64 __fastcall sub_14025F0C0(_QWORD* a1)
{
	__int64 result; // rax

	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65670 + 312i64))(qword_140C65670, a1[258]);
	result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)qword_140C65670 + 304i64))(
		qword_140C65670,
		a1[260],
		1i64);
	a1[309] = 36i64;
	a1[310] = 8i64;
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

