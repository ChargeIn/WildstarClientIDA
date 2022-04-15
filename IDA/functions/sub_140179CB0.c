#include "../winhttp.h"

//----- (0000000140179CB0) ----------------------------------------------------
__int64 __fastcall sub_140179CB0(__int64 a1, int a2, int* a3)
{
	if (a2)
		return 1i64;
	if (*(_BYTE*)(a1 + 1148))
	{
		*(_BYTE*)(a1 + 1148) = 0;
		return 0i64;
	}
	else
	{
		qword_140C63690 = 0i64;
		return sub_1400D2550(a1, 0, a3);
	}
}
// 140C63690: using guessed type __int64 qword_140C63690;

