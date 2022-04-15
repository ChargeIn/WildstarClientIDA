#include "../winhttp.h"

//----- (00000001400C4DF0) ----------------------------------------------------
char __fastcall sub_1400C4DF0(__int64 a1, int a2)
{
	char v2; // di
	int v5; // esi
	int v6; // edx
	int v7; // ecx
	int v8; // eax
	int v9; // ecx
	int v10; // eax

	v2 = 0;
	if (*(_DWORD*)(a1 + 1296))
	{
		if (!a2)
		{
			v5 = 0;
			if ((unsigned int)sub_1400C3E20(a1 + 416) == 6)
			{
				v6 = *(_DWORD*)(a1 + 1308) + *(_DWORD*)(a1 + 1332);
				if (v6 > *(_DWORD*)(a1 + 1300))
				{
					v7 = *(_DWORD*)(a1 + 1296);
					v8 = 0;
					v2 = 1;
					if (v6 < v7)
						v7 = *(_DWORD*)(a1 + 1308) + *(_DWORD*)(a1 + 1332);
					if (v7 > 0)
						v8 = v7;
					*(_BYTE*)(a1 + 1392) |= 0x10u;
					*(_DWORD*)(a1 + 1300) = v8;
				}
			}
			if ((unsigned int)sub_1400C3E20(a1) == 6)
			{
				v9 = *(_DWORD*)(a1 + 1332) - *(_DWORD*)(a1 + 1308);
				if (v9 < *(_DWORD*)(a1 + 1300))
				{
					v10 = *(_DWORD*)(a1 + 1296);
					v2 = 1;
					if (v9 < v10)
						v10 = *(_DWORD*)(a1 + 1332) - *(_DWORD*)(a1 + 1308);
					if (v10 > 0)
						v5 = v10;
					*(_BYTE*)(a1 + 1392) |= 0x10u;
					*(_DWORD*)(a1 + 1300) = v5;
				}
			}
		}
		*(_BYTE*)(a1 + 1392) &= 0xF9u;
		return v2;
	}
	else
	{
		*(_BYTE*)(a1 + 828) &= 0x1Fu;
		*(_BYTE*)(a1 + 412) &= 0x1Fu;
		*(_BYTE*)(a1 + 1392) &= 0xF9u;
		return 0;
	}
}

