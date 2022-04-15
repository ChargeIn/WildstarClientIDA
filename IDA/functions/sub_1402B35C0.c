#include "../winhttp.h"

//----- (00000001402B35C0) ----------------------------------------------------
char __fastcall sub_1402B35C0(int a1)
{
	char result; // al

	switch (a1)
	{
	case 1:
	case 5:
	case 9:
	case 15:
	case 19:
	case 21:
	case 22:
	case 23:
	case 27:
	case 33:
	case 39:
	case 44:
	case 46:
	case 47:
	case 48:
	case 53:
	case 60:
	case 70:
	case 73:
	case 76:
	case 79:
	case 82:
	case 90:
	case 92:
	case 94:
	case 97:
		result = 1;
		break;
	default:
		result = 0;
		break;
	}
	return result;
}

