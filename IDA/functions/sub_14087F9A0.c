#include "../winhttp.h"

//----- (000000014087F9A0) ----------------------------------------------------
_QWORD* sub_14087F9A0()
{
	_QWORD* result; // rax

	result = (_QWORD*)sub_1408819F0(dword_140C10F20, 536i64);
	if (result)
	{
		result[66] = 0i64;
		*result = off_1409A75E0;
	}
	return result;
}
// 1409A75E0: using guessed type __int64 (__fastcall *off_1409A75E0[12])();
// 140C10F20: using guessed type int dword_140C10F20;

