//----- (000000014092EE10) ----------------------------------------------------
__int64 __fastcall sub_14092EE10(_WORD* a1)
{
	__int64 result; // rax

	switch (*a1)
	{
	case 'b':
	case 'd':
		result = 2i64;
		break;
	case 'c':
	case 'e':
	case 'f':
	case 'g':
		result = 1i64;
		break;
	case 'h':
	case 'i':
		result = 2i64;
		if (a1[1] == a1[2])
			result = 0i64;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

