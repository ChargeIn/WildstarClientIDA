#include "../winhttp.h"

//----- (0000000140898DA0) ----------------------------------------------------
__int64 __fastcall sub_140898DA0(__int64 a1)
{
	__int64 result; // rax

	result = sub_1408819F0(dword_140C10F20, 80i64);
	if (result)
	{
		*(_QWORD*)result = 0i64;
		*(_QWORD*)(result + 8) = a1;
		if (a1)
			++* (_DWORD*)(a1 + 80);
		*(_QWORD*)(result + 16) = 0i64;
		*(_BYTE*)(result + 24) = 0;
		*(_BYTE*)(result + 72) &= 0xF8u;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

