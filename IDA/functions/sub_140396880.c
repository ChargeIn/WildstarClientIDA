#include "../winhttp.h"

//----- (0000000140396880) ----------------------------------------------------
_BOOL8 __fastcall sub_140396880(__int64 a1, __int64 a2)
{
	if (!a2)
		return 0i64;
	if (*(_QWORD*)(qword_140C65898 + 120) == a2)
		return 1i64;
	return *(_QWORD*)(qword_140C65898 + 25744) == a2;
}
// 140C65898: using guessed type __int64 qword_140C65898;

