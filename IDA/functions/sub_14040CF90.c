#include "../winhttp.h"

//----- (000000014040CF90) ----------------------------------------------------
__int64 __fastcall sub_14040CF90(__int64 a1, __int64 a2)
{
	_DWORD* v3; // rcx
	__int64 result; // rax
	unsigned int* v5; // rdi
	unsigned int* v6; // rsi
	__int64 v7; // rax
	unsigned int v8; // r8d
	unsigned int v9; // eax
	unsigned int v10; // edx

	v3 = *(_DWORD**)(a1 + 16);
	if ((unsigned int)(v3[80] - 1) <= 1)
	{
		v5 = (unsigned int*)(a2 + 304);
		if (a2 == -304)
			return 149i64;
		v6 = (unsigned int*)(a1 + 212);
		if ((int)sub_14040EFB0(
			v3,
			(unsigned int*)a2,
			(unsigned int*)(a2 + 304),
			(unsigned int*)(a1 + 208),
			(unsigned int*)(a1 + 212)) < 0)
		{
			return 149i64;
		}
		else
		{
			v7 = *(_QWORD*)(a1 + 160);
			if (v7)
			{
				v8 = *(_DWORD*)(a1 + 208);
				v9 = *v5 + *(unsigned __int8*)(v7 + 8);
				if (v9 < v8)
					v8 = v9;
				*v5 = v8;
				v10 = *v6;
				if (v8 + *(unsigned __int8*)(*(_QWORD*)(a1 + 160) + 9i64) < *v6)
					v10 = v8 + *(unsigned __int8*)(*(_QWORD*)(a1 + 160) + 9i64);
				*v5 = v10;
			}
			return 0i64;
		}
	}
	else
	{
		result = 0i64;
		*(_QWORD*)(a2 + 300) = 0i64;
		*(_QWORD*)(a1 + 208) = 0i64;
	}
	return result;
}

