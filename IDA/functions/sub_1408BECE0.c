#include "../winhttp.h"

//----- (00000001408BECE0) ----------------------------------------------------
__int64 __fastcall sub_1408BECE0(_DWORD* a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (a2 == 0x7FFF)
	{
		a1[8] = *a3;
		return 1i64;
	}
	else
	{
		switch (a2)
		{
		case 0:
			result = 1i64;
			a1[2] = *a3;
			break;
		case 1:
			a1[3] = *a3;
			result = 1i64;
			break;
		case 2:
			a1[7] = *a3;
			result = 1i64;
			break;
		case 4:
			a1[4] = *a3;
			result = 1i64;
			break;
		case 5:
			a1[5] = *a3;
			result = 1i64;
			break;
		case 6:
			a1[6] = *a3;
			result = 1i64;
			break;
		default:
			result = 31i64;
			break;
		}
	}
	return result;
}

