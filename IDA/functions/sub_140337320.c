#include "../winhttp.h"

//----- (0000000140337320) ----------------------------------------------------
__int64 __fastcall sub_140337320(_QWORD* a1, __int64* a2, unsigned __int64 a3)
{
	_BYTE* v3; // r11
	__int64 v4; // r10
	unsigned __int8 v5; // r9
	__int64 result; // rax

	v3 = (_BYTE*)*a1;
	v4 = *a2;
	v5 = *(_BYTE*)*a1 >> *a2;
	if (((*a2 + a3 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 8)
		v5 |= v3[1] << (8 - v4);
	if (a3 < 8)
		v5 &= (1 << a3) - 1;
	result = v5;
	*a1 = &v3[(v4 + a3) >> 3];
	*a2 = ((_BYTE)a3 + (unsigned __int8)*a2) & 7;
	return result;
}

