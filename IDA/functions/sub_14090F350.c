#include "../winhttp.h"

//----- (000000014090F350) ----------------------------------------------------
__int64 __fastcall sub_14090F350(int* a1, unsigned int a2, int* a3, const char** a4, _DWORD* a5, void* a6)
{
	_DWORD* v7; // rdx
	__int64 result; // rax
	const char** v9; // r13
	int* v10; // r12
	int v11; // ebx
	int* v12; // rsi
	int* v13; // r15
	int v14; // edx
	void* v15; // r13
	int v16; // r14d
	unsigned __int16* v18; // rsi
	int v19; // eax
	unsigned int v20; // edi
	int v21; // eax
	unsigned int v22; // edi
	__int64 v23; // rcx
	unsigned __int16* v24; // rsi
	int v25; // ebx
	__int64 v26; // r8
	int v27; // r8d
	const char* v28; // rcx
	int* v30; // rcx
	int v31; // edi
	__int64 v32; // rax
	__int64 v33; // r14
	int v34; // r12d
	__int16 v35; // ax
	int v36; // esi
	int v37; // eax
	__int64 v38; // rax
	__int64 v39; // r13
	unsigned int v40; // r15d
	char* v41; // rdi
	int v42; // r10d
	int v43; // ecx
	int* v44; // rdx
	int* v45; // rcx
	__int64 v46; // rax
	_WORD* v47; // r9
	int v48; // eax
	int v49; // r12d
	int v50; // ebx
	unsigned __int64 v51; // rax
	unsigned __int64 v52; // rsi
	int v53; // r8d
	unsigned __int16* v54; // rdx
	__int64 v55; // rax
	__int64 v56; // rdi
	int v57; // ebx
	unsigned __int16* v58; // rax
	int* v59; // r9
	__int64 v60; // r8
	int v61; // ecx
	__int64 v62; // rax
	unsigned __int16* v63; // rsi
	__int64 v64; // rcx
	unsigned __int16 v65; // bx
	unsigned __int16* v66; // rdi
	int v67; // eax
	int v68; // ecx
	int v69; // r11d
	char v70; // al
	unsigned __int16 v71; // dx
	char v72; // al
	unsigned __int16 v73; // dx
	int v74; // [rsp+60h] [rbp-A0h] BYREF
	unsigned int v75; // [rsp+68h] [rbp-98h] BYREF
	unsigned int v76; // [rsp+70h] [rbp-90h] BYREF
	int v77; // [rsp+74h] [rbp-8Ch] BYREF
	int v78; // [rsp+78h] [rbp-88h]
	unsigned int v79; // [rsp+80h] [rbp-80h] BYREF
	char* v80; // [rsp+88h] [rbp-78h] BYREF
	int v81; // [rsp+90h] [rbp-70h] BYREF
	int v82; // [rsp+94h] [rbp-6Ch] BYREF
	unsigned __int16* v83; // [rsp+98h] [rbp-68h] BYREF
	__int64 v84; // [rsp+A0h] [rbp-60h] BYREF
	int v85; // [rsp+A8h] [rbp-58h] BYREF
	int v86; // [rsp+ACh] [rbp-54h]
	int* v87; // [rsp+B0h] [rbp-50h] BYREF
	int* v88; // [rsp+B8h] [rbp-48h]
	__int64 v89; // [rsp+C0h] [rbp-40h] BYREF
	int* v90; // [rsp+C8h] [rbp-38h]
	__int64 v91; // [rsp+D0h] [rbp-30h]
	int* v92; // [rsp+D8h] [rbp-28h]
	const char** v93; // [rsp+E0h] [rbp-20h]
	_DWORD* v94; // [rsp+E8h] [rbp-18h]
	__int64 v95; // [rsp+F0h] [rbp-10h]
	void* v96; // [rsp+100h] [rbp+0h] BYREF
	__int64 v97; // [rsp+108h] [rbp+8h]
	__int64 v98; // [rsp+110h] [rbp+10h]
	__int64 v99; // [rsp+118h] [rbp+18h]
	int* v100; // [rsp+120h] [rbp+20h]
	int* v101; // [rsp+128h] [rbp+28h]
	int* v102; // [rsp+130h] [rbp+30h]
	__int64 v103; // [rsp+138h] [rbp+38h]
	__int64 v104; // [rsp+140h] [rbp+40h]
	int* v105; // [rsp+148h] [rbp+48h]
	__int64 v106; // [rsp+150h] [rbp+50h]
	__int64 v107; // [rsp+158h] [rbp+58h]
	int v108; // [rsp+160h] [rbp+60h]
	__int64 v109; // [rsp+164h] [rbp+64h]
	int v110; // [rsp+16Ch] [rbp+6Ch]
	__int64 v111; // [rsp+170h] [rbp+70h]
	int v112; // [rsp+178h] [rbp+78h]
	unsigned int v113; // [rsp+17Ch] [rbp+7Ch]
	_BYTE v114[12]; // [rsp+180h] [rbp+80h]
	__int64 v115; // [rsp+18Ch] [rbp+8Ch]
	int v116; // [rsp+194h] [rbp+94h]
	int v117; // [rsp+198h] [rbp+98h]
	__int16 v118; // [rsp+19Ch] [rbp+9Ch]
	__int16 v119; // [rsp+19Eh] [rbp+9Eh]
	int v120; // [rsp+1B0h] [rbp+B0h] BYREF
	char v121[4092]; // [rsp+1B4h] [rbp+B4h] BYREF

	v7 = a5;
	v91 = 1i64;
	result = 0i64;
	v9 = a4;
	v94 = a5;
	v93 = a4;
	v10 = a3;
	v74 = 0;
	v11 = 0;
	v88 = a3;
	v12 = a1;
	v92 = a1;
	v13 = a1;
	v80 = (char*)a1;
	if (!a4)
	{
		if (a3)
			*a3 = 99;
		return result;
	}
	*a4 = 0i64;
	if (a3)
		*a3 = 0;
	if (!a5)
	{
		v14 = 16;
		goto LABEL_75;
	}
	*a5 = 0;
	v15 = &unk_1409CFCA0;
	if (a6)
		v15 = a6;
	v96 = v15;
	v97 = (__int64)v15 + 256;
	v98 = (__int64)v15 + 512;
	v99 = (__int64)v15 + 832;
	if ((a2 & 0xD8038580) != 0)
	{
		v14 = 17;
		goto LABEL_73;
	}
	v16 = 13;
	if (*(_WORD*)a1 == 40)
	{
		do
		{
			if (*((_WORD*)a1 + v11 + 1) != 42)
				break;
			v18 = (unsigned __int16*)a1 + v11 + 2;
			if ((unsigned int)sub_140919950(v18, "UTF16)", 6))
			{
				if ((unsigned int)sub_140919950(v18, "UTF)", 4))
				{
					if ((unsigned int)sub_140919950(v18, "UCP)", 4))
					{
						if ((unsigned int)sub_140919950(v18, "NO_START_OPT)", 13))
						{
							if ((unsigned int)sub_140919950(v18, "CR)", 3))
							{
								if ((unsigned int)sub_140919950(v18, "LF)", 3))
								{
									if ((unsigned int)sub_140919950(v18, "CRLF)", 5))
									{
										if ((unsigned int)sub_140919950(v18, "ANY)", 4))
										{
											if ((unsigned int)sub_140919950(v18, "ANYCRLF)", 8))
											{
												if ((unsigned int)sub_140919950(v18, "BSR_ANYCRLF)", 12))
												{
													if ((unsigned int)sub_140919950(v18, "BSR_UNICODE)", 12))
														break;
													v19 = 0x1000000;
												}
												else
												{
													v19 = 0x800000;
												}
												v11 += 14;
												v20 = a2 & 0xFE7FFFFF;
											}
											else
											{
												v11 += 10;
												v19 = 5242880;
												v20 = a2 & 0xFF8FFFFF;
											}
										}
										else
										{
											v11 += 6;
											v19 = 0x400000;
											v20 = a2 & 0xFF8FFFFF;
										}
									}
									else
									{
										v11 += 7;
										v19 = 3145728;
										v20 = a2 & 0xFF8FFFFF;
									}
								}
								else
								{
									v11 += 5;
									v19 = 0x200000;
									v20 = a2 & 0xFF8FFFFF;
								}
							}
							else
							{
								v11 += 5;
								v19 = 0x100000;
								v20 = a2 & 0xFF8FFFFF;
							}
							a2 = v19 | v20;
						}
						else
						{
							v11 += 15;
							a2 |= 0x4000000u;
						}
					}
					else
					{
						v11 += 6;
						a2 |= 0x20000000u;
					}
				}
				else
				{
					v11 += 6;
					a2 |= 0x800u;
				}
			}
			else
			{
				v11 += 8;
				a2 |= 0x800u;
			}
		} while (*((_WORD*)a1 + v11) == 40);
		v13 = (int*)v80;
		v12 = v92;
		v7 = v94;
	}
	v86 = (a2 >> 11) & 1;
	if (v86)
	{
		if ((a2 & 0x2000) == 0)
		{
			v74 = sub_140919BD0(v12, -1, v7);
			if (v74)
			{
				v14 = 74;
				goto LABEL_74;
			}
		}
	}
	if ((a2 & 0x20000000) != 0)
	{
		v14 = 67;
		goto LABEL_73;
	}
	if ((a2 & 0x1800000) == 25165824)
	{
		v14 = 56;
		goto LABEL_73;
	}
	v21 = a2 & 0x700000;
	if ((a2 & 0x700000) <= 0x300000)
	{
		switch (v21)
		{
		case 3145728:
			v16 = 3338;
		LABEL_55:
			v116 = 0;
			if (v16 <= 255)
			{
				v117 = 1;
				v118 = v16;
			}
			else
			{
				v117 = 2;
				v119 = (unsigned __int8)v16;
				v118 = BYTE1(v16);
			}
			goto LABEL_63;
		case 0:
			goto LABEL_53;
		case 1048576:
			goto LABEL_55;
		case 2097152:
		LABEL_53:
			v16 = 10;
			goto LABEL_55;
		}
	LABEL_60:
		v14 = 56;
		goto LABEL_73;
	}
	if (v21 == 0x400000)
	{
		v116 = 1;
	}
	else
	{
		if (v21 != 5242880)
			goto LABEL_60;
		v116 = 2;
	}
LABEL_63:
	v101 = &v120;
	v108 = 2048;
	v105 = &v120;
	v111 = 0i64;
	v109 = 0i64;
	v107 = 0i64;
	v106 = 0i64;
	v100 = &v120;
	v102 = v12;
	v113 = a2;
	v79 = a2;
	v22 = 0;
	v23 = (__int64)v12 + 2 * (unsigned int)sub_140919930(v12);
	v24 = (unsigned __int16*)v12 + v11;
	v103 = v23;
	v90 = &v120;
	v80 = v121;
	*(_QWORD*)v114 = 0i64;
	v112 = 0;
	v110 = 0;
	v104 = 0i64;
	v120 = 125;
	v83 = v24;
	v89 = 0i64;
	v84 = 4i64;
	v25 = -2;
	if ((unsigned int)sub_140909730(&v79, (int**)&v80, &v83, &v74, &v76, &v81, &v82, &v75, &v89, 0, (__int64)&v96, &v84))
	{
		while (1)
		{
			v13 = (int*)v83;
			if ((unsigned int)v109 > v22)
				v22 = v109;
			if (*v83 != 124)
				break;
			v84 += 2i64;
			v80 = v121;
			++v83;
			if (!(unsigned int)sub_140909730(
				&v79,
				(int**)&v80,
				&v83,
				&v74,
				&v76,
				&v81,
				&v82,
				&v75,
				&v89,
				0,
				(__int64)&v96,
				&v84))
				goto LABEL_68;
		}
		v30 = (int*)v80;
		*(_WORD*)v80 = 114;
		v79 = 0;
		v85 = -2;
		v76 = 0;
		LODWORD(v83) = -2;
		*((_WORD*)v30 + 1) = ((char*)v30 - (char*)&v120) >> 1;
		LODWORD(v109) = v22;
		if (v84 > 2147483626)
		{
			v14 = 20;
			goto LABEL_73;
		}
		v26 = v84 + 1;
		v91 = v84 + 1;
	}
	else
	{
	LABEL_68:
		v13 = (int*)v83;
		v26 = v91;
		v76 = v75;
		LODWORD(v83) = v75;
		v79 = v75;
	}
	v14 = v74;
	if (v74)
		goto LABEL_72;
	if (v26 > 0x10000)
	{
		v14 = 20;
		goto LABEL_72;
	}
	v31 = 2 * (v26 + v107 * HIDWORD(v107)) + 48;
	v32 = off_140C1B1E0(2 * (v26 + (int)v107 * HIDWORD(v107)) + 48);
	v33 = v32;
	if (!v32)
	{
		v14 = 21;
		goto LABEL_72;
	}
	*(_DWORD*)(v32 + 4) = v31;
	*(_DWORD*)v32 = 1346589253;
	*(_DWORD*)(v32 + 8) = v113;
	*(_WORD*)(v32 + 12) = *(_WORD*)v114;
	*(_DWORD*)(v32 + 20) = 0;
	v89 = 0i64;
	v95 = 4i64;
	*(_WORD*)(v32 + 24) = 24;
	v34 = 0;
	*(_WORD*)(v32 + 26) = WORD2(v107);
	v35 = v107;
	*(_WORD*)(v33 + 30) = 0;
	*(_WORD*)(v33 + 28) = v35;
	*(_QWORD*)(v33 + 40) = 0i64;
	v78 = 0;
	v80 = (char*)v24;
	if (v15 == &unk_1409CFCA0)
		v15 = 0i64;
	v36 = -2;
	*(_QWORD*)(v33 + 32) = v15;
	v37 = v109;
	LODWORD(v109) = 0;
	HIDWORD(v109) = v37;
	v112 = 0;
	v110 = 0;
	LODWORD(v107) = 0;
	v106 = v33 + 2i64 * *(unsigned __int16*)(v33 + 24);
	v38 = *(unsigned __int16*)(v33 + 28) * *(unsigned __int16*)(v33 + 26);
	*(_QWORD*)&v114[4] = 0i64;
	v39 = v106 + 2 * v38;
	v115 = 0i64;
	v105 = v100;
	v104 = 0i64;
	v101 = (int*)v39;
	v90 = (int*)v39;
	*(_WORD*)v39 = 125;
	LODWORD(v38) = *(_DWORD*)(v33 + 8);
	*(_WORD*)(v39 + 2) = 0;
	v40 = v109;
	v75 = v38;
	v87 = (int*)(v39 + 4);
	v41 = (char*)v39;
	if (!(unsigned int)sub_140909730(
		&v75,
		&v87,
		(unsigned __int16**)&v80,
		&v74,
		&v82,
		&v81,
		&v84,
		&v77,
		&v89,
		0,
		(__int64)&v96,
		0i64))
	{
	LABEL_108:
		v44 = (int*)v80;
		v47 = (_WORD*)v39;
		goto LABEL_109;
	}
	while (1)
	{
		if ((unsigned int)v109 > v40)
			v40 = v109;
		if (*(_WORD*)v41 != 113)
		{
			v42 = v82;
			v36 = v81;
			v34 = v84;
			v25 = v77;
			v78 = v82;
			goto LABEL_106;
		}
		if (v36 >= 0)
		{
			v42 = v78;
			if (v36 == v81 && v78 == v82)
				goto LABEL_101;
			if (v25 < 0)
			{
				v34 = v78;
				v25 = v36;
			}
			v36 = -1;
		}
		v42 = v78;
		if (v81 >= 0)
		{
			v43 = v77;
			if (v77 < 0)
			{
				LODWORD(v84) = v82;
				v43 = v81;
				v77 = v81;
			}
			goto LABEL_102;
		}
	LABEL_101:
		v43 = v77;
	LABEL_102:
		if (((v25 ^ v43) & 0xFFFFFFFD) != 0 || v34 != (_DWORD)v84)
		{
			v25 = -1;
		}
		else
		{
			v34 = v84;
			v25 |= v43;
		}
	LABEL_106:
		v44 = (int*)v80;
		if (*(_WORD*)v80 != 124)
			break;
		v45 = v87;
		*(_WORD*)v87 = 113;
		v80 = (char*)v44 + 2;
		v46 = (char*)v45 - v41;
		v41 = (char*)v45;
		*((_WORD*)v45 + 1) = v46 >> 1;
		v90 = v45;
		v87 = v45 + 1;
		if (!(unsigned int)sub_140909730(
			&v75,
			&v87,
			(unsigned __int16**)&v80,
			&v74,
			&v82,
			&v81,
			&v84,
			&v77,
			&v89,
			0,
			(__int64)&v96,
			0i64))
			goto LABEL_108;
	}
	v59 = v87;
	v60 = ((char*)v87 - v41) >> 1;
	do
	{
		v61 = *((unsigned __int16*)v41 + 1);
		*((_WORD*)v41 + 1) = v60;
		LOWORD(v60) = v61;
		v41 -= 2 * (unsigned int)v61;
	} while (v61 > 0);
	v79 = v42;
	v85 = v36;
	*(_WORD*)v59 = 114;
	v76 = v34;
	LODWORD(v83) = v25;
	v62 = ((__int64)v59 - v39) >> 1;
	v47 = v59 + 1;
	*(v47 - 1) = v62;
	LODWORD(v109) = v40;
LABEL_109:
	v13 = v44;
	*(_WORD*)(v33 + 16) = v109;
	*(_WORD*)(v33 + 18) = v111;
	*(_WORD*)(v33 + 14) = v110;
	*(_WORD*)(v33 + 12) = *(_WORD*)v114 | 2;
	if (*(_DWORD*)&v114[8])
	{
		v76 = 0;
		LODWORD(v83) = -1;
	}
	v48 = v74;
	if (!v74)
	{
		if (*(_WORD*)v44)
			v48 = 22;
		v74 = v48;
	}
	v49 = v86;
	*v47 = 0;
	v50 = v74;
	v51 = (unsigned __int64)v105;
	v52 = (unsigned __int64)v100;
	if (((__int64)v47 - v39 + 2) >> 1 > v91)
		v50 = 23;
	v74 = v50;
	if (v105 > v100)
	{
		v53 = -1;
		v54 = 0i64;
		if (!v50)
		{
			while (v51 > v52)
			{
				v105 = (int*)(v51 - 2);
				v55 = *(unsigned __int16*)(v51 - 2);
				v56 = 2 * v55;
				v57 = *(unsigned __int16*)(2 * v55 + v39);
				if (v57 != v53)
				{
					v58 = sub_140907AF0((unsigned __int16*)v39, v49, *(unsigned __int16*)(2 * v55 + v39));
					v53 = v57;
					v54 = v58;
				}
				if (!v54)
				{
					v50 = 53;
					v74 = 53;
					break;
				}
				*(_WORD*)(v56 + v39) = ((__int64)v54 - v39) >> 1;
				v50 = v74;
				v52 = (unsigned __int64)v100;
				if (v74)
					break;
				v51 = (unsigned __int64)v105;
			}
		}
	}
	if (v108 > 2048)
	{
		off_140C1B1E8(v52);
		v50 = v74;
	}
	if (!v50)
	{
		if (*(_WORD*)(v33 + 18) > *(_WORD*)(v33 + 16))
			v50 = 15;
		v74 = v50;
	}
	if (!HIDWORD(v115) || (v63 = sub_140907AF0((unsigned __int16*)v39, v49, -1)) == 0i64)
	{
	LABEL_144:
		if (v50)
		{
			off_140C1B1E8(v33);
			v14 = v74;
			goto LABEL_72;
		}
		if ((*(_DWORD*)(v33 + 8) & 0x10) != 0)
			goto LABEL_154;
		if ((unsigned int)sub_14090ED10((unsigned __int16*)v39, 0, (__int64)&v96, 0))
		{
			*(_DWORD*)(v33 + 8) = v69 | 0x10;
		LABEL_154:
			v70 = (char)v83;
			if ((int)v83 >= 0 && ((*(_BYTE*)(v33 + 8) & 0x10) == 0 || ((unsigned __int8)v83 & 2) != 0))
			{
				v71 = v76;
				*(_WORD*)(v33 + 22) = v76;
				if ((v70 & 1) != 0 && v71 <= 0xFFu && *(unsigned __int8*)(v71 + v97) != v71)
					*(_WORD*)(v33 + 12) |= 0x80u;
				*(_WORD*)(v33 + 12) |= 0x40u;
			}
			return v33;
		}
		v72 = v85;
		if (v85 >= 0)
		{
			v73 = v79;
		}
		else
		{
			v73 = sub_14090E0A0((_WORD*)v39, &v85, 0);
			v72 = v85;
			if (v85 < 0)
			{
				if ((unsigned int)sub_14090EFC0((unsigned __int16*)v39, 0, (__int64)&v96, 0))
					*(_WORD*)(v33 + 12) |= 0x100u;
				goto LABEL_154;
			}
		}
		*(_WORD*)(v33 + 20) = v73;
		if ((v72 & 1) != 0 && v73 <= 0xFFu && *(unsigned __int8*)(v73 + v97) != v73)
			*(_WORD*)(v33 + 12) |= 0x20u;
		*(_WORD*)(v33 + 12) |= 0x10u;
		goto LABEL_154;
	}
	while (2)
	{
		if (v63[1])
			goto LABEL_142;
		v64 = *(v63 - 1);
		v65 = v63[v64 - 2];
		v66 = &v63[v64];
		*(v66 - 2) = 0;
		v67 = sub_14090E350((__int64)v63, (*(_DWORD*)(v33 + 8) >> 11) & 1, 1, (__int64)&v96);
		*(v66 - 2) = v65;
		if (v67 >= 0)
		{
			v68 = v110;
			if (v67 > v110)
				v68 = v67;
			v110 = v68;
			v63[1] = v67;
		LABEL_142:
			v63 = sub_140907AF0(v63 + 2, v49, -1);
			if (!v63)
			{
				v50 = v74;
				goto LABEL_144;
			}
			continue;
		}
		break;
	}
	if (v67 != -2)
	{
		v50 = 25;
		if (v67 == -4)
			v50 = 70;
		v74 = v50;
		goto LABEL_144;
	}
	v74 = 36;
	off_140C1B1E8(v33);
	v14 = v74;
LABEL_72:
	v10 = v88;
LABEL_73:
	*v94 = ((char*)v13 - (char*)v92) >> 1;
LABEL_74:
	v9 = v93;
LABEL_75:
	v27 = v14;
	v28 = "no error";
	if (v14 > 0)
	{
		while (1)
		{
			while (*v28++)
				;
			if (!*v28)
				break;
			if (--v27 <= 0)
				goto LABEL_174;
		}
		v28 = "Error text not found (please report)";
	}
LABEL_174:
	*v9 = v28;
	if (v10)
		*v10 = v14;
	return 0i64;
}
// 14090FF06: variable 'v69' is possibly undefined
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

