#include "../winhttp.h"

//----- (000000014085D370) ----------------------------------------------------
__int64 __fastcall sub_14085D370(__int64 a1, char a2)
{
	__int64 v4; // rdx
	_DWORD* v5; // rcx

	*(_QWORD*)a1 = off_1409A4340;
	*(_QWORD*)(a1 + 16) = &off_1409A48A0;
	v4 = *(_QWORD*)(a1 + 432);
	if (v4)
	{
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 432) = 0i64;
		*(_WORD*)(a1 + 440) = 0;
	}
	v5 = *(_DWORD**)(a1 + 112);
	if (v5)
		sub_140828460(v5);
	*(_QWORD*)a1 = &off_1409A4328;
	if ((a2 & 1) != 0)
		sub_140001E60(a1);
	return a1;
}
// 1409A4328: using guessed type void (__fastcall __noreturn *off_1409A4328)();
// 1409A4340: using guessed type __int64 (__fastcall *off_1409A4340[17])();
// 1409A48A0: using guessed type __int64 (__fastcall *off_1409A48A0)();
// 140C10F20: using guessed type int dword_140C10F20;

