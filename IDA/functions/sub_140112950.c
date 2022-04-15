#include "../winhttp.h"

//----- (0000000140112950) ----------------------------------------------------
char __fastcall sub_140112950(__int64 a1, __int64 a2, __int64 a3)
{
	SHORT KeyState; // bx
	char result; // al

	KeyState = GetKeyState(163);
	if (((GetKeyState(162) | KeyState) & 0x8000u) == 0)
		return 0;
	switch (a3)
	{
	case 1i64:
		sub_140111E60(a1);
		goto LABEL_4;
	case 3i64:
		sub_140111ED0(a1);
		return 1;
	case 22i64:
		sub_140111D60(a1);
		return 1;
	case 24i64:
		sub_140111FD0(a1);
		return 1;
	case 25i64:
	case 26i64:
	LABEL_4:
		result = 1;
		break;
	default:
		return 0;
	}
	return result;
}

