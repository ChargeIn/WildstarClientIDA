//----- (0000000140051970) ----------------------------------------------------
__int64 __fastcall sub_140051970(int a1)
{
	__int64 result; // rax

	switch (a1)
	{
	case 1:
		result = 512i64;
		break;
	case 3:
		result = 1024i64;
		break;
	case 4:
		result = 2048i64;
		break;
	case 5:
		result = 0x2000i64;
		break;
	case 12:
		result = 0x4000i64;
		break;
	case 13:
		result = 0x8000i64;
		break;
	case 16:
		result = 4096i64;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

