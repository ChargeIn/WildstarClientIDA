#include "../winhttp.h"

//----- (00000001406428D0) ----------------------------------------------------
__int64 __fastcall sub_1406428D0(__int64 a1)
{
	__int64 result; // rax

	switch (*(_DWORD*)(*(_QWORD*)a1 + 4i64))
	{
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 0x10:
	case 0x1C:
	case 0x50:
	case 0x65:
	case 0x68:
	case 0x79:
	case 0x8C:
	case 0x8D:
		result = 1i64;
		break;
	case 0xD:
	case 0x26:
	case 0x27:
	case 0x28:
	case 0x2C:
	case 0x2F:
	case 0x31:
	case 0x33:
		result = 5i64;
		break;
	case 0x16:
		result = 3i64;
		break;
	case 0x25:
	case 0x2A:
	case 0x35:
	case 0x37:
	case 0x41:
	case 0x42:
	case 0x45:
	case 0x46:
	case 0x49:
	case 0x4A:
	case 0x52:
	case 0x60:
	case 0x6A:
	case 0x6B:
	case 0x6C:
	case 0x6D:
	case 0x72:
	case 0x86:
	case 0x9D:
		result = 4i64;
		break;
	case 0x2D:
	case 0x34:
	case 0x4C:
	case 0x4D:
	case 0x75:
		result = 7i64;
		break;
	case 0x36:
	case 0x40:
	case 0x5E:
	case 0x66:
	case 0x6F:
	case 0x70:
	case 0x76:
	case 0x8A:
	case 0x8B:
		result = 8i64;
		break;
	case 0x63:
		result = 2i64;
		break;
	case 0x74:
		result = 9i64;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

