#include "../winhttp.h"

//----- (0000000140466360) ----------------------------------------------------
double __fastcall sub_140466360(unsigned int* a1, int a2)
{
	double result; // xmm0_8

	if (a2 >= 11)
		return 0.0;
	switch (a2)
	{
	case 0:
		*(_QWORD*)&result = a1[387];
		break;
	case 1:
		*(_QWORD*)&result = a1[389];
		break;
	case 2:
		*(_QWORD*)&result = a1[391];
		break;
	case 3:
		*(_QWORD*)&result = a1[393];
		break;
	case 4:
		*(_QWORD*)&result = a1[395];
		break;
	case 5:
		*(_QWORD*)&result = a1[397];
		break;
	case 6:
		*(_QWORD*)&result = a1[399];
		break;
	case 7:
		*(_QWORD*)&result = a1[445];
		break;
	case 8:
		*(_QWORD*)&result = a1[469];
		break;
	case 9:
		*(_QWORD*)&result = a1[473];
		break;
	case 10:
		*(_QWORD*)&result = a1[477];
		break;
	default:
		return 0.0;
	}
	return result;
}

