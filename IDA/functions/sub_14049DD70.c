#include "../winhttp.h"

//----- (000000014049DD70) ----------------------------------------------------
_BOOL8 __fastcall sub_14049DD70(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned int v6; // eax
	__int64 v7; // rcx

	if (!a2 || a2 != *(_QWORD*)(qword_140C65898 + 120) || !qword_140C65B98)
		return 0i64;
	v6 = sub_1405BFFE0(qword_140C65B98, 4, 0xFFFFFFFF);
	return sub_1404A2090(v7, a3, v6, a4);
}
// 14049DDBE: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

