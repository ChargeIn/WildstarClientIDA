#include "../winhttp.h"

//----- (0000000140508D60) ----------------------------------------------------
__int64 __fastcall sub_140508D60(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 1248);
	if (v1)
		return BinkPause(v1, 1i64);
	return result;
}
// 140959BA8: using guessed type __int64 __fastcall BinkPause(_QWORD, _QWORD);

