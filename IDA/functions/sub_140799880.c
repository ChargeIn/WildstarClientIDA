#include "../winhttp.h"

//----- (0000000140799880) ----------------------------------------------------
_BOOL8 __fastcall sub_140799880(__int64 a1, __int64 a2)
{
	_BOOL8 result; // rax

	if (*(_DWORD*)a1 != *(_DWORD*)a2)
		return 0i64;
	switch (*(_DWORD*)a1)
	{
	case 1:
	case 0xA:
	case 0xD:
	case 0x15:
	case 0x18:
	case 0x1A:
		return *(_DWORD*)(a1 + 8) == *(_DWORD*)(a2 + 8);
	case 2:
	case 0xE:
	case 0x13:
		if (*(_DWORD*)(a1 + 20) != *(_DWORD*)(a2 + 20)
			|| *(_QWORD*)(a1 + 8) != *(_QWORD*)(a2 + 8)
			|| *(_DWORD*)(a1 + 16) != *(_DWORD*)(a2 + 16))
		{
			goto LABEL_8;
		}
		result = 1i64;
		break;
	case 8:
	case 0xB:
		if (*(_DWORD*)(a1 + 16) != *(_DWORD*)(a2 + 16)
			|| *(_DWORD*)(a1 + 8) != *(_DWORD*)(a2 + 8)
			|| *(_WORD*)(a1 + 12) != *(_WORD*)(a2 + 12))
		{
			goto LABEL_8;
		}
		result = 1i64;
		break;
	case 0x12:
		if (*(_DWORD*)(a1 + 12) != *(_DWORD*)(a2 + 12) || *(_DWORD*)(a1 + 8) != *(_DWORD*)(a2 + 8))
			goto LABEL_8;
		result = 1i64;
		break;
	case 0x16:
		if (*(_DWORD*)(a1 + 12) == *(_DWORD*)(a2 + 12) && *(_WORD*)(a2 + 8) == *(_WORD*)(a1 + 8))
			result = 1i64;
		else
			LABEL_8 :
			result = 0i64;
		break;
	case 0x1B:
		result = *(_DWORD*)(a1 + 8) == *(_DWORD*)(a2 + 8);
		break;
	case 0x1D:
		result = 1i64;
		break;
	default:
		return 0i64;
	}
	return result;
}

