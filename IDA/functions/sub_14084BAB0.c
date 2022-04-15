#include "../winhttp.h"

//----- (000000014084BAB0) ----------------------------------------------------
__int64 __fastcall sub_14084BAB0(int a1)
{
	__int64 result; // rax
	__int64 v3; // rbx

	result = sub_1408819F0(dword_140C10F20, 48i64);
	v3 = result;
	if (result)
	{
		sub_140865E10(result, a1);
		*(_QWORD*)v3 = off_1409A3258;
		*(_QWORD*)(v3 + 32) = 0i64;
		*(_DWORD*)(v3 + 40) = 0;
		return v3;
	}
	return result;
}
// 1409A3258: using guessed type __int64 (__fastcall *off_1409A3258[6])();
// 140C10F20: using guessed type int dword_140C10F20;

