//----- (000000014079E860) ----------------------------------------------------
__int64 __fastcall sub_14079E860(int a1)
{
	__int64 result; // rax

	switch (a1)
	{
	case 4:
	case 7:
	case 63:
		result = 1i64;
		break;
	case 5:
	case 10:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 22:
	case 65:
		result = 3i64;
		break;
	case 12:
	case 13:
	case 25:
		result = 0i64;
		break;
	default:
		result = 2i64;
		break;
	}
	return result;
}

