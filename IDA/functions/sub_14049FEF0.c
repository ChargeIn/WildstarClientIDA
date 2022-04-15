#include "../winhttp.h"

//----- (000000014049FEF0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049FEF0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	unsigned int v5; // eax

	v5 = 0;
	if (qword_140C65970)
		v5 = sub_1404A1AA0(a1, a4, 0);
	return sub_1404A2090(a1, a3, v5, a5);
}
// 14049FF1E: variable 'a1' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

