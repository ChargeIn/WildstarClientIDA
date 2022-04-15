//----- (00000001407F2EAC) ----------------------------------------------------
__int64 __fastcall sub_1407F2EAC(__int64 a1, char** a2, char* a3, int a4, int a5, int a6, int a7, __int64 a8)
{
	unsigned int v8; // ebx
	char* v9; // r10
	unsigned int v10; // r11d
	int v11; // r15d
	int v12; // r12d
	int v13; // r13d
	int v14; // esi
	int v15; // ecx
	__int64 result; // rax
	char* v17; // rdi
	__int64 v18; // rdx
	char v19; // dl
	char* v20; // r8
	__int16 v21; // dx
	int v22; // eax
	unsigned int v23; // edi
	int v24; // ecx
	int v25; // r13d
	char* v26; // r14
	char v27; // al
	int v28; // eax
	__int64* v29; // rdx
	unsigned __int64 v30; // rcx
	int v31; // eax
	__int16 v32; // ax
	__int16 v33; // r12
	unsigned __int16 v34; // ax
	__int16 v35; // r12
	unsigned __int16 v36; // r8
	int v37; // r15d
	__int64* v38; // rcx
	int i; // r10d
	unsigned __int16* v40; // r14
	unsigned __int16* v41; // rdi
	int v42; // r11d
	unsigned int v43; // r9d
	unsigned int v44; // esi
	unsigned int v45; // r10d
	unsigned int v46; // r9d
	__int16 v47; // r8
	int v48; // edx
	unsigned __int64 v49; // kr00_8
	int v50; // edi
	__int64 v51; // rdx
	unsigned int v52; // eax
	unsigned __int16 v53; // ax
	int v54; // [rsp+20h] [rbp-79h]
	int v55; // [rsp+20h] [rbp-79h]
	int v56; // [rsp+24h] [rbp-75h]
	__int16 v57; // [rsp+28h] [rbp-71h]
	__int64* v60; // [rsp+30h] [rbp-69h]
	char* v61; // [rsp+38h] [rbp-61h]
	__int64 v63[2]; // [rsp+48h] [rbp-51h] BYREF
	__int64 v64[2]; // [rsp+58h] [rbp-41h] BYREF
	unsigned __int64 v65; // [rsp+68h] [rbp-31h] BYREF
	int v66; // [rsp+70h] [rbp-29h]
	char v67[23]; // [rsp+78h] [rbp-21h] BYREF
	char v68; // [rsp+8Fh] [rbp-Ah]

	v8 = 0;
	v9 = v67;
	v57 = 0;
	v10 = 0;
	v56 = 1;
	v11 = 0;
	v54 = 0;
	v12 = 0;
	v13 = 0;
	v14 = 0;
	v15 = 0;
	if (!a8)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	v17 = a3;
	while ((unsigned __int8)*a3 <= 0x20u)
	{
		v18 = 0x100002600i64;
		if (!_bittest64(&v18, *a3))
			break;
		++a3;
	}
	while (1)
	{
		while (1)
		{
			while (1)
			{
				while (1)
				{
					v19 = *a3++;
					if (v15 > 5)
						break;
					if (v15 == 5)
					{
						v54 = 1;
						if ((unsigned __int8)(v19 - 48) > 9u)
						{
							v20 = v17;
							goto LABEL_97;
						}
						v15 = 4;
					LABEL_40:
						--a3;
					}
					else if (v15)
					{
						switch (v15)
						{
						case 1:
							v11 = 1;
							if ((unsigned __int8)(v19 - 49) <= 8u)
							{
								v15 = 3;
								goto LABEL_40;
							}
							if (v19 == ***(_BYTE***)(*(_QWORD*)a8 + 240i64))
								goto LABEL_37;
							if (((v19 - 43) & 0xFD) != 0)
							{
								if (v19 != 48)
									goto LABEL_24;
								goto LABEL_44;
							}
						LABEL_28:
							--a3;
							v15 = 11;
							break;
						case 2:
							if ((unsigned __int8)(v19 - 49) <= 8u)
								goto LABEL_39;
							if (v19 == ***(_BYTE***)(*(_QWORD*)a8 + 240i64))
								goto LABEL_42;
							if (v19 != 48)
								goto LABEL_96;
						LABEL_44:
							v15 = 1;
							break;
						case 3:
							v11 = 1;
							while (v19 >= 48 && v19 <= 57)
							{
								if (v10 >= 0x19)
								{
									++v14;
								}
								else
								{
									++v10;
									*v9++ = v19 - 48;
								}
								v19 = *a3++;
							}
							if (v19 != ***(_BYTE***)(*(_QWORD*)a8 + 240i64))
								goto LABEL_23;
						LABEL_37:
							v15 = 4;
							break;
						default:
							v11 = 1;
							v54 = 1;
							if (!v10)
							{
								while (v19 == 48)
								{
									v19 = *a3;
									--v14;
									++a3;
								}
							}
							while (v19 >= 48 && v19 <= 57)
							{
								if (v10 < 0x19)
								{
									++v10;
									*v9++ = v19 - 48;
									--v14;
								}
								v19 = *a3++;
							}
						LABEL_23:
							if (((v19 - 43) & 0xFD) == 0)
								goto LABEL_28;
						LABEL_24:
							if (v19 <= 67 || v19 > 69 && (unsigned __int8)(v19 - 100) > 1u)
								goto LABEL_56;
							v15 = 6;
							break;
						}
					}
					else
					{
						if ((unsigned __int8)(v19 - 49) <= 8u)
						{
						LABEL_39:
							v15 = 3;
							goto LABEL_40;
						}
						if (v19 == ***(_BYTE***)(*(_QWORD*)a8 + 240i64))
						{
						LABEL_42:
							v15 = 5;
						}
						else
						{
							switch (v19)
							{
							case '+':
								v15 = 2;
								v57 = 0;
								break;
							case '-':
								v15 = 2;
								v57 = 0x8000;
								break;
							case '0':
								goto LABEL_44;
							default:
								goto LABEL_56;
							}
						}
					}
				}
				if (v15 == 6)
					break;
				switch (v15)
				{
				case 7:
					if ((unsigned __int8)(v19 - 49) <= 8u)
						goto LABEL_76;
					goto LABEL_77;
				case 8:
					v12 = 1;
					while (v19 == 48)
						v19 = *a3++;
					if ((unsigned __int8)(v19 - 49) > 8u)
						goto LABEL_56;
					v15 = 9;
					goto LABEL_40;
				case 9:
					v12 = 1;
					while (v19 >= 48 && v19 <= 57)
					{
						v13 = v19 + 2 * (5 * v13 - 24);
						if (v13 > 5200)
						{
							v13 = 5201;
							break;
						}
						v19 = *a3++;
					}
					while (v19 >= 48 && v19 <= 57)
						v19 = *a3++;
				LABEL_56:
					v20 = a3 - 1;
					goto LABEL_97;
				}
				if (!a7)
					goto LABEL_56;
				v17 = a3 - 1;
				if (v19 == 43)
				{
					v15 = 7;
				}
				else
				{
					if (v19 != 45)
						goto LABEL_96;
				LABEL_68:
					v56 = -1;
					v15 = 7;
				}
			}
			v17 = a3 - 2;
			if ((unsigned __int8)(v19 - 49) <= 8u)
			{
			LABEL_76:
				v15 = 9;
				goto LABEL_40;
			}
			if (v19 != 43)
				break;
			v15 = 7;
		}
		if (v19 == 45)
			goto LABEL_68;
	LABEL_77:
		if (v19 != 48)
			break;
		v15 = 8;
	}
LABEL_96:
	v20 = v17;
LABEL_97:
	*a2 = v20;
	if (v11)
	{
		if (v10 > 0x18)
		{
			if (v68 >= 5)
				++v68;
			--v9;
			v10 = 24;
			++v14;
		}
		if (!v10)
		{
			v21 = 0;
			LOWORD(v22) = 0;
			v23 = 0;
			v24 = 0;
			goto LABEL_175;
		}
		while (!*--v9)
		{
			--v10;
			++v14;
		}
		sub_1407F6DB0(v67, v10, v64);
		if (v56 < 0)
			v13 = -v13;
		v25 = v14 + v13;
		if (!v12)
			v25 += a5;
		if (!v54)
			v25 -= a6;
		if (v25 > 5200)
		{
			v24 = 0;
			v21 = 0;
			LOWORD(v22) = 0x7FFF;
			v8 = 2;
			v23 = 0x80000000;
		}
		else if (v25 < -5200)
		{
			v21 = 0;
			LOWORD(v22) = 0;
			v23 = 0;
			v24 = 0;
			v8 = 1;
		}
		else
		{
			v26 = (char*)&unk_140C106C0 - 96;
			if (v25)
			{
				if (v25 < 0)
				{
					v25 = -v25;
					v26 = (char*)&unk_140C10820 - 96;
				}
				if (!a4)
					LOWORD(v64[0]) = 0;
				while (v25)
				{
					v27 = v25;
					v26 += 84;
					v25 >>= 3;
					v61 = v26;
					v28 = v27 & 7;
					if (v28)
					{
						v29 = (__int64*)&v26[12 * v28];
						v60 = v29;
						if (*(_WORD*)v29 >= 0x8000u)
						{
							v30 = *v29;
							v31 = *((_DWORD*)v29 + 2);
							v29 = (__int64*)&v65;
							v65 = v30;
							v66 = v31;
							v60 = (__int64*)&v65;
							*(_DWORD*)((char*)&v65 + 2) = (v30 >> 16) - 1;
						}
						v32 = *((_WORD*)v29 + 5);
						memset(v63, 0, 12);
						v33 = v32;
						v34 = v32 & 0x7FFF;
						v35 = (WORD1(v64[1]) ^ v33) & 0x8000;
						v36 = (WORD1(v64[1]) & 0x7FFF) + v34;
						if ((WORD1(v64[1]) & 0x7FFF) == 0x7FFF || v34 >= 0x7FFFu || v36 > 0xBFFDu)
						{
						LABEL_169:
							v64[0] = 0i64;
							LODWORD(v64[1]) = v35 != 0 ? -32768 : 2147450880;
							continue;
						}
						if (v36 <= 0x3FBFu)
							goto LABEL_127;
						if ((v64[1] & 0x7FFF0000) == 0)
						{
							++v36;
							if ((v64[1] & 0x7FFFFFFF) == 0 && !v64[0])
							{
								WORD1(v64[1]) = 0;
								continue;
							}
						}
						if (v34 || (++v36, (v29[1] & 0x7FFFFFFF) != 0) || *((_DWORD*)v29 + 1) || *(_DWORD*)v29)
						{
							v37 = 0;
							v38 = v63;
							for (i = 5; i > 0; --i)
							{
								v55 = i;
								v40 = (unsigned __int16*)(v29 + 1);
								v41 = (unsigned __int16*)v64 + v37;
								do
								{
									v42 = 0;
									v43 = *v40 * *v41;
									v44 = *(_DWORD*)v38 + v43;
									if (v44 < *(_DWORD*)v38 || v44 < v43)
										v42 = 1;
									*(_DWORD*)v38 = v44;
									if (v42)
										++* ((_WORD*)v38 + 2);
									++v41;
									--v40;
									--v55;
								} while (v55 > 0);
								v29 = v60;
								v38 = (__int64*)((char*)v38 + 2);
								++v37;
							}
							v45 = v63[1];
							v46 = v63[0];
							v47 = v36 - 16382;
							if (v47 > 0)
							{
								do
								{
									if ((v45 & 0x80000000) != 0)
										break;
									v49 = 2i64 * v46;
									v48 = HIDWORD(v49);
									v46 = v49;
									--v47;
									v45 = (HIDWORD(v63[0]) >> 31) | (2 * v45);
									LODWORD(v63[0]) = v46;
									HIDWORD(v63[0]) = v48 | (2 * HIDWORD(v63[0]));
									LODWORD(v63[1]) = v45;
								} while (v47 > 0);
								if (v47 > 0)
									goto LABEL_156;
							}
							if (--v47 >= 0)
								goto LABEL_156;
							v50 = 0;
							v51 = (unsigned __int16)-v47;
							v47 = 0;
							do
							{
								if ((v63[0] & 1) != 0)
									++v50;
								v52 = v45 << 31;
								v45 >>= 1;
								v46 = (HIDWORD(v63[0]) << 31) | (v46 >> 1);
								HIDWORD(v63[0]) = v52 | (HIDWORD(v63[0]) >> 1);
								LODWORD(v63[0]) = v46;
								--v51;
							} while (v51);
							LODWORD(v63[1]) = v45;
							if (v50)
							{
								v53 = v46 | 1;
								LOWORD(v63[0]) = v46 | 1;
								v46 = v63[0];
							}
							else
							{
							LABEL_156:
								v53 = v63[0];
							}
							v26 = v61;
							if (v53 > 0x8000u || (v46 & 0x1FFFF) == 98304)
							{
								if (*(_DWORD*)((char*)v63 + 2) == -1)
								{
									*(_DWORD*)((char*)v63 + 2) = 0;
									if (*(_DWORD*)((char*)v63 + 6) == -1)
									{
										*(_DWORD*)((char*)v63 + 6) = 0;
										if (WORD1(v63[1]) == 0xFFFF)
										{
											WORD1(v63[1]) = 0x8000;
											++v47;
										}
										else
										{
											++WORD1(v63[1]);
										}
									}
									else
									{
										++* (_DWORD*)((char*)v63 + 6);
									}
									v45 = v63[1];
								}
								else
								{
									++* (_DWORD*)((char*)v63 + 2);
								}
							}
							if ((unsigned __int16)v47 >= 0x7FFFu)
								goto LABEL_169;
							*(_DWORD*)((char*)v64 + 6) = v45;
							LOWORD(v64[0]) = WORD1(v63[0]);
							WORD1(v64[1]) = v35 | v47;
							*(_DWORD*)((char*)v64 + 2) = HIDWORD(v63[0]);
						}
						else
						{
						LABEL_127:
							memset(v64, 0, 12);
						}
					}
				}
			}
			v21 = v64[0];
			v24 = *(_DWORD*)((char*)v64 + 2);
			v23 = *(_DWORD*)((char*)v64 + 6);
			v22 = HIWORD(LODWORD(v64[1]));
		}
	}
	else
	{
		v21 = 0;
		LOWORD(v22) = 0;
		v23 = 0;
		v24 = 0;
		v8 = 4;
	}
LABEL_175:
	*(_WORD*)(a1 + 10) = v57 | v22;
	result = v8;
	*(_WORD*)a1 = v21;
	*(_DWORD*)(a1 + 2) = v24;
	*(_DWORD*)(a1 + 6) = v23;
	return result;
}
// 1407F322A: conditional instruction was optimized away because ecx.4 is in (1..4|7..9|==B)
// 1407F3485: conditional instruction was optimized away because r10d.4>=1
// 1407F2F87: conditional instruction was optimized away because ecx.4==4
// 1407F3186: conditional instruction was optimized away because ecx.4==B

