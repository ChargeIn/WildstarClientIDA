//----- (00000001404A0E80) ----------------------------------------------------
__int64 __fastcall sub_1404A0E80(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
	__int64 result; // rax
	unsigned int v7; // ecx
	_DWORD* v8; // rdx
	__int64 v9; // rax
	unsigned int v10; // edx

	if (!a2)
		return 0i64;
	v7 = 0;
	v8 = (_DWORD*)(a2 + 148);
	v9 = 0i64;
	while (*v8 != a4)
	{
		v9 = (unsigned int)(v9 + 1);
		++v8;
		if ((unsigned int)v9 >= 0xF)
		{
			switch (a3)
			{
			case 1:
				LOBYTE(v7) = a5 == 0;
				result = v7;
				break;
			case 2:
				LOBYTE(v7) = a5 != 0;
				result = v7;
				break;
			case 4:
				LOBYTE(v7) = a5 == 0;
				result = v7;
				break;
			case 5:
				LOBYTE(v7) = a5 != 0;
				result = v7;
				break;
			case 6:
				result = 1i64;
				break;
			default:
				goto LABEL_19;
			}
			return result;
		}
	}
	v10 = (int)*(float*)(a2 + 4 * v9 + 208);
	switch (a3)
	{
	case 1:
		LOBYTE(v7) = v10 == a5;
		result = v7;
		break;
	case 2:
		LOBYTE(v7) = v10 != a5;
		result = v7;
		break;
	case 3:
		LOBYTE(v7) = v10 > a5;
		result = v7;
		break;
	case 4:
		LOBYTE(v7) = v10 >= a5;
		result = v7;
		break;
	case 5:
		LOBYTE(v7) = v10 < a5;
		result = v7;
		break;
	case 6:
		LOBYTE(v7) = v10 <= a5;
		goto LABEL_19;
	default:
	LABEL_19:
		result = v7;
		break;
	}
	return result;
}

