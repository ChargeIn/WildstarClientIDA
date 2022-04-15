//----- (00000001404A2010) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A2010(__int64 a1, int a2, float a3, float a4)
{
	_BOOL8 result; // rax

	switch (a2)
	{
	case 1:
		if (a3 != a4)
			goto LABEL_10;
		result = 1i64;
		break;
	case 2:
		if (a3 == a4)
			goto LABEL_10;
		result = 1i64;
		break;
	case 3:
		result = a3 > a4;
		break;
	case 4:
		result = a3 >= a4;
		break;
	case 5:
		result = a4 > a3;
		break;
	case 6:
		result = a4 >= a3;
		break;
	default:
	LABEL_10:
		result = 0i64;
		break;
	}
	return result;
}

