#include "../winhttp.h"

//----- (0000000140865630) ----------------------------------------------------
__int64 __fastcall sub_140865630(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax

	if (a2)
	{
		v4 = sub_1408819F0(dword_140C10F20, 40i64 * a2);
		*(_QWORD*)a1 = v4;
		*(_QWORD*)(a1 + 8) = v4;
		if (!v4)
			return 52i64;
		*(_DWORD*)(a1 + 16) = a2;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

