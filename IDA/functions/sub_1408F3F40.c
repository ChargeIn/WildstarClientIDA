#include "../winhttp.h"

//----- (00000001408F3F40) ----------------------------------------------------
__int64 __fastcall sub_1408F3F40(__int64 a1, int a2)
{
	unsigned int v2; // r8d
	__int64 result; // rax

	v2 = 0;
	switch (a2)
	{
	case 3:
		result = 1i64;
		break;
	case 6:
		result = 2i64;
		break;
	case 9:
		result = 3i64;
		break;
	case 20:
		result = 4i64;
		break;
	case 23:
		result = 5i64;
		break;
	case 26:
		v2 = 6;
		goto LABEL_8;
	default:
	LABEL_8:
		result = v2;
		break;
	}
	return result;
}

