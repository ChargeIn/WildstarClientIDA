#include "../winhttp.h"

//----- (0000000140932A90) ----------------------------------------------------
__int64 __fastcall sub_140932A90(unsigned int* a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7, __int64 a8)
{
	__int64 result; // rax
	__int64 v9; // r13
	__int16 v11; // di
	__int64 v13; // rsi
	__int64 v14; // rbp
	unsigned int v15; // eax
	_QWORD* v16; // rax
	unsigned int v17; // [rsp+90h] [rbp+8h]

	result = *a1;
	v9 = a4;
	v11 = a2;
	if (!(_DWORD)result)
	{
		if (a3 == 267)
			v9 = a4 + 48;
		v13 = a6;
		if (a5 == 267)
			v13 = a6 + 48;
		v14 = a8;
		if (a7 == 267)
			v14 = a8 + 48;
		a1[26] = a2 & 0x100;
		v15 = a2 & 0xFFFF80FF;
		v17 = a2 & 0xFFFF80FF;
		if ((int)(a2 & 0xFFFF80FF) >= 29)
		{
			if ((a2 & 0x3E00) != 0)
			{
				a1[27] = 0;
			}
			else if ((a2 & 0x4000) != 0 && !a1[27])
			{
				v16 = sub_14092D610((__int64)a1, 7i64);
				if (v16)
				{
					*(_BYTE*)v16 = 6;
					*((_QWORD*)a1 + 11) += 6i64;
					*(_DWORD*)((char*)v16 + 1) = 610569544;
					*(_WORD*)((char*)v16 + 5) = -25592;
					a1[27] = 1;
				}
				else
				{
					result = *a1;
					if ((_DWORD)result)
						return result;
				}
				v15 = v17;
			}
		}
		switch (v15)
		{
		case 0x19u:
			if ((v11 & 0x3E00) != 0)
			{
				a1[27] = 0;
			}
			else if ((unsigned int)sub_14092A7D0(a1, a3, v9, a5, v13, a7, v14) != 4)
			{
				return *a1;
			}
			if ((v11 & 0x4000) != 0 && !a1[27] && (unsigned int)sub_14092BF90(a1))
				return *a1;
			return sub_140929F50(a1, 3, 1, 0, 5, a3, v9, a5, v13, a7, v14);
		case 0x1Au:
			if (a1[27])
			{
				if ((unsigned int)sub_14092BF40(a1, 1u))
					return *a1;
			}
			else if ((v11 & 0x4000) != 0 && (unsigned int)sub_14092BF90(a1))
			{
				return *a1;
			}
			if ((v11 & 0x3E00) != 0)
				a1[27] = 0;
			return sub_140929F50(a1, 19, 17, 16, 21, a3, v9, a5, v13, a7, v14);
		case 0x1Bu:
			if ((v11 & 0x3E00) != 0)
			{
				a1[27] = 0;
			}
			else if ((a7 & 0x200) != 0 && (unsigned int)sub_14092A7D0(a1, a3, v9, a5, v13, 512, -v14) != 4)
			{
				return *a1;
			}
			if ((v11 & 0x4000) != 0 && !a1[27] && (unsigned int)sub_14092BF90(a1))
				return *a1;
			if (a3)
				return sub_14092B530(a1, 43, 41, 40, 45, a3, v9, a5, v13, a7, v14);
			else
				return sub_140929C10(a1, a5, v13, a7, v14);
		case 0x1Cu:
			if (a1[27])
			{
				if ((unsigned int)sub_14092BF40(a1, 1u))
					return *a1;
			}
			else if ((v11 & 0x4000) != 0 && (unsigned int)sub_14092BF90(a1))
			{
				return *a1;
			}
			if ((v11 & 0x3E00) != 0)
				a1[27] = 0;
			result = sub_14092B530(a1, 27, 25, 24, 29, a3, v9, a5, v13, a7, v14);
			break;
		case 0x1Du:
			return sub_14092B0A0((__int64)a1, a3, v9, a5, v13, a7, v14);
		case 0x1Eu:
			if (a3)
				return sub_140929F50(a1, 35, 33, 32, 37, a3, v9, a5, v13, a7, v14);
			else
				return sub_14092CB80(a1, a5, v13, a7, v14);
		case 0x1Fu:
			return sub_140929F50(a1, 11, 9, 8, 13, a3, v9, a5, v13, a7, v14);
		case 0x20u:
			return sub_140929F50(a1, 51, 49, 48, 53, a3, v9, a5, v13, a7, v14);
		case 0x21u:
			return sub_14092C8A0(a1, 32, v11 & 0x3E00, a3, v9, a5, v13, a7, v14);
		case 0x22u:
			return sub_14092C8A0(a1, 40, v11 & 0x3E00, a3, v9, a5, v13, a7, v14);
		case 0x23u:
			return sub_14092C8A0(a1, 56, v11 & 0x3E00, a3, v9, a5, v13, a7, v14);
		default:
			return 0i64;
		}
	}
	return result;
}

