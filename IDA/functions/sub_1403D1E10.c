#include "../winhttp.h"

//----- (00000001403D1E10) ----------------------------------------------------
__int64 __fastcall sub_1403D1E10(__int64 a1, unsigned int a2)
{
	__int64 result; // rax

	if (a2 >= 0x19)
	{
		if (a2 > 0x3E8)
			a2 = 1000;
		result = 0i64;
		dword_140C3A004 = a2;
	}
	else
	{
		dword_140C3A004 = 25;
		return 0i64;
	}
	return result;
}
// 140C3A004: using guessed type int dword_140C3A004;

