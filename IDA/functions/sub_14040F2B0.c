//----- (000000014040F2B0) ----------------------------------------------------
__int64 __fastcall sub_14040F2B0(char a1)
{
	__int64 result; // rax

	switch (a1)
	{
	case 1:
		result = 1i64;
		break;
	case 2:
		result = 2i64;
		break;
	case 3:
		result = 4i64;
		break;
	case 4:
		result = 8i64;
		break;
	case 5:
		result = 16i64;
		break;
	case 6:
		result = 32i64;
		break;
	case 7:
		result = 64i64;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

