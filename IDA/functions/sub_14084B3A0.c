#include "../winhttp.h"

//----- (000000014084B3A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14084B3A0(char a1, char a2)
{
	unsigned int i; // r8d
	unsigned __int64 result; // rax

	for (i = 0; a1; a1 *= 2)
	{
		if ((a1 & 1) != 0)
		{
			result = (unsigned __int64)i << 7;
			*((_BYTE*)&unk_140C62074 + result) = a2;
		}
		++i;
	}
	return result;
}

