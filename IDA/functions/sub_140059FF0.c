#include "../winhttp.h"

//----- (0000000140059FF0) ----------------------------------------------------
__int64 __fastcall sub_140059FF0(__int64 a1, int a2, int a3)
{
	int v4; // r8d
	unsigned int v5; // edx
	int v6; // ecx
	bool v7; // sf
	bool v8; // of
	int v9; // eax

	if (a3)
	{
		v4 = a3 - 2;
		if (v4)
		{
			if (v4 == 1)
			{
				if ((a2 & 0x100) != 0)
				{
					v5 = a2 & 0xFFFFFEFF;
					v6 = 0;
					v8 = __OFSUB__(v5, *(_DWORD*)(a1 + 76));
					v7 = (int)(v5 - *(_DWORD*)(a1 + 76)) < 0;
				}
				else
				{
					v9 = *(unsigned __int8*)(a1 + 115);
					v6 = 0;
					v8 = __OFSUB__(a2, v9);
					v7 = a2 - v9 < 0;
				}
				LOBYTE(v6) = v7 ^ v8;
				if (!v6)
					return 0i64;
			}
			return 1i64;
		}
		if (a2 >= *(unsigned __int8*)(a1 + 115))
			return 0i64;
	}
	else if (a2)
	{
		return 0i64;
	}
	return 1i64;
}

