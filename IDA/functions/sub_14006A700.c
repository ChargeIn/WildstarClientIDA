//----- (000000014006A700) ----------------------------------------------------
int __fastcall sub_14006A700(__int64 a1, int* a2)
{
	int result; // eax
	int v4; // edx
	int v5; // edx
	int v6; // edx

	result = *a2 - 6;
	switch (*a2)
	{
	case 6:
		*a2 = 12;
		return result;
	case 7:
		v4 = (a2[2] << 23) | 4;
		goto LABEL_4;
	case 8:
		v4 = (a2[2] << 14) | 5;
		goto LABEL_4;
	case 9:
		v5 = a2[3];
		if ((v5 & 0x100) == 0 && v5 >= *(unsigned __int8*)(a1 + 74))
			--* (_DWORD*)(a1 + 60);
		v6 = a2[2];
		if ((v6 & 0x100) == 0 && v6 >= *(unsigned __int8*)(a1 + 74))
			--* (_DWORD*)(a1 + 60);
		v4 = ((a2[3] | (a2[2] << 9)) << 14) | 6;
	LABEL_4:
		result = sub_14006BBF0(a1, v4, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
		*a2 = 11;
		a2[2] = result;
		break;
	case 13:
	case 14:
		result = sub_14006A6A0(a1, a2);
		break;
	default:
		return result;
	}
	return result;
}

