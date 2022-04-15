#include "../winhttp.h"

//----- (00000001407A2950) ----------------------------------------------------
double __fastcall sub_1407A2950(int a1)
{
	double result; // xmm0_8

	switch (a1)
	{
	case 0:
		*(_QWORD*)&result = 3338272768i64;
		break;
	case 1:
		*(_QWORD*)&result = 3329884160i64;
		break;
	case 2:
		*(_QWORD*)&result = 3321495552i64;
		break;
	case 3:
		*(_QWORD*)&result = 3313106944i64;
		break;
	case 4:
		*(_QWORD*)&result = 3304718336i64;
		break;
	case 6:
		*(_QWORD*)&result = 1157234688i64;
		break;
	case 7:
		*(_QWORD*)&result = 1165623296i64;
		break;
	case 8:
		*(_QWORD*)&result = 1174011904i64;
		break;
	case 9:
		*(_QWORD*)&result = 1182400512i64;
		break;
	case 10:
		*(_QWORD*)&result = 1190789120i64;
		break;
	default:
		result = 0.0;
		break;
	}
	return result;
}

