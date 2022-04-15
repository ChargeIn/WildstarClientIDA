#include "../winhttp.h"

//----- (000000014046C6A0) ----------------------------------------------------
__int64 __fastcall sub_14046C6A0(__int64 a1)
{
	unsigned __int64 v1; // rdx

	if (*(_DWORD*)(a1 + 6400) != 2)
	{
		if (*(char*)(a1 + 40) >= 0)
		{
			if (*(_DWORD*)(a1 + 128) == 30 && *(_DWORD*)(a1 + 440) != 3)
				return 1i64;
		}
		else
		{
			v1 = 0i64;
			while (!*(_BYTE*)(a1 + 72i64 * *(unsigned int*)((char*)&unk_140C593F0 + v1) + 6420))
			{
				v1 += 4i64;
				if (v1 >= 0x2C)
					return 1i64;
			}
		}
	}
	return 0i64;
}

