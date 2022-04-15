#include "../winhttp.h"

//----- (0000000140787830) ----------------------------------------------------
__int64 __fastcall sub_140787830(__int64 a1)
{
	__int64 result; // rax

	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1))
	{
	case 0u:
	case 1u:
	case 2u:
		result = 0i64;
		break;
	case 8u:
	case 9u:
	case 0xAu:
		result = 2i64;
		break;
	default:
		result = 1i64;
		break;
	}
	return result;
}

