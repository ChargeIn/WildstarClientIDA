#include "../winhttp.h"

//----- (000000014090E0A0) ----------------------------------------------------
__int64 __fastcall sub_14090E0A0(_WORD* a1, int* a2, int a3)
{
	unsigned int v3; // esi
	int v4; // edi
	_BOOL8 v7; // rax
	_BOOL8 v8; // rax
	int v9; // ecx
	unsigned __int16* v10; // rax
	unsigned int v11; // ecx
	__int64 v12; // rcx
	bool v13; // zf
	unsigned int v14; // ecx
	__int64 v15; // rax
	int v17; // [rsp+40h] [rbp+8h] BYREF
	int v18; // [rsp+50h] [rbp+18h]

	v18 = a3;
	v3 = 0;
	v4 = -1;
	*a2 = -1;
	while (2)
	{
		v7 = (unsigned __int16)(*a1 - 127) <= 1u || (unsigned __int16)(*a1 - 132) <= 1u;
		v8 = v7 + 2;
		v9 = (unsigned __int16)a1[v8];
		v10 = &a1[v8];
		v11 = v9 - 4;
		while (2)
		{
			switch (v11)
			{
			case 0u:
			case 1u:
			case 0x6Cu:
			case 0x83u:
			case 0x84u:
			case 0x85u:
			case 0x86u:
			case 0x87u:
				goto LABEL_9;
			case 0x74u:
			case 0x75u:
			case 0x76u:
				do
				{
					v12 = v10[1];
					v13 = v10[v12] == 113;
					v10 += v12;
				} while (v13);
			LABEL_9:
				v10 += byte_1409CFAA0[*v10];
				v11 = *v10 - 4;
				if (v11 > 0x87)
					break;
				continue;
			default:
				goto LABEL_10;
			}
			break;
		}
	LABEL_10:
		switch (*v10)
		{
		case 0x1Du:
		case 0x23u:
		case 0x24u:
		case 0x2Bu:
			goto LABEL_18;
		case 0x1Eu:
		case 0x30u:
		case 0x31u:
		case 0x38u:
			goto LABEL_22;
		case 0x29u:
			++v10;
		LABEL_18:
			if (!a3)
				return 0i64;
			if (v4 >= 0)
				goto LABEL_25;
			v3 = v10[1];
			v4 = 0;
			goto LABEL_26;
		case 0x36u:
			++v10;
		LABEL_22:
			if (!a3)
				return 0i64;
			if (v4 >= 0)
			{
			LABEL_25:
				if (v3 != v10[1])
					return 0i64;
			}
			else
			{
				v3 = v10[1];
				v4 = 1;
			}
			goto LABEL_26;
		case 0x77u:
		case 0x7Bu:
		case 0x7Cu:
		case 0x7Du:
		case 0x7Eu:
		case 0x7Fu:
		case 0x80u:
		case 0x81u:
		case 0x84u:
		case 0x85u:
			v14 = sub_14090E0A0(v10, &v17, *v10 == 119);
			if (v17 < 0)
				return 0i64;
			if (v4 < 0)
			{
				a3 = v18;
				v3 = v14;
				v4 = v17;
			LABEL_26:
				v15 = (unsigned __int16)a1[1];
				v13 = a1[v15] == 113;
				a1 += v15;
				if (!v13)
				{
					*a2 = v4;
					return v3;
				}
				continue;
			}
			if (v3 == v14 && v4 == v17)
			{
				a3 = v18;
				goto LABEL_26;
			}
			return 0i64;
		default:
			return 0i64;
		}
	}
}
// 1409CFAA0: using guessed type unsigned __int8 byte_1409CFAA0[93];

