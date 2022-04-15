#include "../winhttp.h"

//----- (0000000140845440) ----------------------------------------------------
__int64 __fastcall sub_140845440(__int64 a1)
{
	__int64 v2; // rax

	v2 = sub_1408819F0(dword_140C10F20, 320i64);
	*(_QWORD*)a1 = v2;
	*(_QWORD*)(a1 + 8) = v2;
	if (!v2)
		return 52i64;
	*(_DWORD*)(a1 + 16) = 8;
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

