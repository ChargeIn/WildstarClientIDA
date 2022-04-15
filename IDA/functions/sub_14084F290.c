#include "../winhttp.h"

//----- (000000014084F290) ----------------------------------------------------
bool __fastcall sub_14084F290(__int64 a1, int a2)
{
	bool v3; // zf

	if (a2 >= 15)
	{
		if (a2 <= 18)
		{
			v3 = (*(_BYTE*)(a1 + 160) & 0x40) == 0;
		}
		else
		{
			if (a2 != 19)
			{
				if ((unsigned int)(a2 - 22) <= 1)
					return *(_QWORD*)(a1 + 72) != 0i64;
				return 1;
			}
			v3 = (*(_BYTE*)(a1 + 160) & 0x10) == 0;
		}
		if (v3 && *(_QWORD*)(a1 + 64))
			return 0;
	}
	return 1;
}

