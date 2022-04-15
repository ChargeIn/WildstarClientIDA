//----- (00000001402B7240) ----------------------------------------------------
__int64 __fastcall sub_1402B7240(_QWORD* a1, __int64 a2, _QWORD* a3)
{
	unsigned int v4; // r8d
	_DWORD* v5; // r11
	unsigned __int64 v6; // rcx
	__int128* v7; // rdx
	__int128* v8; // rdx
	__int64 result; // rax

	if (a3)
	{
		*a3 = 0i64;
		a3[1] = 0i64;
	}
	v4 = sub_1402B1F70(a1);
	if (!v4)
	{
		if (*a1 == 0x4BFE4E036FDDC324i64 && a1[1] == 0x18C98D76773D85B1i64)
		{
			if (byte_140C63663)
			{
				if (v5)
				{
					*v5 = -469837937;
					v5[1] = 1255139547;
					v5[2] = 2146025860;
					v5[3] = 666056289;
				}
				v4 = 6;
			}
			else
			{
				if (v5)
				{
					*v5 = 1876804388;
					v5[1] = 1274957315;
					v5[2] = 2000520625;
					v5[3] = 432639350;
				}
				v4 = 2;
			}
		}
		else
		{
			v6 = 0i64;
			v7 = xmmword_140C89210;
			while (*(_QWORD*)v7 != *a1 || *((_QWORD*)v7 + 1) != a1[1])
			{
				++v6;
				v7 += 2;
				if (v6 >= 0x26)
					goto LABEL_21;
			}
			if (v5)
			{
				v8 = &xmmword_140C89210[2 * v6];
				*v5 = *((_DWORD*)v8 + 4);
				v5[1] = *((_DWORD*)v8 + 5);
				v5[2] = *((_DWORD*)v8 + 6);
				v5[3] = *((_DWORD*)v8 + 7);
			}
			v4 = sub_1402B1F70(&xmmword_140C89220[2 * v6]);
		}
	}
LABEL_21:
	switch (v4)
	{
	case 'B':
		v4 = 61;
		if (v5)
		{
			*v5 = 1876804388;
			v5[1] = 1274957315;
			v5[2] = 2000520625;
			v5[3] = 147426678;
		}
		goto LABEL_26;
	case 'U':
	case 'V':
		v4 = 28;
		if (!v5)
			goto LABEL_26;
		*v5 = -171463379;
		v5[1] = 1138584205;
		v5[2] = -1717393241;
		v5[3] = -384162251;
		result = 28i64;
		break;
	default:
	LABEL_26:
		result = v4;
		break;
	}
	return result;
}
// 1402B7292: variable 'v5' is possibly undefined
// 140964870: using guessed type __int128 xmmword_140964870;
// 140964930: using guessed type __int128 xmmword_140964930;
// 140964A00: using guessed type __int128 xmmword_140964A00;
// 140C63663: using guessed type char byte_140C63663;
// 140C89210: using guessed type __int128 xmmword_140C89210[];
// 140C89220: using guessed type __int128 xmmword_140C89220[];

