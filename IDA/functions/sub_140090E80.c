#include "../winhttp.h"

//----- (0000000140090E80) ----------------------------------------------------
__int64 __fastcall sub_140090E80(__int64 a1, int* a2)
{
	__int64 v2; // r8
	unsigned __int64 v4; // rdx
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
		*v8 |= (v7 & 0xF) << *(_QWORD*)(a1 + 16);
		v9 = *(_QWORD*)(a1 + 16);
		if (((v9 + 11) & 0xFFFFFFFFFFFFFFF8ui64) > 0x40)
			*(_BYTE*)(*(_QWORD*)(v2 + 32) + 8i64) = v7 >> (64 - (unsigned __int8)v9);
		*(_QWORD*)(v2 + 32) += (unsigned __int64)(*(_QWORD*)(a1 + 16) + 4i64) >> 3;
		*(_QWORD*)(a1 + 16) = ((unsigned __int8)*(_QWORD*)(a1 + 16) - 4) & 7;
	}
	else
	{
		result = sub_140336470(a1, v4, 4ui64);
		if ((int)result < 0)
			return result;
	}
	result = sub_140336040(a1, *((unsigned __int16**)a2 + 1));
	if ((int)result >= 0)
	{
		result = sub_140336040(a1, *((unsigned __int16**)a2 + 2));
		if ((int)result >= 0)
		{
			result = sub_140336040(a1, *((unsigned __int16**)a2 + 3));
			if ((int)result >= 0)
			{
				result = sub_140336040(a1, *((unsigned __int16**)a2 + 4));
				if ((int)result >= 0)
				{
					result = sub_1400904F0(a1, (unsigned int*)a2 + 10);
					if ((int)result >= 0)
						return sub_1400A7250(a1, a2[22] != 0, 1ui64);
				}
			}
		}
	}
	return result;
}

