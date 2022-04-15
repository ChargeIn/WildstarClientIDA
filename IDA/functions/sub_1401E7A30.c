#include "../winhttp.h"

//----- (00000001401E7A30) ----------------------------------------------------
__int64 __fastcall sub_1401E7A30(__int64 a1, __int64 a2)
{
	__int64 v2; // r9
	__int64 v4; // r8
	__int64 result; // rax
	__int64 v6; // rcx
	__int64 v7; // rdx

	v2 = *(_QWORD*)(a1 + 16);
	v4 = *(unsigned int*)(*(_QWORD*)(a1 + 24) + 16i64);
	switch (*(_DWORD*)(a1 + 40))
	{
	case 3:
		result = 15i64;
		break;
	case 7:
		if (!*(_DWORD*)(v2 + 3144) || (*(_BYTE*)(v2 + 3140) & 2) != 0)
			goto LABEL_31;
		result = 3i64;
		break;
	case 0x14:
		if ((*(_BYTE*)(v2 + 3140) & 2) != 0 || *(_DWORD*)(v2 + 3144))
		{
			if (*(_DWORD*)(v2 + 3148))
				goto LABEL_31;
			result = *(unsigned int*)(v2 + 3152);
		}
		else
		{
			result = *(unsigned int*)(v2 + 3160);
		}
		break;
	case 0x41:
		if ((_DWORD)v4 != 367)
			goto LABEL_31;
		result = 89i64;
		break;
	case 0x42:
		switch ((_DWORD)v4)
		{
		case 0x170:
			result = 89i64;
			break;
		case 0x174:
			result = 188i64;
			break;
		case 0x178:
			result = 21i64;
			break;
		default:
			goto LABEL_31;
		}
		break;
	case 0x43:
		if ((_DWORD)v4 == 369)
		{
			result = 89i64;
		}
		else
		{
			if ((_DWORD)v4 != 373)
				goto LABEL_31;
			result = 189i64;
		}
		break;
	case 0x44:
		if ((_DWORD)v4 == 370)
		{
			result = 89i64;
		}
		else
		{
			if ((_DWORD)v4 != 374)
				goto LABEL_31;
			result = 190i64;
		}
		break;
	case 0x45:
		if ((_DWORD)v4 == 371)
		{
			result = 89i64;
		}
		else
		{
			if ((_DWORD)v4 != 375)
				goto LABEL_31;
			result = 191i64;
		}
		break;
	default:
	LABEL_31:
		result = 0i64;
		break;
	}
	if (*(_DWORD*)(a1 + 64) != (_DWORD)result)
	{
		v6 = *(_QWORD*)(a1 + 48);
		*(_DWORD*)(a1 + 64) = result;
		if (v6)
		{
			result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)v6 + 936i64))(v6, a2, v4, v2);
			v7 = *(unsigned int*)(a1 + 64);
			if ((_DWORD)v7)
				return (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 288i64) + 896i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 288i64),
					v7,
					*(_QWORD*)(a1 + 48));
		}
	}
	return result;
}

