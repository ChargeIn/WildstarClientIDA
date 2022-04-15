#include "../winhttp.h"

//----- (0000000140925FE0) ----------------------------------------------------
__int64 __fastcall sub_140925FE0(__int64 a1, __int64 a2)
{
	unsigned int* v2; // rdi
	_QWORD* v5; // rax
	__int64* i; // r8
	__int64 v7; // rdx
	__int64 result; // rax
	char* v9; // rax
	__int64 v10; // r8
	__int64 v11; // r8
	int v12; // eax

	v2 = *(unsigned int**)a1;
	v5 = sub_140932570(*(_QWORD*)a1);
	for (i = *(__int64**)(a2 + 24); i; i = (__int64*)i[1])
	{
		v7 = *i;
		if (*i && v5)
		{
			*(_QWORD*)(v7 + 16) &= ~2ui64;
			*(_QWORD*)(v7 + 16) |= 1ui64;
			*(_QWORD*)(v7 + 24) = v5;
		}
	}
	result = *(unsigned int*)(a1 + 100);
	if ((_DWORD)result)
	{
		if (*(_DWORD*)(a1 + 60))
		{
			if (!*v2)
			{
				v2[26] = 0;
				v9 = sub_14092D140((__int64)v2, 1, 3, 0i64, 258, -8i64);
				if (v9)
					*v9 = -117;
				if (!*v2)
				{
					v2[26] = 0;
					sub_14092AA10(v2, 1, 0i64, 258, -16i64);
				}
			}
			result = sub_14092EC50((unsigned int**)a1, 2);
			if (!*v2)
			{
				v10 = *(int*)(a1 + 36) + 48i64;
				v2[26] = 0;
				result = sub_14092AA10(v2, 267, v10, 3, 0i64);
				if (!*v2)
				{
					v11 = *(int*)(a1 + 60) + 48i64;
					v2[26] = 0;
					return sub_14092AA10(v2, 267, v11, 1, 0i64);
				}
			}
			return result;
		}
	}
	else if (!*(_DWORD*)(a1 + 60))
	{
		return result;
	}
	if (!*v2)
	{
		v2[26] = 0;
		sub_14092AA10(v2, 3, 0i64, 258, -8i64);
	}
	sub_140932A90(*(unsigned int**)a1, 27, 2, 0i64, 2, 0i64, 512, 8i64);
	if (*(_DWORD*)(a1 + 100))
		v12 = *(_DWORD*)(a1 + 36);
	else
		v12 = *(_DWORD*)(a1 + 60);
	return sub_140932690(v2, 6, 267, v12, 3, 0i64);
}
// 140926117: conditional instruction was optimized away because eax.4!=0

