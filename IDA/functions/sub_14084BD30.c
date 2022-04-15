#include "../winhttp.h"

//----- (000000014084BD30) ----------------------------------------------------
void __fastcall sub_14084BD30(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdx
	__int64 v4; // rdx

	sub_14084C050((_QWORD**)a1);
	if (*(_QWORD*)a1)
	{
		sub_140830B20(*(_QWORD*)a1);
		if (*(_QWORD*)a1)
			sub_140881720(dword_140C10F20, *(_QWORD*)a1);
		*(_QWORD*)a1 = 0i64;
	}
	v2 = *(_QWORD*)(a1 + 56);
	if (v2)
	{
		*(_QWORD*)(a1 + 64) = v2;
		sub_140881720(dword_140C10F20, v2);
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_DWORD*)(a1 + 72) = 0;
	}
	v3 = *(_QWORD*)(a1 + 104);
	if (v3)
	{
		*(_QWORD*)(a1 + 112) = v3;
		sub_140881720(dword_140C10F20, v3);
		*(_QWORD*)(a1 + 104) = 0i64;
		*(_QWORD*)(a1 + 112) = 0i64;
		*(_DWORD*)(a1 + 120) = 0;
	}
	v4 = *(_QWORD*)(a1 + 8);
	if (v4)
	{
		sub_140881720(dword_140C10F20, v4);
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_WORD*)(a1 + 16) = 0;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

