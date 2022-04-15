#include "../winhttp.h"

//----- (00000001400B1B90) ----------------------------------------------------
_BOOL8 __fastcall sub_1400B1B90(__int64 a1)
{
	_BOOL8 result; // rax
	__int64 v2; // [rsp+30h] [rbp+8h] BYREF

	switch (*(_DWORD*)(a1 + 32))
	{
	case 0x4E21:
	case 0x4E22:
	case 0x4E2E:
	case 0x4E2F:
	case 0x4E30:
	case 0x4E36:
		goto LABEL_4;
	case 0x4E23:
	case 0x4E24:
	case 0x4E25:
	case 0x4E26:
	case 0x4E27:
	case 0x4E28:
	case 0x4E29:
	case 0x4E2A:
	case 0x4E2B:
	case 0x4E2C:
	case 0x4E2D:
	case 0x4E31:
	case 0x4E32:
	case 0x4E33:
	case 0x4E35:
		result = *(_DWORD*)(a1 + 68) < 5u;
		break;
	default:
		v2 = 0x141D0D980i64;
		sub_1401A3130(114, 1, &v2);
	LABEL_4:
		result = 0i64;
		break;
	}
	return result;
}

