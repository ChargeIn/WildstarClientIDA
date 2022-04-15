#include "../winhttp.h"

//----- (0000000140881370) ----------------------------------------------------
__int64 __fastcall sub_140881370(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax

	*(_DWORD*)a1 = a2;
	v3 = sub_1408819F0(dword_140C10F28, 16i64 * a2);
	*(_QWORD*)(a1 + 8) = v3;
	if (v3)
		return 1i64;
	*(_DWORD*)a1 = 0;
	return 52i64;
}
// 140C10F28: using guessed type int dword_140C10F28;

