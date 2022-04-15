#include "../winhttp.h"

//----- (00000001405C8560) ----------------------------------------------------
__int64 __fastcall sub_1405C8560(_DWORD* a1)
{
	unsigned int v1; // r8d
	__int64 result; // rax

	v1 = 0;
	switch (a1[2])
	{
	case 1:
		result = (unsigned int)a1[80];
		break;
	case 2:
		result = (unsigned int)a1[83];
		break;
	case 3:
		v1 = a1[84];
		goto LABEL_8;
	case 4:
		result = (unsigned int)a1[70];
		break;
	case 6:
	case 7:
	case 9:
	case 0xA:
	case 0xD:
		result = (unsigned int)a1[69];
		break;
	case 0xB:
	case 0xC:
		result = (unsigned int)a1[129];
		break;
	default:
	LABEL_8:
		result = v1;
		break;
	}
	return result;
}

