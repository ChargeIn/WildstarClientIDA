//----- (000000014065A560) ----------------------------------------------------
__int64 __fastcall sub_14065A560(__int64 a1)
{
	_QWORD* v1; // rdi
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // r14
	__int64 v5; // rcx
	unsigned __int64 v6; // r12
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // r10d
	unsigned __int64 v11; // r13
	__int64 v12; // rbx
	__int64 v13; // r14
	__int64 v14; // r8
	int v15; // r15d
	__int64 v16; // rcx
	unsigned __int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	int v20; // eax
	__int64 v21; // rcx
	int v22; // r12d
	_QWORD* v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rdx
	int v26; // r11d
	__int64 v27; // rbx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	int v30; // r11d
	__int64 v31; // rbx
	_QWORD* v32; // rax
	__int64 v33; // rdx
	int v34; // r11d
	_QWORD* v35; // rax
	__int64 v36; // r11
	__int64 v37; // rdx
	_QWORD* v38; // rax
	__int64 v39; // r11
	__int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // r11
	unsigned __int64* v43; // rdx
	unsigned __int64 v44; // r8
	_DWORD* v45; // rcx
	__int64* v46; // rax
	int v47; // ebx
	_QWORD* v48; // rax
	__int64 v49; // r11
	__int64 v50; // rdx
	int v51; // ebx
	_QWORD* v52; // rax
	__int64 v53; // r11
	__int64 v54; // rdx
	int v55; // ebx
	_QWORD* v56; // rax
	__int64 v57; // r11
	unsigned __int64* v58; // rdx
	unsigned __int64 v59; // r8
	_DWORD* v60; // rcx
	__int64* v61; // rax
	int v62; // ebx
	_QWORD* v63; // rax
	__int64 v64; // r11
	unsigned __int64* v65; // rdx
	unsigned __int64 v66; // r8
	_DWORD* v67; // rcx
	__int64* v68; // rax
	int v69; // eax
	int* v70; // rbx
	unsigned __int64 v71; // rdx
	unsigned int v72; // ecx
	char v73; // al
	char v74; // al
	char v75; // al
	char v76; // al
	char v77; // al
	char v78; // al
	char v79; // al
	char v80; // al
	char v81; // al
	unsigned __int64 v82; // rdx
	__int64* v83; // rax
	int* v84; // rax
	int* v85; // rdx
	__int64 v86; // rcx
	__int128 v87; // xmm0
	__int128 v88; // xmm1
	__int128 v89; // xmm0
	__int128 v90; // xmm1
	__int128 v91; // xmm0
	__int128 v92; // xmm1
	__int128 v93; // xmm0
	__int128 v94; // xmm1
	__int128 v95; // xmm1
	__int64 v96; // rcx
	__int128 v97; // xmm0
	__int64 v98; // rax
	_QWORD* v99; // rbx
	__int64 v100; // rcx
	_QWORD* v101; // rax
	__int64 v102; // rcx
	__int64 v103; // rdx
	unsigned __int16* v104; // r11
	int* v105; // rcx
	int* v106; // rax
	__int64 v107; // r15
	int v108; // ebx
	_QWORD* v109; // rax
	__int64 v110; // rcx
	__int64 v111; // rdx
	unsigned __int16* v112; // r11
	__int64 v113; // rdx
	_QWORD* v114; // rax
	__int64 v115; // r8
	__int64 v116; // rdx
	int v117; // r10d
	__int64 v119; // [rsp+30h] [rbp-D0h]
	int v120; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v121; // [rsp+40h] [rbp-C0h]
	unsigned __int64 v122; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v123)(); // [rsp+50h] [rbp-B0h] BYREF
	int v124; // [rsp+58h] [rbp-A8h]
	_QWORD* v125; // [rsp+60h] [rbp-A0h]
	int v126; // [rsp+68h] [rbp-98h]
	__int64 v127; // [rsp+70h] [rbp-90h] BYREF
	__int64 v128; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v129)(); // [rsp+90h] [rbp-70h] BYREF
	int v130; // [rsp+98h] [rbp-68h]
	_QWORD* v131; // [rsp+A0h] [rbp-60h]
	int v132; // [rsp+A8h] [rbp-58h]
	__int64 v133[24]; // [rsp+B0h] [rbp-50h] BYREF
	__int128 v134; // [rsp+170h] [rbp+70h]
	int* v135; // [rsp+180h] [rbp+80h]
	char v136[1216]; // [rsp+190h] [rbp+90h] BYREF
	__int64 v137; // [rsp+650h] [rbp+550h] BYREF
	__int64 v138; // [rsp+658h] [rbp+558h]
	_BYTE v139[6]; // [rsp+660h] [rbp+560h] BYREF
	__int16 v140; // [rsp+666h] [rbp+566h]
	int v141; // [rsp+668h] [rbp+568h]
	__int64(__fastcall * *v142)(); // [rsp+670h] [rbp+570h] BYREF
	int v143; // [rsp+678h] [rbp+578h]
	int* v144; // [rsp+680h] [rbp+580h]
	__int64 v145; // [rsp+688h] [rbp+588h]
	__int64 v146; // [rsp+690h] [rbp+590h]
	__int64 v147; // [rsp+698h] [rbp+598h]
	__int64 v148; // [rsp+6A0h] [rbp+5A0h]
	__int64 v149; // [rsp+6A8h] [rbp+5A8h]
	__int64 v150; // [rsp+6B0h] [rbp+5B0h]
	int v151; // [rsp+6B8h] [rbp+5B8h]
	__int128 v152; // [rsp+6C0h] [rbp+5C0h]
	int v153; // [rsp+6D0h] [rbp+5D0h]
	__int64 v154; // [rsp+6D8h] [rbp+5D8h]
	__int64* v155; // [rsp+6E0h] [rbp+5E0h]
	__int64 v156; // [rsp+6ECh] [rbp+5ECh]
	int v157; // [rsp+6F4h] [rbp+5F4h]
	__int64 v158; // [rsp+6F8h] [rbp+5F8h]
	__int64 v159; // [rsp+700h] [rbp+600h]
	__int64 v160; // [rsp+708h] [rbp+608h]
	__int128 v161; // [rsp+710h] [rbp+610h]
	__int64 v162; // [rsp+720h] [rbp+620h]
	int v163; // [rsp+73Ch] [rbp+63Ch]
	__int64 v164; // [rsp+788h] [rbp+688h]
	__int64 v165; // [rsp+790h] [rbp+690h]
	__int64 v166; // [rsp+798h] [rbp+698h]
	__int64 v167; // [rsp+7A0h] [rbp+6A0h]
	__int64 v168; // [rsp+7A8h] [rbp+6A8h]
	__int64 v169[4]; // [rsp+7E0h] [rbp+6E0h] BYREF
	int v170[178]; // [rsp+800h] [rbp+700h] BYREF
	__int64 v171; // [rsp+AC8h] [rbp+9C8h]
	__int64 v172; // [rsp+AD0h] [rbp+9D0h]
	__int64 v173; // [rsp+AE0h] [rbp+9E0h]
	int v174; // [rsp+C78h] [rbp+B78h]
	int v175; // [rsp+C80h] [rbp+B80h]
	int v176; // [rsp+C84h] [rbp+B84h]
	int v177[80]; // [rsp+CA0h] [rbp+BA0h] BYREF

	v1 = (_QWORD*)a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2), v4 = v3, (v119 = v3) != 0))
	{
		v5 = v1[4];
		v6 = *(_QWORD*)(v3 + 14008);
		v129 = off_140B569F0;
		v7 = *(_QWORD*)(v5 + 112);
		v131 = v1;
		v122 = v6;
		v132 = 1;
		if (*(_QWORD*)(v5 + 120) >= v7)
			sub_14005E2C0((__int64)v1);
		v8 = v1[2];
		v9 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		v1[2] += 16i64;
		v10 = sub_1400578C0((__int64)v1);
		v130 = v10;
		v11 = 0i64;
		if (v6)
		{
			v12 = 0i64;
			v121 = 0i64;
			do
			{
				if (v11 < *(_QWORD*)(v4 + 14008))
				{
					v13 = v12 + *(_QWORD*)(v4 + 14000);
					if (v13)
					{
						v14 = *(unsigned int*)(v13 + 236);
						v15 = 1;
						if (!(_DWORD)v14
							|| (v15 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
								qword_140C659A0,
								0i64,
								v14,
								0i64,
								0i64,
								0)) != 0
							|| (*(_BYTE*)(v13 + 244) & 1) == 0)
						{
							v16 = v1[4];
							v125 = v1;
							v123 = off_140B569F0;
							v17 = *(_QWORD*)(v16 + 112);
							v126 = 1;
							if (*(_QWORD*)(v16 + 120) >= v17)
								sub_14005E2C0((__int64)v1);
							v18 = v1[2];
							v19 = sub_14005C1B0((__int64)v1, 0, 0);
							*(_DWORD*)(v18 + 8) = 5;
							*(_QWORD*)v18 = v19;
							v1[2] += 16i64;
							v20 = sub_1400578C0((__int64)v1);
							v21 = *(_QWORD*)(v1[4] + 160i64);
							v22 = v20;
							v124 = v20;
							v23 = sub_14005C3C0(v21, v20);
							v24 = v1[2];
							*(_QWORD*)v24 = *v23;
							*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v25, L"idUnique", v26);
							v1[2] -= 16i64;
							v27 = v1[2];
							v28 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v27 = *v28;
							*(_DWORD*)(v27 + 8) = *((_DWORD*)v28 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v29, L"idItem", v30);
							v1[2] -= 16i64;
							v31 = v1[2];
							v32 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v31 = *v32;
							*(_DWORD*)(v31 + 8) = *((_DWORD*)v32 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v33, L"eType", v34);
							v1[2] -= 16i64;
							LODWORD(v31) = *(_DWORD*)(v13 + 32);
							v35 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v36 = *v35;
							*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v37, L"nStackSize", v31);
							v1[2] -= 16i64;
							LODWORD(v31) = *(_DWORD*)(v13 + 28);
							v38 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v39 = *v38;
							*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v40, L"nStockCount", v31);
							v1[2] -= 16i64;
							v41 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v42 = *v41;
							*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
							v1[2] += 16i64;
							v43 = (unsigned __int64*)sub_14018F0E0(&v127, L"bMeetsPreq")[1];
							if (v43)
							{
								v44 = -1i64;
								do
									++v44;
								while (*((_BYTE*)v43 + v44));
								sub_140058710((__int64)v1, v43, v44);
							}
							else
							{
								*(_DWORD*)(v1[2] + 8i64) = 0;
								v1[2] += 16i64;
							}
							if (v128)
								sub_14018B900(v128, 0);
							v45 = (_DWORD*)v1[2];
							v45[2] = 1;
							*v45 = v15 != 0;
							v1[2] += 16i64;
							v46 = (__int64*)sub_1400580E0((__int64)v1, -3);
							sub_14005EA50((__int64)v1, v46, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
							v1[2] -= 48i64;
							v47 = *(_DWORD*)(v13 + 236);
							v48 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v49 = *v48;
							*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v50, L"idPrereq", v47);
							v1[2] -= 16i64;
							v51 = *(_DWORD*)(v13 + 240);
							v52 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v53 = *v52;
							*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v54, L"idGroup", v51);
							v1[2] -= 16i64;
							v55 = (*(_DWORD*)(v13 + 244) >> 1) & 1;
							v56 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v57 = *v56;
							*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
							v1[2] += 16i64;
							v58 = (unsigned __int64*)sub_14018F0E0(&v127, L"bIsSpecial")[1];
							if (v58)
							{
								v59 = -1i64;
								do
									++v59;
								while (*((_BYTE*)v58 + v59));
								sub_140058710((__int64)v1, v58, v59);
							}
							else
							{
								*(_DWORD*)(v1[2] + 8i64) = 0;
								v1[2] += 16i64;
							}
							if (v128)
								sub_14018B900(v128, 0);
							v60 = (_DWORD*)v1[2];
							v60[2] = 1;
							*v60 = v55 != 0;
							v1[2] += 16i64;
							v61 = (__int64*)sub_1400580E0((__int64)v1, -3);
							sub_14005EA50((__int64)v1, v61, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
							v1[2] -= 48i64;
							v62 = (*(_DWORD*)(v13 + 244) >> 2) & 1;
							v63 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							*(_QWORD*)v64 = *v63;
							*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
							v1[2] += 16i64;
							v65 = (unsigned __int64*)sub_14018F0E0(&v127, L"bFutureStock")[1];
							if (v65)
							{
								v66 = -1i64;
								do
									++v66;
								while (*((_BYTE*)v65 + v66));
								sub_140058710((__int64)v1, v65, v66);
							}
							else
							{
								*(_DWORD*)(v1[2] + 8i64) = 0;
								v1[2] += 16i64;
							}
							if (v128)
								sub_14018B900(v128, 0);
							v67 = (_DWORD*)v1[2];
							v67[2] = 1;
							*v67 = v62 != 0;
							v1[2] += 16i64;
							v68 = (__int64*)sub_1400580E0((__int64)v1, -3);
							sub_14005EA50((__int64)v1, v68, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
							v1[2] -= 48i64;
							sub_140659EB0((__int64)&v123, (__int64)L"tPriceInfo", (__int64*)(v13 + 136));
							v69 = *(_DWORD*)(v13 + 4);
							if (v69)
							{
								if (v69 == 4)
								{
									v120 = *(_DWORD*)(v13 + 8);
									if ((unsigned int)sub_1403D3470(v1, &v120))
									{
										sub_1400FB540((__int64)&v123);
										v1[2] -= 16i64;
									}
								}
							}
							else
							{
								v70 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v13 + 8), 0i64);
								if (v70)
								{
									sub_14040FAE0((__int64)v169);
									if (v175 <= 6)
									{
										v169[1] = (__int64)v70;
										v175 = 6;
									}
									v71 = *(_QWORD*)(v13 + 48);
									if (v71)
									{
										v72 = *(_DWORD*)(v13 + 56);
										WORD1(v138) = 0;
										v152 = 0i64;
										v73 = v72 & 7;
										v72 >>= 3;
										v143 = 0;
										BYTE1(v138) = v73;
										v74 = v72;
										v72 >>= 3;
										v144 = 0i64;
										v145 = 1i64;
										LOBYTE(v138) = v74 & 7;
										v75 = v72;
										v72 >>= 1;
										v146 = 0i64;
										v147 = 0i64;
										HIDWORD(v138) = v75 & 1;
										v76 = v72;
										v72 >>= 3;
										v148 = 0i64;
										v149 = 0i64;
										LOBYTE(v137) = v76 & 7;
										v77 = v72;
										v72 >>= 3;
										v150 = 0i64;
										v151 = 0;
										BYTE1(v137) = v77 & 7;
										v78 = v72;
										v72 >>= 3;
										v153 = 0;
										v154 = 0i64;
										BYTE2(v137) = v78 & 7;
										v79 = v72;
										v72 >>= 3;
										v155 = 0i64;
										BYTE3(v137) = v79 & 7;
										v80 = v72;
										v72 >>= 3;
										BYTE4(v137) = v80 & 7;
										v81 = v72;
										v72 >>= 3;
										BYTE5(v137) = v81 & 7;
										BYTE6(v137) = v72 & 7;
										HIBYTE(v137) = (v72 >> 3) & 7;
										v139[0] = v71;
										v82 = v71 >> 8;
										v139[1] = v82;
										v82 >>= 8;
										v139[2] = v82;
										v82 >>= 8;
										v139[3] = v82;
										v82 >>= 8;
										v139[4] = v82;
										v82 >>= 8;
										v139[5] = v82;
										v82 >>= 8;
										v140 = (unsigned __int8)v82;
										v141 = BYTE1(v82);
										v142 = off_140B66A40;
										LODWORD(v82) = *(_DWORD*)(v13 + 248);
										v161 = 0i64;
										v156 = 0i64;
										v158 = 0i64;
										v157 = 1;
										v159 = 0i64;
										v160 = 0i64;
										v162 = 0i64;
										v163 = 0;
										v164 = 0i64;
										v165 = 0i64;
										v166 = 0i64;
										v167 = 0i64;
										v168 = 0i64;
										v83 = (__int64*)sub_140445320(&v127, v82);
										v144 = v70;
										v145 = *v83;
										v146 = v83[1];
										v147 = v83[2];
										v148 = v83[3];
										v149 = 0i64;
										*((_QWORD*)&v152 + 1) = v139;
										v153 = 0;
										v155 = &v137;
										v154 = 0i64;
										sub_1400B52A0((__int64)v177);
										if (!(unsigned int)sub_14040C310((__int64)&v142, (__int64)v177, qword_140C658F0, 0i64, 0i64, 0i64))
										{
											if (v174 <= 6)
											{
												v84 = v177;
												v85 = v170;
												if ((((unsigned __int8)v170 | (unsigned __int8)v177) & 0xF) != 0)
												{
													sub_1407DB590(v170, v177, 0x138ui64);
												}
												else
												{
													v86 = 2i64;
													do
													{
														v87 = *(_OWORD*)v84;
														v88 = *((_OWORD*)v84 + 1);
														v85 += 32;
														v84 += 32;
														*((_OWORD*)v85 - 8) = v87;
														v89 = *((_OWORD*)v84 - 6);
														*((_OWORD*)v85 - 7) = v88;
														v90 = *((_OWORD*)v84 - 5);
														*((_OWORD*)v85 - 6) = v89;
														v91 = *((_OWORD*)v84 - 4);
														*((_OWORD*)v85 - 5) = v90;
														v92 = *((_OWORD*)v84 - 3);
														*((_OWORD*)v85 - 4) = v91;
														v93 = *((_OWORD*)v84 - 2);
														*((_OWORD*)v85 - 3) = v92;
														v94 = *((_OWORD*)v84 - 1);
														*((_OWORD*)v85 - 2) = v93;
														*((_OWORD*)v85 - 1) = v94;
														--v86;
													} while (v86);
													v95 = *((_OWORD*)v84 + 1);
													v96 = *((_QWORD*)v84 + 6);
													*(_OWORD*)v85 = *(_OWORD*)v84;
													v97 = *((_OWORD*)v84 + 2);
													*((_OWORD*)v85 + 1) = v95;
													*((_OWORD*)v85 + 2) = v97;
													*((_QWORD*)v85 + 6) = v96;
												}
												v174 = 6;
											}
											if (v176 <= 6)
											{
												v176 = 6;
												v171 = v137;
												v172 = v138;
												if (v169[0])
												{
													v98 = *(_QWORD*)(v169[0] + 88);
													if (v98)
													{
														if (*(int*)(v98 + 8) < 1)
														{
															v176 = 0;
															v171 = 0i64;
															v172 = 0i64;
														}
													}
												}
											}
										}
									}
									v99 = (_QWORD*)sub_14040FC60((__int64)v136, (__int64)v169);
									if ((unsigned int)sub_140415BB0(v1, (__int64)v99))
									{
										sub_1400FB540((__int64)&v123);
										v1[2] -= 16i64;
									}
									if (*v99)
									{
										(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v99 + 8i64))(*v99);
										*v99 = 0i64;
									}
									v100 = v99[96];
									if (v100)
										sub_14018B900(v100, 0);
									if (v169[0])
									{
										(*(void(__fastcall**)(__int64))(*(_QWORD*)v169[0] + 8i64))(v169[0]);
										v169[0] = 0i64;
									}
									if (v173)
										sub_14018B900(v173, 0);
								}
							}
							v101 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							v102 = v1[2];
							*(_QWORD*)v102 = *v101;
							*(_DWORD*)(v102 + 8) = *((_DWORD*)v101 + 2);
							v1[2] += 16i64;
							sub_1400F0870((__int64)v1, v103, L"strIcon", v104);
							v1[2] -= 16i64;
							sub_1400B7210((__int64)v133, (int*)L"$1n");
							v133[0] = (__int64)off_140B69230;
							v135 = 0i64;
							v134 = 0i64;
							v105 = sub_14018B280(16i64, 0);
							*(_QWORD*)&v134 = v105;
							*((_QWORD*)&v134 + 1) = v105;
							v135 = v105 + 4;
							if (v105)
								*(_WORD*)v105 = 0;
							v106 = sub_14018B280(96i64, 0);
							v107 = (__int64)v106;
							if (v106)
							{
								v108 = *(_DWORD*)(v13 + 232);
								sub_1400B6390(v106);
								*(_QWORD*)v107 = off_140B69170;
								*(_DWORD*)(v107 + 88) = 1;
								sub_1400B6D70(v107, (__int64)L"name", v108);
							}
							else
							{
								v107 = 0i64;
							}
							sub_1400B7480((__int64)v133, (_QWORD*)v107);
							sub_1400B7660(v133);
							v109 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v22);
							v110 = v1[2];
							*(_QWORD*)v110 = *v109;
							*(_DWORD*)(v110 + 8) = *((_DWORD*)v109 + 2);
							v1[2] += 16i64;
							sub_1400F0870((__int64)v1, v111, L"strName", v112);
							v1[2] -= 16i64;
							sub_1400FB1D0((__int64)&v129);
							if ((_QWORD)v134)
								sub_14018B900(v134, 0);
							sub_1400B7390(v133);
							sub_1400579E0((__int64)v1, v113, v22);
							v12 = v121;
							v6 = v122;
						}
					}
					v4 = v119;
				}
				v12 += 256i64;
				++v11;
				v121 = v12;
			} while (v11 < v6);
			v1 = v131;
			v10 = v130;
		}
		v114 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v10);
		v115 = v1[2];
		*(_QWORD*)v115 = *v114;
		v116 = *((unsigned int*)v114 + 2);
		*(_DWORD*)(v115 + 8) = v116;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v116, v117);
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
	}
	return 1i64;
}
// 14065A758: variable 'v25' is possibly undefined
// 14065A758: variable 'v26' is possibly undefined
// 14065A79F: variable 'v29' is possibly undefined
// 14065A79F: variable 'v30' is possibly undefined
// 14065A7E6: variable 'v33' is possibly undefined
// 14065A7E6: variable 'v34' is possibly undefined
// 14065A81E: variable 'v36' is possibly undefined
// 14065A82E: variable 'v37' is possibly undefined
// 14065A866: variable 'v39' is possibly undefined
// 14065A876: variable 'v40' is possibly undefined
// 14065A8A9: variable 'v42' is possibly undefined
// 14065A976: variable 'v49' is possibly undefined
// 14065A986: variable 'v50' is possibly undefined
// 14065A9C1: variable 'v53' is possibly undefined
// 14065A9D1: variable 'v54' is possibly undefined
// 14065AA10: variable 'v57' is possibly undefined
// 14065AADA: variable 'v64' is possibly undefined
// 14065B0BB: variable 'v103' is possibly undefined
// 14065B0BB: variable 'v104' is possibly undefined
// 14065B1B4: variable 'v111' is possibly undefined
// 14065B1B4: variable 'v112' is possibly undefined
// 14065B1E9: variable 'v113' is possibly undefined
// 14065B254: variable 'v117' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B2D330: using guessed type wchar_t aTpriceinfo[11];
// 140B2D360: using guessed type wchar_t aBisspecial[11];
// 140B2D378: using guessed type wchar_t aBfuturestock[13];
// 140B2D398: using guessed type wchar_t aIdprereq[9];
// 140B2D3B0: using guessed type wchar_t aIdgroup_0[8];
// 140B2D3C0: using guessed type wchar_t aNstockcount[12];
// 140B2D3D8: using guessed type wchar_t aBmeetspreq[11];
// 140B2D3F0: using guessed type wchar_t aEtype_12[6];
// 140B2D400: using guessed type wchar_t aNstacksize[11];
// 140B2D418: using guessed type wchar_t aIdunique[9];
// 140B2D430: using guessed type wchar_t aIditem[7];
// 140B2D588: using guessed type wchar_t a1n_10[4];
// 140B2D590: using guessed type wchar_t aStrname_47[8];
// 140B2D5B0: using guessed type wchar_t aStricon_8[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B66A40: using guessed type __int64 (__fastcall *off_140B66A40[121])();
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 14065A560: using guessed type int var_170[80];
// 14065A560: using guessed type int var_610[178];
// 14065A560: using guessed type char var_C80[1216];

