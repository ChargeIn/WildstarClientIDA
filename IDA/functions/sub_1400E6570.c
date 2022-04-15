#include "../winhttp.h"

//----- (00000001400E6570) ----------------------------------------------------
char __fastcall sub_1400E6570(_DWORD* a1, unsigned int a2, unsigned __int64 a3, _DWORD* a4, _DWORD* a5)
{
	int v5; // ecx
	char result; // al
	int v7; // ecx
	int v8; // ecx
	int v9; // ecx
	int v10; // ecx
	int v11; // ecx
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	unsigned __int64 v15; // r8

	if (a2 > 0x20D)
		return 0;
	switch (a2)
	{
	case 0x200u:
		*a4 = 4;
		*a5 = -1;
		return 1;
	case 0x201u:
		v5 = a1[714];
		*a4 = 1;
		*a5 = v5;
		return 1;
	case 0x202u:
		v8 = a1[714];
		*a4 = 2;
		*a5 = v8;
		return 1;
	case 0x203u:
		v7 = a1[714];
		*a4 = 3;
		*a5 = v7;
		return 1;
	case 0x204u:
		v9 = a1[715];
		*a4 = 1;
		*a5 = v9;
		return 1;
	case 0x205u:
		v11 = a1[715];
		*a4 = 2;
		*a5 = v11;
		return 1;
	case 0x206u:
		v10 = a1[715];
		*a4 = 3;
		*a5 = v10;
		return 1;
	case 0x207u:
		v12 = a1[716];
		*a4 = 1;
		*a5 = v12;
		return 1;
	case 0x208u:
		v14 = a1[716];
		*a4 = 2;
		*a5 = v14;
		return 1;
	case 0x209u:
		v13 = a1[716];
		*a4 = 3;
		*a5 = v13;
		return 1;
	case 0x20Au:
		*a4 = 5;
		*a5 = -1;
		return 1;
	case 0x20Bu:
		*a4 = 1;
		goto LABEL_17;
	case 0x20Cu:
		*a4 = 2;
		goto LABEL_17;
	case 0x20Du:
		*a4 = 3;
		goto LABEL_17;
	default:
	LABEL_17:
		if (a2 - 523 > 2)
			return 0;
		v15 = a3 >> 16;
		if ((unsigned __int16)v15 == 1)
		{
			*a5 = 3;
			result = 1;
		}
		else
		{
			if ((unsigned __int16)v15 != 2)
				return 0;
			*a5 = 4;
			result = 1;
		}
		break;
	}
	return result;
}

