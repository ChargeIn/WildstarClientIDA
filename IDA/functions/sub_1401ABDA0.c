#include "../winhttp.h"

//----- (00000001401ABDA0) ----------------------------------------------------
__int64 __fastcall sub_1401ABDA0(__int64 a1, int a2)
{
	int* v2; // r13
	__int64 v3; // r12
	unsigned int v4; // r10d
	int v5; // eax
	int* v6; // r9
	unsigned int v7; // esi
	int* v8; // r14
	unsigned int v9; // r15d
	unsigned int v10; // ebx
	unsigned int v11; // edi
	int v12; // r8d
	int v13; // edx
	char v14; // cl
	int v15; // eax
	int v16; // eax
	__int64 v17; // rax
	unsigned int v18; // eax
	unsigned int v19; // ecx
	int v20; // eax
	char v21; // cl
	int v22; // eax
	int* v23; // rcx
	int v24; // ecx
	char v25; // cl
	int v26; // eax
	__int64 v27; // rax
	int v28; // ecx
	char v29; // cl
	int v30; // eax
	__int64 v31; // rcx
	int v32; // ecx
	char v33; // cl
	int v34; // eax
	__int64 v35; // rax
	int v36; // ecx
	__int64 v37; // rax
	unsigned int v38; // ecx
	unsigned int v39; // edi
	__int64 v40; // rax
	__int64 v41; // r9
	unsigned int v42; // edx
	unsigned int v43; // ecx
	unsigned int v44; // ecx
	int v45; // eax
	__int64 v46; // rax
	int v47; // r12d
	__int64 v48; // rax
	__int64 v49; // rdx
	__int64 v50; // rcx
	int v51; // eax
	__int64 v52; // rax
	__int64 v53; // rax
	int v54; // r12d
	__int64 v55; // rax
	__int64 v56; // rdx
	__int64 v57; // rcx
	int v58; // eax
	__int64 v59; // rax
	char v60; // cl
	int v61; // eax
	__int64 v62; // rcx
	int v63; // eax
	char v64; // cl
	int v65; // eax
	int v66; // eax
	int v67; // eax
	int v68; // ecx
	char v69; // cl
	int v70; // eax
	char v71; // al
	unsigned int v72; // r15d
	unsigned int v73; // ebx
	unsigned int v74; // r12d
	int v75; // ecx
	bool v76; // zf
	int v77; // ebx
	__int64 result; // rax
	int v79; // ecx
	char v80; // cl
	int v81; // eax
	unsigned int v82; // r12d
	char v83; // cl
	int v84; // eax
	char v85; // cl
	unsigned int v86; // r15d
	char v87; // dl
	unsigned int v88; // ecx
	int v89; // eax
	unsigned int v90; // edx
	char v91; // cl
	int v92; // eax
	__int16 v93; // cx
	unsigned int v94; // r10d
	__int64 v95; // r8
	int v96; // edx
	int v97; // eax
	char v98; // cl
	int v99; // eax
	unsigned int v100; // edx
	char v101; // cl
	int v102; // eax
	char v103; // dl
	__int16 v104; // r8
	int v105; // edx
	char v106; // cl
	int v107; // eax
	int v108; // eax
	unsigned int v109; // r15d
	char v110; // cl
	int v111; // eax
	unsigned int v112; // r15d
	unsigned int v113; // r8d
	unsigned int v114; // r8d
	__int64 v115; // rax
	__int64 v116; // r11
	int v117; // edx
	int v118; // edx
	unsigned int v119; // eax
	char v120; // cl
	int v121; // eax
	unsigned __int8 v122; // di
	unsigned int v123; // r10d
	char v124; // dl
	unsigned int v125; // edx
	char v126; // cl
	int v127; // eax
	int v128; // eax
	int v129; // eax
	__int64 v130; // r11
	int v131; // edx
	unsigned int v132; // eax
	char v133; // cl
	int v134; // eax
	unsigned __int8 v135; // di
	unsigned int v136; // r10d
	char v137; // dl
	unsigned int v138; // edx
	char v139; // cl
	int v140; // eax
	int v141; // eax
	__int64 v142; // rcx
	unsigned int v143; // ecx
	unsigned int v144; // eax
	__int64 v145; // rdx
	unsigned int v146; // eax
	char* v147; // rdx
	__int64 v148; // rdx
	char v149; // al
	char v150; // cl
	int v151; // eax
	unsigned int v152; // r8d
	char* v153; // rdx
	int v154; // eax
	int v155; // ecx
	char v156; // cl
	int v157; // eax
	unsigned int v158; // ebx
	int v159; // r9d
	__int64 v160; // rdx
	char* v161; // rdx
	int v162; // eax
	int v163; // edx
	int v164; // r8d
	int v165; // edx
	unsigned int v166; // [rsp+30h] [rbp-50h] BYREF
	int v167; // [rsp+34h] [rbp-4Ch]
	int v168; // [rsp+38h] [rbp-48h]
	int v169; // [rsp+3Ch] [rbp-44h]
	int* v170; // [rsp+40h] [rbp-40h]
	int v172; // [rsp+A8h] [rbp+28h]
	unsigned int v173; // [rsp+B0h] [rbp+30h]
	unsigned int v174; // [rsp+B8h] [rbp+38h]

	v172 = a2;
	v2 = *(int**)(a1 + 40);
	v3 = a1;
	if (!v2 || !*(_QWORD*)(a1 + 16) || !*(_QWORD*)a1 && *(_DWORD*)(a1 + 8))
		return 4294967294i64;
	if (*v2 == 11)
		*v2 = 12;
	v4 = *(_DWORD*)(a1 + 24);
	v5 = *v2;
	v6 = *(int**)(a1 + 16);
	v7 = *(_DWORD*)(a1 + 8);
	v8 = *(int**)a1;
	v9 = v2[16];
	v10 = v2[17];
	v11 = 0;
	v170 = v6;
	v174 = v4;
	v169 = v7;
	v12 = v4;
	v167 = v4;
	v173 = 0;
	while (2)
	{
		switch (v5)
		{
		case 0:
			v13 = v2[2];
			if (!v13)
			{
				*v2 = 12;
				goto LABEL_136;
			}
			for (; v10 < 0x10; v9 += v15)
			{
				if (!v7)
					goto LABEL_158;
				v14 = v10;
				v10 += 8;
				v15 = *(unsigned __int8*)v8 << v14;
				--v7;
				v8 = (int*)((char*)v8 + 1);
			}
			if ((v13 & 2) != 0 && v9 == 35615)
			{
				v16 = sub_1401CD6C0(0, 0i64, 0);
				v2[6] = v16;
				LOWORD(v166) = -29921;
				v9 = 0;
				v10 = 0;
				v2[6] = sub_1401CD6D0(v16, (char*)&v166, 2u);
				*v2 = 1;
				goto LABEL_135;
			}
			v17 = *((_QWORD*)v2 + 4);
			v2[4] = 0;
			if (v17)
				*(_DWORD*)(v17 + 64) = -1;
			if ((v2[2] & 1) != 0
				&& (v9 >> 8) + ((unsigned __int8)v9 << 8) == 31 * (((v9 >> 8) + ((unsigned __int8)v9 << 8)) / 0x1F))
			{
				if ((v9 & 0xF) != 8)
				{
					*(_QWORD*)(v3 + 32) = aUnknownCompres;
					*v2 = 29;
					goto LABEL_136;
				}
				v18 = v2[10];
				v9 >>= 4;
				v10 -= 4;
				v19 = (v9 & 0xF) + 8;
				if (!v18)
				{
					v2[10] = v19;
				LABEL_25:
					v2[5] = 1 << v19;
					v20 = sub_1401CD3E0(0, 0i64, 0);
					v2[6] = v20;
					*(_DWORD*)(v3 + 76) = v20;
					v10 = 0;
					*v2 = ~BYTE1(v9) & 2 | 9;
					v9 = 0;
					goto LABEL_135;
				}
				if (v19 <= v18)
					goto LABEL_25;
				*(_QWORD*)(v3 + 32) = aInvalidWindowS;
				*v2 = 29;
			}
			else
			{
				*(_QWORD*)(v3 + 32) = aIncorrectHeade;
				*v2 = 29;
			}
			goto LABEL_136;
		case 1:
			if (v10 >= 0x10)
				goto LABEL_32;
			do
			{
				if (!v7)
					goto LABEL_158;
				v21 = v10;
				v10 += 8;
				v22 = *(unsigned __int8*)v8 << v21;
				--v7;
				v8 = (int*)((char*)v8 + 1);
				v9 += v22;
			} while (v10 < 0x10);
		LABEL_32:
			v2[4] = v9;
			if ((_BYTE)v9 == 8)
			{
				if ((v9 & 0xE000) != 0)
				{
					*(_QWORD*)(v3 + 32) = aUnknownHeaderF;
					*v2 = 29;
				}
				else
				{
					v23 = (int*)*((_QWORD*)v2 + 4);
					if (v23)
						*v23 = (v9 >> 8) & 1;
					if ((v2[4] & 0x200) != 0)
					{
						v24 = v2[6];
						LOWORD(v166) = v9;
						v2[6] = sub_1401CD6D0(v24, (char*)&v166, 2u);
					}
					v9 = 0;
					v10 = 0;
					*v2 = 2;
					do
					{
					LABEL_42:
						if (!v7)
							goto LABEL_158;
						v25 = v10;
						v10 += 8;
						v26 = *(unsigned __int8*)v8 << v25;
						--v7;
						v8 = (int*)((char*)v8 + 1);
						v9 += v26;
					} while (v10 < 0x20);
				LABEL_44:
					v27 = *((_QWORD*)v2 + 4);
					if (v27)
						*(_DWORD*)(v27 + 4) = v9;
					if ((v2[4] & 0x200) != 0)
					{
						v28 = v2[6];
						v166 = v9;
						v2[6] = sub_1401CD6D0(v28, (char*)&v166, 4u);
					}
					v9 = 0;
					v10 = 0;
					*v2 = 3;
					do
					{
					LABEL_50:
						if (!v7)
							goto LABEL_158;
						v29 = v10;
						v10 += 8;
						v30 = *(unsigned __int8*)v8 << v29;
						--v7;
						v8 = (int*)((char*)v8 + 1);
						v9 += v30;
					} while (v10 < 0x10);
				LABEL_52:
					v31 = *((_QWORD*)v2 + 4);
					if (v31)
					{
						*(_DWORD*)(v31 + 8) = (unsigned __int8)v9;
						*(_DWORD*)(*((_QWORD*)v2 + 4) + 12i64) = v9 >> 8;
					}
					if ((v2[4] & 0x200) != 0)
					{
						v32 = v2[6];
						LOWORD(v166) = v9;
						v2[6] = sub_1401CD6D0(v32, (char*)&v166, 2u);
					}
					v9 = 0;
					v10 = 0;
					*v2 = 4;
				LABEL_57:
					if ((v2[4] & 0x400) != 0)
					{
						if (v10 < 0x10)
						{
							while (v7)
							{
								v33 = v10;
								v10 += 8;
								v34 = *(unsigned __int8*)v8 << v33;
								--v7;
								v8 = (int*)((char*)v8 + 1);
								v9 += v34;
								if (v10 >= 0x10)
									goto LABEL_61;
							}
							goto LABEL_158;
						}
					LABEL_61:
						v35 = *((_QWORD*)v2 + 4);
						v2[18] = v9;
						if (v35)
							*(_DWORD*)(v35 + 24) = v9;
						if ((v2[4] & 0x200) != 0)
						{
							v36 = v2[6];
							LOWORD(v166) = v9;
							v2[6] = sub_1401CD6D0(v36, (char*)&v166, 2u);
						}
						v9 = 0;
						v10 = 0;
					}
					else
					{
						v37 = *((_QWORD*)v2 + 4);
						if (v37)
							*(_QWORD*)(v37 + 16) = 0i64;
					}
					*v2 = 5;
				LABEL_69:
					if ((v2[4] & 0x400) != 0)
					{
						v38 = v2[18];
						v39 = v38;
						if (v38 > v7)
							v39 = v7;
						if (v39)
						{
							v40 = *((_QWORD*)v2 + 4);
							if (v40)
							{
								v41 = *(_QWORD*)(v40 + 16);
								if (v41)
								{
									v42 = *(_DWORD*)(v40 + 24) - v38;
									v43 = *(_DWORD*)(v40 + 28);
									if (v39 + v42 <= v43)
										v44 = v39;
									else
										v44 = v43 - v42;
									sub_1407DB590((int*)(v41 + v42), v8, v44);
								}
							}
							if ((v2[4] & 0x200) != 0)
							{
								if (v8)
									v45 = sub_1401CD6D0(v2[6], (char*)v8, v39);
								else
									v45 = 0;
								v2[6] = v45;
							}
							v7 -= v39;
							v8 = (int*)((char*)v8 + v39);
							v2[18] -= v39;
						}
						if (v2[18])
							goto LABEL_158;
						v11 = 0;
					}
					v2[18] = 0;
					*v2 = 6;
				LABEL_88:
					if ((v2[4] & 0x800) != 0)
					{
						if (!v7)
							goto LABEL_158;
						do
						{
							v46 = v11++;
							v47 = *((unsigned __int8*)v8 + v46);
							v48 = *((_QWORD*)v2 + 4);
							if (v48)
							{
								v49 = *(_QWORD*)(v48 + 32);
								if (v49)
								{
									v50 = (unsigned int)v2[18];
									if ((unsigned int)v50 < *(_DWORD*)(v48 + 40))
									{
										*(_BYTE*)(v50 + v49) = v47;
										++v2[18];
									}
								}
							}
						} while (v47 && v11 < v7);
						if ((v2[4] & 0x200) != 0)
						{
							if (v8)
								v51 = sub_1401CD6D0(v2[6], (char*)v8, v11);
							else
								v51 = 0;
							v2[6] = v51;
						}
						v7 -= v11;
						v8 = (int*)((char*)v8 + v11);
						if (v47)
							goto LABEL_158;
						v11 = 0;
					}
					else
					{
						v52 = *((_QWORD*)v2 + 4);
						if (v52)
							*(_QWORD*)(v52 + 32) = 0i64;
					}
					v2[18] = 0;
					*v2 = 7;
				LABEL_106:
					if ((v2[4] & 0x1000) != 0)
					{
						if (!v7)
							goto LABEL_158;
						do
						{
							v53 = v11++;
							v54 = *((unsigned __int8*)v8 + v53);
							v55 = *((_QWORD*)v2 + 4);
							if (v55)
							{
								v56 = *(_QWORD*)(v55 + 48);
								if (v56)
								{
									v57 = (unsigned int)v2[18];
									if ((unsigned int)v57 < *(_DWORD*)(v55 + 56))
									{
										*(_BYTE*)(v57 + v56) = v54;
										++v2[18];
									}
								}
							}
						} while (v54 && v11 < v7);
						if ((v2[4] & 0x200) != 0)
						{
							if (v8)
								v58 = sub_1401CD6D0(v2[6], (char*)v8, v11);
							else
								v58 = 0;
							v2[6] = v58;
						}
						v7 -= v11;
						v8 = (int*)((char*)v8 + v11);
						if (v54)
							goto LABEL_158;
					}
					else
					{
						v59 = *((_QWORD*)v2 + 4);
						if (v59)
							*(_QWORD*)(v59 + 48) = 0i64;
					}
					v3 = a1;
					v6 = v170;
					v4 = v174;
					*v2 = 8;
				LABEL_124:
					if ((v2[4] & 0x200) == 0)
						goto LABEL_131;
					if (v10 < 0x10)
					{
						while (v7)
						{
							v60 = v10;
							v10 += 8;
							v61 = *(unsigned __int8*)v8 << v60;
							--v7;
							v8 = (int*)((char*)v8 + 1);
							v9 += v61;
							if (v10 >= 0x10)
								goto LABEL_128;
						}
						goto LABEL_158;
					}
				LABEL_128:
					if (v9 == *((unsigned __int16*)v2 + 12))
					{
						v9 = 0;
						v10 = 0;
					LABEL_131:
						v62 = *((_QWORD*)v2 + 4);
						if (v62)
						{
							*(_DWORD*)(v62 + 60) = (v2[4] >> 9) & 1;
							*(_DWORD*)(*((_QWORD*)v2 + 4) + 64i64) = 1;
						}
						v63 = sub_1401CD6C0(0, 0i64, 0);
						v2[6] = v63;
						*(_DWORD*)(v3 + 76) = v63;
					LABEL_134:
						*v2 = 11;
						goto LABEL_135;
					}
					*(_QWORD*)(v3 + 32) = aHeaderCrcMisma;
					*v2 = 29;
				}
			}
			else
			{
				*(_QWORD*)(v3 + 32) = aUnknownCompres_0;
				*v2 = 29;
			}
			goto LABEL_136;
		case 2:
			if (v10 < 0x20)
				goto LABEL_42;
			goto LABEL_44;
		case 3:
			if (v10 < 0x10)
				goto LABEL_50;
			goto LABEL_52;
		case 4:
			goto LABEL_57;
		case 5:
			goto LABEL_69;
		case 6:
			goto LABEL_88;
		case 7:
			goto LABEL_106;
		case 8:
			goto LABEL_124;
		case 9:
			if (v10 >= 0x20)
				goto LABEL_141;
			do
			{
				if (!v7)
					goto LABEL_158;
				v64 = v10;
				v10 += 8;
				v65 = *(unsigned __int8*)v8 << v64;
				--v7;
				v8 = (int*)((char*)v8 + 1);
				v9 += v65;
			} while (v10 < 0x20);
		LABEL_141:
			v10 = 0;
			v66 = HIBYTE(v9) + (((v9 << 16) + (v9 & 0xFF00)) << 8) + ((v9 >> 8) & 0xFF00);
			v9 = 0;
			v2[6] = v66;
			*(_DWORD*)(v3 + 76) = v66;
			*v2 = 10;
		LABEL_142:
			if (!v2[3])
			{
				*(_QWORD*)(v3 + 16) = v6;
				*(_DWORD*)(v3 + 24) = v4;
				*(_QWORD*)v3 = v8;
				*(_DWORD*)(v3 + 8) = v7;
				result = 2i64;
				v2[16] = v9;
				v2[17] = v10;
				return result;
			}
			v67 = sub_1401CD3E0(0, 0i64, 0);
			v6 = v170;
			v4 = v174;
			a2 = v172;
			v2[6] = v67;
			*(_DWORD*)(v3 + 76) = v67;
			*v2 = 11;
		LABEL_144:
			if ((unsigned int)(a2 - 5) <= 1)
				goto LABEL_158;
		LABEL_145:
			if (v2[1])
			{
				*v2 = 26;
				v68 = v10 & 7;
				v9 >>= v68;
				v10 -= v68;
				goto LABEL_136;
			}
			if (v10 < 3)
			{
				while (v7)
				{
					v69 = v10;
					v10 += 8;
					v70 = *(unsigned __int8*)v8 << v69;
					--v7;
					v8 = (int*)((char*)v8 + 1);
					v9 += v70;
					if (v10 >= 3)
						goto LABEL_150;
				}
				goto LABEL_158;
			}
		LABEL_150:
			v71 = v9;
			v72 = v9 >> 1;
			v73 = v10 - 1;
			v2[1] = v71 & 1;
			if ((v72 & 3) != 0)
			{
				switch (v72 & 3)
				{
				case 1u:
					v2[26] = 9;
					v2[27] = 5;
					*((_QWORD*)v2 + 11) = "`\a";
					*v2 = 19;
					*((_QWORD*)v2 + 12) = &unk_140A45D90;
					if (a2 == 6)
					{
						v9 = v72 >> 2;
						v10 = v73 - 2;
						goto LABEL_158;
					}
					break;
				case 2u:
					v9 = v72 >> 2;
					*v2 = 16;
					v10 = v73 - 2;
					goto LABEL_136;
				case 3u:
					v9 = v72 >> 2;
					v10 = v73 - 2;
					*(_QWORD*)(v3 + 32) = aInvalidBlockTy;
					*v2 = 29;
					goto LABEL_136;
				}
			}
			else
			{
				*v2 = 13;
			}
			v9 = v72 >> 2;
			v10 = v73 - 2;
			goto LABEL_136;
		case 10:
			goto LABEL_142;
		case 11:
			goto LABEL_144;
		case 12:
			goto LABEL_145;
		case 13:
			v79 = v10 & 7;
			v10 -= v79;
			v9 >>= v79;
			if (v10 >= 0x20)
				goto LABEL_173;
			do
			{
				if (!v7)
					goto LABEL_158;
				v80 = v10;
				v10 += 8;
				v81 = *(unsigned __int8*)v8 << v80;
				--v7;
				v8 = (int*)((char*)v8 + 1);
				v9 += v81;
			} while (v10 < 0x20);
		LABEL_173:
			if ((unsigned __int16)v9 == ~v9 >> 16)
			{
				v2[18] = (unsigned __int16)v9;
				v9 = 0;
				v10 = 0;
				*v2 = 14;
				if (a2 == 6)
					goto LABEL_158;
			LABEL_176:
				*v2 = 15;
			LABEL_177:
				v82 = v2[18];
				if (v82)
				{
					if (v82 > v7)
						v82 = v7;
					if (v82 > v4)
						v82 = v4;
					if (!v82)
						goto LABEL_158;
					sub_1407DB590(v6, v8, v82);
					v4 = v174 - v82;
					v7 -= v82;
					v6 = (int*)((char*)v170 + v82);
					v8 = (int*)((char*)v8 + v82);
					v2[18] -= v82;
					v3 = a1;
					v174 = v4;
					v170 = v6;
				}
				else
				{
					v3 = a1;
					*v2 = 11;
				}
			}
			else
			{
				*(_QWORD*)(v3 + 32) = aInvalidStoredB;
				*v2 = 29;
			}
			goto LABEL_136;
		case 14:
			goto LABEL_176;
		case 15:
			goto LABEL_177;
		case 16:
			if (v10 >= 0xE)
				goto LABEL_188;
			do
			{
				if (!v7)
					goto LABEL_158;
				v83 = v10;
				v10 += 8;
				v84 = *(unsigned __int8*)v8 << v83;
				--v7;
				v8 = (int*)((char*)v8 + 1);
				v9 += v84;
			} while (v10 < 0xE);
		LABEL_188:
			v85 = v9;
			v86 = v9 >> 5;
			v10 -= 14;
			v87 = v86;
			v86 >>= 5;
			v88 = (v85 & 0x1F) + 257;
			v89 = v86 & 0xF;
			v90 = (v87 & 0x1F) + 1;
			v9 = v86 >> 4;
			v2[29] = v88;
			v2[30] = v90;
			v2[28] = v89 + 4;
			if (v88 > 0x11E || v90 > 0x1E)
			{
				*(_QWORD*)(v3 + 32) = aTooManyLengthO;
				*v2 = 29;
				goto LABEL_136;
			}
			v2[31] = 0;
			*v2 = 17;
		LABEL_191:
			if (v2[31] < (unsigned int)v2[28])
			{
				while (v10 >= 3)
				{
				LABEL_195:
					v10 -= 3;
					v93 = v9 & 7;
					v9 >>= 3;
					*((_WORD*)v2 + (unsigned __int16)word_140A45428[v2[31]++] + 68) = v93;
					if (v2[31] >= (unsigned int)v2[28])
						goto LABEL_196;
				}
				while (v7)
				{
					v91 = v10;
					v10 += 8;
					v92 = *(unsigned __int8*)v8 << v91;
					--v7;
					v8 = (int*)((char*)v8 + 1);
					v9 += v92;
					if (v10 >= 3)
						goto LABEL_195;
				}
				goto LABEL_158;
			}
		LABEL_196:
			while ((unsigned int)v2[31] < 0x13)
				*((_WORD*)v2 + (unsigned __int16)word_140A45428[v2[31]++] + 68) = 0;
			*((_QWORD*)v2 + 16) = v2 + 338;
			*((_QWORD*)v2 + 11) = v2 + 338;
			v2[26] = 7;
			v173 = sub_1401CDED0(
				0,
				(unsigned __int16*)v2 + 68,
				0x13u,
				(_DWORD**)v2 + 16,
				(unsigned int*)v2 + 26,
				(char*)v2 + 776);
			if (v173)
			{
				*(_QWORD*)(v3 + 32) = aInvalidCodeLen;
				*v2 = 29;
				goto LABEL_135;
			}
			v2[31] = 0;
			*v2 = 18;
		LABEL_202:
			v94 = v2[31];
			if (v94 < v2[29] + v2[30])
			{
				while (1)
				{
					v95 = *((_QWORD*)v2 + 11);
					v96 = (1 << v2[26]) - 1;
					v168 = *(_DWORD*)(v95 + 4i64 * (v96 & v9));
					v97 = v168;
					if (BYTE1(v168) > v10)
						break;
				LABEL_206:
					if (HIWORD(v97) >= 0x10u)
					{
						if (HIWORD(v97) == 16)
						{
							v100 = BYTE1(v97) + 2;
							if (v10 < v100)
							{
								while (v7)
								{
									v101 = v10;
									v10 += 8;
									v102 = *(unsigned __int8*)v8 << v101;
									--v7;
									v8 = (int*)((char*)v8 + 1);
									v9 += v102;
									if (v10 >= v100)
										goto LABEL_212;
								}
								goto LABEL_158;
							}
						LABEL_212:
							v9 >>= SBYTE1(v168);
							v10 -= BYTE1(v168);
							if (!v94)
							{
								*(_QWORD*)(v3 + 32) = aInvalidBitLeng;
								*v2 = 29;
								goto LABEL_135;
							}
							v103 = v9;
							v9 >>= 2;
							v104 = *((_WORD*)v2 + v94 + 67);
							v105 = (v103 & 3) + 3;
							v10 -= 2;
						}
						else
						{
							if (HIWORD(v168) == 17)
							{
								if (v10 < (unsigned int)BYTE1(v168) + 3)
								{
									while (v7)
									{
										v106 = v10;
										v10 += 8;
										v107 = *(unsigned __int8*)v8 << v106;
										--v7;
										v8 = (int*)((char*)v8 + 1);
										v9 += v107;
										if (v10 >= (unsigned int)BYTE1(v168) + 3)
											goto LABEL_218;
									}
									goto LABEL_158;
								}
							LABEL_218:
								v108 = -3;
								v109 = v9 >> SBYTE1(v168);
								v105 = (v109 & 7) + 3;
								v9 = v109 >> 3;
							}
							else
							{
								if (v10 < (unsigned int)BYTE1(v168) + 7)
								{
									while (v7)
									{
										v110 = v10;
										v10 += 8;
										v111 = *(unsigned __int8*)v8 << v110;
										--v7;
										v8 = (int*)((char*)v8 + 1);
										v9 += v111;
										if (v10 >= (unsigned int)BYTE1(v168) + 7)
											goto LABEL_222;
									}
									goto LABEL_158;
								}
							LABEL_222:
								v108 = -7;
								v112 = v9 >> SBYTE1(v168);
								v105 = (v112 & 0x7F) + 11;
								v9 = v112 >> 7;
							}
							v104 = 0;
							v10 += v108 - BYTE1(v168);
						}
						if (v94 + v105 > v2[29] + v2[30])
						{
							*(_QWORD*)(v3 + 32) = aInvalidBitLeng_0;
							*v2 = 29;
							goto LABEL_135;
						}
						for (; v105; --v105)
							*((_WORD*)v2 + (unsigned int)v2[31]++ + 68) = v104;
					}
					else
					{
						*((_WORD*)v2 + v94 + 68) = HIWORD(v97);
						v9 >>= SBYTE1(v97);
						v10 -= BYTE1(v97);
						++v2[31];
					}
					v94 = v2[31];
					if (v94 >= v2[29] + v2[30])
						goto LABEL_228;
				}
				while (v7)
				{
					v98 = v10;
					v10 += 8;
					v99 = *(unsigned __int8*)v8 << v98;
					--v7;
					v8 = (int*)((char*)v8 + 1);
					v9 += v99;
					v168 = *(_DWORD*)(v95 + 4i64 * (v96 & v9));
					v97 = v168;
					if (BYTE1(v168) <= v10)
						goto LABEL_206;
				}
				goto LABEL_158;
			}
		LABEL_228:
			if (*v2 == 29)
				goto LABEL_135;
			if (!*((_WORD*)v2 + 324))
			{
				*(_QWORD*)(v3 + 32) = aInvalidCodeMis;
				*v2 = 29;
				goto LABEL_135;
			}
			v113 = v2[29];
			*((_QWORD*)v2 + 16) = v2 + 338;
			*((_QWORD*)v2 + 11) = v2 + 338;
			v2[26] = 9;
			v173 = sub_1401CDED0(
				1,
				(unsigned __int16*)v2 + 68,
				v113,
				(_DWORD**)v2 + 16,
				(unsigned int*)v2 + 26,
				(char*)v2 + 776);
			if (v173)
			{
				v3 = a1;
				*(_QWORD*)(a1 + 32) = aInvalidLiteral;
				*v2 = 29;
			LABEL_135:
				v6 = v170;
				v4 = v174;
				goto LABEL_136;
			}
			v114 = v2[30];
			*((_QWORD*)v2 + 12) = *((_QWORD*)v2 + 16);
			v115 = (unsigned int)v2[29];
			v2[27] = 6;
			v74 = sub_1401CDED0(
				2,
				(unsigned __int16*)v2 + v115 + 68,
				v114,
				(_DWORD**)v2 + 16,
				(unsigned int*)v2 + 27,
				(char*)v2 + 776);
			v173 = v74;
			if (v74)
			{
				v3 = a1;
				*(_QWORD*)(a1 + 32) = aInvalidDistanc;
				*v2 = 29;
				goto LABEL_135;
			}
			v75 = v172;
			*v2 = 19;
			if (v172 == 6)
				goto LABEL_160;
			v3 = a1;
			v6 = v170;
			v12 = v167;
			v4 = v174;
		LABEL_239:
			*v2 = 20;
		LABEL_240:
			if (v7 >= 6 && v4 >= 0x102)
			{
				*(_QWORD*)(v3 + 16) = v6;
				*(_DWORD*)(v3 + 24) = v4;
				*(_QWORD*)v3 = v8;
				*(_DWORD*)(v3 + 8) = v7;
				v2[16] = v9;
				v2[17] = v10;
				sub_1401CD9F0((__int64*)v3, v12);
				v76 = *v2 == 11;
				v6 = *(int**)(v3 + 16);
				v4 = *(_DWORD*)(v3 + 24);
				v8 = *(int**)v3;
				v7 = *(_DWORD*)(v3 + 8);
				v9 = v2[16];
				v10 = v2[17];
				v170 = v6;
				v174 = v4;
				if (v76)
					v2[1783] = -1;
				goto LABEL_136;
			}
			v116 = *((_QWORD*)v2 + 11);
			v117 = 1 << v2[26];
			v2[1783] = 0;
			v118 = v117 - 1;
			v119 = *(_DWORD*)(v116 + 4i64 * (v118 & v9));
			if (BYTE1(v119) > v10)
			{
				while (v7)
				{
					v120 = v10;
					v10 += 8;
					v121 = *(unsigned __int8*)v8 << v120;
					--v7;
					v8 = (int*)((char*)v8 + 1);
					v9 += v121;
					v119 = *(_DWORD*)(v116 + 4i64 * (v118 & v9));
					if (BYTE1(v119) <= v10)
						goto LABEL_247;
				}
				goto LABEL_158;
			}
		LABEL_247:
			if ((_BYTE)v119 && (v119 & 0xF0) == 0)
			{
				v168 = v119;
				v122 = BYTE1(v119);
				v123 = v119 >> 8;
				v124 = v119;
				v119 = *(_DWORD*)(v116 + 4i64 * (HIWORD(v119) + ((v9 & ((1 << (BYTE1(v119) + v119)) - 1)) >> SBYTE1(v119))));
				if ((unsigned __int8)v123 + (unsigned int)BYTE1(v119) > v10)
				{
					while (v7)
					{
						v9 += *(unsigned __int8*)v8 << v10;
						v10 += 8;
						--v7;
						v8 = (int*)((char*)v8 + 1);
						v119 = *(_DWORD*)(v116 + 4i64 * (HIWORD(v168) + ((v9 & ((1 << (v122 + v124)) - 1)) >> v122)));
						if (v122 + (unsigned int)BYTE1(v119) <= v10)
							goto LABEL_252;
					}
					goto LABEL_158;
				}
			LABEL_252:
				v9 >>= v122;
				v10 -= v122;
				v2[1783] = v122;
			}
			v2[1783] += BYTE1(v119);
			v9 >>= SBYTE1(v119);
			v10 -= BYTE1(v119);
			v2[18] = HIWORD(v119);
			if (!(_BYTE)v119)
			{
				*v2 = 25;
				goto LABEL_135;
			}
			if ((v119 & 0x20) != 0)
			{
				v2[1783] = -1;
				goto LABEL_134;
			}
			if ((v119 & 0x40) != 0)
			{
				*(_QWORD*)(v3 + 32) = aInvalidLiteral_0;
				*v2 = 29;
				goto LABEL_135;
			}
			*v2 = 21;
			v2[20] = v119 & 0xF;
		LABEL_260:
			v125 = v2[20];
			if (v125)
			{
				if (v10 < v125)
				{
					while (v7)
					{
						v126 = v10;
						v10 += 8;
						v127 = *(unsigned __int8*)v8 << v126;
						--v7;
						v8 = (int*)((char*)v8 + 1);
						v9 += v127;
						if (v10 >= v125)
							goto LABEL_264;
					}
					goto LABEL_158;
				}
			LABEL_264:
				v10 -= v125;
				v128 = v9 & ((1 << v125) - 1);
				v9 >>= v125;
				v2[18] += v128;
				v2[1783] += v125;
			}
			v129 = v2[18];
			*v2 = 22;
			v2[1784] = v129;
		LABEL_266:
			v130 = *((_QWORD*)v2 + 12);
			v131 = (1 << v2[27]) - 1;
			v132 = *(_DWORD*)(v130 + 4i64 * (v131 & v9));
			if (BYTE1(v132) > v10)
			{
				while (v7)
				{
					v133 = v10;
					v10 += 8;
					v134 = *(unsigned __int8*)v8 << v133;
					--v7;
					v8 = (int*)((char*)v8 + 1);
					v9 += v134;
					v132 = *(_DWORD*)(v130 + 4i64 * (v131 & v9));
					if (BYTE1(v132) <= v10)
						goto LABEL_269;
				}
				goto LABEL_158;
			}
		LABEL_269:
			if ((v132 & 0xF0) == 0)
			{
				v168 = v132;
				v135 = BYTE1(v132);
				v136 = v132 >> 8;
				v137 = v132;
				v132 = *(_DWORD*)(v130 + 4i64 * (HIWORD(v132) + ((v9 & ((1 << (BYTE1(v132) + v132)) - 1)) >> SBYTE1(v132))));
				if ((unsigned __int8)v136 + (unsigned int)BYTE1(v132) > v10)
				{
					while (v7)
					{
						v9 += *(unsigned __int8*)v8 << v10;
						v10 += 8;
						--v7;
						v8 = (int*)((char*)v8 + 1);
						v132 = *(_DWORD*)(v130 + 4i64 * (HIWORD(v168) + ((v9 & ((1 << (v135 + v137)) - 1)) >> v135)));
						if (v135 + (unsigned int)BYTE1(v132) <= v10)
							goto LABEL_273;
					}
					goto LABEL_158;
				}
			LABEL_273:
				v9 >>= v135;
				v10 -= v135;
				v2[1783] += v135;
			}
			v6 = v170;
			v4 = v174;
			v2[1783] += BYTE1(v132);
			v9 >>= SBYTE1(v132);
			v10 -= BYTE1(v132);
			if ((v132 & 0x40) != 0)
			{
				*(_QWORD*)(v3 + 32) = aInvalidDistanc_0;
				*v2 = 29;
				goto LABEL_136;
			}
			v12 = v167;
			*v2 = 23;
			v2[19] = HIWORD(v132);
			v2[20] = v132 & 0xF;
		LABEL_277:
			v138 = v2[20];
			if (v138)
			{
				if (v10 < v138)
				{
					while (v7)
					{
						v139 = v10;
						v10 += 8;
						v140 = *(unsigned __int8*)v8 << v139;
						--v7;
						v8 = (int*)((char*)v8 + 1);
						v9 += v140;
						if (v10 >= v138)
							goto LABEL_281;
					}
					goto LABEL_158;
				}
			LABEL_281:
				v10 -= v138;
				v141 = v9 & ((1 << v138) - 1);
				v9 >>= v138;
				v2[19] += v141;
				v2[1783] += v138;
			}
			*v2 = 24;
		LABEL_283:
			if (!v4)
				goto LABEL_158;
			v142 = (unsigned int)v2[19];
			if ((unsigned int)v142 <= v12 - v4)
			{
				v146 = v2[18];
				v147 = (char*)v6 - v142;
			LABEL_294:
				v143 = v146;
				goto LABEL_295;
			}
			v143 = v142 - (v12 - v4);
			if (v143 > v2[12] && v2[1782])
			{
				*(_QWORD*)(v3 + 32) = aInvalidDistanc_1;
				*v2 = 29;
				goto LABEL_136;
			}
			v144 = v2[13];
			if (v143 <= v144)
			{
				v145 = v144 - v143;
			}
			else
			{
				v143 -= v144;
				v145 = v2[11] - v143;
			}
			v146 = v2[18];
			v147 = (char*)(*((_QWORD*)v2 + 7) + v145);
			if (v143 > v146)
				goto LABEL_294;
		LABEL_295:
			if (v143 > v4)
				v143 = v4;
			v4 -= v143;
			v148 = v147 - (char*)v6;
			v174 = v4;
			v2[18] = v146 - v143;
			do
			{
				v149 = *((_BYTE*)v6 + v148);
				v6 = (int*)((char*)v6 + 1);
				*((_BYTE*)v6 - 1) = v149;
				--v143;
			} while (v143);
			v170 = v6;
			if (!v2[18])
				*v2 = 20;
			goto LABEL_136;
		case 17:
			goto LABEL_191;
		case 18:
			goto LABEL_202;
		case 19:
			goto LABEL_239;
		case 20:
			goto LABEL_240;
		case 21:
			goto LABEL_260;
		case 22:
			goto LABEL_266;
		case 23:
			goto LABEL_277;
		case 24:
			goto LABEL_283;
		case 25:
			if (!v4)
				goto LABEL_158;
			v6 = (int*)((char*)v6 + 1);
			--v4;
			*((_BYTE*)v6 - 1) = *((_BYTE*)v2 + 72);
			v174 = v4;
			v170 = v6;
			*v2 = 20;
			goto LABEL_136;
		case 26:
			if (!v2[2])
				goto LABEL_320;
			if (v10 >= 0x20)
				goto LABEL_307;
			do
			{
				if (!v7)
					goto LABEL_158;
				v150 = v10;
				v10 += 8;
				v151 = *(unsigned __int8*)v8 << v150;
				--v7;
				v8 = (int*)((char*)v8 + 1);
				v9 += v151;
			} while (v10 < 0x20);
		LABEL_307:
			v152 = v12 - v4;
			*(_DWORD*)(v3 + 28) += v152;
			v2[7] += v152;
			if (!v152)
				goto LABEL_315;
			if (v2[4])
			{
				v153 = (char*)v6 - v152;
				if (!v153)
				{
					v154 = 0;
					goto LABEL_314;
				}
				v154 = sub_1401CD6D0(v2[6], v153, v152);
			}
			else
			{
				v154 = sub_1401CD3E0(v2[6], (unsigned __int8*)v6 - v152, v152);
			}
			v4 = v174;
			v6 = v170;
		LABEL_314:
			v2[6] = v154;
			*(_DWORD*)(v3 + 76) = v154;
		LABEL_315:
			v76 = v2[4] == 0;
			v167 = v4;
			v155 = v9;
			if (v76)
				v155 = HIBYTE(v9) + ((v9 >> 8) & 0xFF00) + (((v9 << 16) + (v9 & 0xFF00)) << 8);
			if (v155 != v2[6])
			{
				*(_QWORD*)(v3 + 32) = aIncorrectDataC;
				*v2 = 29;
				goto LABEL_136;
			}
			v9 = 0;
			v10 = 0;
		LABEL_320:
			*v2 = 27;
		LABEL_321:
			if (!v2[2] || !v2[4])
				goto LABEL_330;
			if (v10 >= 0x20)
			{
			LABEL_326:
				if (v9 == v2[7])
				{
					v9 = 0;
					v10 = 0;
				LABEL_330:
					*v2 = 28;
				LABEL_331:
					v74 = 1;
					goto LABEL_159;
				}
				*(_QWORD*)(v3 + 32) = aIncorrectLengt;
				*v2 = 29;
			LABEL_136:
				v5 = *v2;
				if ((unsigned int)*v2 > 0x1E)
					return 4294967294i64;
				v12 = v167;
				a2 = v172;
				v11 = 0;
				continue;
			}
			while (v7)
			{
				v156 = v10;
				v10 += 8;
				v157 = *(unsigned __int8*)v8 << v156;
				--v7;
				v8 = (int*)((char*)v8 + 1);
				v9 += v157;
				if (v10 >= 0x20)
					goto LABEL_326;
			}
		LABEL_158:
			v74 = v173;
		LABEL_159:
			v75 = v172;
		LABEL_160:
			*(_QWORD*)(a1 + 16) = v170;
			*(_QWORD*)a1 = v8;
			*(_DWORD*)(a1 + 24) = v174;
			*(_DWORD*)(a1 + 8) = v7;
			v76 = v2[11] == 0;
			v2[17] = v10;
			v77 = v167;
			v2[16] = v9;
			if (v76 && (v77 == *(_DWORD*)(a1 + 24) || *v2 >= 29 || *v2 >= 26 && v75 == 4)
				|| !(unsigned int)sub_1401ABCA0(a1, *(_QWORD*)(a1 + 16), v77 - *(_DWORD*)(a1 + 24)))
			{
				v158 = v77 - *(_DWORD*)(a1 + 24);
				v159 = v169 - *(_DWORD*)(a1 + 8);
				*(_DWORD*)(a1 + 28) += v158;
				*(_DWORD*)(a1 + 12) += v159;
				v2[7] += v158;
				v76 = v2[2] == 0;
				v169 = v159;
				if (v76 || !v158)
					goto LABEL_342;
				v160 = *(_QWORD*)(a1 + 16);
				if (v2[4])
				{
					v161 = (char*)(v160 - v158);
					if (!v161)
					{
						v162 = 0;
					LABEL_341:
						v2[6] = v162;
						*(_DWORD*)(a1 + 76) = v162;
					LABEL_342:
						v163 = *v2;
						if (*v2 == 19 || v163 == 14)
							v164 = 256;
						else
							v164 = 0;
						v76 = v163 == 11;
						v165 = 0;
						if (v76)
							v165 = 128;
						*(_DWORD*)(a1 + 72) = v2[17] + v164 + (v2[1] != 0 ? 0x40 : 0) + v165;
						if ((!v159 && !v158 || v172 == 4) && !v74)
							return (unsigned int)-5;
						return v74;
					}
					v162 = sub_1401CD6D0(v2[6], v161, v158);
				}
				else
				{
					v162 = sub_1401CD3E0(v2[6], (unsigned __int8*)(v160 - v158), v158);
				}
				v159 = v169;
				goto LABEL_341;
			}
			*v2 = 30;
			return 4294967292i64;
		case 27:
			goto LABEL_321;
		case 28:
			goto LABEL_331;
		case 29:
			v74 = -3;
			goto LABEL_159;
		case 30:
			return 4294967292i64;
		default:
			return 4294967294i64;
		}
	}
}
// 140A45428: using guessed type __int16 word_140A45428[20];

