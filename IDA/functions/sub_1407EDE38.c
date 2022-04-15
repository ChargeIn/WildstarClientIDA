//----- (00000001407EDE38) ----------------------------------------------------
__int64 __fastcall sub_1407EDE38(__int64 a1, signed __int8* a2, _OWORD* a3, int* a4)
{
	int v7; // r14d
	int v8; // r12d
	int v9; // eax
	char* v10; // rdx
	_BYTE* v11; // r8
	signed __int8 v12; // r15
	int v13; // esi
	int v14; // edx
	unsigned __int8* v15; // rbx
	int v16; // ecx
	unsigned __int64 v17; // rax
	__int16* v18; // rax
	int v19; // eax
	int v20; // eax
	unsigned __int8* i; // rcx
	char v22; // al
	int v23; // esi
	int v24; // eax
	__int64 j; // rcx
	int v26; // r9d
	int v27; // edx
	__int16* v28; // rdi
	__int64 v29; // r8
	__int64 v30; // r13
	char v31; // r13
	char* v32; // rbx
	int v33; // ecx
	unsigned __int64 v34; // rdx
	char v35; // al
	int v36; // eax
	void* v37; // rax
	__int64 v38; // rax
	PVOID v39; // rax
	void(__fastcall * v40)(unsigned __int8*, __int128*); // rax
	void(__fastcall * v41)(unsigned __int8*, __int128*); // rax
	int v42; // edi
	__int64 v43; // r15
	int v44; // esi
	int v45; // edi
	WCHAR* v46; // r15
	WCHAR v47; // r9
	int v48; // eax
	signed __int8 v49; // al
	__int64 v50; // rcx
	int v51; // eax
	int v52; // eax
	__int64 result; // rax
	int v54; // [rsp+40h] [rbp-C0h] BYREF
	int v55; // [rsp+44h] [rbp-BCh] BYREF
	int v56; // [rsp+48h] [rbp-B8h]
	unsigned __int8 v57[4]; // [rsp+4Ch] [rbp-B4h] BYREF
	int v58; // [rsp+50h] [rbp-B0h]
	int v59; // [rsp+54h] [rbp-ACh]
	int v60; // [rsp+58h] [rbp-A8h]
	int v61; // [rsp+5Ch] [rbp-A4h]
	int v62; // [rsp+60h] [rbp-A0h]
	__int64 v63; // [rsp+68h] [rbp-98h]
	int* v64; // [rsp+70h] [rbp-90h]
	int v65; // [rsp+78h] [rbp-88h]
	LPVOID lpMem; // [rsp+80h] [rbp-80h]
	int v67; // [rsp+88h] [rbp-78h] BYREF
	int* v68; // [rsp+90h] [rbp-70h]
	signed __int8* v69; // [rsp+98h] [rbp-68h]
	unsigned __int8* v70; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v71; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v72; // [rsp+B8h] [rbp-48h]
	char v73; // [rsp+C0h] [rbp-40h]
	int v74[12]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v75; // [rsp+100h] [rbp+0h] BYREF
	char v76; // [rsp+2CFh] [rbp+1CFh] BYREF
	int v77; // [rsp+2D0h] [rbp+1D0h] BYREF

	v63 = a1;
	v62 = 0;
	v7 = 0;
	v59 = 0;
	v8 = 0;
	v56 = 0;
	v61 = 0;
	v58 = 0;
	sub_1407DE348((__int64)&v71, a3);
	v68 = (int*)sub_1407DE1B0();
	if (!a1)
		goto LABEL_224;
	if ((*(_BYTE*)(a1 + 24) & 0x40) == 0)
	{
		v9 = sub_1407EA35C(a1);
		v10 = (char*)&unk_140C0FFB0;
		v11 = (unsigned int)(v9 + 2) <= 1
			? &unk_140C0FFB0
			: (_BYTE*)(qword_140C60410[(__int64)v9 >> 5] + 88i64 * (v9 & 0x1F));
		if ((v11[56] & 0x7F) != 0)
			goto LABEL_224;
		if ((unsigned int)(v9 + 2) > 1)
			v10 = (char*)(qword_140C60410[(__int64)v9 >> 5] + 88i64 * (v9 & 0x1F));
		if (v10[56] < 0)
			goto LABEL_224;
	}
	if (!a2)
	{
	LABEL_224:
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		result = 0xFFFFFFFFi64;
		goto LABEL_226;
	}
	v12 = *a2;
	v13 = 0;
	v54 = 0;
	v55 = 0;
	v14 = 0;
	lpMem = 0i64;
	if (!v12)
		goto LABEL_225;
	v15 = v70;
	do
	{
		v69 = ++a2;
		if (v13 < 0)
			break;
		if ((unsigned __int8)(v12 - 32) > 0x58u)
			v16 = 0;
		else
			v16 = aIllegalByteSeq_0[v12] & 0xF;
		v17 = v14;
		v14 = byte_140963980[9 * v16 + v14] >> 4;
		v60 = v14;
		switch (v14)
		{
		case 8:
			goto LABEL_224;
		case 0:
			goto LABEL_198;
		case 1:
			v65 = 0;
			v61 = 0;
			v59 = 0;
			v56 = 0;
			v7 = 0;
			v8 = -1;
			v58 = 0;
			break;
		case 2:
			switch (v12)
			{
			case ' ':
				v7 |= 2u;
				break;
			case '#':
				v7 |= 0x80u;
				break;
			case '+':
				v7 |= 1u;
				break;
			case '-':
				v7 |= 4u;
				break;
			case '0':
				v7 |= 8u;
				break;
			}
			break;
		case 3:
			if (v12 != 42)
			{
				v52 = v12 + 10 * v59 - 48;
				goto LABEL_210;
			}
			v51 = *a4;
			a4 += 2;
			v59 = v51;
			if (v51 < 0)
			{
				v7 |= 4u;
				v52 = -v51;
			LABEL_210:
				v59 = v52;
			}
			break;
		case 4:
			v8 = 0;
			break;
		case 5:
			if (v12 == 42)
			{
				v8 = *a4;
				a4 += 2;
				if (v8 < 0)
					v8 = -1;
			}
			else
			{
				v8 = v12 + 2 * (5 * v8 - 24);
			}
			break;
		case 6:
			if (v12 != 73)
			{
				switch (v12)
				{
				case 'h':
					v7 |= 0x20u;
					break;
				case 'l':
					if (*a2 == 108)
					{
						++a2;
						v7 |= 0x1000u;
					}
					else
					{
						v7 |= 0x10u;
					}
					break;
				case 'w':
					v7 |= 0x800u;
					break;
				}
				break;
			}
			v49 = *a2;
			v7 |= 0x8000u;
			if (*a2 == 54 && a2[1] == 52)
			{
				a2 += 2;
				v7 |= 0x8000u;
				break;
			}
			if (v49 == 51 && a2[1] == 50)
			{
				a2 += 2;
				v7 &= ~0x8000u;
				break;
			}
			LOBYTE(v17) = v49 - 88;
			if ((unsigned __int8)v17 <= 0x20u)
			{
				v50 = 0x120821001i64;
				if (_bittest64(&v50, v17))
					break;
			}
			v60 = 0;
		LABEL_198:
			v58 = 0;
			if ((unsigned int)sub_1407DFE88(v12, &v71))
			{
				sub_1407EE870(v12, v63, &v54);
				v12 = *a2++;
				if (!v12)
					goto LABEL_224;
			}
			sub_1407EE870(v12, v63, &v54);
		LABEL_177:
			v13 = v54;
			v14 = v60;
			break;
		case 7:
			if (v12 > 100)
			{
				if (v12 < 101)
					goto LABEL_146;
				if (v12 <= 103)
					goto LABEL_59;
				switch (v12)
				{
				case 'i':
					goto LABEL_94;
				case 'n':
					v28 = *(__int16**)a4;
					a4 += 2;
					if (!sub_1407F117C())
						goto LABEL_224;
					if ((v7 & 0x20) != 0)
						*v28 = v13;
					else
						*(_DWORD*)v28 = v13;
					v61 = 1;
					goto LABEL_174;
				case 'o':
					v26 = 8;
					if ((v7 & 0x80u) != 0)
						v7 |= 0x200u;
					goto LABEL_96;
				case 'p':
					v8 = 16;
					v7 |= 0x8000u;
					goto LABEL_84;
				case 's':
					goto LABEL_45;
				}
				if (v12 != 117)
				{
					if (v12 != 120)
						goto LABEL_146;
					v24 = 39;
					goto LABEL_85;
				}
			}
			else
			{
				if (v12 != 100)
				{
					if (v12 == 65)
						goto LABEL_58;
					if (v12 == 67)
					{
						if ((v7 & 0x830) == 0)
							v7 |= 0x800u;
						goto LABEL_53;
					}
					if (((v12 - 69) & 0xFFFFFFFD) == 0)
					{
					LABEL_58:
						v65 = 1;
						v12 += 32;
						goto LABEL_59;
					}
					if (v12 != 83)
					{
						if (v12 != 88)
						{
							switch (v12)
							{
							case 'Z':
								v18 = *(__int16**)a4;
								a4 += 2;
								if (!v18 || (v15 = (unsigned __int8*)*((_QWORD*)v18 + 1)) == 0i64)
								{
									v15 = (unsigned __int8*)off_140C10480;
									goto LABEL_144;
								}
								v19 = *v18;
								if ((v7 & 0x800) != 0)
								{
									v58 = 1;
									v19 /= 2;
								}
								else
								{
									v58 = 0;
								}
								break;
							case 'a':
							LABEL_59:
								v7 |= 0x40u;
								v15 = (unsigned __int8*)v74;
								v23 = 512;
								if (v8 >= 0)
								{
									if (v8)
									{
										if (v8 > 512)
											v8 = 512;
										if (v8 > 163)
										{
											v37 = sub_1407E2C30(v8 + 349);
											lpMem = v37;
											if (v37)
											{
												v15 = (unsigned __int8*)v37;
												v23 = v8 + 349;
											}
											else
											{
												v8 = 163;
											}
										}
									}
									else
									{
										v8 = v12 == 103;
									}
								}
								else
								{
									v8 = 6;
								}
								v38 = *(_QWORD*)a4;
								a4 += 2;
								v70 = (unsigned __int8*)v38;
								v39 = DecodePointer(off_140C0FA50);
								((void(__fastcall*)(unsigned __int8**, unsigned __int8*, _QWORD, _QWORD, int, int, __int128*))v39)(
									&v70,
									v15,
									v23,
									(unsigned int)v12,
									v8,
									v65,
									&v71);
								if ((v7 & 0x80) != 0 && !v8)
								{
									v40 = (void(__fastcall*)(unsigned __int8*, __int128*))DecodePointer(off_140C0FA68);
									v40(v15, &v71);
								}
								if (v12 == 103 && (v7 & 0x80) == 0)
								{
									v41 = (void(__fastcall*)(unsigned __int8*, __int128*))DecodePointer(off_140C0FA60);
									v41(v15, &v71);
								}
								if (*v15 == 45)
								{
									v7 |= 0x100u;
									++v15;
								}
							LABEL_144:
								v19 = sub_1407E1990((__int64)v15);
								break;
							case 'c':
							LABEL_53:
								a4 += 2;
								if ((v7 & 0x810) != 0)
								{
									if ((unsigned int)sub_1407F2338(&v55, v74, 0x200ui64, *((_WORD*)a4 - 4)))
										v61 = 1;
								}
								else
								{
									v22 = *((_BYTE*)a4 - 8);
									v55 = 1;
									LOBYTE(v74[0]) = v22;
								}
								v15 = (unsigned __int8*)v74;
							LABEL_146:
								if (!v61)
								{
									if ((v7 & 0x40) == 0)
										goto LABEL_155;
									if ((v7 & 0x100) != 0)
									{
										v57[0] = 45;
										goto LABEL_152;
									}
									if ((v7 & 1) != 0)
									{
										v57[0] = 43;
										goto LABEL_152;
									}
									if ((v7 & 2) != 0)
									{
										v57[0] = 32;
									LABEL_152:
										v42 = 1;
										v56 = 1;
									}
									else
									{
									LABEL_155:
										v42 = v56;
									}
									v43 = v63;
									v44 = v59 - v55 - v42;
									if ((v7 & 0xC) == 0)
										sub_1407EE8B8(0x20u, v44, v63, &v54);
									sub_1407EA0F0(v57, v42, v43, &v54, v68);
									if ((v7 & 8) != 0 && (v7 & 4) == 0)
										sub_1407EE8B8(0x30u, v44, v43, &v54);
									v45 = v55;
									if (v58 && v55 > 0)
									{
										v46 = (WCHAR*)v15;
										while (1)
										{
											v47 = *v46;
											--v45;
											++v46;
											if ((unsigned int)sub_1407F2338(&v67, &v77, 6ui64, v47) || !v67)
												break;
											sub_1407EA0F0((unsigned __int8*)&v77, v67, v63, &v54, v68);
											if (!v45)
											{
												v43 = v63;
												goto LABEL_170;
											}
										}
										v43 = v63;
										v48 = -1;
										v54 = -1;
									}
									else
									{
										sub_1407EA0F0(v15, v55, v43, &v54, v68);
									LABEL_170:
										v48 = v54;
									}
									if (v48 >= 0 && (v7 & 4) != 0)
										sub_1407EE8B8(0x20u, v44, v43, &v54);
								}
							LABEL_174:
								if (lpMem)
								{
									sub_1407E14C0(lpMem);
									lpMem = 0i64;
								}
								a2 = v69;
								goto LABEL_177;
							default:
								goto LABEL_146;
							}
							v55 = v19;
							goto LABEL_146;
						}
					LABEL_84:
						v24 = 7;
					LABEL_85:
						v62 = v24;
						v26 = 16;
						if ((v7 & 0x80u) != 0)
						{
							v57[0] = 48;
							v27 = 2;
							v57[1] = v24 + 81;
						LABEL_97:
							if ((v7 & 0x8000) != 0 || (v7 & 0x1000) != 0)
							{
								v29 = *(_QWORD*)a4;
								v30 = (__int64)(a4 + 2);
							}
							else
							{
								v30 = (__int64)(a4 + 2);
								if ((v7 & 0x20) != 0)
								{
									v64 = (int*)v30;
									if ((v7 & 0x40) != 0)
										v29 = *(__int16*)(v30 - 8);
									else
										v29 = *(unsigned __int16*)(v30 - 8);
									goto LABEL_108;
								}
								if ((v7 & 0x40) != 0)
									v29 = *(int*)(v30 - 8);
								else
									v29 = *(unsigned int*)(v30 - 8);
							}
							v64 = (int*)v30;
						LABEL_108:
							if ((v7 & 0x40) != 0 && v29 < 0)
							{
								v29 = -v29;
								v7 |= 0x100u;
							}
							if ((v7 & 0x8000) == 0 && (v7 & 0x1000) == 0)
								v29 = (unsigned int)v29;
							if (v8 >= 0)
							{
								v7 &= ~8u;
								if (v8 > 512)
									v8 = 512;
							}
							else
							{
								v8 = 1;
							}
							v31 = v62;
							v32 = &v76;
							v56 = v29 != 0 ? v27 : 0;
							while (1)
							{
								v33 = v8--;
								if (v33 <= 0 && !v29)
									break;
								v34 = v29 % (unsigned __int64)v26;
								v29 /= (unsigned __int64)v26;
								v35 = v34 + 48;
								if ((int)v34 + 48 > 57)
									v35 += v31;
								*v32-- = v35;
							}
							a4 = v64;
							v36 = (unsigned int)&v75 + 463 - (_DWORD)v32;
							v15 = (unsigned __int8*)(v32 + 1);
							v55 = v36;
							if ((v7 & 0x200) != 0 && (!v36 || *v15 != 48))
							{
								--v15;
								++v55;
								*v15 = 48;
							}
							goto LABEL_146;
						}
					LABEL_96:
						v27 = v56;
						goto LABEL_97;
					}
					if ((v7 & 0x830) == 0)
						v7 |= 0x800u;
				LABEL_45:
					v15 = *(unsigned __int8**)a4;
					v20 = v8;
					if (v8 == -1)
						v20 = 0x7FFFFFFF;
					a4 += 2;
					if ((v7 & 0x810) != 0)
					{
						v58 = 1;
						if (!v15)
							v15 = (unsigned __int8*)off_140C10488;
						for (i = v15; v20; i += 2)
						{
							--v20;
							if (!*(_WORD*)i)
								break;
						}
						j = (i - v15) >> 1;
					}
					else
					{
						if (!v15)
							v15 = (unsigned __int8*)off_140C10480;
						for (j = (__int64)v15; v20; ++j)
						{
							--v20;
							if (!*(_BYTE*)j)
								break;
						}
						LODWORD(j) = j - (_DWORD)v15;
					}
					v55 = j;
					goto LABEL_146;
				}
			LABEL_94:
				v7 |= 0x40u;
			}
			v26 = 10;
			goto LABEL_96;
		}
		v12 = *a2;
	} while (*a2);
	if (v14 && v14 != 7)
		goto LABEL_224;
LABEL_225:
	result = (unsigned int)v13;
LABEL_226:
	if (v73)
		*(_DWORD*)(v72 + 200) &= ~2u;
	return result;
}
// 140963980: using guessed type unsigned __int8 byte_140963980[96];
// 140C10480: using guessed type char *off_140C10480;
// 140C10488: using guessed type wchar_t *off_140C10488;
// 140C60410: using guessed type __int64 qword_140C60410[64];
// 1407EDE38: using guessed type int var_240[12];

