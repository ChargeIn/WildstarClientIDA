#include "../winhttp.h"

//----- (00000001405061E0) ----------------------------------------------------
void __fastcall sub_1405061E0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, _BYTE* a5)
{
	__int64 v5; // r11
	unsigned __int64 v6; // r8
	unsigned __int64 v7; // r8

	if (*a5)
		goto LABEL_8;
	v5 = *(_QWORD*)(a1 + 32);
	if (!v5 || *(_QWORD*)(v5 + 2880) != a1 || (*(_BYTE*)(a1 + 664) & 1) == 0)
		goto LABEL_8;
	if (a2 == 256)
	{
		switch (a3)
		{
		case 0x10ui64:
			*(_BYTE*)(a1 + 1077) = 1;
			*a5 = 1;
			return;
		case 0x11ui64:
			*(_BYTE*)(a1 + 1078) = 1;
			goto LABEL_15;
		case 0x25ui64:
		case 0x27ui64:
			goto LABEL_10;
		case 0x2Dui64:
			if (*(_BYTE*)(a1 + 1077))
				goto LABEL_10;
			goto LABEL_15;
		case 0x2Eui64:
			if (!*(_BYTE*)(a1 + 1077))
				goto LABEL_12;
		LABEL_10:
			*a5 = 1;
			break;
		case 0xC0ui64:
			a2 = 256;
			goto LABEL_8;
		default:
		LABEL_15:
			*a5 = 1;
			break;
		}
		return;
	}
	if (a2 == 257)
	{
		v6 = a3 - 16;
		if (v6)
		{
			v7 = v6 - 1;
			if (!v7)
			{
				*(_BYTE*)(a1 + 1078) = 0;
				*a5 = 1;
				return;
			}
			if (v7 == 175)
			{
				a3 = 192i64;
			LABEL_8:
				sub_1400D1AF0((char*)a1, a2, a3, a4, a5);
				return;
			}
		}
		else
		{
			*(_BYTE*)(a1 + 1077) = 0;
		}
		*a5 = 1;
		return;
	}
	if (a2 != 258)
		goto LABEL_8;
	switch (a3)
	{
	case 8ui64:
	LABEL_12:
		sub_140506040((char*)a1);
		*a5 = 1;
		break;
	case 9ui64:
	case 0x60ui64:
		a2 = 258;
		goto LABEL_8;
	case 0xDui64:
	case 0x1Bui64:
		sub_1400E8BF0(*(_QWORD*)(a1 + 32));
		*a5 = 1;
		break;
	case 0x30ui64:
	case 0x31ui64:
	case 0x32ui64:
	case 0x33ui64:
	case 0x34ui64:
	case 0x35ui64:
	case 0x36ui64:
	case 0x37ui64:
	case 0x38ui64:
	case 0x39ui64:
		sub_140506100((char*)a1, a3);
		*a5 = 1;
		break;
	default:
		GetKeyState(163);
		GetKeyState(162);
		*a5 = 1;
		break;
	}
}

