//----- (0000000140932690) ----------------------------------------------------
__int64 __fastcall sub_140932690(unsigned int* a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
	__int64 result; // rax
	__int64 v7; // r12
	int v8; // r14d
	int v9; // r15d
	int v11; // r13d
	int v12; // ebp
	__int64 v13; // rsi
	signed int v14; // edi
	char* v15; // rax
	int v16; // eax
	int v17; // edx
	char* v18; // rax
	int v19; // edi
	int v20; // edi
	_QWORD* v21; // rax
	_QWORD* v22; // rax
	char v23; // dl

	result = *a1;
	v7 = a4;
	v8 = a3;
	v9 = a2 & 0x7F00;
	v11 = 0;
	if (!(_DWORD)result)
	{
		if (a3 == 267)
			v7 = a4 + 48;
		v12 = a5;
		v13 = a6;
		if (a5 == 267)
			v13 = a6 + 48;
		v14 = a2 & 0xFFFF80FF;
		a1[26] = a2 & 0x100;
		if ((a2 & 0xFFFF80FF) - 6 <= 0xF)
		{
			a1[26] = 0;
			if ((a2 & 0x100) == 0)
				goto LABEL_23;
			if (a5 > 12 || a5 != a3 || ((v14 - 7) & 0xFFFFFFF4) == 0)
			{
				switch (v14)
				{
				case 12:
					if ((a5 & 0x100) != 0)
					{
						v14 = 11;
						goto LABEL_18;
					}
				LABEL_25:
					if ((a5 & 0x200) != 0)
					{
						switch (v14)
						{
						case 7:
							v13 = (unsigned __int8)v13;
							break;
						case 8:
							v13 = (char)v13;
							break;
						case 9:
							v13 = (unsigned __int16)v13;
							break;
						case 10:
							v13 = (__int16)v13;
							break;
						case 11:
							v13 = (unsigned int)v13;
							break;
						case 12:
							v13 = (int)v13;
							break;
						default:
							break;
						}
					}
					if (v11 && (a5 & 0x100) != 0 && (a5 & 0xF) != 0 && (v13 || (a5 & 0xF0) != 0))
					{
						v15 = sub_14092D140((__int64)a1, 1, a5 & 0xF, 0i64, a5, v13);
						if (!v15)
							return *a1;
						v12 = a5 & 0x10F;
						*v15 = -115;
						v13 = 0i64;
					}
					switch (v14)
					{
					case 6:
					case 13:
						v16 = sub_14092AA10(a1, v8, v7, v12, v13);
						goto LABEL_47;
					case 7:
						v16 = sub_14092AC10(a1, 0, v8, v7, v12, v13);
						goto LABEL_47;
					case 8:
						v16 = sub_14092AC10(a1, 1, v8, v7, v12, v13);
						goto LABEL_47;
					case 9:
						v17 = 0;
						goto LABEL_46;
					case 10:
						v17 = 1;
					LABEL_46:
						v16 = sub_14092AD90(a1, v17, v8, v7, v12, v13);
					LABEL_47:
						if (!v16)
							goto LABEL_52;
						return *a1;
					case 11:
						if ((unsigned int)sub_14092AEE0(a1, 0, v8, v7, v12, v13))
							return *a1;
						goto LABEL_52;
					case 12:
						if ((unsigned int)sub_14092AEE0(a1, 1, v8, v7, v12, v13))
							return *a1;
						goto LABEL_52;
					default:
					LABEL_52:
						if (!v11 || (v8 & 0x100) == 0 || (v8 & 0xF) == 0 || !v7 && (v8 & 0xF0) == 0)
							return 0i64;
						v18 = sub_14092D140((__int64)a1, 1, v8 & 0xF, 0i64, v8, v7);
						if (!v18)
							return *a1;
						*v18 = -115;
						break;
					}
					return 0i64;
				case 20:
					if ((a5 & 0x100) != 0)
					{
						v14 = 19;
					LABEL_21:
						if ((a5 & 0x200) != 0)
							v14 = 20;
					}
				LABEL_24:
					v11 = 1;
					v14 -= 8;
					goto LABEL_25;
				case 11:
				LABEL_18:
					if ((a5 & 0x200) != 0)
						v14 = 12;
					goto LABEL_25;
				case 19:
					goto LABEL_21;
				}
			LABEL_23:
				if (v14 < 14)
					goto LABEL_25;
				goto LABEL_24;
			}
			return 0i64;
		}
		if ((a2 & 0x3E00) != 0)
			a1[27] = 0;
		v19 = v14 - 22;
		if (v19)
		{
			v20 = v19 - 1;
			if (v20)
			{
				if (v20 != 1)
					return 0i64;
				if ((a2 & 0x4000) != 0 && !a1[27])
				{
					v21 = sub_14092D610((__int64)a1, 7i64);
					if (v21)
					{
						*(_BYTE*)v21 = 6;
						*((_QWORD*)a1 + 11) += 6i64;
						*(_DWORD*)((char*)v21 + 1) = 610569544;
						*(_WORD*)((char*)v21 + 5) = -25592;
						a1[27] = 1;
					}
					else
					{
						result = *a1;
						if ((_DWORD)result)
							return result;
					}
				}
				return sub_140929830(a1, v9, v8, v7, a5, v13);
			}
			if ((a2 & 0x4000) != 0 && !a1[27])
			{
				v22 = sub_14092D610((__int64)a1, 7i64);
				if (v22)
				{
					*(_BYTE*)v22 = 6;
					*((_QWORD*)a1 + 11) += 6i64;
					*(_DWORD*)((char*)v22 + 1) = 610569544;
					*(_WORD*)((char*)v22 + 5) = -25592;
					a1[27] = 1;
				}
				else
				{
					result = *a1;
					if ((_DWORD)result)
						return result;
				}
			}
			a3 = v8;
			v23 = 24;
		}
		else
		{
			if ((a2 & 0x200) != 0)
				return sub_14092BC00(a1, a3, v7, a5, v13);
			v23 = 16;
		}
		return sub_14092CE50(a1, v23, a3, v7, a5, v13);
	}
	return result;
}

