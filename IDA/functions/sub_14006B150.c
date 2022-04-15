//----- (000000014006B150) ----------------------------------------------------
void __fastcall sub_14006B150(__int64 a1, int* a2)
{
	int v4; // ecx
	int v5; // eax
	int v6; // eax
	int v7; // edx

	sub_14006A700(a1, a2);
	switch (*a2)
	{
	case 1:
	case 3:
		*a2 = 2;
		break;
	case 2:
	case 4:
	case 5:
		*a2 = 3;
		break;
	case 10:
		sub_14006AED0(a1, (__int64)a2);
		break;
	case 11:
	case 12:
		sub_14006A920(a1, a2);
		if (*a2 == 12)
		{
			v4 = a2[2];
			if ((v4 & 0x100) == 0 && v4 >= *(unsigned __int8*)(a1 + 74))
				--* (_DWORD*)(a1 + 60);
		}
		v5 = sub_14006BBF0(a1, (a2[2] << 23) | 0x13u, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
		*a2 = 11;
		a2[2] = v5;
		break;
	default:
		break;
	}
	v6 = a2[5];
	v7 = a2[4];
	a2[5] = v7;
	a2[4] = v6;
	sub_14006A190(a1, v7);
	sub_14006A190(a1, a2[4]);
}

