#include "../winhttp.h"

//----- (00000001400AC3A0) ----------------------------------------------------
void __fastcall sub_1400AC3A0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	unsigned __int8 i; // r9
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rax

	*a2 += 40i64;
	for (i = 0; i < *(_BYTE*)(a1 + 4); ++i)
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64 * i);
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*(_WORD*)(v5 + 2 * v6));
		}
		else
		{
			v6 = 0i64;
		}
		*a3 += 2 * v6;
		if (v6 <= 0x7F)
			v7 = 16 * v6 + 8;
		else
			v7 = 16 * (v6 + 1);
		*a2 += v7;
	}
}

