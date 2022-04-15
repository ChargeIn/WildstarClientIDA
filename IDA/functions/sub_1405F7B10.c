//----- (00000001405F7B10) ----------------------------------------------------
_BOOL8 __fastcall sub_1405F7B10(_DWORD* a1)
{
	_BOOL8 result; // rax

	switch ((*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 336i64))(a1))
	{
	case 1u:
	case 8u:
	case 0xCu:
	case 0xFu:
	case 0x10u:
	case 0x14u:
		if ((*(_BYTE*)((*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 328i64))(a1) + 12) & 2) == 0)
			goto LABEL_5;
		result = 1i64;
		break;
	case 9u:
	case 0x17u:
	case 0x18u:
	case 0x19u:
	case 0x1Fu:
		result = 0i64;
		break;
	default:
	LABEL_5:
		result = a1[7] != 0;
		break;
	}
	return result;
}

