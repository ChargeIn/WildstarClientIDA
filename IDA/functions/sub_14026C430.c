#include "../winhttp.h"

//----- (000000014026C430) ----------------------------------------------------
__int64 __fastcall sub_14026C430(int a1)
{
	__int64 result; // rax

	if (a1 > 827611204)
	{
		switch (a1)
		{
		case 861165636:
			return 14i64;
		case 894720068:
			return 15i64;
		case 1280070990:
			return 24i64;
		default:
			return 0i64;
		}
	}
	else if (a1 == 827611204)
	{
		return 13i64;
	}
	else
	{
		switch (a1)
		{
		case 22:
			result = 1i64;
			break;
		case 23:
			result = 2i64;
			break;
		case 24:
			result = 4i64;
			break;
		case 25:
			result = 3i64;
			break;
		case 26:
			result = 5i64;
			break;
		case 31:
			result = 26i64;
			break;
		case 32:
			result = 25i64;
			break;
		case 34:
			result = 8i64;
			break;
		case 36:
			result = 9i64;
			break;
		case 50:
			result = 6i64;
			break;
		case 60:
			result = 10i64;
			break;
		case 63:
			result = 11i64;
			break;
		case 64:
			result = 12i64;
			break;
		case 75:
			result = 23i64;
			break;
		case 77:
			result = 22i64;
			break;
		case 80:
			result = 21i64;
			break;
		case 81:
			result = 7i64;
			break;
		case 111:
			result = 16i64;
			break;
		case 112:
			result = 17i64;
			break;
		case 113:
			result = 18i64;
			break;
		case 114:
			result = 19i64;
			break;
		case 116:
			result = 20i64;
			break;
		default:
			return 0i64;
		}
	}
	return result;
}

