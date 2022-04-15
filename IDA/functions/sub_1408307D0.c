#include "../winhttp.h"

//----- (00000001408307D0) ----------------------------------------------------
__int64 __fastcall sub_1408307D0(__int64 a1, __int64 a2, char a3)
{
	_QWORD* v3; // rax

	if (!a2)
		return 2i64;
	v3 = *(_QWORD**)(a1 + 8i64 * ((unsigned int)a2 % 0xC1) + 56);
	if (!v3)
		return 2i64;
	while (v3[1] != a2)
	{
		v3 = (_QWORD*)*v3;
		if (!v3)
			return 2i64;
	}
	if (v3 == (_QWORD*)-16i64)
		return 2i64;
	sub_14084C240(v3[2], a3);
	return 1i64;
}

