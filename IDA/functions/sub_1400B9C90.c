#include "../winhttp.h"

//----- (00000001400B9C90) ----------------------------------------------------
__int64 __fastcall sub_1400B9C90(unsigned __int16 a1)
{
	__int64 result; // rax
	unsigned __int64 v2; // rdx
	unsigned __int64 v3; // r8
	__int64 v4; // rax
	unsigned __int16 v5; // r9

	if (a1 >= 0x80u)
	{
		v2 = 0i64;
		v3 = 985i64;
		while (1)
		{
			v4 = v2 + ((v3 - v2) >> 1);
			v5 = word_140A42240[v4];
			if (a1 >= v5)
			{
				if (a1 <= v5)
					return (unsigned __int16)word_140A412B0[v4];
				v2 = v4 + 1;
			}
			else
			{
				v3 = v2 + ((v3 - v2) >> 1);
			}
			if (v2 >= v3)
				return a1;
		}
	}
	result = a1;
	if ((unsigned __int16)(a1 - 97) <= 0x19u)
		return (unsigned int)a1 - 32;
	return result;
}
// 140A412B0: using guessed type __int16 word_140A412B0[988];
// 140A42240: using guessed type __int16 word_140A42240[1032];

