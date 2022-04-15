//----- (000000014092F7C0) ----------------------------------------------------
__int64 __fastcall sub_14092F7C0(__int64 a1, _WORD* a2, unsigned __int64 a3)
{
	_WORD* v4; // r9
	__int64 v5; // r11
	unsigned int v6; // r10d
	int v7; // ebx
	int v8; // eax
	int v9; // r10d

	v4 = a2;
	v5 = a1;
	v6 = 2;
	while ((unsigned __int64)v4 < a3)
	{
		switch (*v4)
		{
		case 0x21:
		case 0x23:
		case 0x2E:
		case 0x30:
		case 0x3B:
		case 0x3D:
		case 0x48:
		case 0x4A:
			if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4 * (((__int64)v4 - *(_QWORD*)(v5 + 8)) >> 1)))
				v6 += 2;
			goto LABEL_13;
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
			if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4 * (((__int64)v4 - *(_QWORD*)(v5 + 8)) >> 1)))
				++v6;
		LABEL_13:
			v4 += 2;
			goto LABEL_14;
		case 0x27:
		case 0x28:
		case 0x34:
		case 0x35:
		case 0x41:
		case 0x42:
		case 0x4E:
		case 0x4F:
			if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4 * (((__int64)v4 - *(_QWORD*)(v5 + 8)) >> 1)))
				v6 += 2;
			v4 += 3;
		LABEL_14:
			if (*(_DWORD*)(v5 + 316) && (*(v4 - 1) & 0xFC00) == 0xD800)
				goto LABEL_16;
			break;
		case 0x55:
		case 0x57:
			if (!*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4 * (((__int64)v4 - *(_QWORD*)(v5 + 8)) >> 1)))
				goto LABEL_16;
			v6 += 2;
			++v4;
			break;
		case 0x56:
		case 0x58:
		case 0x59:
		case 0x5A:
			if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4 * (((__int64)v4 - *(_QWORD*)(v5 + 8)) >> 1)))
			{
				++v6;
				++v4;
			}
			else
			{
			LABEL_16:
				++v4;
			}
			break;
		case 0x5B:
		case 0x5C:
			if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4 * (((__int64)v4 - *(_QWORD*)(v5 + 8)) >> 1)))
				v6 += 2;
			v4 += 2;
			break;
		case 0x6A:
		case 0x6B:
		case 0x6C:
			if (*v4 == 108)
				v7 = (unsigned __int16)v4[1];
			else
				v7 = 17;
			if (*(_DWORD*)(*(_QWORD*)(v5 + 16) + 4 * (((__int64)v4 - *(_QWORD*)(v5 + 8)) >> 1)))
			{
				v8 = sub_14092EE10(&v4[v7]);
				v6 = v8 + v9;
			}
			v4 += v7;
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
			++v6;
			goto LABEL_4;
		case 0x7F:
		case 0x84:
			if (!*(_BYTE*)((unsigned __int16)v4[2] + *(_QWORD*)(v5 + 24)))
				++v6;
			v4 += 3;
			break;
		case 0x80:
		case 0x85:
			v6 += 2;
			v4 += 3;
			break;
		case 0x81:
			if ((unsigned __int16)(v4[(unsigned __int16)v4[1]] - 115) > 1u)
			{
			LABEL_4:
				v4 += 2;
			}
			else
			{
				++v6;
				v4 += 2;
			}
			break;
		default:
			v4 = sub_140930750(v5, v4);
			break;
		}
	}
	return v6;
}
// 14092F836: variable 'v6' is possibly undefined
// 14092F847: variable 'v5' is possibly undefined
// 14092F993: variable 'v9' is possibly undefined
// 14092F999: variable 'v4' is possibly undefined

