//----- (0000000140491EF0) ----------------------------------------------------
__int64 __fastcall sub_140491EF0(int a1)
{
	__int64 result; // rax

	switch (a1)
	{
	case 0:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
		result = 0i64;
		break;
	case 2:
	case 10:
	case 14:
	case 20:
	case 22:
	case 23:
	case 24:
		result = 2i64;
		break;
	case 3:
	case 11:
	case 12:
	case 13:
	case 15:
	case 16:
	case 17:
	case 18:
		result = 3i64;
		break;
	case 9:
	case 19:
	case 21:
	case 25:
	case 26:
	case 27:
		result = 1i64;
		break;
	default:
		result = 4i64;
		break;
	}
	return result;
}

