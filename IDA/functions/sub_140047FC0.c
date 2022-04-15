#include "../winhttp.h"

//----- (0000000140047FC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140047FC0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
	unsigned __int64 result; // rax
	int v5; // ecx

	result = (unsigned int)(a2 - 513);
	if ((unsigned int)result <= 6 && (v5 = 73, _bittest(&v5, result)) || a2 == 256 || a2 == 260)
	{
		if (a2 != 512)
		{
		LABEL_11:
			dword_140C7F928 = 0;
			return result;
		}
	LABEL_10:
		dword_140C7F930 = a4;
		result = a4 >> 16;
		goto LABEL_11;
	}
	if (a2 == 512)
	{
		result = abs32((unsigned __int16)a4 - (__int16)dword_140C7F930);
		if ((int)result > 3)
		{
			result = abs32(WORD1(a4) - SHIWORD(dword_140C7F930));
			if ((int)result > 3)
				goto LABEL_10;
		}
	}
	return result;
}
// 140C7F928: using guessed type int dword_140C7F928;
// 140C7F930: using guessed type int dword_140C7F930;

