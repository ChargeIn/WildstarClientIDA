#include "../winhttp.h"

//----- (000000014049E820) ----------------------------------------------------
_BOOL8 __fastcall sub_14049E820(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v4; // rax

	v4 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v4)
		return sub_1404A2090(a1, a3, *(_QWORD*)(v4 + 96), a4);
	else
		return sub_1404A2090(a1, a3, 0, a4);
}
// 140C65898: using guessed type __int64 qword_140C65898;

