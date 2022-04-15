#include "../winhttp.h"

//----- (00000001403368F0) ----------------------------------------------------
__int64 __fastcall sub_1403368F0(__int64 a1, _QWORD* a2, unsigned __int64 a3, unsigned __int64 a4)
{
	__int64 v5; // rax
	_DWORD* v6; // rdx
	__int64 result; // rax

	if (a4 >= 0x20)
		v5 = 0xFFFFFFFFi64;
	else
		v5 = (unsigned int)((1 << a4) - 1);
	v6 = *(_DWORD**)a1;
	*v6 &= (1 << *a2) - 1;
	*v6 |= (a3 & v5) << *a2;
	if (((*a2 + a4 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x20)
		*(_BYTE*)(*(_QWORD*)a1 + 4i64) = a3 >> (32 - (unsigned __int8)*a2);
	*(_QWORD*)a1 += (a4 + *a2) >> 3;
	result = ((_BYTE)a4 + (unsigned __int8)*a2) & 7;
	*a2 = result;
	return result;
}

