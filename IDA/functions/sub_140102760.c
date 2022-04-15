#include "../winhttp.h"

//----- (0000000140102760) ----------------------------------------------------
char __fastcall sub_140102760(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	_WORD* v5; // rax
	__int64 v6; // rax
	__int64 v7; // r13
	__int64 v8; // rdi
	const wchar_t* v9; // rbx
	wchar_t* v10; // rax
	int v11; // ecx
	bool v12; // zf
	int v13; // edi
	__int64 v14; // rsi
	__int64 v15; // rbx
	__int64 v16; // r14
	__int64 v17; // rax
	_WORD* v18; // rax
	__int64 v19; // rax
	_WORD* v20; // rax
	__int64 v21; // rdi
	bool v22; // si
	bool v23; // r15
	bool v24; // r14
	const wchar_t* v25; // rbx
	wchar_t* v26; // rax
	int v27; // ecx
	bool v28; // zf
	_WORD* v29; // rax
	__int64 v30; // rdi
	const wchar_t* v31; // rbx
	wchar_t* v32; // rax
	int v33; // ecx
	bool v34; // zf
	_WORD* v35; // rax
	__int64 v36; // rdi
	const wchar_t* v37; // rbx
	wchar_t* v38; // rax
	int v39; // ecx
	bool v40; // zf
	_WORD* v41; // rax
	__int64 v42; // rdi
	const wchar_t* v43; // rbx
	wchar_t* v44; // rax
	int v45; // ecx
	bool v46; // zf
	_WORD* v47; // rax
	__int64 v48; // rdi
	const wchar_t* v49; // rbx
	wchar_t* v50; // rax
	int v51; // ecx
	bool v52; // zf
	_WORD* v53; // rax
	__int64 v54; // rdi
	const wchar_t* v55; // rbx
	wchar_t* v56; // rax
	int v57; // ecx
	bool v58; // zf
	_WORD* v59; // rax
	bool v60; // r15
	int v61; // r12d
	int v62; // r13d
	int v63; // esi
	int v64; // r14d
	__int64 v65; // rdi
	const wchar_t* v66; // rbx
	wchar_t* v67; // rax
	int v68; // ecx
	bool v69; // zf
	__int64 v70; // rdi
	const wchar_t* v71; // rbx
	wchar_t* v72; // rax
	int v73; // ecx
	bool v74; // zf
	_WORD* v75; // rax
	__int64 v76; // rdi
	const wchar_t* v77; // rbx
	wchar_t* v78; // rax
	int v79; // ecx
	bool v80; // zf
	_WORD* v81; // rax
	_WORD* v82; // rax
	__int64 v83; // rdi
	__int64 v84; // rdi
	const wchar_t* v85; // rbx
	wchar_t* v86; // rax
	int v87; // ecx
	bool v88; // zf
	_WORD* v89; // rax
	__int64 v90; // rdi
	const wchar_t* v91; // rbx
	wchar_t* v92; // rax
	int v93; // ecx
	bool v94; // zf
	_WORD* v95; // rax
	__int64 v96; // rdi
	const wchar_t* v97; // rbx
	wchar_t* v98; // rax
	int v99; // ecx
	bool v100; // zf
	_WORD* v101; // rax
	__int64 v102; // rdi
	const wchar_t* v103; // rbx
	wchar_t* v104; // rax
	int v105; // ecx
	bool v106; // zf
	_WORD* v107; // rax
	__int64 v108; // rdi
	int v109; // xmm0_4
	const wchar_t* v110; // rbx
	wchar_t* v111; // rax
	int v112; // ecx
	bool v113; // zf
	_WORD* v114; // rax
	int v115; // xmm1_4
	__int64 v116; // r12
	__int64 v117; // rdx
	int v118; // eax
	unsigned int v119; // edi
	unsigned int v120; // ebx
	int v121; // r15d
	__int64 v122; // rdx
	float v123; // xmm6_4
	__int64 v124; // r10
	__int64 v125; // r8
	__int64 v126; // rcx
	int v127; // r9d
	__int64 v128; // r8
	__int64 v129; // rcx
	int v130; // edx
	char* v131; // rdx
	__int64 v132; // rcx
	int v133; // eax
	char* v134; // rdx
	__int64 v135; // rcx
	int v136; // eax
	__int64 v137; // rax
	__int64 v138; // r14
	const wchar_t* v139; // rsi
	wchar_t* v140; // rax
	int v141; // ecx
	bool v142; // zf
	_WORD* v143; // rax
	__int64 v144; // rax
	__int128 v145; // xmm1
	__int128 v146; // xmm0
	__int128 v147; // xmm0
	__int64 v148; // rax
	__int128 v149; // xmm1
	__int64 v150; // rcx
	__int128 v151; // xmm0
	__int128 v152; // xmm0
	__int64 v153; // rdx
	float v155; // [rsp+70h] [rbp-90h] BYREF
	__int64 v156; // [rsp+78h] [rbp-88h] BYREF
	__int64 i; // [rsp+80h] [rbp-80h]
	BOOL v158; // [rsp+88h] [rbp-78h] BYREF
	unsigned int v159; // [rsp+8Ch] [rbp-74h] BYREF
	unsigned int v160; // [rsp+90h] [rbp-70h] BYREF
	int v161; // [rsp+94h] [rbp-6Ch] BYREF
	int v162; // [rsp+98h] [rbp-68h] BYREF
	int v163; // [rsp+9Ch] [rbp-64h] BYREF
	float v164; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v165; // [rsp+A8h] [rbp-58h] BYREF
	int v166; // [rsp+B0h] [rbp-50h]
	int v167; // [rsp+B4h] [rbp-4Ch] BYREF
	__int64 v168; // [rsp+B8h] [rbp-48h] BYREF
	int v169; // [rsp+C0h] [rbp-40h]
	__int64 v170; // [rsp+C8h] [rbp-38h] BYREF
	int v171; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v172; // [rsp+D8h] [rbp-28h]
	int* v173; // [rsp+E0h] [rbp-20h]
	int v174[6]; // [rsp+E8h] [rbp-18h] BYREF
	__int64 v175[4]; // [rsp+100h] [rbp+0h] BYREF
	__m128i v176; // [rsp+120h] [rbp+20h]
	__int64 v177; // [rsp+130h] [rbp+30h]
	bool v178; // [rsp+138h] [rbp+38h]
	bool v179; // [rsp+139h] [rbp+39h]
	bool v180; // [rsp+13Ah] [rbp+3Ah]
	int v181; // [rsp+13Ch] [rbp+3Ch]
	int v182; // [rsp+140h] [rbp+40h]
	int v183; // [rsp+144h] [rbp+44h]
	__int64 v184; // [rsp+148h] [rbp+48h]
	int v185; // [rsp+150h] [rbp+50h]
	int v186; // [rsp+154h] [rbp+54h]
	unsigned int v187; // [rsp+158h] [rbp+58h]
	unsigned int v188; // [rsp+15Ch] [rbp+5Ch]
	char v189; // [rsp+160h] [rbp+60h]
	char v190[64]; // [rsp+180h] [rbp+80h] BYREF
	int v191; // [rsp+1C0h] [rbp+C0h]
	char v192[64]; // [rsp+1E0h] [rbp+E0h] BYREF
	int v193; // [rsp+220h] [rbp+120h]
	__int128 v194[5]; // [rsp+230h] [rbp+130h] BYREF
	int v195; // [rsp+280h] [rbp+180h]
	__int128 v196[5]; // [rsp+290h] [rbp+190h] BYREF
	int v197; // [rsp+2E0h] [rbp+1E0h]
	char v198[96]; // [rsp+2F0h] [rbp+1F0h] BYREF
	__int64 v199; // [rsp+350h] [rbp+250h] BYREF
	__int64 v200; // [rsp+358h] [rbp+258h]
	__int64 v201; // [rsp+360h] [rbp+260h]
	__m128i v202; // [rsp+368h] [rbp+268h] BYREF
	__int64 v203; // [rsp+378h] [rbp+278h]

	v172 = a1;
	v171 = 1;
	v4 = sub_1401A6B80(a2, L"Cycle");
	if (v4)
	{
		v5 = (_WORD*)sub_1401A4F40(v4 + 32);
		sub_1407DF428(v5, (__int64)L"%d", &v171);
	}
	*(_BYTE*)(a1 + 116) &= ~2u;
	LOBYTE(v6) = 2 * (v171 != 0);
	*(_BYTE*)(a1 + 116) |= v6;
	if (!*(_DWORD*)(a1 + 24))
	{
		v6 = sub_1401A5AE0(a2, word_140A1A818);
		v7 = v6;
		for (i = v6; v6; i = v6)
		{
			v8 = *(_QWORD*)(v7 + 96);
			if (v8)
			{
				while (1)
				{
					v9 = L"Texture";
					v10 = (wchar_t*)sub_1401A4F40(v8 + 8);
					if (v10 == L"Texture")
						break;
					v11 = 0;
					if (!*v10)
						goto LABEL_15;
					do
					{
						if (!*v9 || *v10 != *v9)
							break;
						v12 = v11 == 0x7FFFFFFF;
						if (v11 == 0x7FFFFFFF)
							goto LABEL_13;
						++v10;
						++v9;
						++v11;
					} while (*v10);
					v12 = v11 == 0x7FFFFFFF;
				LABEL_13:
					if (v12)
						break;
					if (!*v10)
					{
					LABEL_15:
						if (!*v9)
							break;
					}
					v8 = *(_QWORD*)(v8 + 56);
					if (!v8)
						goto LABEL_277;
				}
				v173 = (int*)sub_1401A4F40(v8 + 32);
				if (v173)
				{
					v199 = 0i64;
					v200 = 0i64;
					v201 = 0i64;
					v202 = 0ui64;
					v203 = 0i64;
					v13 = 0;
					v14 = 0i64;
					v15 = 0x3FFFFFFFFFFFFFFFi64;
					v16 = 0i64;
					do
					{
						v17 = sub_1401A6B80(v7, off_140A1AC20[v16]);
						if (v17)
						{
							v18 = (_WORD*)sub_1401A4F40(v17 + 32);
							sub_1407DF428(v18, (__int64)L"%d", (char*)&v199 + v14);
						}
						v19 = sub_1401A6B80(v7, off_140A1ABD0[v16]);
						if (v19)
						{
							v20 = (_WORD*)sub_1401A4F40(v19 + 32);
							sub_1407DF428(v20, (__int64)L"%d", &v202.m128i_i8[v14]);
						}
						if (v13 > 0)
						{
							if (!*(_DWORD*)((char*)&v199 + v15 * 4 + 4))
								*(_DWORD*)((char*)&v199 + v15 * 4 + 4) = *(_DWORD*)((char*)&v199 + v15 * 4);
							if (!v202.m128i_i32[v15 + 1])
								v202.m128i_i32[v15 + 1] = v202.m128i_i32[v15];
						}
						++v13;
						v14 += 4i64;
						++v16;
						++v15;
					} while (v13 < 6);
					v21 = *(_QWORD*)(v7 + 96);
					v22 = 0;
					v23 = 0;
					v24 = 0;
					v165 = 0i64;
					v168 = 0i64;
					v170 = 0i64;
					v156 = 0i64;
					if (v21)
					{
						while (1)
						{
							v25 = L"Left";
							v26 = (wchar_t*)sub_1401A4F40(v21 + 8);
							if (v26 == L"Left")
								break;
							v27 = 0;
							if (!*v26)
								goto LABEL_40;
							do
							{
								if (!*v25 || *v26 != *v25)
									break;
								v28 = v27 == 0x7FFFFFFF;
								if (v27 == 0x7FFFFFFF)
									goto LABEL_38;
								++v26;
								++v25;
								++v27;
							} while (*v26);
							v28 = v27 == 0x7FFFFFFF;
						LABEL_38:
							if (v28)
								break;
							if (!*v26)
							{
							LABEL_40:
								if (!*v25)
									break;
							}
							v21 = *(_QWORD*)(v21 + 56);
							if (!v21)
								goto LABEL_58;
						}
						v29 = (_WORD*)sub_1401A4F40(v21 + 32);
						if ((unsigned int)sub_1407DF428(v29, (__int64)L"%d", &v165) == 1)
						{
							v30 = *(_QWORD*)(v7 + 96);
							if (v30)
							{
								while (1)
								{
									v31 = L"Top";
									v32 = (wchar_t*)sub_1401A4F40(v30 + 8);
									if (v32 == L"Top")
										break;
									v33 = 0;
									if (!*v32)
										goto LABEL_54;
									do
									{
										if (!*v31 || *v32 != *v31)
											break;
										v34 = v33 == 0x7FFFFFFF;
										if (v33 == 0x7FFFFFFF)
											goto LABEL_52;
										++v32;
										++v31;
										++v33;
									} while (*v32);
									v34 = v33 == 0x7FFFFFFF;
								LABEL_52:
									if (v34)
										break;
									if (!*v32)
									{
									LABEL_54:
										if (!*v31)
											break;
									}
									v30 = *(_QWORD*)(v30 + 56);
									if (!v30)
										goto LABEL_58;
								}
								v35 = (_WORD*)sub_1401A4F40(v30 + 32);
								v22 = (unsigned int)sub_1407DF428(v35, (__int64)L"%d", (char*)&v165 + 4) == 1;
							}
						}
					}
				LABEL_58:
					v36 = *(_QWORD*)(v7 + 96);
					if (v36)
					{
						while (1)
						{
							v37 = L"Right";
							v38 = (wchar_t*)sub_1401A4F40(v36 + 8);
							if (v38 == L"Right")
								break;
							v39 = 0;
							if (!*v38)
								goto LABEL_68;
							do
							{
								if (!*v37 || *v38 != *v37)
									break;
								v40 = v39 == 0x7FFFFFFF;
								if (v39 == 0x7FFFFFFF)
									goto LABEL_66;
								++v38;
								++v37;
								++v39;
							} while (*v38);
							v40 = v39 == 0x7FFFFFFF;
						LABEL_66:
							if (v40)
								break;
							if (!*v38)
							{
							LABEL_68:
								if (!*v37)
									break;
							}
							v36 = *(_QWORD*)(v36 + 56);
							if (!v36)
								goto LABEL_86;
						}
						v41 = (_WORD*)sub_1401A4F40(v36 + 32);
						if ((unsigned int)sub_1407DF428(v41, (__int64)L"%d", &v168) == 1)
						{
							v42 = *(_QWORD*)(v7 + 96);
							if (v42)
							{
								while (1)
								{
									v43 = L"Bottom";
									v44 = (wchar_t*)sub_1401A4F40(v42 + 8);
									if (v44 == L"Bottom")
										break;
									v45 = 0;
									if (!*v44)
										goto LABEL_82;
									do
									{
										if (!*v43 || *v44 != *v43)
											break;
										v46 = v45 == 0x7FFFFFFF;
										if (v45 == 0x7FFFFFFF)
											goto LABEL_80;
										++v44;
										++v43;
										++v45;
									} while (*v44);
									v46 = v45 == 0x7FFFFFFF;
								LABEL_80:
									if (v46)
										break;
									if (!*v44)
									{
									LABEL_82:
										if (!*v43)
											break;
									}
									v42 = *(_QWORD*)(v42 + 56);
									if (!v42)
										goto LABEL_86;
								}
								v47 = (_WORD*)sub_1401A4F40(v42 + 32);
								v23 = (unsigned int)sub_1407DF428(v47, (__int64)L"%d", (char*)&v168 + 4) == 1;
							}
						}
					}
				LABEL_86:
					v48 = *(_QWORD*)(v7 + 96);
					if (v48)
					{
						while (1)
						{
							v49 = L"Width";
							v50 = (wchar_t*)sub_1401A4F40(v48 + 8);
							if (v50 == L"Width")
								break;
							v51 = 0;
							if (!*v50)
								goto LABEL_96;
							do
							{
								if (!*v49 || *v50 != *v49)
									break;
								v52 = v51 == 0x7FFFFFFF;
								if (v51 == 0x7FFFFFFF)
									goto LABEL_94;
								++v50;
								++v49;
								++v51;
							} while (*v50);
							v52 = v51 == 0x7FFFFFFF;
						LABEL_94:
							if (v52)
								break;
							if (!*v50)
							{
							LABEL_96:
								if (!*v49)
									break;
							}
							v48 = *(_QWORD*)(v48 + 56);
							if (!v48)
								goto LABEL_114;
						}
						v53 = (_WORD*)sub_1401A4F40(v48 + 32);
						if ((unsigned int)sub_1407DF428(v53, (__int64)L"%d", &v170) == 1)
						{
							v54 = *(_QWORD*)(v7 + 96);
							if (v54)
							{
								while (1)
								{
									v55 = L"Height";
									v56 = (wchar_t*)sub_1401A4F40(v54 + 8);
									if (v56 == L"Height")
										break;
									v57 = 0;
									if (!*v56)
										goto LABEL_110;
									do
									{
										if (!*v55 || *v56 != *v55)
											break;
										v58 = v57 == 0x7FFFFFFF;
										if (v57 == 0x7FFFFFFF)
											goto LABEL_108;
										++v56;
										++v55;
										++v57;
									} while (*v56);
									v58 = v57 == 0x7FFFFFFF;
								LABEL_108:
									if (v58)
										break;
									if (!*v56)
									{
									LABEL_110:
										if (!*v55)
											break;
									}
									v54 = *(_QWORD*)(v54 + 56);
									if (!v54)
										goto LABEL_114;
								}
								v59 = (_WORD*)sub_1401A4F40(v54 + 32);
								v24 = (unsigned int)sub_1407DF428(v59, (__int64)L"%d", (char*)&v170 + 4) == 1;
							}
						}
					}
				LABEL_114:
					v60 = v22 && (v23 || v24);
					v61 = v165;
					v62 = HIDWORD(v165);
					v166 = HIDWORD(v168);
					v169 = v168;
					if (v22 && v24)
					{
						v63 = v165 + v170;
						v61 = qword_140C77760 + v165;
						v64 = HIDWORD(v165) + HIDWORD(v170);
						v62 = HIDWORD(qword_140C77760) + HIDWORD(v165);
					}
					else
					{
						v64 = v166;
						v63 = v169;
					}
					v65 = *(_QWORD*)(i + 96);
					if (!v65)
						goto LABEL_135;
					while (1)
					{
						v66 = L"HotspotX";
						v67 = (wchar_t*)sub_1401A4F40(v65 + 8);
						if (v67 == L"HotspotX")
							break;
						v68 = 0;
						if (*v67)
						{
							do
							{
								if (!*v66 || *v67 != *v66)
									break;
								v69 = v68 == 0x7FFFFFFF;
								if (v68 == 0x7FFFFFFF)
									goto LABEL_131;
								++v67;
								++v66;
								++v68;
							} while (*v67);
							v69 = v68 == 0x7FFFFFFF;
						LABEL_131:
							if (v69)
								break;
						}
						if (!*v67 && !*v66)
							break;
						v65 = *(_QWORD*)(v65 + 56);
						if (!v65)
							goto LABEL_135;
					}
					v75 = (_WORD*)sub_1401A4F40(v65 + 32);
					if ((unsigned int)sub_1407DF428(v75, (__int64)L"%d", &v156) != 1)
						goto LABEL_135;
					v76 = *(_QWORD*)(i + 96);
					if (!v76)
						goto LABEL_135;
					while (1)
					{
						v77 = L"HotspotY";
						v78 = (wchar_t*)sub_1401A4F40(v76 + 8);
						if (v78 == L"HotspotY")
							break;
						v79 = 0;
						if (*v78)
						{
							do
							{
								if (!*v77 || *v78 != *v77)
									break;
								v80 = v79 == 0x7FFFFFFF;
								if (v79 == 0x7FFFFFFF)
									goto LABEL_158;
								++v78;
								++v77;
								++v79;
							} while (*v78);
							v80 = v79 == 0x7FFFFFFF;
						LABEL_158:
							if (v80)
								break;
						}
						if (!*v78 && !*v77)
							break;
						v76 = *(_QWORD*)(v76 + 56);
						if (!v76)
							goto LABEL_135;
					}
					v81 = (_WORD*)sub_1401A4F40(v76 + 32);
					if ((unsigned int)sub_1407DF428(v81, (__int64)L"%d", (char*)&v156 + 4) == 1)
					{
						if ((unsigned int)(v156 + 2000) > 0xFA0 || (unsigned int)(HIDWORD(v156) + 2000) > 0xFA0)
							sub_1400035B0();
					}
					else
					{
					LABEL_135:
						v156 = 0i64;
					}
					v163 = 1065353216;
					v70 = *(_QWORD*)(i + 96);
					if (v70)
					{
						while (1)
						{
							v71 = L"Duration";
							v72 = (wchar_t*)sub_1401A4F40(v70 + 8);
							if (v72 == L"Duration")
								break;
							v73 = 0;
							if (*v72)
							{
								do
								{
									if (!*v71 || *v72 != *v71)
										break;
									v74 = v73 == 0x7FFFFFFF;
									if (v73 == 0x7FFFFFFF)
										goto LABEL_144;
									++v72;
									++v71;
									++v73;
								} while (*v72);
								v74 = v73 == 0x7FFFFFFF;
							LABEL_144:
								if (v74)
									break;
							}
							if (!*v72 && !*v71)
								break;
							v70 = *(_QWORD*)(v70 + 56);
							if (!v70)
								goto LABEL_168;
						}
						v82 = (_WORD*)sub_1401A4F40(v70 + 32);
						sub_1407DF428(v82, (__int64)L"%f", &v163);
					}
				LABEL_168:
					v83 = i;
					sub_1400F66F0(&v159, i, L"StartColor", 0xFFFFFFFF);
					sub_1400F66F0(&v160, v83, L"EndColor", 0xFFFFFFFF);
					v84 = *(_QWORD*)(v83 + 96);
					v158 = 0;
					if (!v84)
						goto LABEL_182;
					while (1)
					{
						v85 = L"Stretchy";
						v86 = (wchar_t*)sub_1401A4F40(v84 + 8);
						if (v86 == L"Stretchy")
							break;
						v87 = 0;
						if (*v86)
						{
							do
							{
								if (!*v85 || *v86 != *v85)
									break;
								v88 = v87 == 0x7FFFFFFF;
								if (v87 == 0x7FFFFFFF)
									goto LABEL_176;
								++v86;
								++v85;
								++v87;
							} while (*v86);
							v88 = v87 == 0x7FFFFFFF;
						LABEL_176:
							if (v88)
								break;
						}
						if (!*v86 && !*v85)
							break;
						v84 = *(_QWORD*)(v84 + 56);
						if (!v84)
							goto LABEL_182;
					}
					v89 = (_WORD*)sub_1401A4F40(v84 + 32);
					if ((unsigned int)sub_1407DF428(v89, (__int64)L"%d", &v158) != 1)
						LABEL_182:
					v158 = v60;
					v162 = 0;
					v90 = *(_QWORD*)(i + 96);
					if (v90)
					{
						while (1)
						{
							v91 = L"FlipX";
							v92 = (wchar_t*)sub_1401A4F40(v90 + 8);
							if (v92 == L"FlipX")
								break;
							v93 = 0;
							if (*v92)
							{
								do
								{
									if (!*v91 || *v92 != *v91)
										break;
									v94 = v93 == 0x7FFFFFFF;
									if (v93 == 0x7FFFFFFF)
										goto LABEL_191;
									++v92;
									++v91;
									++v93;
								} while (*v92);
								v94 = v93 == 0x7FFFFFFF;
							LABEL_191:
								if (v94)
									break;
							}
							if (!*v92 && !*v91)
								break;
							v90 = *(_QWORD*)(v90 + 56);
							if (!v90)
								goto LABEL_197;
						}
						v95 = (_WORD*)sub_1401A4F40(v90 + 32);
						sub_1407DF428(v95, (__int64)L"%d", &v162);
					}
				LABEL_197:
					v161 = 0;
					v96 = *(_QWORD*)(i + 96);
					if (v96)
					{
						while (1)
						{
							v97 = L"FlipY";
							v98 = (wchar_t*)sub_1401A4F40(v96 + 8);
							if (v98 == L"FlipY")
								break;
							v99 = 0;
							if (*v98)
							{
								do
								{
									if (!*v97 || *v98 != *v97)
										break;
									v100 = v99 == 0x7FFFFFFF;
									if (v99 == 0x7FFFFFFF)
										goto LABEL_205;
									++v98;
									++v97;
									++v99;
								} while (*v98);
								v100 = v99 == 0x7FFFFFFF;
							LABEL_205:
								if (v100)
									break;
							}
							if (!*v98 && !*v97)
								break;
							v96 = *(_QWORD*)(v96 + 56);
							if (!v96)
								goto LABEL_211;
						}
						v101 = (_WORD*)sub_1401A4F40(v96 + 32);
						sub_1407DF428(v101, (__int64)L"%d", &v161);
					}
				LABEL_211:
					v155 = 0.0;
					v102 = *(_QWORD*)(i + 96);
					if (v102)
					{
						while (1)
						{
							v103 = L"StartOrientation";
							v104 = (wchar_t*)sub_1401A4F40(v102 + 8);
							if (v104 == L"StartOrientation")
								break;
							v105 = 0;
							if (*v104)
							{
								do
								{
									if (!*v103 || *v104 != *v103)
										break;
									v106 = v105 == 0x7FFFFFFF;
									if (v105 == 0x7FFFFFFF)
										goto LABEL_219;
									++v104;
									++v103;
									++v105;
								} while (*v104);
								v106 = v105 == 0x7FFFFFFF;
							LABEL_219:
								if (v106)
									break;
							}
							if (!*v104 && !*v103)
								break;
							v102 = *(_QWORD*)(v102 + 56);
							if (!v102)
								goto LABEL_225;
						}
						v107 = (_WORD*)sub_1401A4F40(v102 + 32);
						sub_1407DF428(v107, (__int64)L"%f", &v155);
					}
				LABEL_225:
					v164 = 0.0;
					v108 = *(_QWORD*)(i + 96);
					*(float*)&v109 = (float)(v155 * *(float*)&dword_140C3C248) * 0.0027777778;
					v155 = *(float*)&v109;
					if (v108)
					{
						while (1)
						{
							v110 = L"EndOrientation";
							v111 = (wchar_t*)sub_1401A4F40(v108 + 8);
							if (v111 == L"EndOrientation")
								break;
							v112 = 0;
							if (*v111)
							{
								do
								{
									if (!*v110 || *v111 != *v110)
										break;
									v113 = v112 == 0x7FFFFFFF;
									if (v112 == 0x7FFFFFFF)
										goto LABEL_233;
									++v111;
									++v110;
									++v112;
								} while (*v111);
								v113 = v112 == 0x7FFFFFFF;
							LABEL_233:
								if (v113)
									break;
							}
							if (!*v111 && !*v110)
								break;
							v108 = *(_QWORD*)(v108 + 56);
							if (!v108)
								goto LABEL_239;
						}
						v114 = (_WORD*)sub_1401A4F40(v108 + 32);
						sub_1407DF428(v114, (__int64)L"%f", &v164);
					LABEL_239:
						*(float*)&v109 = v155;
					}
					*(float*)&v115 = (float)(v164 * *(float*)&dword_140C3C248) * 0.0027777778;
					v164 = *(float*)&v115;
					if (v60)
					{
						v174[0] = v61;
						v116 = v172;
						v117 = *(_QWORD*)(v172 + 16);
						v174[1] = v62;
						v174[2] = v63;
						v174[3] = v64;
						v118 = sub_140100F50(
							v172,
							v117,
							v173,
							v174,
							v163,
							v158,
							&v156,
							&v159,
							&v160,
							v162 != 0,
							v161 != 0,
							v109,
							v115);
						v119 = v159;
						v120 = v160;
						v121 = v118;
					}
					else
					{
						v119 = v159;
						v122 = qword_140C63678;
						v123 = *(float*)&v163;
						v185 = v109;
						v186 = v115;
						v116 = v172;
						v184 = v156;
						v181 = v163;
						v124 = *(_QWORD*)(v172 + 16);
						v178 = v158;
						v175[0] = 0i64;
						v179 = v162 != 0;
						v180 = v161 != 0;
						v187 = v159;
						if ((unsigned __int64)v159 < *(_QWORD*)(qword_140C63678 + 48))
						{
							v125 = *(_QWORD*)(qword_140C63678 + 40);
							v126 = 32i64 * v159;
							v127 = *(_DWORD*)(v126 + v125 + 16);
							if ((unsigned int)(v127 - 1) <= 0xFFFFFFFD)
								*(_DWORD*)(v126 + v125 + 16) = v127 + 1;
						}
						v120 = v160;
						v188 = v160;
						if ((unsigned __int64)v160 < *(_QWORD*)(v122 + 48))
						{
							v128 = *(_QWORD*)(v122 + 40);
							v129 = 32i64 * v160;
							v130 = *(_DWORD*)(v129 + v128 + 16);
							if ((unsigned int)(v130 - 1) <= 0xFFFFFFFD)
								*(_DWORD*)(v129 + v128 + 16) = v130 + 1;
						}
						v189 = 0;
						v191 = 0;
						v131 = v190;
						v132 = 0i64;
						do
						{
							v133 = *(_DWORD*)((char*)&unk_140A1B148 + v132);
							*(_DWORD*)&v190[v132 + 48] = 0;
							v132 += 4i64;
							*(_DWORD*)&v190[v132 + 28] = v133;
							*(_QWORD*)v131 = 0i64;
							v131 += 8;
						} while (v132 < 16);
						v193 = 0;
						v134 = v192;
						v135 = 0i64;
						do
						{
							v136 = *(_DWORD*)((char*)&unk_140A1B148 + v135);
							*(_DWORD*)&v192[v135 + 48] = 0;
							v135 += 4i64;
							*(_DWORD*)&v192[v135 + 28] = v136;
							*(_QWORD*)v134 = 0i64;
							v134 += 8;
						} while (v135 < 16);
						v175[1] = v199;
						v176 = v202;
						v175[2] = v200;
						v177 = v203;
						v175[3] = v201;
						v182 = HIDWORD(v201) - v199;
						v183 = HIDWORD(v203) - _mm_cvtsi128_si32(v202);
						sub_140108F00(v124, v173, 0x140000000i64, v175);
						v137 = *(_QWORD*)(v116 + 64);
						if (v137 == *(_QWORD*)(v116 + 72))
						{
							sub_140109F90((__int64*)(v116 + 48), *(__int64**)(v116 + 64), (__int64)v175);
						}
						else
						{
							if (v137)
								sub_1400FEB20(*(_QWORD*)(v116 + 64), (__int64)v175);
							*(_QWORD*)(v116 + 64) += 304i64;
						}
						*(float*)(v116 + 112) = v123 + *(float*)(v116 + 112);
						v121 = (*(_DWORD*)(v116 + 64) - *(_DWORD*)(v116 + 56)) / 304 - 1;
						if (v175[0])
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v175[0] + 8i64))(v175[0]);
						sub_1401429A0(qword_140C63678, v188);
						sub_1401429A0(qword_140C63678, v187);
					}
					v7 = i;
					v167 = 0;
					v138 = *(_QWORD*)(i + 96);
					if (v138)
					{
						while (1)
						{
							v139 = L"UseAnchors";
							v140 = (wchar_t*)sub_1401A4F40(v138 + 8);
							if (v140 == L"UseAnchors")
								break;
							v141 = 0;
							if (*v140)
							{
								do
								{
									if (!*v139 || *v140 != *v139)
										break;
									v142 = v141 == 0x7FFFFFFF;
									if (v141 == 0x7FFFFFFF)
										goto LABEL_268;
									++v140;
									++v139;
									++v141;
								} while (*v140);
								v142 = v141 == 0x7FFFFFFF;
							LABEL_268:
								if (v142)
									break;
							}
							if (!*v140 && !*v139)
								break;
							v138 = *(_QWORD*)(v138 + 56);
							if (!v138)
								goto LABEL_276;
						}
						v143 = (_WORD*)sub_1401A4F40(v138 + 32);
						if ((unsigned int)sub_1407DF428(v143, (__int64)L"%d", &v167) == 1 && v167)
						{
							v144 = sub_1400D45E0((__int64)v198, 0i64, 0i64, v7, (int*)L"Start");
							v145 = *(_OWORD*)(v144 + 32);
							v196[0] = *(_OWORD*)v144;
							v146 = *(_OWORD*)(v144 + 16);
							v196[2] = v145;
							v196[1] = v146;
							v196[3] = *(_OWORD*)(v144 + 48);
							v147 = *(_OWORD*)(v144 + 64);
							v197 = *(_DWORD*)(v144 + 80);
							v196[4] = v147;
							v148 = sub_1400D45E0((__int64)v198, 0i64, 0i64, v7, (int*)L"End");
							v149 = *(_OWORD*)(v148 + 32);
							v150 = *(_QWORD*)(v116 + 56) + 304i64 * v121;
							v194[0] = *(_OWORD*)v148;
							v151 = *(_OWORD*)(v148 + 16);
							v194[2] = v149;
							v194[1] = v151;
							v194[3] = *(_OWORD*)(v148 + 48);
							v152 = *(_OWORD*)(v148 + 64);
							v195 = *(_DWORD*)(v148 + 80);
							v194[4] = v152;
							sub_1400FD890(v150, v153, (__int64)v196, (__int64)v194);
						}
					}
				LABEL_276:
					sub_1401429A0(qword_140C63678, v120);
					sub_1401429A0(qword_140C63678, v119);
				}
			}
		LABEL_277:
			v6 = sub_1401A5BC0(v7, word_140A1A818);
			v7 = v6;
		}
	}
	return v6;
}
// 1401028DA: conditional instruction was optimized away because rdi.8!=0
// 140102AAF: conditional instruction was optimized away because rdi.8!=0
// 140102B5C: conditional instruction was optimized away because rdi.8!=0
// 140102C0F: conditional instruction was optimized away because rdi.8!=0
// 140102CBC: conditional instruction was optimized away because rdi.8!=0
// 140102D6F: conditional instruction was optimized away because rdi.8!=0
// 140102E17: conditional instruction was optimized away because rdi.8!=0
// 140102FB9: conditional instruction was optimized away because rdi.8!=0
// 14010306D: conditional instruction was optimized away because rdi.8!=0
// 1401030F7: conditional instruction was optimized away because rdi.8!=0
// 1401031CA: conditional instruction was optimized away because rdi.8!=0
// 14010327A: conditional instruction was optimized away because rdi.8!=0
// 14010331A: conditional instruction was optimized away because rdi.8!=0
// 1401033CA: conditional instruction was optimized away because rdi.8!=0
// 14010348A: conditional instruction was optimized away because rdi.8!=0
// 14010381D: conditional instruction was optimized away because r14.8!=0
// 14010392D: variable 'v153' is possibly undefined
// 1409E4114: using guessed type wchar_t aD_16[3];
// 1409E441C: using guessed type wchar_t asc_1409E441C[3];
// 140A1A818: using guessed type __int16 word_140A1A818[8];
// 140A1A828: using guessed type wchar_t aTexture[8];
// 140A1A838: using guessed type wchar_t aDuration[9];
// 140A1A850: using guessed type wchar_t aStartcolor[11];
// 140A1A868: using guessed type wchar_t aStartorientati[17];
// 140A1A890: using guessed type wchar_t aEndorientation[15];
// 140A1A8D8: using guessed type wchar_t aEndcolor[9];
// 140A1A8F0: using guessed type wchar_t aStretchy[9];
// 140A1A908: using guessed type wchar_t aFlipx[6];
// 140A1A918: using guessed type wchar_t aFlipy[6];
// 140A1A9B8: using guessed type wchar_t aCycle[6];
// 140A1AA90: using guessed type wchar_t aUseanchors[11];
// 140A1AAA8: using guessed type wchar_t aStart[6];
// 140A1AAB8: using guessed type wchar_t aEnd[4];
// 140A1ABD0: using guessed type wchar_t *off_140A1ABD0[17];
// 140A1AC20: using guessed type wchar_t *off_140A1AC20[7];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A31D78: using guessed type wchar_t aLeft[5];
// 140A31D98: using guessed type wchar_t aRight[6];
// 140A31DA8: using guessed type wchar_t aTop_2[4];
// 140A31E90: using guessed type wchar_t aBottom[7];
// 140A32B28: using guessed type wchar_t aHotspoty[9];
// 140A32B40: using guessed type wchar_t aHotspotx[9];
// 140C3C248: using guessed type int dword_140C3C248;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C77760: using guessed type __int64 qword_140C77760;

