#include "../winhttp.h"

//----- (00000001402B5160) ----------------------------------------------------
__int64 __fastcall sub_1402B5160(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int16 v4; // dx
	unsigned __int16 v5; // r10
	char v6; // al

	if (!a2)
		return 2147942487i64;
	*(_QWORD*)a3 = 0i64;
	*(_QWORD*)(a3 + 8) = 0i64;
	*(_QWORD*)(a3 + 16) = 0i64;
	*(_QWORD*)(a3 + 24) = 0i64;
	*(_QWORD*)(a3 + 32) = 0i64;
	*(_QWORD*)(a3 + 40) = 0i64;
	*(_QWORD*)(a3 + 48) = 0i64;
	if (a2 < 0x12)
		return 2147942413i64;
	if (*(_BYTE*)(a1 + 1) || *(_WORD*)(a1 + 5) || (*(_BYTE*)(a1 + 17) & 0xC0) != 0)
		return 2147942450i64;
	v4 = *(_WORD*)(a1 + 12);
	if (!v4)
		return 2147942413i64;
	v5 = *(_WORD*)(a1 + 14);
	if (!v5)
		return 2147942413i64;
	switch (*(_BYTE*)(a1 + 2))
	{
	case 0:
	case 1:
	case 9:
		return 2147942450i64;
	case 2:
	case 0xA:
		v6 = *(_BYTE*)(a1 + 16);
		if (v6 == 16)
		{
			*(_DWORD*)(a3 + 48) = 86;
		}
		else if (v6 == 24 || v6 == 32)
		{
			*(_DWORD*)(a3 + 48) = 28;
		}
		break;
	case 3:
	case 0xB:
		if (*(_BYTE*)(a1 + 16) != 8)
			return 2147942450i64;
		*(_DWORD*)(a3 + 48) = 61;
		break;
	default:
		return 2147942413i64;
	}
	*(_QWORD*)(a3 + 32) = 1i64;
	*(_QWORD*)(a3 + 24) = 1i64;
	*(_QWORD*)a3 = v4;
	*(_QWORD*)(a3 + 16) = 1i64;
	*(_QWORD*)(a3 + 8) = v5;
	result = 0i64;
	*(_DWORD*)(a3 + 52) = 3;
	return result;
}

