#include "../winhttp.h"

//----- (0000000140830A00) ----------------------------------------------------
__int64 __fastcall sub_140830A00(__int64 a1, __int64 a2, unsigned int a3, float a4, float a5)
{
	_QWORD* v5; // r9
	__int64 v8; // r8

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
	v8 = v5[2];
	if (a3 >= 8)
		return 2i64;
	*(_BYTE*)(a3 + v8 + 80) = (int)(float)(a4 * 255.0);
	*(_BYTE*)(a3 + v8 + 88) = (int)(float)(a5 * 255.0);
	return 1i64;
}

