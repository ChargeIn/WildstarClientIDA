#include "../winhttp.h"

//----- (0000000140337440) ----------------------------------------------------
__int64 __fastcall sub_140337440(_QWORD* a1, __int64* a2, unsigned __int64 a3)
{
	_DWORD* v3; // r11
	__int64 v4; // r10
	unsigned int v5; // r9d
	__int64 result; // rax

	v3 = (_DWORD*)*a1;
	v4 = *a2;
	v5 = *(_DWORD*)*a1 >> *a2;
	if (((*a2 + a3 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x20)
		v5 |= *((unsigned __int8*)v3 + 4) << (32 - v4);
	if (a3 < 0x20)
		v5 &= (1 << a3) - 1;
	result = v5;
	*a1 = (char*)v3 + ((v4 + a3) >> 3);
	*a2 = ((_BYTE)a3 + (unsigned __int8)*a2) & 7;
	return result;
}

