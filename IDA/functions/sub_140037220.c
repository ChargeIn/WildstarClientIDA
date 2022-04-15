//----- (0000000140037220) ----------------------------------------------------
__int64 __fastcall sub_140037220(__int64 a1, int* a2)
{
	int v2; // eax
	__int64 result; // rax
	int v5; // r8d
	int v6; // edx
	int v7; // ecx
	int v8; // edx
	int v9; // edx
	bool v10; // zf
	int v11; // eax
	int v12; // eax
	int v13; // eax

	v2 = *(_DWORD*)(a1 + 168);
	if (v2 == 11)
		return 1i64;
	v5 = *a2;
	if (*a2 == 24)
	{
		v6 = a2[10];
		v7 = 196357;
		if (v6)
		{
			v8 = v6 - 1;
			if (!v8)
			{
				sub_1400383A0(a1, 405363, 0);
				return 0i64;
			}
			v9 = v8 - 1;
			if (!v9)
			{
				sub_1400383A0(a1, 405365, 0);
				return 0i64;
			}
			if (v9 == 1)
			{
				sub_1400383A0(a1, 405366, 0);
				return 0i64;
			}
		}
		else
		{
			v7 = 405362;
		}
		sub_1400383A0(a1, v7, 0);
		return 0i64;
	}
	else
	{
		if ((unsigned int)(v2 - 3) > 1)
			return 1i64;
		switch (v5)
		{
		case 2:
			sub_1400383A0(a1, 397308, 0);
			result = 0i64;
			break;
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			goto LABEL_30;
		case 10:
			sub_140038870(a1);
			result = 0i64;
			break;
		case 14:
			v10 = *(_QWORD*)(a1 + 232) == 0i64;
			*(_DWORD*)(a1 + 168) = 5;
			if (v10)
				sub_140039380(a1);
			else
				sub_14003A620(a1);
			result = 0i64;
			break;
		case 16:
		case 17:
		case 37:
			sub_140039060(a1);
			v12 = sub_1400A78B0(0x2FF05u, 0);
			sub_1400383A0(a1, v12, 0);
			result = 0i64;
			break;
		case 18:
			sub_1400383A0(a1, 588395, 0);
			result = 0i64;
			break;
		case 19:
			sub_140039060(a1);
			v11 = sub_1400A78B0(0x2FF05u, 202);
			sub_1400383A0(a1, v11, 0);
			result = 0i64;
			break;
		case 20:
			sub_140039060(a1);
			sub_1400383A0(a1, 426239, 0);
			result = 0i64;
			break;
		case 21:
			sub_140039060(a1);
			sub_1400383A0(a1, 426242, 0);
			result = 0i64;
			break;
		case 22:
			sub_140039060(a1);
			v13 = sub_1400A78B0(0x2FF05u, 201);
			sub_1400383A0(a1, v13, 0);
			result = 0i64;
			break;
		case 34:
			sub_140039060(a1);
			sub_1400383A0(a1, 758613, 0);
			result = 0i64;
			break;
		case 35:
			sub_140039220(a1);
			result = 0i64;
			break;
		default:
			sub_1400383A0(a1, 495912, v5);
		LABEL_30:
			result = 0i64;
			break;
		}
	}
	return result;
}

