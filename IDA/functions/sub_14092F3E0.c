//----- (000000014092F3E0) ----------------------------------------------------
__int64 __fastcall sub_14092F3E0(__int64 a1, _WORD* a2, unsigned __int64 a3)
{
	_WORD* v3; // r10
	_WORD* v5; // rsi
	unsigned int v7; // r15d
	_WORD* v8; // r12
	__int16 v9; // r11
	int v10; // edx
	__int64 v11; // rcx
	unsigned int v12; // edx
	_WORD* v13; // rax
	__int64 v14; // rcx
	bool v15; // zf
	int v16; // eax
	__int64 v17; // r9
	unsigned __int16* v18; // rcx
	unsigned __int16* v19; // rdi
	int v20; // ebp
	unsigned __int16* v21; // r14
	int v22; // r9d
	__int16 v23; // ax
	__int16 v24; // ax
	_WORD* v25; // rcx
	int v26; // eax
	int v27; // eax

	v3 = 0i64;
	v5 = a2;
	v7 = 0;
	v8 = 0i64;
	if ((unsigned __int64)a2 >= a3)
		return v7;
	v9 = -1024;
	while (2)
	{
		v10 = (int)v3;
		switch (*v5)
		{
		case 3:
			*(_DWORD*)(a1 + 100) = 1;
			++v5;
			goto LABEL_61;
		case 0x21:
		case 0x23:
		case 0x2E:
		case 0x30:
		case 0x3B:
		case 0x3D:
		case 0x48:
		case 0x4A:
			v10 = 2;
			v22 = -2;
			goto LABEL_46;
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
			v10 = 1;
			v22 = -2;
			goto LABEL_46;
		case 0x27:
		case 0x28:
		case 0x34:
		case 0x35:
		case 0x41:
		case 0x42:
		case 0x4E:
		case 0x4F:
			v10 = 2;
			v22 = -3;
			goto LABEL_46;
		case 0x55:
		case 0x57:
			v23 = v5[1];
			if (v23 != 17 && v23 != 22)
				v10 = 2;
			v22 = 1;
			goto LABEL_45;
		case 0x56:
		case 0x58:
		case 0x59:
		case 0x5A:
			v10 = 1;
			v22 = 1;
			goto LABEL_46;
		case 0x5B:
		case 0x5C:
			v24 = v5[2];
			if (v24 != 17 && v24 != 22)
				v10 = 2;
			v22 = 2;
			goto LABEL_45;
		case 0x6A:
		case 0x6B:
			v25 = v5 + 17;
			goto LABEL_44;
		case 0x6C:
			v25 = &v5[(unsigned __int16)v5[1]];
		LABEL_44:
			v10 = sub_14092EE10(v25);
		LABEL_45:
			if (v10 > 0)
			{
			LABEL_46:
				if (v5 >= v8)
					v7 += 8 * v10;
			}
			if (v22)
			{
				if (v22 >= 0)
				{
					v5 += v22;
				}
				else
				{
					v5 -= v22;
					if (*(_DWORD*)(a1 + 316))
					{
						if (((unsigned __int16)v9 & *(v5 - 1)) == 0xD800)
							++v5;
					}
				}
			}
			goto LABEL_61;
		case 0x6D:
		case 0x6E:
			v11 = (unsigned __int16)v5[1];
			v5 += 2;
			*(_BYTE*)(v11 + *(_QWORD*)(a1 + 24)) = 0;
			goto LABEL_61;
		case 0x6F:
			if (!*(_DWORD*)(a1 + 44))
			{
				v26 = *(_DWORD*)(a1 + 36);
				*(_DWORD*)(a1 + 44) = v26;
				*(_DWORD*)(a1 + 36) = v26 + 8;
			}
			v5 += 2;
			goto LABEL_61;
		case 0x77:
		case 0x78:
		case 0x79:
		case 0x7A:
		case 0x7B:
		case 0x7C:
		case 0x7E:
		case 0x82:
		case 0x83:
			goto LABEL_28;
		case 0x7D:
			goto LABEL_29;
		case 0x7F:
		case 0x84:
			goto LABEL_7;
		case 0x80:
		case 0x85:
			v7 += 8;
			*(_BYTE*)((unsigned __int16)v5[2] + *(_QWORD*)(a1 + 24)) = 0;
		LABEL_7:
			v12 = 3;
			goto LABEL_8;
		case 0x81:
		case 0x86:
			v16 = (unsigned __int16)v5[2];
			if (v16 == 135)
			{
				*(_BYTE*)((unsigned __int16)v5[3] + *(_QWORD*)(a1 + 24)) = 0;
			}
			else if (v16 == 136)
			{
				v17 = *(_QWORD*)(a1 + 152);
				v18 = *(unsigned __int16**)(a1 + 144);
				v19 = v18;
				if (v17 > 0)
				{
					do
					{
						if (*v18 == (unsigned __int16)v5[3])
							break;
						++v10;
						v18 += *(_QWORD*)(a1 + 160);
					} while (v10 < v17);
				}
				v20 = (int)v3;
				if (v17 > 0)
				{
					v21 = v18 + 1;
					do
					{
						if (!(unsigned int)sub_1409198E0((__int64)(v19 + 1), v21))
							*(_BYTE*)(*v19 + *(_QWORD*)(a1 + 24)) = 0;
						++v20;
						v19 += *(_QWORD*)(a1 + 160);
					} while (v20 < *(_QWORD*)(a1 + 152));
					v3 = 0i64;
					v9 = -1024;
				}
			}
			if (*v5 != 129 || (unsigned __int16)(v5[(unsigned __int16)v5[1]] - 115) <= 1u)
				LABEL_28:
			v7 += 8;
		LABEL_29:
			v12 = 2;
		LABEL_8:
			if (v5 >= v8)
			{
				v13 = v5;
				do
				{
					v14 = (unsigned __int16)v13[1];
					v15 = v13[v14] == 113;
					v13 += v14;
				} while (v15);
				v8 = v13 + 2;
				if (*v13 == 114)
					v8 = v3;
			}
			v5 += v12;
			goto LABEL_61;
		case 0x8F:
			if (!*(_DWORD*)(a1 + 60))
			{
				v27 = *(_DWORD*)(a1 + 36);
				*(_DWORD*)(a1 + 60) = v27;
				*(_DWORD*)(a1 + 36) = v27 + 8;
			}
			v5 += (unsigned __int16)v5[1] + 3;
			goto LABEL_61;
		default:
			v5 = sub_140930750(a1, v5);
			if (v5)
			{
			LABEL_61:
				if ((unsigned __int64)v5 >= a3)
					return v7;
				continue;
			}
			return 0xFFFFFFFFi64;
		}
	}
}
// 14092F433: variable 'v3' is possibly undefined
// 14092F629: variable 'v22' is possibly undefined
// 14092F648: variable 'v9' is possibly undefined

