#include "../winhttp.h"

//----- (0000000140845200) ----------------------------------------------------
__int64 __fastcall sub_140845200(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v2; // rsi
	__int64 v3; // rdi

	v1 = (__int64*)(a1 + 8);
	v2 = 2i64;
	do
	{
		v3 = 2i64;
		do
		{
			if (*v1)
			{
				sub_140881720(dword_140C10F20, *v1);
				*v1 = 0i64;
			}
			v1[1] = 0i64;
			v1 += 2;
			--v3;
		} while (v3);
		--v2;
	} while (v2);
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

