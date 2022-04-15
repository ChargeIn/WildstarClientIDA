#include "../winhttp.h"

//----- (00000001406F7190) ----------------------------------------------------
__int64 __fastcall sub_1406F7190(_QWORD* a1)
{
	__int64 v2; // rax

	v2 = sub_14039DEF0(qword_140C65898);
	if (v2)
		return sub_140649930(a1, v2);
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

