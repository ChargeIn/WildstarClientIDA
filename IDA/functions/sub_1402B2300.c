#include "../winhttp.h"

//----- (00000001402B2300) ----------------------------------------------------
__int64 __fastcall sub_1402B2300(int a1)
{
	__int64 result; // rax

	switch (a1)
	{
	case 1:
	case 2:
	case 3:
	case 4:
		result = 128i64;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
		result = 96i64;
		break;
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
		result = 64i64;
		break;
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 67:
	case 68:
	case 69:
	case 87:
	case 88:
	case 89:
	case 90:
	case 91:
	case 92:
	case 93:
		result = 32i64;
		break;
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 85:
	case 86:
	case 115:
		result = 16i64;
		break;
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 82:
	case 83:
	case 84:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
		result = 8i64;
		break;
	case 66:
		result = 1i64;
		break;
	case 70:
	case 71:
	case 72:
	case 79:
	case 80:
	case 81:
		result = 4i64;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

