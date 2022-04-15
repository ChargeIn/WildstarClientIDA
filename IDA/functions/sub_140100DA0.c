#include "../winhttp.h"

//----- (0000000140100DA0) ----------------------------------------------------
char __fastcall sub_140100DA0(__int64 a1, __int64 a2)
{
	unsigned int v5; // esi
	unsigned int v6; // edi
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r8
	__int64 v10; // rcx

	if ((*(_BYTE*)(a1 + 116) & 1) != 0)
		return 1;
	v5 = 0;
	v6 = 0;
	if ((__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 3)
	{
		v7 = 0i64;
		do
		{
			v8 = *(_QWORD*)(a1 + 88);
			if (*(_QWORD*)(v8 + 8 * v7))
			{
				if (!(unsigned __int8)sub_140100DA0(*(_QWORD*)(v8 + 8 * v7), a2))
					return 0;
			}
			v7 = ++v6;
		} while (v6 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 3));
	}
	if ((*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) / 304i64)
	{
		v9 = 0i64;
		do
		{
			v10 = *(_QWORD*)(304 * v9 + *(_QWORD*)(a1 + 56));
			if (!*(_BYTE*)(v10 + 64) && !sub_1400FE1F0(v10, a2))
				return 0;
			v9 = ++v5;
		} while (v5 < (unsigned __int64)((*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) / 304i64));
	}
	*(_BYTE*)(a1 + 116) |= 1u;
	return 1;
}

