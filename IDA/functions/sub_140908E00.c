//----- (0000000140908E00) ----------------------------------------------------
__int64 __fastcall sub_140908E00(unsigned __int16** a1, unsigned int* a2, _DWORD* a3, int a4, unsigned int a5, int a6)
{
	unsigned int v6; // r13d
	unsigned int v8; // r8d
	unsigned int v9; // ebx
	_WORD* v10; // r10
	unsigned int* v11; // rbp
	unsigned __int16** v13; // rdx
	int v14; // r12d
	unsigned __int16* v15; // r10
	__int64 v16; // rcx
	int v17; // edx
	int v18; // ebx
	unsigned __int16 v19; // cx
	unsigned __int16 v20; // dx
	unsigned __int16 v21; // r9
	unsigned __int16 v22; // r14
	unsigned int v23; // r8d
	int v24; // edi
	int v25; // eax
	unsigned int v26; // ecx
	unsigned int v27; // r8d
	int v28; // eax
	unsigned int v29; // r8d
	unsigned int v30; // ecx
	int v31; // eax
	int v32; // r8d
	unsigned int v33; // eax
	unsigned int v34; // r8d
	unsigned int v35; // r14d
	__int64 result; // rax
	unsigned __int16 v37; // ax
	int v38; // r9d
	unsigned __int16 v39; // ax
	_WORD* v40; // rcx
	int v41; // r11d
	unsigned __int16 v42; // cx
	unsigned __int16* v43; // rdx
	int v44; // eax
	int v45; // ecx
	int v46; // eax
	int v47; // eax
	unsigned __int16 v48; // ax
	unsigned __int16* i; // rcx
	BOOL v50; // eax
	unsigned __int16 v51; // cx
	unsigned __int16* v52; // r9
	unsigned __int16* v53; // r11
	int v54; // ecx
	int v55; // eax
	int v56; // eax
	unsigned __int16 v57; // ax
	unsigned __int16* v58; // rcx
	unsigned __int16* v59; // rcx
	unsigned __int16 v60; // cx
	unsigned __int16 v61; // dx
	unsigned int v62; // r8d
	int v63; // edi
	int v64; // eax
	unsigned int v65; // r8d
	unsigned int v66; // eax
	unsigned int v67; // r9d
	unsigned __int16* v68; // rcx
	int v69; // eax
	unsigned int v70; // r8d
	unsigned int v71; // eax
	unsigned __int16 j; // ax
	unsigned __int16 v73; // ax
	unsigned __int16* v74; // rcx
	unsigned int v75; // ecx
	int v76; // eax

	v6 = a5;
	v8 = (*a1)[1];
	v9 = 0;
	v10 = *a1 + 2;
	v11 = a2;
	v13 = a1;
	v14 = (a5 >> 11) & 1;
	if (v14 && (v8 & 0xFC00) == 55296)
	{
		v8 = (*v10 & 0x3FF | ((v8 & 0x3FF) << 10)) + 0x10000;
		v10 = *a1 + 3;
	}
	v15 = v10 - 1;
	if (!v8)
	{
		*a3 = 1;
		goto LABEL_44;
	}
	v16 = v8 - 48;
	if ((unsigned int)v16 > 0x4A)
		goto LABEL_44;
	v17 = word_1409CE270[v16];
	if (!word_1409CE270[v16])
	{
		switch (v8)
		{
		case '0':
			goto LABEL_106;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			if (a6)
				goto LABEL_100;
			v51 = v15[1];
			v52 = v15 + 1;
			v53 = v15;
			v44 = v8 - 48;
			if (v51 < 0x30u)
				goto LABEL_97;
			do
			{
				if (v51 > 0x39u)
					break;
				if (v44 > 214748363)
				{
					v57 = v15[1];
					v58 = v15 + 1;
					if (v57 >= 0x30u)
					{
						while (v57 <= 0x39u)
						{
							v57 = v58[1];
							v15 = v58++;
							if (v57 < 0x30u)
							{
								*a3 = 61;
								goto LABEL_43;
							}
						}
					}
					goto LABEL_79;
				}
				v54 = 5 * v44;
				v55 = *v52;
				v15 = v52++;
				v56 = v55 + 2 * v54;
				v51 = *v52;
				v44 = v56 - 48;
			} while (*v52 >= 0x30u);
		LABEL_97:
			if (v44 < 10 || v44 <= a4)
				goto LABEL_86;
			v15 = v53;
		LABEL_100:
			v8 = *v15;
			if (v8 < 0x38)
			{
			LABEL_106:
				v8 -= 48;
				do
				{
					v59 = v15 + 1;
					++v17;
					if ((unsigned __int16)(v15[1] - 48) > 7u)
						break;
					++v15;
					v8 = *v59 + 8 * (v8 - 6);
				} while (v17 < 2);
			}
			else
			{
				--v15;
				v8 = 0;
			}
			goto LABEL_43;
		case 'L':
		case 'l':
			goto LABEL_12;
		case 'U':
			v13 = a1;
			if ((a5 & 0x2000000) == 0)
				*a3 = 37;
			goto LABEL_44;
		case 'c':
			v8 = v15[1];
			++v15;
			if (v8)
			{
				if (v8 <= 0x7F)
				{
					if (v8 - 97 <= 0x19)
						v8 -= 32;
					v8 ^= 0x40u;
				}
				else
				{
					*a3 = 68;
				}
			}
			else
			{
				*a3 = 2;
			}
			goto LABEL_43;
		case 'g':
			if (a6)
				goto LABEL_43;
			v37 = v15[1];
			if (v37 == 60 || v37 == 39)
			{
				v9 = 27;
				goto LABEL_43;
			}
			v38 = 1;
			if (v37 == 123)
			{
				v39 = v15[2];
				v40 = v15 + 2;
				if (v39)
				{
					while (v39 == 45 || (unsigned __int16)(v39 - 48) <= 9u)
					{
						v39 = v40[1];
						++v40;
						if (!v39)
							goto LABEL_61;
					}
					if (*v40 && *v40 != 125)
					{
						v9 = 28;
						goto LABEL_43;
					}
				}
			LABEL_61:
				v41 = 1;
				++v15;
				goto LABEL_66;
			}
			v41 = 0;
		LABEL_66:
			if (v15[1] == 45)
				++v15;
			else
				v38 = 0;
			v42 = v15[1];
			v43 = v15 + 1;
			v44 = 0;
			if (v42 < 0x30u)
				goto LABEL_73;
			while (1)
			{
				if (v42 > 0x39u)
				{
				LABEL_73:
					if (v41)
					{
						if (*++v15 != 125)
						{
							*a3 = 57;
							goto LABEL_43;
						}
					}
					if (!v44)
					{
						*a3 = 58;
						goto LABEL_43;
					}
					if (v38)
					{
						if (v44 > a4)
						{
							*a3 = 15;
							goto LABEL_43;
						}
						v44 = a4 - v44 + 1;
					}
				LABEL_86:
					v18 = v44;
					goto LABEL_87;
				}
				if (v44 > 214748363)
					break;
				v45 = 5 * v44;
				v46 = *v43;
				v15 = v43++;
				v47 = v46 + 2 * v45;
				v42 = *v43;
				v44 = v47 - 48;
				if (*v43 < 0x30u)
					goto LABEL_73;
			}
			v48 = v15[1];
			for (i = v15 + 1; v48 >= 0x30u; ++i)
			{
				if (v48 > 0x39u)
					break;
				v48 = i[1];
				v15 = i;
			}
		LABEL_79:
			*a3 = 61;
			goto LABEL_43;
		case 'u':
			if ((a5 & 0x2000000) == 0)
			{
			LABEL_12:
				*a3 = 37;
				goto LABEL_43;
			}
			v19 = v15[1];
			if (v19 > 0xFFu)
				goto LABEL_43;
			if ((byte_1409CF060[v19] & 8) == 0)
				goto LABEL_43;
			v20 = v15[2];
			if (v20 > 0xFFu)
				goto LABEL_43;
			if ((byte_1409CF060[v20] & 8) == 0)
				goto LABEL_43;
			v21 = v15[3];
			if (v21 > 0xFFu)
				goto LABEL_43;
			if ((byte_1409CF060[v21] & 8) == 0)
				goto LABEL_43;
			v22 = v15[4];
			if (v22 > 0xFFu || (byte_1409CF060[v22] & 8) == 0)
				goto LABEL_43;
			v23 = v19;
			if (v19 >= 0x61u)
				v23 = v19 - 32;
			v24 = 55;
			v25 = 55;
			v26 = v20;
			if (v23 < 0x41)
				v25 = 48;
			v27 = v23 - v25;
			if (v20 >= 0x61u)
				v26 = v20 - 32;
			v28 = 55;
			if (v26 < 0x41)
				v28 = 48;
			v29 = v26 + 16 * v27 - v28;
			v30 = v21;
			if (v21 >= 0x61u)
				v30 = v21 - 32;
			v31 = 55;
			if (v30 < 0x41)
				v31 = 48;
			v32 = 16 * v29 - v31;
			v33 = v22;
			v34 = v30 + v32;
			if (v22 >= 0x61u)
				v33 = v22 - 32;
			v35 = 0xFFFF;
			if (v33 < 0x41)
				v24 = 48;
			v15 += 4;
			v8 = v33 + 16 * v34 - v24;
			if (v14)
				v35 = 1114111;
			if (v8 > v35)
			{
				*a3 = 76;
				goto LABEL_42;
			}
			if (!v14)
				goto LABEL_42;
			v13 = a1;
			v11 = a2;
			if (v8 - 55296 <= 0x7FF)
				*a3 = 73;
			goto LABEL_44;
		case 'x':
			if ((a5 & 0x2000000) != 0)
			{
				v60 = v15[1];
				if (v60 > 0xFFu)
					goto LABEL_43;
				if ((byte_1409CF060[v60] & 8) == 0)
					goto LABEL_43;
				v61 = v15[2];
				if (v61 > 0xFFu || (byte_1409CF060[v61] & 8) == 0)
					goto LABEL_43;
				v62 = v60;
				if (v60 >= 0x61u)
					v62 = v60 - 32;
				v63 = 55;
				v64 = 55;
				if (v62 < 0x41)
					v64 = 48;
				v65 = v62 - v64;
				v66 = v61;
				if (v61 >= 0x61u)
					v66 = v61 - 32;
				if (v66 < 0x41)
					v63 = 48;
				v8 = v66 + 16 * v65 - v63;
				v15 += 2;
			}
			else
			{
				if (v15[1] != 123)
					goto LABEL_146;
				LOWORD(v67) = v15[2];
				v68 = v15 + 2;
				v8 = 0;
				if ((unsigned __int16)v67 <= 0xFFu)
				{
					while (1)
					{
						v6 = a5;
						if ((byte_1409CF060[(unsigned __int16)v67] & 8) == 0)
							goto LABEL_137;
						++v68;
						v67 = (unsigned __int16)v67;
						if (v8 || (unsigned __int16)v67 != 48)
						{
							if ((unsigned __int16)v67 >= 0x61u)
								v67 = (unsigned __int16)v67 - 32;
							v69 = 55;
							if (v67 < 0x41)
								v69 = 48;
							v70 = 16 * v8 - v69;
							v71 = 0xFFFF;
							v8 = v67 + v70;
							if (v14)
								v71 = 1114111;
							if (v8 > v71)
								break;
						}
						LOWORD(v67) = *v68;
						if (*v68 > 0xFFu)
							goto LABEL_137;
					}
					for (j = *v68; j <= 0xFFu; ++v68)
					{
						if ((byte_1409CF060[j] & 8) == 0)
							break;
						j = v68[1];
					}
					*a3 = 34;
				}
			LABEL_137:
				if (*v68 == 125)
				{
					if (v14 && v8 - 55296 <= 0x7FF)
						*a3 = 73;
					v15 = v68;
				}
				else
				{
				LABEL_146:
					v8 = 0;
					do
					{
						v73 = v15[1];
						v74 = v15 + 1;
						++v17;
						if (v73 > 0xFFu || (byte_1409CF060[v73] & 8) == 0)
							break;
						++v15;
						v75 = *v74;
						if (v75 >= 0x61)
							v75 -= 32;
						v76 = 55;
						if (v75 < 0x41)
							v76 = 48;
						v8 = v75 + 16 * v8 - v76;
					} while (v17 < 2);
				}
			}
		LABEL_42:
			v11 = a2;
			goto LABEL_43;
		default:
			v13 = a1;
			if ((a5 & 0x40) != 0)
				*a3 = 3;
			goto LABEL_44;
		}
	}
	if (v17 > 0)
	{
		v8 = word_1409CE270[v16];
	LABEL_43:
		v13 = a1;
		goto LABEL_44;
	}
	v18 = word_1409CE270[v16];
LABEL_87:
	v9 = -v18;
	if (v9 != 12 || v15[1] != 123)
		goto LABEL_43;
	v50 = sub_14090EF20(v15 + 2);
	v13 = a1;
	if (!v50)
		*a3 = 37;
LABEL_44:
	if ((v6 & 0x20000000) != 0 && v9 - 6 <= 5)
		v9 += 23;
	*v13 = v15;
	result = v9;
	*v11 = v8;
	return result;
}
// 140909072: variable 'v15' is possibly undefined
// 140909077: variable 'v8' is possibly undefined
// 1409CE270: using guessed type __int16 word_1409CE270[76];
// 1409CF060: using guessed type _BYTE[256];

