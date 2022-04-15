#include "../winhttp.h"

//----- (000000014049EEB0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049EEB0(__int64 a1, _QWORD* a2, int a3, unsigned int a4)
{
	unsigned int v7; // eax

	if (!a2)
		return 0i64;
	if (a2[3])
		v7 = (*(__int64(__fastcall**)(_QWORD*))(*a2 + 16i64))(a2);
	else
		v7 = 0;
	return sub_1404A2090(a1, a3, v7, a4);
}
// 14049EEF8: variable 'a1' is possibly undefined

