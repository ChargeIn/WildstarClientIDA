//----- (000000014049BDC0) ----------------------------------------------------
__int64 __fastcall sub_14049BDC0(int a1)
{
	__int64 result; // rax

	switch (a1)
	{
	case 7:
		result = 1i64;
		break;
	case 8:
		result = 2i64;
		break;
	case 9:
		result = 4i64;
		break;
	case 10:
		result = 8i64;
		break;
	case 11:
		result = 16i64;
		break;
	case 12:
		result = 32i64;
		break;
	case 13:
		result = 64i64;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

