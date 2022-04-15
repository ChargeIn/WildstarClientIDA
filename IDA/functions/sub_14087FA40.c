#include "../winhttp.h"

//----- (000000014087FA40) ----------------------------------------------------
__int64* sub_14087FA40()
{
	if ((dword_140C62900 & 1) == 0)
	{
		dword_140C62900 |= 1u;
		qword_140C628F8 = (__int64)off_1409A75D8;
	}
	return &qword_140C628F8;
}
// 1409A75D8: using guessed type __int64 (__fastcall *off_1409A75D8[13])();
// 140C628F8: using guessed type __int64 qword_140C628F8;
// 140C62900: using guessed type int dword_140C62900;

