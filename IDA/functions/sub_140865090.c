#include "../winhttp.h"

//----- (0000000140865090) ----------------------------------------------------
__int64 __fastcall sub_140865090(int a1)
{
	__int64 result; // rax
	__int64 v3; // rbx

	result = sub_1408819F0(dword_140C10F20, 80i64);
	v3 = result;
	if (result)
	{
		sub_140865E10(result, a1);
		*(_QWORD*)v3 = off_1409A47B0;
		*(_QWORD*)(v3 + 32) = 0i64;
		*(_QWORD*)(v3 + 40) = 0i64;
		*(_DWORD*)(v3 + 48) = 0;
		*(_DWORD*)(v3 + 56) = 0;
		*(_QWORD*)(v3 + 64) = 0i64;
		*(_DWORD*)(v3 + 72) = 0;
		sub_140865020(v3);
		return v3;
	}
	return result;
}
// 1409A47B0: using guessed type __int64 (__fastcall *off_1409A47B0[5])();
// 140C10F20: using guessed type int dword_140C10F20;

