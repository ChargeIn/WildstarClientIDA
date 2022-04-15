#include "../winhttp.h"

//----- (000000014089D160) ----------------------------------------------------
__int64 __fastcall sub_14089D160(__int64 a1, __int16 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 31i64;
	switch (a2)
	{
	case 0:
		*(_DWORD*)(a1 + 8) = *a3;
		result = 1i64;
		break;
	case 1:
		*(_DWORD*)(a1 + 12) = *a3;
		result = 1i64;
		break;
	case 2:
		*(_DWORD*)(a1 + 20) = *a3;
		result = 1i64;
		break;
	case 3:
		*(_DWORD*)(a1 + 24) = *a3;
		result = 1i64;
		break;
	case 4:
		*(_BYTE*)(a1 + 28) = *(_BYTE*)a3;
		result = 1i64;
		break;
	case 5:
		*(_DWORD*)(a1 + 32) = *a3;
		result = 1i64;
		break;
	case 6:
		*(_DWORD*)(a1 + 16) = *a3;
		result = 1i64;
		break;
	case 7:
		*(_DWORD*)(a1 + 36) = *a3;
		result = 1i64;
		break;
	case 8:
		*(_DWORD*)(a1 + 40) = *a3;
		result = 1i64;
		break;
	case 9:
		*(_DWORD*)(a1 + 44) = *a3;
		result = 1i64;
		break;
	case 10:
		*(_DWORD*)(a1 + 48) = *a3;
		result = 1i64;
		break;
	case 11:
		*(_DWORD*)(a1 + 52) = *a3;
		result = 1i64;
		break;
	case 12:
		*(_DWORD*)(a1 + 56) = *a3;
		result = 1i64;
		break;
	case 13:
		*(_DWORD*)(a1 + 60) = *a3;
		result = 1i64;
		break;
	case 14:
		*(_DWORD*)(a1 + 64) = *a3;
		result = 1i64;
		break;
	case 15:
		*(_DWORD*)(a1 + 68) = *a3;
		result = 1i64;
		break;
	case 16:
		*(_DWORD*)(a1 + 72) = *a3;
		result = 1i64;
		break;
	case 17:
		*(_DWORD*)(a1 + 76) = *a3;
		goto LABEL_22;
	default:
	LABEL_22:
		result = 1i64;
		break;
	}
	return result;
}

