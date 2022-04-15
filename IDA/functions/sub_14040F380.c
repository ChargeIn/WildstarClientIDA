#include "../winhttp.h"

//----- (000000014040F380) ----------------------------------------------------
__int64 __fastcall sub_14040F380(__int64 a1, int a2, int a3)
{
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rax

	if (a3)
	{
		if (dword_140C7B30C)
		{
			result = (unsigned int)(a2 + dword_140C7B308);
			if ((int)result < 1)
				return 1i64;
		}
		else
		{
			dword_140C7B30C = 1;
			v4 = sub_140200220(0x402u);
			if (v4)
			{
				dword_140C7B308 = *(_DWORD*)(v4 + 4);
				result = (unsigned int)(a2 + dword_140C7B308);
				if ((int)result < 1)
					return 1i64;
			}
			else
			{
				dword_140C7B308 = 0;
				result = (unsigned int)a2;
				if (a2 < 1)
					return 1i64;
			}
		}
	}
	else if (dword_140C7CB7C)
	{
		result = (unsigned int)(a2 + dword_140C7CB78);
		if ((int)result < 1)
			return 1i64;
	}
	else
	{
		dword_140C7CB7C = 1;
		v6 = sub_140200220(0x402u);
		if (v6)
		{
			dword_140C7CB78 = *(_DWORD*)(v6 + 12);
			result = (unsigned int)(a2 + dword_140C7CB78);
			if ((int)result < 1)
				return 1i64;
		}
		else
		{
			dword_140C7CB78 = 0;
			result = (unsigned int)a2;
			if (a2 < 1)
				return 1i64;
		}
	}
	return result;
}
// 140C7B308: using guessed type int dword_140C7B308;
// 140C7B30C: using guessed type int dword_140C7B30C;
// 140C7CB78: using guessed type int dword_140C7CB78;
// 140C7CB7C: using guessed type int dword_140C7CB7C;

