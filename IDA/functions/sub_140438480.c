#include "../winhttp.h"

//----- (0000000140438480) ----------------------------------------------------
__int64 __fastcall sub_140438480(_QWORD* a1)
{
	__m128i* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	__int64* v6; // rax
	__int64 v7; // rdx
	int v8; // edi
	__int64 v9; // rbx
	unsigned int v10; // ebx
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rdi
	wchar_t* v14; // rax
	const wchar_t* v15; // rdx
	int v16; // ecx
	bool v17; // zf
	__int64 i; // rsi
	__int64 v19; // rdi
	const wchar_t* v20; // rbx
	wchar_t* v21; // rax
	int v22; // ecx
	bool v23; // zf
	_WORD* v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	__int64 v27; // rdi
	wchar_t* v28; // rax
	const wchar_t* v29; // rdx
	int v30; // ecx
	bool v31; // zf
	__int64 v32; // r13
	__int64 v33; // rdi
	const wchar_t* v34; // rbx
	wchar_t* v35; // rax
	int v36; // ecx
	bool v37; // zf
	WCHAR* v38; // rax
	unsigned __int64 v39; // r15
	int* v40; // r14
	int* v41; // rax
	__int64 j; // rsi
	__int64 v43; // rdi
	unsigned int v44; // ecx
	const wchar_t* v45; // rbx
	wchar_t* v46; // rax
	int v47; // ecx
	bool v48; // zf
	_WORD* v49; // rax
	__int64 v50; // r8
	__int64 v51; // rdx
	__int64 v52; // rax
	__int64* v53; // rdx
	__int64 v54; // r8
	_QWORD* v55; // rcx
	_QWORD* v56; // rbx
	bool v57; // al
	_QWORD* v58; // rdx
	_QWORD* k; // rax
	_QWORD* v60; // rax
	int* v61; // rcx
	__int64 v62; // rax
	_QWORD* v63; // rax
	__int64 v64; // rcx
	int m; // eax
	int v66; // eax
	int ii; // eax
	int jj; // eax
	__int64 v69; // rcx
	__int64* v70; // rax
	__int64* v71; // rax
	__int64 v72; // rcx
	__int64 v74; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v75; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v76; // [rsp+58h] [rbp-B0h] BYREF
	__int64 v77; // [rsp+60h] [rbp-A8h] BYREF
	__int64 v78[2]; // [rsp+68h] [rbp-A0h] BYREF
	int* v79; // [rsp+78h] [rbp-90h] BYREF
	__int64 v80[2]; // [rsp+88h] [rbp-80h] BYREF
	__int64 v81; // [rsp+98h] [rbp-70h]
	int v82; // [rsp+A0h] [rbp-68h]
	__int64 v83; // [rsp+A8h] [rbp-60h]
	__int64 v84; // [rsp+B8h] [rbp-50h]
	__int64 v85; // [rsp+C8h] [rbp-40h]
	__int64 v86; // [rsp+D0h] [rbp-38h]
	int v87; // [rsp+E4h] [rbp-24h]
	__int64 v88; // [rsp+F0h] [rbp-18h]
	__int64 v89; // [rsp+F8h] [rbp-10h]
	__int64(__fastcall * *v90)(); // [rsp+108h] [rbp+0h]
	char* v91; // [rsp+110h] [rbp+8h]
	char v92; // [rsp+118h] [rbp+10h] BYREF
	int v93; // [rsp+16Ch] [rbp+64h]
	__int64 v94; // [rsp+170h] [rbp+68h]
	__int128 v95; // [rsp+178h] [rbp+70h]
	__int64(__fastcall * *v96)(); // [rsp+188h] [rbp+80h]
	char* v97; // [rsp+190h] [rbp+88h]
	char v98; // [rsp+198h] [rbp+90h] BYREF
	int v99; // [rsp+1ECh] [rbp+E4h]
	__int64 v100; // [rsp+1F0h] [rbp+E8h]
	__int128 v101; // [rsp+1F8h] [rbp+F0h]
	__int64(__fastcall * *v102)(); // [rsp+208h] [rbp+100h]
	char* v103; // [rsp+210h] [rbp+108h]
	char v104; // [rsp+218h] [rbp+110h] BYREF
	int v105; // [rsp+26Ch] [rbp+164h]
	__int64 v106; // [rsp+270h] [rbp+168h]
	__int128 v107; // [rsp+278h] [rbp+170h]
	__int64(__fastcall * *n)(); // [rsp+288h] [rbp+180h]
	char* v109; // [rsp+290h] [rbp+188h]
	char v110; // [rsp+298h] [rbp+190h] BYREF
	int v111; // [rsp+2ECh] [rbp+1E4h]
	__int64 v112; // [rsp+2F0h] [rbp+1E8h]
	__int128 v113; // [rsp+2F8h] [rbp+1F0h]
	char v114[16]; // [rsp+308h] [rbp+200h] BYREF
	__m128i v115[33]; // [rsp+318h] [rbp+210h] BYREF

	if ((int)sub_14001B370(
		v115,
		260i64,
		L"%s\\%s\\%s\\%s",
		*(_QWORD*)&qword_140C63788 + 2684i64,
		L"NCSOFT",
		*(_QWORD*)(*(_QWORD*)&qword_140C63788 + 4896i64),
		L"Tutorials.xml") >= 0
		&& v115[0].m128i_i16[0])
	{
		v2 = v115;
		do
		{
			v17 = v2->m128i_i16[1] == 0;
			v2 = (__m128i*)((char*)v2 + 2);
		} while (!v17);
	}
	sub_1401A72E0((__int64)v80);
	sub_1401A59A0((__int64)v80);
	v3 = v88;
	v87 = 0;
	v88 = 0i64;
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_14018B900(v89, 0);
	v89 = 0i64;
	v75 = 0i64;
	v5 = sub_1401B6D00(v4, v115, &v75);
	if (v5 >= 0)
	{
		v9 = v75;
		v8 = sub_1401A7C70((__int64)v80, v75);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	}
	else
	{
		if (v87 >= 0)
		{
			v87 = v5;
			v6 = sub_14018D540(&v74, (__int64)L"%0.8x %s", (unsigned int)v5, v115);
			v7 = v88;
			v88 = *v6;
			*v6 = v7;
			if (v74)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v74 - 16) + 8i64))(v74 - 16);
		}
		v8 = v87;
		if (v75)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v75 + 8i64))(v75);
	}
	if (v8 < 0)
	{
		v10 = 0;
		goto LABEL_149;
	}
	v11 = v84;
	if (v84)
	{
		while (1)
		{
			v12 = (**(__int64(__fastcall***)(__int64))v11)(v11);
			v13 = v12;
			if (v12)
			{
				v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 48i64))(v12)
					? 0i64
					: (wchar_t*)sub_1401A4F40(v13 + 24);
				v15 = L"ViewedTutorials";
				if (v14 == L"ViewedTutorials")
					break;
				v16 = 0;
				if (*v14)
				{
					do
					{
						if (!*v15 || *v14 != *v15)
							break;
						v17 = v16 == 0x7FFFFFFF;
						if (v16 == 0x7FFFFFFF)
							goto LABEL_29;
						++v14;
						++v15;
						++v16;
					} while (*v14);
					v17 = v16 == 0x7FFFFFFF;
				LABEL_29:
					if (v17)
						break;
				}
				if (!*v14 && !*v15)
					break;
			}
			v11 = *(_QWORD*)(v11 + 72);
			if (!v11)
				goto LABEL_51;
		}
		if (v13)
		{
			for (i = sub_1401A5AE0(v13, L"Tutorial"); i; i = sub_1401A5BC0(i, L"Tutorial"))
			{
				v19 = *(_QWORD*)(i + 96);
				LODWORD(v74) = 0;
				if (v19)
				{
					while (1)
					{
						v20 = L"ID";
						v21 = (wchar_t*)sub_1401A4F40(v19 + 8);
						if (v21 == L"ID")
							break;
						v22 = 0;
						if (*v21)
						{
							do
							{
								if (!*v20 || *v21 != *v20)
									break;
								v23 = v22 == 0x7FFFFFFF;
								if (v22 == 0x7FFFFFFF)
									goto LABEL_44;
								++v21;
								++v20;
								++v22;
							} while (*v21);
							v23 = v22 == 0x7FFFFFFF;
						LABEL_44:
							if (v23)
								break;
						}
						if (!*v21 && !*v20)
							break;
						v19 = *(_QWORD*)(v19 + 56);
						if (!v19)
							goto LABEL_50;
					}
					v24 = (_WORD*)sub_1401A4F40(v19 + 32);
					sub_1407DF428(v24, (__int64)L"%d", &v74);
				}
			LABEL_50:
				LODWORD(v75) = v74;
				sub_1400293C0((__int64)(a1 + 4), (__int64)v78, (int*)&v75);
			}
		}
	LABEL_51:
		v25 = v84;
		if (v84)
		{
			while (1)
			{
				v26 = (**(__int64(__fastcall***)(__int64))v25)(v25);
				v27 = v26;
				if (v26)
				{
					v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 48i64))(v26)
						? 0i64
						: (wchar_t*)sub_1401A4F40(v27 + 24);
					v29 = L"PendingTutorials";
					if (v28 == L"PendingTutorials")
						break;
					v30 = 0;
					if (*v28)
					{
						do
						{
							if (!*v29 || *v28 != *v29)
								break;
							v31 = v30 == 0x7FFFFFFF;
							if (v30 == 0x7FFFFFFF)
								goto LABEL_63;
							++v28;
							++v29;
							++v30;
						} while (*v28);
						v31 = v30 == 0x7FFFFFFF;
					LABEL_63:
						if (v31)
							break;
					}
					if (!*v28 && !*v29)
						break;
				}
				v25 = *(_QWORD*)(v25 + 72);
				if (!v25)
					goto LABEL_148;
			}
			if (v27)
			{
				v32 = sub_1401A5AE0(v27, L"Character");
				if (v32)
				{
					while (1)
					{
						v33 = *(_QWORD*)(v32 + 96);
						if (!v33)
							goto LABEL_147;
						while (1)
						{
							v34 = L"ID";
							v35 = (wchar_t*)sub_1401A4F40(v33 + 8);
							if (v35 == L"ID")
								break;
							v36 = 0;
							if (*v35)
							{
								do
								{
									if (!*v34 || *v35 != *v34)
										break;
									v37 = v36 == 0x7FFFFFFF;
									if (v36 == 0x7FFFFFFF)
										goto LABEL_78;
									++v35;
									++v34;
									++v36;
								} while (*v35);
								v37 = v36 == 0x7FFFFFFF;
							LABEL_78:
								if (v37)
									break;
							}
							if (!*v35 && !*v34)
								break;
							v33 = *(_QWORD*)(v33 + 56);
							if (!v33)
								goto LABEL_147;
						}
						v38 = (WCHAR*)sub_1401A4F40(v33 + 32);
						if (!v38)
							goto LABEL_147;
						v39 = sub_1407DF51C(v38);
						if (!v39)
							goto LABEL_147;
						v40 = sub_14018B280(32i64, 0);
						if (v40)
						{
							v41 = sub_14018B280(40i64, 0);
							*((_QWORD*)v40 + 2) = 0i64;
							*((_QWORD*)v40 + 1) = v41;
							*(_BYTE*)v41 = 0;
							*(_QWORD*)(*((_QWORD*)v40 + 1) + 8i64) = 0i64;
							*(_QWORD*)(*((_QWORD*)v40 + 1) + 16i64) = *((_QWORD*)v40 + 1);
							*(_QWORD*)(*((_QWORD*)v40 + 1) + 24i64) = *((_QWORD*)v40 + 1);
						}
						else
						{
							v40 = 0i64;
						}
						for (j = sub_1401A5AE0(v32, L"Tutorial"); j; j = sub_1401A5BC0(j, L"Tutorial"))
						{
							v43 = *(_QWORD*)(j + 96);
							v44 = 0;
							LODWORD(v74) = 0;
							if (v43)
							{
								while (1)
								{
									v45 = L"ID";
									v46 = (wchar_t*)sub_1401A4F40(v43 + 8);
									if (v46 == L"ID")
										break;
									v47 = 0;
									if (*v46)
									{
										do
										{
											if (!*v45 || *v46 != *v45)
												break;
											v48 = v47 == 0x7FFFFFFF;
											if (v47 == 0x7FFFFFFF)
												goto LABEL_97;
											++v46;
											++v45;
											++v47;
										} while (*v46);
										v48 = v47 == 0x7FFFFFFF;
									LABEL_97:
										if (v48)
											break;
									}
									if (!*v46 && !*v45)
										break;
									v43 = *(_QWORD*)(v43 + 56);
									if (!v43)
										goto LABEL_103;
								}
								v49 = (_WORD*)sub_1401A4F40(v43 + 32);
								sub_1407DF428(v49, (__int64)L"%d", &v74);
							LABEL_103:
								v44 = v74;
							}
							v50 = a1[5];
							v51 = v50;
							v52 = *(_QWORD*)(v50 + 8);
							while (v52)
							{
								if (*(_DWORD*)(v52 + 32) < v44)
								{
									v52 = *(_QWORD*)(v52 + 24);
								}
								else
								{
									v51 = v52;
									v52 = *(_QWORD*)(v52 + 16);
								}
							}
							if (v51 == v50 || v44 < *(_DWORD*)(v51 + 32))
							{
								v77 = a1[5];
								v53 = &v77;
							}
							else
							{
								v76 = v51;
								v53 = &v76;
							}
							if (*v53 == v50)
							{
								LODWORD(v75) = v44;
								sub_1400293C0((__int64)v40, (__int64)v114, (int*)&v75);
							}
						}
						v54 = a1[9];
						v78[0] = v39;
						v78[1] = (__int64)v40;
						v55 = *(_QWORD**)(v54 + 8);
						v56 = (_QWORD*)v54;
						v57 = 1;
						while (v55)
						{
							v56 = v55;
							v57 = v39 < v55[4];
							if (v39 >= v55[4])
								v55 = (_QWORD*)v55[3];
							else
								v55 = (_QWORD*)v55[2];
						}
						v58 = v56;
						if (!v57)
							goto LABEL_133;
						if (v56 != *(_QWORD**)(v54 + 16))
							break;
						sub_1400EECD0((__int64)(a1 + 8), &v79, (__int64)v55, v56, v78);
					LABEL_147:
						v32 = sub_1401A5BC0(v32, L"Character");
						if (!v32)
							goto LABEL_148;
					}
					if (*(_BYTE*)v56 || *(_QWORD**)(v56[1] + 8i64) != v56)
					{
						v58 = (_QWORD*)v56[2];
						if (v58)
						{
							for (k = (_QWORD*)v58[3]; k; k = (_QWORD*)k[3])
								v58 = k;
						}
						else
						{
							v58 = (_QWORD*)v56[1];
							if (v56 == (_QWORD*)v58[2])
							{
								do
								{
									v60 = v58;
									v58 = (_QWORD*)v58[1];
								} while (v60 == (_QWORD*)v58[2]);
							}
						}
					}
					else
					{
						v58 = (_QWORD*)v56[3];
					}
				LABEL_133:
					if (v58[4] < v39)
					{
						if (v56 == (_QWORD*)v54 || v39 < v56[4])
						{
							v61 = sub_14018B280(48i64, 0);
							if (v61 != (int*)-32i64)
							{
								*((_QWORD*)v61 + 4) = v39;
								*((_QWORD*)v61 + 5) = v40;
							}
							v56[2] = v61;
							v63 = (_QWORD*)a1[9];
							if (v56 == v63)
							{
								v63[1] = v61;
								*(_QWORD*)(a1[9] + 24i64) = v61;
							}
							else if (v56 == (_QWORD*)v63[2])
							{
								v63[2] = v61;
							}
						}
						else
						{
							v61 = sub_14018B280(48i64, 0);
							if (v61 != (int*)-32i64)
							{
								*((_QWORD*)v61 + 4) = v39;
								*((_QWORD*)v61 + 5) = v40;
							}
							v56[3] = v61;
							v62 = a1[9];
							if (v56 == *(_QWORD**)(v62 + 24))
								*(_QWORD*)(v62 + 24) = v61;
						}
						*((_QWORD*)v61 + 1) = v56;
						*((_QWORD*)v61 + 2) = 0i64;
						*((_QWORD*)v61 + 3) = 0i64;
						sub_1400081C0((__int64)v61, (_QWORD*)(a1[9] + 8i64));
						++a1[10];
					}
					goto LABEL_147;
				}
			}
		}
	}
