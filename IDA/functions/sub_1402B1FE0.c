//----- (00000001402B1FE0) ----------------------------------------------------
char __fastcall sub_1402B1FE0(int a1, _DWORD* a2)
{
	char result; // al
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	_DWORD* v6; // rcx

	switch (a1)
	{
	case 6:
		if (!byte_140C63663)
			goto LABEL_12;
		*a2 = -469837937;
		a2[1] = 1255139547;
		a2[2] = 2146025860;
		result = 1;
		a2[3] = 666056289;
		break;
	case 29:
		*a2 = -171463379;
		a2[1] = 1138584205;
		a2[2] = -1717393241;
		result = 1;
		a2[3] = -384162251;
		break;
	case 40:
		*a2 = 1876804388;
		a2[1] = 1274957315;
		a2[2] = 2000520625;
		result = 1;
		a2[3] = 298421622;
		break;
	case 55:
		*a2 = 1876804388;
		a2[1] = 1274957315;
		a2[2] = 2000520625;
		result = 1;
		a2[3] = 197758326;
		break;
	case 91:
		*a2 = 1876804388;
		a2[1] = 1274957315;
		a2[2] = 2000520625;
		result = 1;
		a2[3] = 264867190;
		break;
	case 93:
		*a2 = 1876804388;
		a2[1] = 1274957315;
		a2[2] = 2000520625;
		result = 1;
		a2[3] = 248089974;
		break;
	default:
		v4 = 0i64;
		v5 = 0i64;
		while (*(_DWORD*)((char*)&unk_140C406B0 + v5) != a1)
		{
			v5 += 24i64;
			++v4;
			if (v5 >= 0x180)
			{
			LABEL_12:
				*a2 = 0;
				a2[1] = 0;
				a2[2] = 0;
				result = 0;
				a2[3] = 0;
				return result;
			}
		}
		v6 = (_DWORD*)&xmmword_140C406A0 + 6 * v4;
		*a2 = *v6;
		a2[1] = v6[1];
		a2[2] = v6[2];
		a2[3] = v6[3];
		result = 1;
		break;
	}
	return result;
}
// 140C406A0: using guessed type __int128 xmmword_140C406A0;
// 140C63663: using guessed type char byte_140C63663;

