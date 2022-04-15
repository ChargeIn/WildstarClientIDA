#include "../winhttp.h"

//----- (0000000140830A60) ----------------------------------------------------
__int64 __fastcall sub_140830A60(__int64 a1, __int64 a2, int* a3, unsigned __int16 a4, char a5)
{
	_QWORD* v5; // rax

	v5 = *(_QWORD**)(a1 + 8i64 * ((unsigned int)a2 % 0xC1) + 56);
	if (!v5)
		return 2i64;
	while (v5[1] != a2)
	{
		v5 = (_QWORD*)*v5;
		if (!v5)
			return 2i64;
	}
	if (v5 == (_QWORD*)-16i64)
		return 2i64;
	sub_14084C5C0(v5[2], a3, a4, a5);
	return 1i64;
}

