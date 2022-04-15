//----- (00000001401E0B40) ----------------------------------------------------
__int64 __fastcall sub_1401E0B40(__int64 a1)
{
	__int64* v1; // rcx
	__int64 result; // rax
	int v3; // ecx

	if (*(_DWORD*)(a1 + 3144))
		v1 = (__int64*)(a1 + 384);
	else
		v1 = (__int64*)(a1 + 488);
	result = *v1;
	if (*v1)
	{
		v3 = *(_DWORD*)(*(_QWORD*)(result + 24) + 16i64);
		if (v3 > 348)
		{
			return 0i64;
		}
		else if (v3 == 348)
		{
			return 6i64;
		}
		else
		{
			switch (v3)
			{
			case 44:
			case 50:
			case 52:
			case 78:
				result = 3i64;
				break;
			case 45:
				result = 5i64;
				break;
			case 46:
				result = 9i64;
				break;
			case 47:
			case 59:
				result = 1i64;
				break;
			case 48:
				return 6i64;
			case 49:
			case 60:
				result = 4i64;
				break;
			case 51:
			case 58:
				result = 2i64;
				break;
			case 79:
				result = 7i64;
				break;
			case 204:
				result = 10i64;
				break;
			default:
				return 0i64;
			}
		}
	}
	return result;
}

