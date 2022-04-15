#include "../winhttp.h"

//----- (0000000140856810) ----------------------------------------------------
__int64 __fastcall sub_140856810(__int16 a1, int a2)
{
	__int64 result; // rax
	_QWORD* v5; // rbx

	result = sub_1408819F0(dword_140C10F20, 96i64);
	v5 = (_QWORD*)result;
	if (result)
	{
		sub_140876CB0(result, a1, a2);
		*v5 = off_1409A3910;
		sub_140855760((__int64)v5);
		return (__int64)v5;
	}
	return result;
}
// 1409A3910: using guessed type __int64 (__fastcall *off_1409A3910[6])();
// 140C10F20: using guessed type int dword_140C10F20;

