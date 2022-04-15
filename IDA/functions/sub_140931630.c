//----- (0000000140931630) ----------------------------------------------------
void __fastcall sub_140931630(__int64 a1, int a2, unsigned __int64 a3)
{
	_WORD* v3; // r9
	__int64 v6; // r11
	_WORD* v7; // rbx
	int v8; // edx
	int v9; // edx
	_WORD* v10; // rax
	__int64 v11; // rcx
	bool v12; // zf
	int v13; // r10d
	__int16 v14; // ax
	__int16 v15; // ax
	_WORD* v16; // rcx

	v3 = *(_WORD**)(a1 + 8);
	v6 = a1;
	v7 = 0i64;
	while ((unsigned __int64)v3 < a3)
	{
		v8 = 0;
		switch (*v3)
		{
		case 0x21:
		case 0x23:
		case 0x2E:
		case 0x30:
		case 0x3B:
		case 0x3D:
		case 0x48:
		case 0x4A:
			v8 = 2;
			v13 = -2;
			goto LABEL_31;
		case 0x22:
		case 0x24:
		case 0x25:
		case 0x26:
		case 0x2F:
		case 0x31:
		case 0x32:
		case 0x33:
		case 0x3C:
		case 0x3E:
		case 0x3F:
		case 0x40:
		case 0x49:
		case 0x4B:
		case 0x4C:
		case 0x4D:
			v8 = 1;
			v13 = -2;
			goto LABEL_31;
		case 0x27:
		case 0x28:
		case 0x34:
		case 0x35:
		case 0x41:
		case 0x42:
		case 0x4E:
		case 0x4F:
			v8 = 2;
			v13 = -3;
			goto LABEL_31;
		case 0x55:
		case 0x57:
			v14 = v3[1];
			if (v14 != 17 && v14 != 22)
				v8 = 2;
			v13 = 1;
			goto LABEL_30;
		case 0x56:
		case 0x58:
		case 0x59:
		case 0x5A:
			v8 = 1;
			v13 = 1;
			goto LABEL_31;
		case 0x5B:
		case 0x5C:
			v15 = v3[2];
			if (v15 != 17 && v15 != 22)
				v8 = 2;
			v13 = 2;
			goto LABEL_30;
		case 0x6A:
		case 0x6B:
			v16 = v3 + 17;
			goto LABEL_29;
		case 0x6C:
			v16 = &v3[(unsigned __int16)v3[1]];
		LABEL_29:
			v8 = sub_14092EE10(v16);
		LABEL_30:
			if (v8 > 0)
			{
			LABEL_31:
				if (v3 >= v7)
				{
					*(_DWORD*)(*(_QWORD*)(v6 + 16) + 4 * (((__int64)v3 - *(_QWORD*)(v6 + 8)) >> 1)) = a2;
					a2 += 8 * v8;
				}
			}
			if (v13)
			{
				if (v13 >= 0)
				{
					v3 += v13;
				}
				else
				{
					v3 -= v13;
					if (*(_DWORD*)(v6 + 316))
					{
						if ((*(v3 - 1) & 0xFC00) == 0xD800)
							++v3;
					}
				}
			}
			break;
		case 0x77:
		case 0x78:
		case 0x79:
		case 0x7A:
		case 0x7B:
		case 0x7C:
		case 0x7E:
		case 0x82:
		case 0x83:
		case 0x86:
			*(_DWORD*)(*(_QWORD*)(v6 + 16) + 4 * (((__int64)v3 - *(_QWORD*)(v6 + 8)) >> 1)) = a2;
			a2 += 8;
			goto LABEL_4;
		case 0x7D:
			goto LABEL_4;
		case 0x7F:
		case 0x84:
			goto LABEL_6;
		case 0x80:
		case 0x85:
			*(_DWORD*)(*(_QWORD*)(v6 + 16) + 4 * (((__int64)v3 - *(_QWORD*)(v6 + 8)) >> 1)) = a2;
			a2 += 8;
		LABEL_6:
			v9 = 3;
			goto LABEL_7;
		case 0x81:
			if ((unsigned __int16)(v3[(unsigned __int16)v3[1]] - 115) > 1u)
			{
			LABEL_4:
				v9 = 2;
			}
			else
			{
				v9 = 2;
				*(_DWORD*)(*(_QWORD*)(v6 + 16) + 4 * (((__int64)v3 - *(_QWORD*)(v6 + 8)) >> 1)) = a2;
				a2 += 8;
			}
		LABEL_7:
			if (v3 >= v7)
			{
				v10 = v3;
				do
				{
					v11 = (unsigned __int16)v10[1];
					v12 = v10[v11] == 113;
					v10 += v11;
				} while (v12);
				v7 = v10 + 2;
				if (*v10 == 114)
					v7 = 0i64;
			}
			v3 += v9;
			break;
		default:
			v3 = sub_140930750(v6, v3);
			break;
		}
	}
}
// 140931680: variable 'v3' is possibly undefined
// 1409316AB: variable 'v6' is possibly undefined
// 1409317D9: variable 'v13' is possibly undefined

