#include "../winhttp.h"

//----- (00000001405F7920) ----------------------------------------------------
__int64 __fastcall sub_1405F7920(__int64 a1)
{
	__int64 result; // rax

	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1))
	{
	case 0u:
	case 2u:
	case 3u:
	case 4u:
	case 5u:
	case 0xAu:
	case 0xEu:
	case 0x11u:
	case 0x12u:
	case 0x16u:
		result = 1i64;
		break;
	case 1u:
	case 8u:
	case 0xFu:
	case 0x10u:
		result = ((unsigned int)~*(unsigned __int8*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1)
			+ 12) >> 1) & 1;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

