#include "../winhttp.h"

//----- (000000014009B550) ----------------------------------------------------
__int64 __fastcall sub_14009B550(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	unsigned __int64 v7; // r9
	_QWORD* v8; // rdx
	__int64 v9; // rcx

	result = sub_140085170(a1, (unsigned int*)a2);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 8);
		if (v5
			&& (v6 = *(_QWORD*)(a1 + 16),
				(unsigned __int64)(8i64 * (*(_QWORD*)(v5 + 24) - *(_QWORD*)(v5 + 32)) - v6) >= 0x40))
		{
			v7 = *(int*)(a2 + 16);
			v8 = *(_QWORD**)(v5 + 32);
			*v8 &= (1i64 << v6) - 1;
			*v8 |= (v7 & 0xF) << *(_QWORD*)(a1 + 16);
			v9 = *(_QWORD*)(a1 + 16);
			if (((v9 + 11) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
				*(_BYTE*)(*(_QWORD*)(v5 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
			*(_QWORD*)(v5 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 4i64) >> 3;
			*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 4) & 7;
			return 0i64;
		}
		else
		{
			return sub_140336470(a1, *(int*)(a2 + 16), 4ui64);
		}
	}
	return result;
}

