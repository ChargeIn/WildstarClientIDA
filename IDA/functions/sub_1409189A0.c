//----- (00000001409189A0) ----------------------------------------------------
__int64 __fastcall sub_1409189A0(__int64 a1, __int64 a2, _WORD* a3, int a4, int a5, unsigned int a6, int* a7, int a8)
{
	__int64 v8; // r10
	__int64 v9; // r14
	unsigned __int16* v11; // rdi
	__int64 result; // rax
	int v14; // edx
	int v15; // ecx
	int v16; // ecx
	int v17; // eax
	int v18; // eax
	int v19; // ecx
	__int64 v20; // r9
	int v21; // r10d
	int v22; // r8d
	void* v23; // rdx
	int v24; // ecx
	unsigned int v25; // r15d
	void* v26; // rcx
	unsigned int v27; // edx
	unsigned __int64 v28; // r11
	unsigned __int16* v29; // rax
	unsigned __int64 v30; // rsi
	__int64 v31; // r14
	signed int v32; // r12d
	int v33; // r13d
	int v34; // eax
	unsigned int v35; // eax
	unsigned int v36; // eax
	int v37; // ecx
	int v38; // r10d
	int v39; // r8d
	int v40; // ebx
	unsigned __int16 v41; // ax
	int* v42; // r9
	__int64 v43; // rax
	__int64 v44; // rbx
	int* v45; // rcx
	unsigned __int64 v46; // rdx
	int* v47; // rcx
	__int16 v48; // ax
	unsigned __int16 v49; // dx
	int v50; // r15d
	__int16 v51; // ax
	int v52; // ecx
	unsigned __int16 v53; // r9
	unsigned __int64 v54; // r14
	__int64 v55; // r9
	unsigned __int64 v56; // r13
	__int64 v57; // rdx
	int v58; // r12d
	unsigned __int64 v59; // r15
	unsigned __int16* v60; // rbx
	int v61; // eax
	int v62; // eax
	unsigned int v63; // r9d
	int v64; // eax
	__int64 v65; // rdx
	int v66; // eax
	__int64 v67; // rdx
	unsigned int v68; // r8d
	unsigned __int16* v69; // rcx
	unsigned __int16 v70; // ax
	int v71; // edx
	__int16 v72; // ax
	int v73; // esi
	unsigned __int64 v74; // rcx
	__int64 v75; // rax
	unsigned __int16* v76; // rbx
	int v77; // esi
	int* v78; // rdi
	int v79; // eax
	unsigned int v80; // r8d
	int v81; // ecx
	int* v82; // rdx
	int v83; // ecx
	char* v84; // rdi
	char* v85; // rcx
	unsigned __int64 i; // rcx
	int* v87; // rcx
	__int64 v88; // rax
	unsigned int v89; // r9d
	unsigned __int16 v90; // [rsp+40h] [rbp-C0h]
	int v91; // [rsp+44h] [rbp-BCh]
	unsigned __int16 v92; // [rsp+48h] [rbp-B8h]
	unsigned __int16 v93; // [rsp+4Ah] [rbp-B6h]
	unsigned __int16 v94; // [rsp+4Ch] [rbp-B4h]
	int v95; // [rsp+50h] [rbp-B0h] BYREF
	unsigned int v96; // [rsp+54h] [rbp-ACh]
	int v97; // [rsp+58h] [rbp-A8h]
	_WORD* v98; // [rsp+60h] [rbp-A0h]
	int* v99; // [rsp+68h] [rbp-98h]
	int v100; // [rsp+70h] [rbp-90h]
	_WORD* v101; // [rsp+78h] [rbp-88h]
	__int64 v102; // [rsp+80h] [rbp-80h]
	_WORD* v103; // [rsp+88h] [rbp-78h]
	__int64 v104; // [rsp+90h] [rbp-70h]
	__int64 v105; // [rsp+98h] [rbp-68h]
	unsigned __int64 v106; // [rsp+A0h] [rbp-60h]
	__int64 v107; // [rsp+A8h] [rbp-58h]
	__int64 v108; // [rsp+B0h] [rbp-50h]
	__int64 v109; // [rsp+B8h] [rbp-48h]
	__int64 v110; // [rsp+C0h] [rbp-40h]
	unsigned __int64 v111; // [rsp+C8h] [rbp-38h]
	__int64 v112; // [rsp+D0h] [rbp-30h]
	unsigned __int64 v113; // [rsp+D8h] [rbp-28h]
	int v114; // [rsp+E0h] [rbp-20h] BYREF
	int v115; // [rsp+E4h] [rbp-1Ch]
	int v116; // [rsp+E8h] [rbp-18h]
	int* v117; // [rsp+F0h] [rbp-10h]
	int v118; // [rsp+F8h] [rbp-8h]
	int v119; // [rsp+FCh] [rbp-4h]
	int v120; // [rsp+100h] [rbp+0h]
	int v121[3]; // [rsp+104h] [rbp+4h] BYREF
	__int64 v122; // [rsp+110h] [rbp+10h]
	__int16 v123; // [rsp+118h] [rbp+18h]
	__int16 v124; // [rsp+11Ah] [rbp+1Ah]
	void* v125; // [rsp+120h] [rbp+20h]
	__int64 v126; // [rsp+128h] [rbp+28h]
	__int64 v127; // [rsp+130h] [rbp+30h]
	int v128; // [rsp+138h] [rbp+38h]
	unsigned int v129; // [rsp+13Ch] [rbp+3Ch]
	unsigned int v130; // [rsp+140h] [rbp+40h]
	int v131; // [rsp+144h] [rbp+44h]
	unsigned int v132; // [rsp+148h] [rbp+48h]
	unsigned int v133; // [rsp+14Ch] [rbp+4Ch]
	unsigned int v134; // [rsp+150h] [rbp+50h]
	unsigned int v135; // [rsp+154h] [rbp+54h]
	unsigned int v136; // [rsp+158h] [rbp+58h]
	int v137; // [rsp+15Ch] [rbp+5Ch]
	unsigned int v138; // [rsp+160h] [rbp+60h]
	unsigned int v139; // [rsp+164h] [rbp+64h]
	int v140; // [rsp+168h] [rbp+68h]
	unsigned __int16* v141; // [rsp+170h] [rbp+70h]
	unsigned __int64 v142; // [rsp+178h] [rbp+78h]
	unsigned __int64 v143; // [rsp+180h] [rbp+80h]
	unsigned __int16* v144; // [rsp+188h] [rbp+88h]
	__int64 v145; // [rsp+190h] [rbp+90h]
	unsigned __int16* v146; // [rsp+198h] [rbp+98h]
	int v147; // [rsp+1A0h] [rbp+A0h]
	int v148; // [rsp+1A4h] [rbp+A4h]
	int v149; // [rsp+1A8h] [rbp+A8h]
	int v150; // [rsp+1ACh] [rbp+ACh]
	int v151; // [rsp+1B0h] [rbp+B0h]
	__int64 v152; // [rsp+1C8h] [rbp+C8h]
	__int64 v153; // [rsp+1D0h] [rbp+D0h]
	__int64 v154; // [rsp+1D8h] [rbp+D8h]
	__int64 v155; // [rsp+1E0h] [rbp+E0h]

	v8 = (__int64)a3;
	v101 = a3;
	v9 = a4;
	v113 = 2i64 * a5;
	v108 = a2;
	v106 = (unsigned __int64)&a3[v113 / 2];
	v11 = &a3[v113 / 2];
	v98 = (_WORD*)a1;
	v99 = a7;
	v103 = &a3[v113 / 2 - 1];
	v97 = 0;
	v91 = 0;
	LODWORD(v102) = 0;
	v94 = 0;
	v92 = 0;
	v93 = 0;
	v90 = 0;
	v107 = 0i64;
	v105 = 0i64;
	if (__PAIR128__(a1, a2) == 0 && !a3 && a4 == -999 && a5 == -999)
		return sub_140911350(0i64, 0i64, 0i64, 0, 0i64, 0i64, 0);
	if ((a6 & 0xE20F5A6F) != 0)
		return 4294967293i64;
	if (!a1)
		return 4294967294i64;
	if (!a3)
		return 4294967294i64;
	v14 = a8;
	if (!a7 && a8 > 0)
		return 4294967294i64;
	if (a8 < 0)
		return 4294967281i64;
	if (a4 < 0)
		return 4294967264i64;
	if (a5 < 0 || a5 > a4)
		return 4294967272i64;
	v15 = *(_DWORD*)a1;
	if (v15 != 1346589253)
	{
		result = 4294967292i64;
		if (v15 == 1163019088)
			return 4294967267i64;
		return result;
	}
	if ((*(_BYTE*)(a1 + 12) & 2) == 0)
		return 4294967268i64;
	v16 = (*(_DWORD*)(a1 + 8) >> 11) & 1;
	v100 = v16;
	v131 = v16;
	if ((a6 & 0x8000000) != 0)
		v17 = 2;
	else
		v17 = (a6 >> 15) & 1;
	v147 = v17;
	if (v16 && (a6 & 0x2000) == 0)
	{
		v18 = sub_140919BD0(a3, a4, &v95);
		if (v18)
		{
			if (a8 >= 2)
			{
				v19 = v95;
				a7[1] = v18;
				*a7 = v19;
			}
			if (v18 > 1)
				return 4294967286i64;
			result = 4294967271i64;
			if (v147 <= 1)
				return 4294967286i64;
			return result;
		}
		if (a5 > 0 && a5 < (int)v9 && (*v11 & 0xFC00) == 0xDC00)
			return 4294967285i64;
		v14 = a8;
		v8 = (__int64)v101;
	}
	if (a2)
	{
		if ((*(_DWORD*)a2 & 0x48) == 64)
		{
			if (*(_QWORD*)(a2 + 56))
			{
				if ((a6 & 0xE7FF5A7F) == 0)
				{
					result = sub_14091B2B0(a2, v8, (unsigned int)v9, (unsigned int)a5, a6, (__int64)a7, v14);
					if ((_DWORD)result != -31)
						return result;
				}
			}
		}
	}
	v20 = *(unsigned __int16*)(a1 + 24);
	v21 = *(unsigned __int16*)(a1 + 28);
	v22 = *(unsigned __int16*)(a1 + 26);
	v23 = *(void**)(a1 + 32);
	v121[1] = v21;
	v122 = a1 + 2 * v20;
	v121[2] = v22;
	v115 = 10000000;
	v116 = 10000000;
	v104 = 0i64;
	v153 = 0i64;
	if (a2)
	{
		v24 = *(_DWORD*)a2;
		if ((*(_DWORD*)a2 & 1) != 0)
			v104 = *(_QWORD*)(a2 + 8);
		if ((v24 & 2) != 0)
			v115 = *(_DWORD*)(a2 + 16);
		if ((v24 & 0x10) != 0)
			v116 = *(_DWORD*)(a2 + 40);
		if ((v24 & 4) != 0)
			v153 = *(_QWORD*)(a2 + 24);
		if ((v24 & 8) != 0)
			v23 = *(void**)(a2 + 32);
	}
	v25 = *(unsigned __int16*)(a1 + 12);
	v26 = &unk_1409CFCA0;
	if (v23)
		v26 = v23;
	v27 = *(_DWORD*)(a1 + 8);
	v150 = a5;
	v125 = v26;
	v96 = (v27 >> 18) & 1;
	v28 = (unsigned __int64)&v101[v9];
	v29 = (unsigned __int16*)(a1 + 2 * (v20 + v21 * v22));
	v142 = (unsigned __int64)v101;
	v30 = (unsigned __int64)v101;
	v141 = v29;
	v31 = (__int64)v26 + 256;
	v32 = ((a6 | v27) >> 4) & 1;
	v33 = (v25 >> 8) & 1;
	v143 = v28;
	v134 = (v27 >> 5) & 1;
	v111 = v28;
	v140 = 0;
	v137 = 0;
	v155 = 0i64;
	v154 = 0i64;
	v133 = (v27 >> 29) & 1;
	v152 = 0i64;
	v126 = (__int64)v26 + 256;
	v132 = (v27 >> 25) & 1;
	v129 = (a6 >> 7) & 1;
	v130 = (a6 >> 8) & 1;
	v135 = (a6 >> 10) & 1;
	v136 = (a6 >> 28) & 1;
	v139 = (v25 >> 12) & 1;
	v127 = (__int64)v26 + 832;
	v34 = a6 & 0x1800000;
	if ((a6 & 0x1800000) != 0)
	{
		if (v34 == 0x800000)
		{
			v138 = 1;
			goto LABEL_66;
		}
		if (v34 != 0x1000000)
			return 4294967273i64;
	}
	else if ((v27 & 0x1800000) != 0)
	{
		v138 = (v27 >> 23) & 1;
		goto LABEL_66;
	}
	v138 = 0;
LABEL_66:
	v35 = a6;
	if ((a6 & 0x700000) == 0)
		v35 = v27;
	v36 = v35 & 0x700000;
	if (v36 <= 0x300000)
	{
		switch (v36)
		{
		case 0x300000u:
			v37 = 3338;
			break;
		case 0u:
		LABEL_73:
			v37 = 10;
			break;
		case 0x100000u:
			v37 = 13;
			break;
		case 0x200000u:
			goto LABEL_73;
		default:
			return 4294967273i64;
		}
		v38 = 0;
		v120 = 0;
		if (v37 <= 255)
		{
			v39 = 1;
			v121[0] = 1;
			v123 = v37;
		}
		else
		{
			v39 = 2;
			v121[0] = 2;
			v124 = (unsigned __int8)v37;
			v123 = BYTE1(v37);
		}
		goto LABEL_84;
	}
	if (v36 == 0x400000)
	{
		v38 = 1;
		v120 = 1;
	}
	else
	{
		if (v36 != 5242880)
			return 4294967273i64;
		v38 = 2;
		v120 = 2;
	}
	v39 = v121[0];
LABEL_84:
	if (v147 && (v25 & 0x200) != 0)
		return 4294967283i64;
	v40 = 3 * (a8 / 3);
	v41 = v98[9];
	v95 = 6 * (a8 / 3) / 3;
	if (v41 && v41 >= v40 / 3)
	{
		v40 = 3 * (v41 + 1);
		v42 = (int*)off_140C1B1E0(4i64 * v40);
		v117 = v42;
		if (!v42)
			return 4294967290i64;
		v28 = v143;
		v30 = v142;
		v31 = v126;
		v39 = v121[0];
		v38 = v120;
		v97 = 1;
	}
	else
	{
		v42 = v99;
		v117 = v99;
	}
	v118 = v40;
	v128 = 0;
	v149 = -1;
	v119 = 2 * v40 / 3;
	if (v42)
	{
		v43 = v40;
		v44 = (__int64)v98;
		v45 = &v42[v43];
		v46 = (unsigned __int64)&v45[-(unsigned __int16)v98[8]];
		if (v46 < (unsigned __int64)(v42 + 2))
			v46 = (unsigned __int64)(v42 + 2);
		v47 = v45 - 1;
		if ((unsigned __int64)v47 >= v46)
		{
			do
				*v47-- = -1;
			while ((unsigned __int64)v47 >= v46);
			v42 = v117;
		}
		v42[1] = -1;
		*v117 = -1;
		v28 = v143;
		v30 = v142;
		v31 = v126;
		v39 = v121[0];
		v38 = v120;
	}
	else
	{
		v44 = (__int64)v98;
	}
	if (!v32)
	{
		v48 = *(_WORD*)(v44 + 12);
		if ((v48 & 0x10) != 0)
		{
			v49 = *(_WORD*)(v44 + 20);
			v92 = v49;
			v94 = v49;
			v50 = 1;
			v91 = 1;
			if ((v48 & 0x20) != 0 && v49 <= 0xFFu)
				v92 = *(unsigned __int8*)(v49 + v31);
			goto LABEL_111;
		}
		if (!v33 && v104)
		{
			v50 = 0;
			if ((*(_BYTE*)(v104 + 4) & 1) != 0)
				v107 = v104 + 8;
			goto LABEL_111;
		}
	}
	v50 = 0;
LABEL_111:
	v51 = *(_WORD*)(v44 + 12);
	if ((v51 & 0x40) != 0)
	{
		v52 = 1;
		v53 = *(_WORD*)(v44 + 22);
		v90 = v53;
		v93 = v53;
		if ((v51 & 0x80u) != 0 && v53 <= 0xFFu)
			v90 = *(unsigned __int8*)(v53 + v31);
	}
	else
	{
		v52 = v102;
	}
	v54 = v111;
	v55 = v33;
	v56 = (unsigned __int64)v103;
	v109 = v55;
	v57 = v50;
	v102 = v50;
	v110 = v52;
	v112 = v32;
	while (1)
	{
		v58 = v100;
		v59 = v54;
		if (v96)
		{
			v60 = v11;
			if (v100)
			{
				if ((unsigned __int64)v11 < v28)
				{
					do
					{
						if (v38)
						{
							v61 = sub_1409199E0(v60, v38, v28, v121, v58);
							v39 = v121[0];
							v38 = v120;
							if (v61)
								break;
							v28 = v143;
						}
						else if ((unsigned __int64)v60 <= v28 - 2i64 * v39 && *v60 == v123 && (v39 == 1 || v60[1] == v124))
						{
							break;
						}
						if ((unsigned __int64)++v60 < v54 && (*v60 & 0xFC00) == 0xDC00)
							++v60;
					} while ((unsigned __int64)v60 < v28);
				LABEL_141:
					v30 = v142;
				}
			}
			else if ((unsigned __int64)v11 < v28)
			{
				while (1)
				{
					if (v38)
					{
						v62 = sub_1409199E0(v60, v38, v28, v121, 0);
						v39 = v121[0];
						v38 = v120;
						if (v62)
							goto LABEL_141;
						v28 = v143;
					}
					else if ((unsigned __int64)v60 <= v28 - 2i64 * v39 && *v60 == v123 && (v39 == 1 || v60[1] == v124))
					{
						goto LABEL_141;
					}
					if ((unsigned __int64)++v60 >= v28)
						goto LABEL_141;
				}
			}
			v57 = v102;
			v54 = (unsigned __int64)v60;
			v44 = (__int64)v98;
		}
		v63 = a6;
		if (((*(_DWORD*)(v44 + 8) | a6) & 0x4000000) == 0)
		{
			if (v57)
			{
				if (v94 == v92)
				{
					for (; (unsigned __int64)v11 < v54; ++v11)
					{
						if (*v11 == v94)
							break;
					}
				}
				else
				{
					for (; (unsigned __int64)v11 < v54; ++v11)
					{
						if (*v11 == v94)
							break;
						if (*v11 == v92)
							break;
					}
				}
			}
			else if (v109)
			{
				if ((unsigned __int64)v11 > v30 + v113)
				{
					if (v58)
					{
						if ((unsigned __int64)v11 < v54)
						{
							do
							{
								if (v38)
								{
									if ((unsigned __int64)v11 > v30)
									{
										v64 = sub_140919A90((__int64)v11, v38, v30, v121, v58);
										v38 = v120;
										if (v64)
											break;
										v30 = v142;
										v39 = v121[0];
									}
								}
								else
								{
									v65 = 2i64 * v39;
									if ((unsigned __int64)v11 >= v65 + v30
										&& v11[-v39] == v123
										&& (v39 == 1 || v11[v65 / 0xFFFFFFFFFFFFFFFEui64 + 1] == v124))
									{
										break;
									}
								}
								if ((unsigned __int64)++v11 >= v54)
									break;
								if ((*v11 & 0xFC00) == 0xDC00)
									++v11;
							} while ((unsigned __int64)v11 < v54);
						LABEL_182:
							v63 = a6;
						}
					}
					else if ((unsigned __int64)v11 < v54)
					{
						while (1)
						{
							if (v38)
							{
								if ((unsigned __int64)v11 > v30)
								{
									v66 = sub_140919A90((__int64)v11, v38, v30, v121, 0);
									v38 = v120;
									if (v66)
										goto LABEL_182;
									v30 = v142;
									v39 = v121[0];
								}
							}
							else
							{
								v67 = 2i64 * v39;
								if ((unsigned __int64)v11 >= v67 + v30
									&& v11[-v39] == v123
									&& (v39 == 1 || v11[v67 / 0xFFFFFFFFFFFFFFFEui64 + 1] == v124))
								{
									goto LABEL_182;
								}
							}
							if ((unsigned __int64)++v11 >= v54)
								goto LABEL_182;
						}
					}
					if (*(v11 - 1) == 13 && (unsigned int)(v38 - 1) <= 1 && (unsigned __int64)v11 < v54 && *v11 == 10)
						++v11;
				}
			}
			else if (v107 && (unsigned __int64)v11 < v54)
			{
				do
				{
					v68 = *v11;
					if (v68 > 0xFF)
						v68 = 255;
					if (((unsigned __int8)(1 << (v68 & 7)) & *(_BYTE*)(((unsigned __int64)v68 >> 3) + v107)) != 0)
						break;
					++v11;
				} while ((unsigned __int64)v11 < v54);
				v56 = (unsigned __int64)v103;
			}
		}
		v54 = v59;
		if (((*(_DWORD*)(v44 + 8) | v63) & 0x4000000) == 0 && !v147)
		{
			if (v104
				&& (*(_BYTE*)(v104 + 4) & 2) != 0
				&& (unsigned int)((__int64)(v59 - (_QWORD)v11) >> 1) < *(_DWORD*)(v104 + 40))
			{
				goto LABEL_212;
			}
			if (v110)
			{
				if ((__int64)((v59 - (_QWORD)v11) & 0xFFFFFFFFFFFFFFFEui64) < 2000)
				{
					v69 = &v11[v91 != 0];
					if ((unsigned __int64)v69 > v56)
					{
						v70 = v90;
						if (v93 == v90)
						{
							if ((unsigned __int64)v69 >= v59)
								goto LABEL_212;
							while (1)
							{
								v72 = *v69++;
								if (v72 == v93)
									break;
								if ((unsigned __int64)v69 >= v59)
									goto LABEL_212;
							}
						}
						else
						{
							if ((unsigned __int64)v69 >= v59)
								goto LABEL_212;
							while (1)
							{
								v71 = *v69++;
								if (v71 == v93 || v71 == v70)
									break;
								if ((unsigned __int64)v69 >= v59)
									goto LABEL_212;
								v70 = v90;
							}
						}
						v74 = (unsigned __int64)(v69 - 1);
						if (v74 >= v59)
						{
						LABEL_212:
							v73 = 0;
						LABEL_213:
							if (v97)
								off_140C1B1E8(v117);
							if (v73 && v73 != -12)
								return (unsigned int)v73;
							if (v105)
							{
								if (a8 > 1)
								{
									v87 = v99;
									v88 = (v105 - (__int64)v101) >> 1;
									v99[1] = (__int64)(v59 - (_QWORD)v101) >> 1;
									*v87 = v88;
								}
								v89 = -12;
							}
							else
							{
								v89 = -1;
							}
							if (v108 && (*(_BYTE*)v108 & 0x20) != 0)
								**(_QWORD**)(v108 + 48) = v155;
							return v89;
						}
						v103 = (_WORD*)v74;
						v56 = v74;
					}
				}
			}
		}
		v114 = 0;
		v151 = 0;
		v148 = 0;
		v144 = v11;
		v146 = v11;
		v73 = sub_140911350(v11, v141, v11, 2, &v114, 0i64, 0);
		if (v137)
		{
			v75 = v105;
			if (!v105)
				v75 = (__int64)v146;
			v105 = v75;
		}
		if (v73 > -993)
			break;
		switch (v73)
		{
		case -993:
			v76 = v11;
			v140 = 1;
			goto LABEL_238;
		case -998:
			goto LABEL_212;
		case -995:
			goto LABEL_234;
		}
		if (v73 != -994)
			goto LABEL_260;
		v76 = v144;
		if (v144 == v11)
			goto LABEL_234;
	LABEL_238:
		v38 = v120;
		v28 = v143;
		v73 = 0;
		if (!v96)
			goto LABEL_243;
		if (v120)
		{
			if ((unsigned __int64)v11 < v143)
			{
				if ((unsigned int)sub_1409199E0(v11, v120, v143, v121, v58))
					goto LABEL_213;
				v28 = v143;
				v38 = v120;
			}
		LABEL_243:
			v39 = v121[0];
			goto LABEL_244;
		}
		v39 = v121[0];
		if ((unsigned __int64)v11 <= v143 - 2i64 * v121[0] && *v11 == v123 && (v121[0] == 1 || v11[1] == v124))
			goto LABEL_213;
	LABEL_244:
		v11 = v76;
		if (v112 || (unsigned __int64)v76 > v59)
			goto LABEL_213;
		if ((unsigned __int64)v76 > v106
			&& *(v76 - 1) == 13
			&& (unsigned __int64)v76 < v59
			&& *v76 == 10
			&& (v98[6] & 0x800) == 0
			&& ((unsigned int)(v38 - 1) <= 1 || v39 == 2))
		{
			v11 = v76 + 1;
		}
		v44 = (__int64)v98;
		v57 = v102;
		v154 = 0i64;
		v30 = v142;
	}
	if (v73 == -992 || !v73)
	{
	LABEL_234:
		v140 = 0;
		v76 = v11 + 1;
		if (v58 && (unsigned __int64)v76 < v59 && (*v76 & 0xFC00) == 0xDC00)
			v76 = v11 + 2;
		goto LABEL_238;
	}
LABEL_260:
	if (v73 != 1 && v73 != -999)
		goto LABEL_213;
	v77 = v95;
	if (v97)
	{
		v78 = v117;
		if (v95 >= 4)
			sub_1407DB590(v99 + 2, v117 + 2, 4i64 * (v95 - 2));
		v79 = v128;
		if (v148 > v77)
			v79 = 1;
		v128 = v79;
		off_140C1B1E8(v78);
	}
	if (v128 && v148 >= v77)
		v80 = 0;
	else
		v80 = v148 / 2;
	v81 = *(unsigned __int16*)(v44 + 16);
	v82 = v99;
	if (v148 / 2 <= v81 && v99)
	{
		v83 = 2 * v81 + 2;
		v84 = (char*)&v99[v148];
		if (v83 > a8)
			v83 = a8;
		v85 = (char*)&v99[v83];
		if (v84 < v85)
		{
			for (i = ((unsigned __int64)(v85 - v84 - 1) >> 2) + 1; i; --i)
			{
				*(_DWORD*)v84 = -1;
				v84 += 4;
			}
		}
	}
	if (a8 >= 2)
	{
		*v82 = (__int64)((__int64)v144 - v142) >> 1;
		v82[1] = (__int64)(v145 - v142) >> 1;
	}
	else
	{
		v80 = 0;
	}
	if (v108 && (*(_BYTE*)v108 & 0x20) != 0)
		**(_QWORD**)(v108 + 48) = v154;
	return v80;
}
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);
// 140C1B1E8: using guessed type __int64 (__fastcall *off_140C1B1E8)(_QWORD);

