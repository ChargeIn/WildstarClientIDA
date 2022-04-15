//----- (00000001402B5040) ----------------------------------------------------
__int64 __fastcall sub_1402B5040(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	*(_QWORD*)a2 = 0i64;
	*(_QWORD*)(a2 + 8) = 0i64;
	*(_WORD*)(a2 + 16) = 0;
	if (*(_QWORD*)a1 > 0xFFFFui64 || *(_QWORD*)(a1 + 8) > 0xFFFFui64)
		return 2147942450i64;
	*(_WORD*)(a2 + 12) = *(_WORD*)a1;
	*(_WORD*)(a2 + 14) = *(_WORD*)(a1 + 8);
	switch (*(_DWORD*)(a1 + 16))
	{
	case 0x1C:
	case 0x1D:
		*a3 |= 0x10000u;
		*(_WORD*)(a2 + 16) = 10272;
		*(_BYTE*)(a2 + 2) = 2;
		result = 0i64;
		break;
	case 0x3D:
	case 0x41:
		*(_BYTE*)(a2 + 2) = 3;
		*(_WORD*)(a2 + 16) = 8200;
		result = 0i64;
		break;
	case 0x56:
		*(_WORD*)(a2 + 16) = 8464;
		*(_BYTE*)(a2 + 2) = 2;
		result = 0i64;
		break;
	case 0x57:
	case 0x5B:
		*(_WORD*)(a2 + 16) = 10272;
		*(_BYTE*)(a2 + 2) = 2;
		result = 0i64;
		break;
	case 0x58:
	case 0x5D:
		*a3 |= 0x20000u;
		*(_WORD*)(a2 + 16) = 8216;
		*(_BYTE*)(a2 + 2) = 2;
		result = 0i64;
		break;
	default:
		return 2147942450i64;
	}
	return result;
}

