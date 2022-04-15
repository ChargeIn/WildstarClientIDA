//----- (0000000140927F00) ----------------------------------------------------
__int16 __fastcall sub_140927F00(unsigned int** a1, _WORD* a2, unsigned __int64 a3, int a4, int a5, int a6)
{
	unsigned int* v6; // rdi
	int v7; // esi
	_WORD* v8; // r12
	int v9; // r13d
	unsigned __int64 v10; // rax
	__int64 v11; // rbp
	BOOL v12; // r14d
	int v13; // ebx
	BOOL v14; // r15d
	int v15; // edx
	int v16; // r10d
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rbp
	int v20; // r11d
	int v21; // eax
	int v22; // r9d
	__int64 v23; // r9
	int v25; // [rsp+30h] [rbp-58h]
	int v26; // [rsp+38h] [rbp-50h]
	int v27; // [rsp+3Ch] [rbp-4Ch]
	_WORD* v29; // [rsp+98h] [rbp+10h]

	v29 = a2;
	v6 = *a1;
	v7 = 1;
	v8 = a2;
	v25 = a4 == 0;
	v9 = -8 * a6;
	LOWORD(v10) = 8 * a5;
	v11 = (__int64)a1;
	v12 = 1;
	v13 = 8 - 8 * a5;
	v14 = 1;
	if (!a4)
	{
		v13 += 8;
		if (v13 < v9)
		{
			LOWORD(v10) = v13;
			if (!*v6)
			{
				v6[26] = 0;
				v10 = (unsigned __int64)sub_14092D140((__int64)v6, 1, 1, 0i64, 258, v13);
				if (v10)
					*(_BYTE*)v10 = -117;
			}
			v13 += 8;
			v12 = 0;
			if (v13 < v9)
			{
				LOWORD(v10) = v13;
				if (!*v6)
				{
					v6[26] = 0;
					LOWORD(v10) = sub_14092AA10(v6, 3, 0i64, 258, v13);
				}
				v13 += 8;
				v14 = 0;
			}
		}
	}
	v15 = v25;
	if (v25 != 2)
	{
		while (1)
		{
			v16 = 0;
			if (v15)
			{
				if (v15 == 1)
				{
					if ((unsigned __int64)v8 < a3)
					{
						switch (*v8)
						{
						case 0x21:
						case 0x23:
						case 0x2E:
						case 0x30:
						case 0x3B:
						case 0x3D:
						case 0x48:
						case 0x4A:
							LODWORD(v10) = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
							if ((_DWORD)v10)
							{
								v26 = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
								LODWORD(v10) = v10 + 8;
								v16 = 2;
								v27 = v10;
							}
							goto LABEL_37;
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
							v10 = *(_QWORD*)(v11 + 16);
							if (*(_DWORD*)(v10 + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1)))
							{
								v16 = 1;
								v26 = *(_DWORD*)(v10 + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
							}
						LABEL_37:
							v8 += 2;
							goto LABEL_38;
						case 0x27:
						case 0x28:
						case 0x34:
						case 0x35:
						case 0x41:
						case 0x42:
						case 0x4E:
						case 0x4F:
							LODWORD(v10) = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
							if ((_DWORD)v10)
							{
								v26 = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
								LODWORD(v10) = v10 + 8;
								v16 = 2;
								v27 = v10;
							}
							v8 += 3;
						LABEL_38:
							v29 = v8;
							if (!*(_DWORD*)(v11 + 316))
								goto LABEL_24;
							v15 = v25;
							LOWORD(v10) = *(v8 - 1) & 0xFC00;
							if ((_WORD)v10 == 0xD800)
								v29 = ++v8;
							break;
						case 0x55:
						case 0x57:
							LODWORD(v10) = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
							if ((_DWORD)v10)
							{
								v26 = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
								LODWORD(v10) = v10 + 8;
								v16 = 2;
								v27 = v10;
							}
							++v8;
							goto LABEL_23;
						case 0x56:
						case 0x58:
						case 0x59:
						case 0x5A:
							v10 = *(_QWORD*)(v11 + 16);
							if (*(_DWORD*)(v10 + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1)))
							{
								v16 = 1;
								v26 = *(_DWORD*)(v10 + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
							}
							++v8;
							goto LABEL_23;
						case 0x5B:
						case 0x5C:
							LODWORD(v10) = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
							if ((_DWORD)v10)
							{
								v26 = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
								LODWORD(v10) = v10 + 8;
								v16 = 2;
								v27 = v10;
							}
							goto LABEL_22;
						case 0x6A:
						case 0x6B:
						case 0x6C:
							if (*v8 == 108)
								v20 = (unsigned __int16)v8[1];
							else
								v20 = 17;
							if (!*(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1)))
								goto LABEL_62;
							v21 = sub_14092EE10(&v8[v20]) - 1;
							if (v21)
							{
								if (v21 == 1)
								{
									v16 = 2;
									v26 = v22;
									v27 = v22 + 8;
									LOWORD(v10) = v20;
									v8 += v20;
									goto LABEL_23;
								}
							}
							else
							{
								v16 = 1;
								v26 = v22;
							}
						LABEL_62:
							LOWORD(v10) = v20;
							v8 += v20;
						LABEL_23:
							v29 = v8;
						LABEL_24:
							v15 = v25;
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
							goto LABEL_21;
						case 0x7F:
						case 0x84:
							v17 = (unsigned __int16)v8[2];
							v10 = *(_QWORD*)(v11 + 24);
							if (!*(_BYTE*)(v17 + v10))
							{
								LODWORD(v10) = *(_DWORD*)(v11 + 32);
								v16 = 1;
								v26 = v10 + 8 * v17;
							}
							v8 += 3;
							goto LABEL_23;
						case 0x80:
						case 0x85:
							v16 = 2;
							v18 = ((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1;
							v8 += 3;
							LODWORD(v10) = *(_DWORD*)(v11 + 32);
							v26 = *(_DWORD*)(*(_QWORD*)(v11 + 16) + 4 * v18);
							v27 = v10 + 8 * (unsigned __int16)*(v8 - 1);
							goto LABEL_23;
						case 0x81:
							v10 = (unsigned __int16)v8[1];
							if ((unsigned __int16)(v8[v10] - 115) <= 1u)
							{
							LABEL_21:
								v10 = *(_QWORD*)(v11 + 16);
								v16 = 1;
								v26 = *(_DWORD*)(v10 + 4 * (((__int64)v8 - *(_QWORD*)(v11 + 8)) >> 1));
							}
						LABEL_22:
							v8 += 2;
							goto LABEL_23;
						default:
							v10 = (unsigned __int64)sub_140930750(v11, v8);
							v8 = (_WORD*)v10;
							v29 = (_WORD*)v10;
							goto LABEL_24;
						}
					}
					else
					{
						v15 = 2;
						v25 = 2;
					}
				}
			}
			else
			{
				LODWORD(v10) = *(_DWORD*)(v11 + 44);
				v16 = 1;
				v15 = 1;
				v26 = v10;
				v25 = 1;
			}
			v19 = v16;
			if (v16 > 0)
				break;
		LABEL_77:
			v11 = (__int64)a1;
			if (v15 == 2)
				goto LABEL_78;
		}
		while (1)
		{
			--v19;
			if (a4)
			{
				if (v7)
				{
					if (!v12)
					{
						if (!*v6)
						{
							v6[26] = 0;
							sub_14092AA10(v6, 258, v13, 1, 0i64);
						}
						v13 += 8;
					}
					v10 = *(&v26 + v19);
					if (!*v6)
					{
						v6[26] = 0;
						LOWORD(v10) = sub_14092AA10(v6, 1, 0i64, 267, v10 + 48);
					}
					v12 = 0;
					v7 = 0;
					goto LABEL_75;
				}
				if (!v14)
				{
					sub_140932690(v6, 6, 258, v13, 3, 0i64);
					v13 += 8;
				}
				LOWORD(v10) = sub_140932690(v6, 6, 3, 0i64, 267, *(&v26 + v19));
				v14 = 0;
			}
			else
			{
				v23 = *(&v26 + v19);
				if (v7)
				{
					LOWORD(v10) = sub_140932690(v6, 6, 267, v23, 1, 0i64);
					v12 = v13 >= v9;
					if (v13 < v9)
					{
						LOWORD(v10) = sub_140932690(v6, v12 + 6, v12 + 1, 0i64, 258, v13);
						v13 += 8;
					}
					v7 = 0;
					goto LABEL_75;
				}
				LOWORD(v10) = sub_140932690(v6, 6, 267, v23, 3, 0i64);
				v14 = v13 >= v9;
				if (v13 < v9)
				{
					LOWORD(v10) = sub_140932690(v6, v14 + 6, v14 + 3, 0i64, 258, v13);
					v13 += 8;
				}
			}
			v7 = 1;
		LABEL_75:
			if (v19 <= 0)
			{
				v8 = v29;
				v15 = v25;
				goto LABEL_77;
			}
		}
	}
LABEL_78:
	if (a4)
	{
		if (v7)
		{
			if (!v12)
			{
				LOWORD(v10) = sub_140932690(v6, 6, 258, v13, 1, 0i64);
				v13 += 8;
			}
			if (!v14)
				LOWORD(v10) = sub_140932690(v6, 6, 258, v13, 3, 0i64);
		}
		else
		{
			if (!v14)
			{
				LOWORD(v10) = sub_140932690(v6, 6, 258, v13, 3, 0i64);
				v13 += 8;
			}
			if (!v12)
				LOWORD(v10) = sub_140932690(v6, 6, 258, v13, 1, 0i64);
		}
	}
	return v10;
}
// 1409280ED: variable 'v16' is possibly undefined
// 140928300: variable 'v22' is possibly undefined
// 140928309: variable 'v20' is possibly undefined

