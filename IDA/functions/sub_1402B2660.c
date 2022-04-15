//----- (00000001402B2660) ----------------------------------------------------
__int64 __fastcall sub_1402B2660(unsigned int a1)
{
	__int64 result; // rax

	switch (a1)
	{
	case 1u:
		result = 2i64;
		break;
	case 5u:
		result = 6i64;
		break;
	case 9u:
		result = 10i64;
		break;
	case 0xFu:
		result = 16i64;
		break;
	case 0x21u:
		result = 34i64;
		break;
	case 0x27u:
		result = 41i64;
		break;
	case 0x35u:
		result = 54i64;
		break;
	default:
		result = a1;
		break;
	}
	return result;
}

