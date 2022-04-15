//----- (00000001405F8A80) ----------------------------------------------------
__int64 __fastcall sub_1405F8A80(__int64 a1, int a2)
{
	__int64 result; // rax

	switch (a2)
	{
	case 0:
		result = a1;
		break;
	case 1:
		result = a1 + 16;
		break;
	case 2:
		result = a1 + 24;
		break;
	case 3:
		result = a1 + 32;
		break;
	case 4:
		result = a1 + 48;
		break;
	case 5:
		result = a1 + 56;
		break;
	case 7:
		result = a1 + 8;
		break;
	case 8:
		result = a1 + 64;
		break;
	case 9:
		result = a1 + 88;
		break;
	case 10:
		result = a1 + 96;
		break;
	case 11:
		result = a1 + 104;
		break;
	case 12:
		result = a1 + 112;
		break;
	case 13:
		result = a1 + 120;
		break;
	case 100:
		result = a1 + 40;
		break;
	case 101:
		result = a1 + 128;
		break;
	case 102:
		result = a1 + 80;
		break;
	case 103:
		result = a1 + 136;
		break;
	case 200:
	case 201:
	case 202:
	case 203:
	case 204:
	case 205:
		result = a1 + 8 * ((unsigned int)(a2 - 200) + 18i64);
		break;
	default:
		result = a1 + 72;
		break;
	}
	return result;
}

