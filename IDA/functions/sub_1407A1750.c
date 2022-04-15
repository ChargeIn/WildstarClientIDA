//----- (00000001407A1750) ----------------------------------------------------
__int64 __fastcall sub_1407A1750(int a1, float a2, float a3)
{
	__int64 result; // rax

	switch (a1)
	{
	case 0:
	case 5:
		if (a2 != a3)
			goto LABEL_11;
		goto LABEL_3;
	case 1:
	case 6:
		if (a2 <= a3)
			goto LABEL_11;
		result = 1i64;
		break;
	case 2:
	case 7:
		if (a2 < a3)
			goto LABEL_11;
		result = 1i64;
		break;
	case 3:
	case 8:
		if (a2 >= a3)
			goto LABEL_11;
		result = 1i64;
		break;
	case 4:
	case 9:
		if (a2 > a3)
			goto LABEL_11;
	LABEL_3:
		result = 1i64;
		break;
	default:
	LABEL_11:
		result = 0i64;
		break;
	}
	return result;
}

