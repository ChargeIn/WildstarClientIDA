#include "../winhttp.h"

//----- (00000001402B27D0) ----------------------------------------------------
char __fastcall sub_1402B27D0(int a1)
{
	char result; // al

	switch (a1)
	{
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
		result = 1;
		break;
	default:
		result = 0;
		break;
	}
	return result;
}

