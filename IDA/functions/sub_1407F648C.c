#include "../winhttp.h"

//----- (00000001407F648C) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407F648C(int a1)
{
	unsigned __int64 result; // rax

	if (a1 == 1)
	{
		result = (unsigned __int64)sub_1407DE1B0();
		*(_DWORD*)result = 33;
	}
	else
	{
		result = (unsigned int)(a1 - 2);
		if ((unsigned int)result <= 1)
		{
			result = (unsigned __int64)sub_1407DE1B0();
			*(_DWORD*)result = 34;
		}
	}
	return result;
}

