#include "../winhttp.h"

//----- (0000000140612CB0) ----------------------------------------------------
_BOOL8 __fastcall sub_140612CB0(__int64 a1, int a2, int a3, int a4, int a5)
{
	_BOOL8 result; // rax

	switch (a2)
	{
	case 1:
		result = a3 == 0;
		break;
	case 2:
		result = a3 == 1;
		break;
	case 3:
		result = a3 == 2;
		break;
	case 4:
		result = a5 == 1;
		break;
	case 5:
		result = a5 == 2;
		break;
	case 6:
		result = a5 == 3;
		break;
	case 7:
		result = a5 == 4;
		break;
	case 8:
		result = a5 == 5;
		break;
	case 9:
		result = a5 == 12;
		break;
	case 10:
		result = a5 == 13;
		break;
	case 11:
		result = a4 == 1;
		break;
	case 12:
		result = a4 == 2;
		break;
	case 13:
		result = a4 == 3;
		break;
	case 14:
		result = a4 == 4;
		break;
	case 15:
		result = a4 == 5;
		break;
	case 16:
		result = a4 == 6;
		break;
	case 17:
		result = a4 == 7;
		break;
	case 18:
		result = a4 == 8;
		break;
	default:
		result = 1i64;
		break;
	}
	return result;
}

