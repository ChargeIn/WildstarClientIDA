#include "../winhttp.h"

//----- (0000000140875140) ----------------------------------------------------
_QWORD* __fastcall sub_140875140(__int16 a1, int a2)
{
	_QWORD* result; // rax
	_QWORD* v5; // rbx

	result = (_QWORD*)sub_1408819F0(dword_140C10F20, 88i64);
	v5 = result;
	if (result)
	{
		sub_14087F300(result, a1, a2);
		*v5 = off_1409A6600;
		sub_140855760((__int64)v5);
		return v5;
	}
	return result;
}
// 1409A6600: using guessed type __int64 (__fastcall *off_1409A6600[6])();
// 140C10F20: using guessed type int dword_140C10F20;

