//----- (00000001405F1A70) ----------------------------------------------------
__int64 __fastcall sub_1405F1A70(__int64 a1)
{
	__int64 result; // rax

	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1))
	{
	case 1u:
	case 8u:
	case 0xCu:
	case 0xFu:
	case 0x10u:
	case 0x14u:
		result = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 328i64))(a1) + 12) & 2;
		break;
	default:
		result = 0i64;
		break;
	}
	return result;
}

