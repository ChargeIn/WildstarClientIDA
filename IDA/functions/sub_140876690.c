#include "../winhttp.h"

//----- (0000000140876690) ----------------------------------------------------
__int64 __fastcall sub_140876690(__int16 a1, int a2)
{
	__int64 result; // rax
	__int64 v5; // rbx

	result = sub_1408819F0(dword_140C10F20, 104i64);
	v5 = result;
	if (result)
	{
		sub_1408768F0(result, a1, a2);
		*(_QWORD*)v5 = off_1409A6A00;
		*(_QWORD*)(v5 + 88) = 0i64;
		*(_DWORD*)(v5 + 96) = 0;
		*(_WORD*)(v5 + 100) = 0;
		sub_140855760(v5);
		return v5;
	}
	return result;
}
// 1409A6A00: using guessed type __int64 (__fastcall *off_1409A6A00[6])();
// 140C10F20: using guessed type int dword_140C10F20;

