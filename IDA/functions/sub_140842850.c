#include "../winhttp.h"

//----- (0000000140842850) ----------------------------------------------------
__int64 __fastcall sub_140842850(__int64 a1)
{
	_QWORD* v2; // rdx
	unsigned __int64 v3; // rcx
	_QWORD* v4; // rdi
	__int64 v5; // rdx

	if (*(_DWORD*)(a1 + 28))
	{
		sub_140842570(a1);
		v2 = *(_QWORD**)(a1 + 16);
		if (v2)
		{
			do
			{
				v3 = *(_QWORD*)(a1 + 40);
				v4 = (_QWORD*)*v2;
				if ((unsigned __int64)v2 < v3
					|| (unsigned __int64)v2 >= v3 + ((unsigned __int64)*(unsigned int*)(a1 + 24) << 6))
				{
					sub_140881720(dword_140C10F20, (__int64)v2);
				}
				v2 = v4;
			} while (v4);
		}
		v5 = *(_QWORD*)(a1 + 40);
		if (v5)
			sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)(a1 + 24) = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

