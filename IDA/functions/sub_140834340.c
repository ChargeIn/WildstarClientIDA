#include "../winhttp.h"

//----- (0000000140834340) ----------------------------------------------------
__int64 sub_140834340()
{
	int v0; // ebx
	__int64 v1; // rax

	sub_1408588F0();
	sub_140833000();
	v0 = _mm_getcsr() & 0x8000;
	_mm_setcsr(_mm_getcsr() | 0x8000);
	HIWORD(dword_140C61CF0) = 0;
	sub_140832810();
	v1 = *(_QWORD*)qword_140C61C60;
	if (HIWORD(dword_140C61CF0))
	{
		(*(void(__fastcall**)(__int64, __int64*))(v1 + 64))(qword_140C61C60, &qword_140C61CE0);
		sub_140864030(qword_140C61CC0);
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64))(v1 + 72))(qword_140C61C60, 1024i64);
	}
	if (sub_140833080())
		sub_1408465C0((__int64*)qword_140C61C58);
	_mm_setcsr(v0 | _mm_getcsr() & 0xFFFF7FFF);
	return sub_140833180();
}
// 1408343DB: ignored the value written to the shadow area of the succeeding call
// 140C61C58: using guessed type __int64 qword_140C61C58;
// 140C61C60: using guessed type __int64 qword_140C61C60;
// 140C61CC0: using guessed type __int64 qword_140C61CC0;
// 140C61CE0: using guessed type __int64 qword_140C61CE0;
// 140C61CF0: using guessed type int dword_140C61CF0;

