//----- (00000001405F7880) ----------------------------------------------------
__int64 __fastcall sub_1405F7880(__int64 a1)
{
	__int64 result; // rax

	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1))
	{
	case 1u:
	case 8u:
	case 0xFu:
	case 0x10u:
		if ((*(_BYTE*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1) + 12) & 2) != 0)
			goto LABEL_2;
		goto LABEL_4;
	case 4u:
	case 6u:
	case 9u:
	case 0xBu:
	case 0xCu:
	case 0x12u:
	case 0x14u:
	case 0x15u:
	case 0x17u:
	case 0x18u:
	case 0x19u:
	case 0x1Au:
	case 0x1Bu:
	case 0x1Eu:
	case 0x1Fu:
	case 0x20u:
	LABEL_2:
		result = 0i64;
		break;
	default:
	LABEL_4:
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 376i64))(a1) & 0x80;
		break;
	}
	return result;
}

