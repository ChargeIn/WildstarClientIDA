#include "../winhttp.h"

//----- (00000001403D3650) ----------------------------------------------------
__int64 __fastcall sub_1403D3650(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v3; // rcx
	int v4; // eax

	switch (a2)
	{
	case 1:
		result = 44i64;
		break;
	case 3:
		result = 176i64;
		break;
	case 5:
		result = 50i64;
		break;
	case 6:
		result = 51i64;
		break;
	case 7:
		result = 52i64;
		break;
	case 8:
		result = 53i64;
		break;
	case 9:
		result = 54i64;
		break;
	case 10:
		result = 55i64;
		break;
	case 11:
		result = 56i64;
		break;
	case 15:
		result = 167i64;
		break;
	case 16:
		result = 177i64;
		break;
	case 20:
		result = 250i64;
		break;
	case 21:
		result = 254i64;
		break;
	case 22:
		result = 275i64;
		break;
	case 23:
		result = 276i64;
		break;
	case 24:
		result = 277i64;
		break;
	case 27:
		result = 327i64;
		break;
	case 28:
		result = 328i64;
		break;
	case 29:
		result = 329i64;
		break;
	default:
		if (*(_QWORD*)(qword_140C65898 + 120) == a1
			&& (v3 = *(_QWORD*)(qword_140C65898 + 28048)) != 0
			&& (v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 96i64))(v3), v4 < 11))
		{
			result = (unsigned int)dword_140C38838[v4];
		}
		else
		{
			result = 175i64;
		}
		break;
	}
	return result;
}
// 140C38838: using guessed type int dword_140C38838[11];
// 140C65898: using guessed type __int64 qword_140C65898;

