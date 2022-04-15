#include "../winhttp.h"

//----- (00000001408754B0) ----------------------------------------------------
_QWORD* __fastcall sub_1408754B0(__int16 a1, int a2, char a3)
{
	_QWORD* result; // rax
	__int64 v7; // rbx

	result = (_QWORD*)sub_1408819F0(dword_140C10F20, 104i64);
	v7 = (__int64)result;
	if (result)
	{
		sub_14087F300(result, a1, a2);
		*(_QWORD*)v7 = off_1409A66B0;
		*(_QWORD*)(v7 + 88) = 0i64;
		*(_DWORD*)(v7 + 96) = 0;
		*(_BYTE*)(v7 + 100) = 2;
		*(_BYTE*)(v7 + 101) = a3;
		sub_140855760(v7);
		return (_QWORD*)v7;
	}
	return result;
}
// 1409A66B0: using guessed type __int64 (__fastcall *off_1409A66B0[6])();
// 140C10F20: using guessed type int dword_140C10F20;

