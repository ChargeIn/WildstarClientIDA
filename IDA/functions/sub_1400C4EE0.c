#include "../winhttp.h"

//----- (00000001400C4EE0) ----------------------------------------------------
bool __fastcall sub_1400C4EE0(__int64 a1, int* a2)
{
	bool v2; // bp
	int v6; // esi
	int v7; // edx
	int v8; // ecx
	int v9; // eax
	int v10; // edx
	int v11; // ecx
	int v12; // eax
	char v13; // al
	int v14; // eax
	int v15; // ecx
	int v16; // eax

	v2 = 0;
	if (!*(_DWORD*)(a1 + 1296))
		return 0;
	v6 = 0;
	if ((unsigned int)sub_1400C3F20(a1 + 416, a2) == 2)
	{
		v7 = *(_DWORD*)(a1 + 1300);
		v8 = *(_DWORD*)(a1 + 1296);
		*(_DWORD*)(a1 + 1300) = v7 + 1;
		if (v7 + 1 > v8)
			*(_DWORD*)(a1 + 1300) = v8;
		v9 = *(_DWORD*)(a1 + 1300);
		if (v9 < 0)
			v9 = 0;
		*(_BYTE*)(a1 + 1392) |= 0x10u;
		*(_DWORD*)(a1 + 1300) = v9;
		v2 = v9 != v7;
	}
	if ((unsigned int)sub_1400C3F20(a1, a2) == 2)
	{
		v10 = *(_DWORD*)(a1 + 1300);
		v11 = *(_DWORD*)(a1 + 1296);
		*(_DWORD*)(a1 + 1300) = v10 - 1;
		if (v10 - 1 > v11)
			*(_DWORD*)(a1 + 1300) = v11;
		v12 = *(_DWORD*)(a1 + 1300);
		if (v12 < 0)
			v12 = 0;
		*(_BYTE*)(a1 + 1392) |= 0x10u;
		*(_DWORD*)(a1 + 1300) = v12;
		v2 = v12 != v10;
	}
	v13 = *(_BYTE*)(a1 + 1392);
	if ((v13 & 2) != 0)
	{
		if ((v13 & 1) != 0)
		{
			v14 = a2[1] - *(_DWORD*)(a1 + 1340);
			v15 = *(_DWORD*)(a1 + 1356) + *(_DWORD*)(a1 + 1372) - *(_DWORD*)(a1 + 1364) - *(_DWORD*)(a1 + 1348);
		}
		else
		{
			v14 = *a2 - *(_DWORD*)(a1 + 1336);
			v15 = *(_DWORD*)(a1 + 1352) + *(_DWORD*)(a1 + 1368) - *(_DWORD*)(a1 + 1360) - *(_DWORD*)(a1 + 1344);
		}
		if (v15 > 0)
			v2 = sub_1400C4740(a1, *(_DWORD*)(a1 + 1296) * v14 / v15);
		*(_DWORD*)(a1 + 1336) = *a2;
		*(_DWORD*)(a1 + 1340) = a2[1];
	}
	if (*a2 >= *(_DWORD*)(a1 + 1376) && *a2 < *(_DWORD*)(a1 + 1384))
	{
		v16 = a2[1];
		if (v16 >= *(_DWORD*)(a1 + 1380) && v16 < *(_DWORD*)(a1 + 1388))
			v6 = 1;
	}
	*(_BYTE*)(a1 + 1392) &= ~8u;
	*(_BYTE*)(a1 + 1392) |= 8 * (v6 != 0);
	return v2;
}