LABEL_148:
	v10 = 1;
LABEL_149:
	v80[0] = (__int64)off_140B5EB10;
	sub_1401A59A0((__int64)v80);
	v64 = v88;
	v87 = 0;
	v88 = 0i64;
	if (v64)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v64 - 16) + 8i64))(v64 - 16);
	sub_14018B900(v89, 0);
	v89 = 0i64;
	n = off_140B5EA18;
	for (m = v111; v111; m = v111)
	{
		v111 = m - 1;
		sub_14018B900(*(_QWORD*)&v109[8 * m - 8], 0);
	}
	v112 = 0i64;
	v113 = 0i64;
	if (v109 != &v110)
		sub_14018B900((__int64)v109, 0);
	v102 = off_140B5EA48;
	v66 = v105;
	for (n = &off_140B5EAD8; v105; v66 = v105)
	{
		v105 = v66 - 1;
		sub_14018B900(*(_QWORD*)&v103[8 * v66 - 8], 0);
	}
	v106 = 0i64;
	v107 = 0i64;
	if (v103 != &v104)
		sub_14018B900((__int64)v103, 0);
	v102 = &off_140B5EAD8;
	v96 = off_140B5EA78;
	for (ii = v99; v99; ii = v99)
	{
		v99 = ii - 1;
		sub_14018B900(*(_QWORD*)&v97[8 * ii - 8], 0);
	}
	v100 = 0i64;
	v101 = 0i64;
	if (v97 != &v98)
		sub_14018B900((__int64)v97, 0);
	v96 = &off_140B5EAD8;
	v90 = off_140B5EAA8;
	for (jj = v93; v93; jj = v93)
	{
		v93 = jj - 1;
		sub_14018B900(*(_QWORD*)&v91[8 * jj - 8], 0);
	}
	v94 = 0i64;
	v95 = 0i64;
	if (v91 != &v92)
		sub_14018B900((__int64)v91, 0);
	v90 = &off_140B5EAD8;
	if (v88)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v88 - 16) + 8i64))(v88 - 16);
	v80[0] = (__int64)off_140B5EDE0;
	sub_1401A59A0((__int64)v80);
	v69 = v81;
	if (v81)
	{
		v70 = *(__int64**)(v81 + 48);
		if (v80 == v70)
			*(_QWORD*)(v81 + 48) = v70[9];
		v71 = *(__int64**)(v69 + 56);
		if (v80 == v71)
			*(_QWORD*)(v69 + 56) = v71[8];
		v72 = v85;
		if (v85)
		{
			*(_QWORD*)(v85 + 72) = v86;
			v72 = v85;
		}
		if (v86)
			*(_QWORD*)(v86 + 64) = v72;
		v81 = 0i64;
	}
	if ((v82 & 0x200) != 0)
		sub_14018B900(v83, 0);
	return v10;
}
// 140438767: conditional instruction was optimized away because rdi.8!=0
// 140438902: conditional instruction was optimized away because rdi.8!=0
// 140438A2A: conditional instruction was optimized away because rdi.8!=0
// 140438BAF: conditional instruction was optimized away because rcx.8==0
// 140438575: variable 'v4' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A44EF0: using guessed type wchar_t aNcsoft[7];
// 140A45328: using guessed type wchar_t a08xS[9];
// 140A47468: using guessed type wchar_t aSSSS[12];
// 140B01F88: using guessed type wchar_t aId_4[3];
// 140B02018: using guessed type wchar_t aCharacter_2[10];
// 140B02138: using guessed type wchar_t aCharacter_1[10];
// 140B02150: using guessed type wchar_t aPendingtutoria[17];
// 140B02194: using guessed type wchar_t aId_5[3];
// 140B021A0: using guessed type wchar_t aTutorial_3[9];
// 140B021B8: using guessed type wchar_t aTutorial_2[9];
// 140B021D0: using guessed type wchar_t aTutorialsXml[14];
// 140B0223C: using guessed type wchar_t aId_3[3];
// 140B02248: using guessed type wchar_t aTutorial_1[9];
// 140B02260: using guessed type wchar_t aTutorial_0[9];
// 140B02278: using guessed type wchar_t aViewedtutorial[16];
// 140B5EA18: using guessed type __int64 (__fastcall *off_140B5EA18[25])();
// 140B5EA48: using guessed type __int64 (__fastcall *off_140B5EA48[19])();
// 140B5EA78: using guessed type __int64 (__fastcall *off_140B5EA78[13])();
// 140B5EAA8: using guessed type __int64 (__fastcall *off_140B5EAA8[7])();
// 140B5EAD8: using guessed type __int64 (__fastcall *off_140B5EAD8)();
// 140B5EB10: using guessed type __int64 (__fastcall *off_140B5EB10[35])();
// 140B5EDE0: using guessed type __int64 (__fastcall *off_140B5EDE0[12])();
// 140438480: using guessed type __m128i var_240[33];
// 140438480: using guessed type char var_250[16];

