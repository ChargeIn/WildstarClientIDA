#include "../winhttp.h"

//----- (0000000140847260) ----------------------------------------------------
__int64 __fastcall sub_140847260(__int64 a1, __int64 a2, char a3)
{
	__int64* v5; // rax

	v5 = (__int64*)sub_1408611D0(a2);
	if (v5)
		return sub_1408472B0(a1, v5, a3);
	else
		return 2i64;
}

