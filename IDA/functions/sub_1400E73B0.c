#include "../winhttp.h"

//----- (00000001400E73B0) ----------------------------------------------------
_DWORD* __fastcall sub_1400E73B0(__int64 a1, _DWORD* a2, int* a3, int a4)
{
	int v4; // ecx

	switch (a4)
	{
	case 1:
		*a3 += (a3[2] - *a3 - 8) / 2;
		break;
	case 2:
		*a3 = a3[2] - 8;
		break;
	case 3:
		*a3 = a3[2] - 8;
		goto LABEL_5;
	case 4:
		*a3 = a3[2] - 8;
		goto LABEL_8;
	case 5:
		*a3 += (a3[2] - *a3 - 8) / 2;
		a3[1] = a3[3] - 8;
		break;
	case 6:
	LABEL_8:
		a3[1] = a3[3] - 8;
		break;
	case 7:
	LABEL_5:
		a3[1] += (a3[3] - a3[1] - 8) / 2;
		break;
	default:
		break;
	}
	v4 = *a3;
	a3[2] = *a3 + 8;
	a3[3] = a3[1] + 8;
	*a2 = v4;
	a2[1] = a3[1];
	a2[2] = a3[2];
	a2[3] = a3[3];
	return a2;
}

