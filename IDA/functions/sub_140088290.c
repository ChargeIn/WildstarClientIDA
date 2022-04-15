#include "../winhttp.h"

//----- (0000000140088290) ----------------------------------------------------
__int64 __fastcall sub_140088290(__int64 a1, unsigned __int8* a2)
{
	__int64 v2; // r8
	unsigned __int8 v4; // dl
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = v4;
		v8 = *(_QWORD**)(v2 + 32);
		*v8 &= (1i64 << v6) - 1;
		*v8 |= (v7 & 0x7F) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 14) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 7i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 1) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 7ui64);
		if ((int)result < 0)
			return result;
	}
	return sub_1403360D0(a1, *((unsigned __int16**)a2 + 1), *((_QWORD*)a2 + 1) + 2i64 * *a2);
}

