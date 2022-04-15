//----- (000000014091DFC0) ----------------------------------------------------
void __fastcall sub_14091DFC0(__int64 a1, _QWORD* a2)
{
	unsigned int* v2; // rsi
	_QWORD* v3; // rdi
	_QWORD* v5; // rax
	__int64* i; // rdx
	__int64 v7; // rcx
	_WORD* v8; // rdx
	char* v9; // rax
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	bool v13; // cc
	__int64 v14; // rbx
	_QWORD* v15; // rax
	_QWORD* v16; // rax
	__int64* j; // rdx
	__int64 v18; // rcx

	if (a2)
	{
		v2 = *(unsigned int**)a1;
		v3 = a2;
		do
		{
			if (v3[1])
			{
				v5 = sub_140932570((__int64)v2);
				for (i = (__int64*)v3[1]; i; i = (__int64*)i[1])
				{
					v7 = *i;
					if (*i && v5)
					{
						*(_QWORD*)(v7 + 16) &= ~2ui64;
						*(_QWORD*)(v7 + 16) |= 1ui64;
						*(_QWORD*)(v7 + 24) = v5;
					}
				}
			}
			v8 = (_WORD*)v3[4];
			switch (*v8)
			{
			case 3:
				if (!*v2)
				{
					v2[26] = 0;
					v9 = sub_14092D140((__int64)v2, 1, 1, 0i64, 258, -8i64);
					if (v9)
						*v9 = -117;
				}
				sub_14092EC50((unsigned int**)a1, 1);
				if (!*v2)
				{
					v10 = *(int*)(a1 + 36);
					goto LABEL_15;
				}
				break;
			case 0x21:
			case 0x22:
			case 0x23:
			case 0x24:
			case 0x25:
			case 0x26:
			case 0x27:
			case 0x28:
			case 0x29:
			case 0x2A:
			case 0x2B:
			case 0x2C:
			case 0x2D:
			case 0x2E:
			case 0x2F:
			case 0x30:
			case 0x31:
			case 0x32:
			case 0x33:
			case 0x34:
			case 0x35:
			case 0x36:
			case 0x37:
			case 0x38:
			case 0x39:
			case 0x3A:
			case 0x3B:
			case 0x3C:
			case 0x3D:
			case 0x3E:
			case 0x3F:
			case 0x40:
			case 0x41:
			case 0x42:
			case 0x43:
			case 0x44:
			case 0x45:
			case 0x46:
			case 0x47:
			case 0x48:
			case 0x49:
			case 0x4A:
			case 0x4B:
			case 0x4C:
			case 0x4D:
			case 0x4E:
			case 0x4F:
			case 0x50:
			case 0x51:
			case 0x52:
			case 0x53:
			case 0x54:
			case 0x55:
			case 0x56:
			case 0x57:
			case 0x58:
			case 0x59:
			case 0x5A:
			case 0x5B:
			case 0x5C:
			case 0x5D:
			case 0x5E:
			case 0x5F:
			case 0x60:
			case 0x61:
			case 0x6A:
			case 0x6B:
			case 0x6C:
				sub_140923E20(a1, (__int64)v3);
				break;
			case 0x6D:
			case 0x6E:
				sub_140926650((unsigned int**)a1, v3);
				break;
			case 0x6F:
				sub_140925FE0(a1, (__int64)v3);
				break;
			case 0x77:
			case 0x78:
			case 0x79:
			case 0x7A:
				v11 = (__int64)v3;
				v12 = a1;
				goto LABEL_20;
			case 0x7B:
			case 0x7C:
			case 0x7D:
			case 0x7F:
			case 0x81:
			case 0x82:
			case 0x84:
			case 0x86:
				goto LABEL_22;
			case 0x7E:
			case 0x80:
			case 0x83:
			case 0x85:
			case 0x8E:
				sub_1409209B0(a1, (__int64)v3);
				break;
			case 0x8C:
				v13 = v8[1] <= 0x7Au;
				v12 = a1;
				v11 = (__int64)v3;
				if (v13)
					LABEL_20:
				sub_14091CE80(v12, v11);
				else
					LABEL_22:
				sub_14091E340(a1, (__int64)v3);
				break;
			case 0x8D:
				sub_140921760(a1, v3);
				break;
			case 0x8F:
				if (!*v2)
				{
					v2[26] = 0;
					sub_14092AA10(v2, 1, 0i64, 258, -8i64);
				}
				sub_14092EC50((unsigned int**)a1, 1);
				if (!*v2)
				{
					v10 = *(int*)(a1 + 60);
				LABEL_15:
					v2[26] = 0;
					sub_14092AA10(v2, 267, v10 + 48, 1, 0i64);
				}
				break;
			case 0x96:
				if (!*v2)
				{
					v2[26] = 0;
					sub_14092AA10(v2, 1, 0i64, 512, -1i64);
				}
				v14 = *(_QWORD*)(a1 + 176);
				v15 = sub_140932450((__int64)v2, 22);
				if (v14)
				{
					if (v15)
					{
						v15[2] &= ~2ui64;
						v15[2] |= 1ui64;
						v15[3] = v14;
					}
				}
				else
				{
					sub_14091B490(v2, (__int64*)(a1 + 224), (__int64)v15);
				}
				break;
			case 0x97:
			case 0x98:
			case 0x99:
				v16 = sub_140932570((__int64)v2);
				for (j = (__int64*)v3[3]; j; j = (__int64*)j[1])
				{
					v18 = *j;
					if (*j && v16)
					{
						*(_QWORD*)(v18 + 16) &= ~2ui64;
						*(_QWORD*)(v18 + 16) |= 1ui64;
						*(_QWORD*)(v18 + 24) = v16;
					}
				}
				break;
			default:
				break;
			}
			v3 = (_QWORD*)*v3;
		} while (v3);
	}
}
// 14091E1FC: conditional instruction was optimized away because rbx.8!=0

