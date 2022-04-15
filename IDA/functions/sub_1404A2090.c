//----- (00000001404A2090) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A2090(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
	_BOOL8 result; // rax

	switch (a2)
	{
	case 1:
		result = a3 == a4;
		break;
	case 2:
		result = a3 != a4;
		break;
	case 3:
		result = a3 > a4;
		break;
	case 4:
		result = a3 >= a4;
		break;
	case 5:
		result = a3 < a4;
		break;
	case 6:
		result = a3 <= a4;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

