//----- (00000001403C2EE0) ----------------------------------------------------
__int64 __fastcall sub_1403C2EE0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 result; // rax

	v3 = qword_140C65898;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6)
		return 0i64;
	if (a3 != *(_DWORD*)(v6 + 8) && (*(_BYTE*)(qword_140C65898 + 31652) & 1) != 0)
	{
		v7 = sub_1403D90D0(qword_140C65898, a3);
		if (v7)
		{
			if (*(_DWORD*)(v7 + 3408))
				return 0i64;
		}
	}
	switch (a2)
	{
	case 0:
		if ((*(_BYTE*)(v3 + 31656) & 1) != 0)
			return 0i64;
		goto LABEL_37;
	case 1:
		if ((*(_BYTE*)(v3 + 31656) & 2) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		if ((*(_BYTE*)(v3 + 31656) & 4) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 8:
		if ((*(_BYTE*)(v3 + 31656) & 0x40) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 9:
	case 12:
	case 13:
		if (*(char*)(v3 + 31656) >= 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 10:
		if ((*(_BYTE*)(v3 + 31656) & 0x10) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 11:
		if ((*(_BYTE*)(v3 + 31656) & 0x20) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 14:
		if ((*(_DWORD*)(v3 + 31656) & 0x400) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 15:
		if ((*(_DWORD*)(v3 + 31656) & 0x800) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 16:
		if ((*(_DWORD*)(v3 + 31656) & 0x1000) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 17:
		if ((*(_BYTE*)(v3 + 31656) & 8) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 18:
		if ((*(_DWORD*)(v3 + 31656) & 0x100) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 19:
		if ((*(_DWORD*)(v3 + 31656) & 0x200) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	case 22:
		if ((*(_DWORD*)(v3 + 31656) & 0x2000) == 0)
			goto LABEL_37;
		result = 0i64;
		break;
	default:
		if (a3 == *(_DWORD*)(*(_QWORD*)(v3 + 120) + 8i64))
			LABEL_37 :
			result = 1i64;
		else
			result = 0i64;
		break;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

