#include "../winhttp.h"

//----- (000000014009DFE0) ----------------------------------------------------
__int64 __fastcall sub_14009DFE0(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned __int64 v3; // r9
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	__int64 v8; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD*)a2;
	if (v2
		&& (v6 = *(_QWORD*)(a1 + 16), (unsigned __int64)(8i64 * (*(_QWORD*)(v2 + 24) - *(_QWORD*)(v2 + 32)) - v6) >= 0x40))
	{
		v7 = *(_QWORD**)(v2 + 32);
		*v7 &= (1i64 << v6) - 1;
		*v7 |= v3 << *(_QWORD*)(a1 + 16);
		v8 = *(_QWORD*)(a1 + 16);
		if (((v8 + 71) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v3 >> (64 - (unsigned __int8)v8);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 64i64) >> 3;
		*(_QWORD*)(a1 + 16) &= 7ui64;
	}
	else
	{
		result = sub_140336470(a1, *(_QWORD*)a2, 0x40ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_140085170(a1, (unsigned int*)(a2 + 8));
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *(unsigned __int16**)(a2 + 24));
		if ((int)result >= 0)
		{
			result = sub_140085170(a1, (unsigned int*)(a2 + 32));
			if ((int)result >= 0)
				return sub_140336040(a1, *(unsigned __int16**)(a2 + 48));
		}
	}
	return result;
}

