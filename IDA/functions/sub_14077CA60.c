//----- (000000014077CA60) ----------------------------------------------------
__int64 __fastcall sub_14077CA60(__int64 a1, int a2, unsigned int* a3)
{
	__int64 result; // rax

	if (!a3)
		return 0i64;
	switch (a2)
	{
	case 0:
		result = a3[36];
		break;
	case 1:
		result = a3[40];
		break;
	case 2:
		result = a3[37];
		break;
	case 3:
		result = a3[106];
		break;
	case 4:
		result = a3[38];
		break;
	case 5:
		result = a3[39];
		break;
	case 6:
		result = a3[41];
		break;
	case 8:
		result = a3[83];
		break;
	case 9:
		result = a3[84];
		break;
	case 10:
		result = a3[85];
		break;
	case 11:
		result = a3[86];
		break;
	case 12:
		result = a3[87];
		break;
	default:
		return 0i64;
	}
	return result;
}

