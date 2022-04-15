#include "../winhttp.h"

//----- (0000000140875A20) ----------------------------------------------------
__int64 __fastcall sub_140875A20(__int16 a1, int a2)
{
	__int64 result; // rax
	_QWORD* v5; // rbx

	result = sub_1408819F0(dword_140C10F20, 72i64);
	v5 = (_QWORD*)result;
	if (result)
	{
		sub_1408555E0(result, a1, a2);
		*v5 = off_1409A67C0;
		v5[8] = 0i64;
		sub_140855760((__int64)v5);
		return (__int64)v5;
	}
	return result;
}
// 1409A67C0: using guessed type __int64 (__fastcall *off_1409A67C0[6])();
// 140C10F20: using guessed type int dword_140C10F20;

