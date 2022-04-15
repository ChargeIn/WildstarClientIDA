//----- (0000000140907AF0) ----------------------------------------------------
unsigned __int16* __fastcall sub_140907AF0(unsigned __int16* a1, int a2, int a3)
{
	unsigned __int16 v3; // r9
	__int64 v4; // rax
	unsigned __int16 v5; // ax

	v3 = *a1;
	if (!*a1)
		return 0i64;
	while (v3 == 108)
	{
		v4 = a1[1];
	LABEL_23:
		a1 += v4;
	LABEL_24:
		v3 = *a1;
		if (!*a1)
			return 0i64;
	}
	if (v3 == 118)
	{
		if (a3 < 0)
			return a1;
		v4 = 2i64;
		goto LABEL_23;
	}
	if ((unsigned __int16)(v3 - 127) > 1u && (unsigned __int16)(v3 - 132) > 1u)
	{
		switch (v3)
		{
		case 0x55u:
		case 0x56u:
		case 0x57u:
		case 0x58u:
		case 0x59u:
		case 0x5Au:
		case 0x5Eu:
		case 0x5Fu:
		case 0x60u:
			v5 = a1[1];
			goto LABEL_11;
		case 0x5Bu:
		case 0x5Cu:
		case 0x5Du:
		case 0x61u:
			v5 = a1[2];
		LABEL_11:
			if ((unsigned __int16)(v5 - 15) <= 1u)
				a1 += 2;
			break;
		case 0x8Fu:
		case 0x91u:
		case 0x93u:
		case 0x95u:
			a1 += a1[1];
			break;
		default:
			break;
		}
		a1 += byte_1409CFAA0[v3];
		if (a2 && v3 >= 0x1Du && (v3 <= 0x1Eu || (unsigned int)v3 - 33 <= 0x19) && (*(a1 - 1) & 0xFC00) == 0xD800)
			++a1;
		goto LABEL_24;
	}
	if (a1[2] != a3)
	{
		v4 = byte_1409CFAA0[v3];
		goto LABEL_23;
	}
	return a1;
}
// 1409CFAA0: using guessed type unsigned __int8[93];

