#include "../winhttp.h"

//----- (00000001402B0970) ----------------------------------------------------
__int64 __fastcall sub_1402B0970(__int64 a1, __int64* a2)
{
	__int64 v2; // rax
	signed int v4; // ebx
	int v6; // eax
	int v7; // edi
	__int64 v8; // rbx
	unsigned __int64 v9; // rsi
	__int64 v10; // rax
	signed int v11; // r14d
	__int64 v12; // rbx
	unsigned __int64 v13; // rsi
	__int64 v14; // rax
	__int64 v15; // rbx
	unsigned __int64 v16; // rsi
	char* v17; // rax
	int v18; // eax
	int v19; // ecx
	unsigned __int64 v20; // r11
	unsigned __int64 v21; // r13
	__int64 v22; // rsi
	__int64 v23; // r8
	unsigned __int64 v24; // r12
	unsigned __int64 v25; // rax
	int v26; // eax
	__int64 v27; // r15
	unsigned __int64 v28; // rcx
	unsigned __int64 v29; // rcx
	unsigned __int64 v30; // rcx
	unsigned __int64 v31; // r12
	unsigned __int8 v32; // cl
	unsigned __int64 v33; // rax
	unsigned __int64 v34; // rbx
	unsigned int* v35; // r8
	unsigned __int64 v36; // rax
	unsigned __int64 v37; // rcx
	unsigned __int8 v38; // dl
	unsigned int v39; // eax
	unsigned __int64 v40; // rax
	unsigned __int64 v41; // rcx
	unsigned __int8 v42; // dl
	unsigned int v43; // eax
	unsigned __int64 v44; // rax
	unsigned __int64 v45; // rcx
	unsigned __int8 v46; // dl
	unsigned int v47; // eax
	unsigned __int64 v48; // r14
	unsigned __int64 v49; // r11
	unsigned __int64 v50; // r13
	unsigned __int64 v51; // r12
	__int64 v52; // rax
	unsigned __int64 v53; // r11
	unsigned __int64 v54; // rcx
	unsigned __int64 v55; // rax
	unsigned __int64 v56; // r15
	__int64 v57; // r9
	__int64 v58; // r10
	__int64 v59; // r8
	unsigned __int64 v60; // rdx
	__int64 v61; // rax
	char v62; // cl
	__int64 v63; // rax
	__int64 v64; // r8
	int* v65; // rax
	unsigned __int64 v66; // r13
	unsigned __int64 v67; // rsi
	int v68; // eax
	bool v69; // zf
	__int64 v70; // rbx
	int* v71; // rax
	__int64 v72; // rsi
	_QWORD* v73; // rax
	int* v74; // rax
	__int64 v75; // rbx
	__int64 v76; // r8
	unsigned __int64 v77; // r11
	int* v78; // r14
	int v79; // r12d
	unsigned __int64 v80; // rcx
	unsigned __int64 v81; // r13
	__int64 v82; // rbx
	unsigned __int64 v83; // r15
	__int64 v84; // r11
	unsigned __int64 v85; // rsi
	__int64 v86; // rax
	__int64 v87; // rax
	unsigned __int64 v88; // rbx
	unsigned __int64 v89; // r9
	unsigned __int64 v90; // r10
	__int64 v91; // r11
	__int64 v92; // r14
	unsigned __int64 v93; // r8
	__int64 v94; // rcx
	unsigned __int64 v95; // rax
	unsigned __int64 v96; // rdx
	_QWORD* v97; // rdx
	__int64 v98; // rcx
	_QWORD* v99; // rcx
	__int64 v100; // r9
	__int64 v101; // rax
	int v102; // r14d
	__int64 v103; // rax
	int* v104; // rdx
	unsigned __int64 v105; // rbx
	__int64 v106; // r8
	__int64 v107; // r9
	unsigned __int64 v108; // rdx
	unsigned __int64 v109; // rax
	char v110; // cl
	unsigned __int64 v111; // rax
	unsigned __int64 v112; // rax
	int* v113; // rax
	__int64 v114; // rsi
	_QWORD* v115; // rax
	__int64 v116; // rdx
	unsigned __int64 v117; // r11
	__int64 v118; // r15
	unsigned __int64 v119; // r13
	unsigned __int64 v120; // r12
	__int64 v121; // r8
	__int64 v122; // r9
	unsigned __int64 v123; // rdx
	__int64 v124; // rax
	char v125; // cl
	__int64 v126; // rax
	__int64 v127; // rax
	__int64 v128; // rbx
	unsigned __int64 v129; // r14
	unsigned __int64 v130; // r9
	unsigned __int64 v131; // r8
	unsigned __int64 v132; // r10
	_QWORD* v133; // rcx
	int v134; // eax
	unsigned __int64 v135; // rax
	unsigned __int64 v136; // rdx
	unsigned __int64 v137; // rcx
	__int64 v138; // rcx
	int v139; // eax
	__int64* v140; // r10
	__int64 v141; // rax
	int v142; // ecx
	unsigned __int64 v143; // [rsp+40h] [rbp-C0h] BYREF
	unsigned __int64 v144; // [rsp+48h] [rbp-B8h]
	unsigned __int64 v145; // [rsp+50h] [rbp-B0h] BYREF
	unsigned __int64 v146; // [rsp+58h] [rbp-A8h]
	unsigned __int64 v147; // [rsp+60h] [rbp-A0h]
	__int64 v148; // [rsp+68h] [rbp-98h]
	unsigned __int64 v149; // [rsp+70h] [rbp-90h] BYREF
	__int64 v150; // [rsp+78h] [rbp-88h]
	unsigned __int64 v151; // [rsp+80h] [rbp-80h]
	int* v152; // [rsp+88h] [rbp-78h]
	__int64 v153; // [rsp+90h] [rbp-70h]
	__int64 v154; // [rsp+98h] [rbp-68h]
	unsigned __int64 v155; // [rsp+A0h] [rbp-60h]
	unsigned __int64 v156; // [rsp+A8h] [rbp-58h]
	__int64 v157; // [rsp+B0h] [rbp-50h]
	__int64 v158; // [rsp+B8h] [rbp-48h]
	__int64 v159[2]; // [rsp+C0h] [rbp-40h] BYREF
	unsigned __int64 v160; // [rsp+D0h] [rbp-30h] BYREF
	unsigned __int64 v161; // [rsp+D8h] [rbp-28h]
	unsigned __int64 v162; // [rsp+E0h] [rbp-20h]
	__int64 v163; // [rsp+E8h] [rbp-18h]
	unsigned __int64 v164; // [rsp+F0h] [rbp-10h]
	int v165; // [rsp+F8h] [rbp-8h]
	int v166; // [rsp+FCh] [rbp-4h]
	int v167; // [rsp+100h] [rbp+0h]
	int v168; // [rsp+104h] [rbp+4h]
	__int64 v169[2]; // [rsp+108h] [rbp+8h] BYREF
	unsigned __int64 v170; // [rsp+118h] [rbp+18h]
	unsigned __int64 v171[2]; // [rsp+120h] [rbp+20h] BYREF
	unsigned __int64 v172; // [rsp+130h] [rbp+30h]
	unsigned __int64 v173; // [rsp+138h] [rbp+38h]
	__int64 v174; // [rsp+140h] [rbp+40h]
	int v175; // [rsp+14Ch] [rbp+4Ch]
	int v176; // [rsp+150h] [rbp+50h]
	__int64 v177[8]; // [rsp+160h] [rbp+60h] BYREF
	int v178; // [rsp+1A4h] [rbp+A4h]
	__int64 v179; // [rsp+1A8h] [rbp+A8h]
	__int64 v180; // [rsp+1B0h] [rbp+B0h]

	v2 = *a2;
	v157 = a1;
	v4 = (*(__int64(__fastcall**)(__int64*, _QWORD))(v2 + 40))(a2, 0i64);
	if (v4 < 0)
	{
		v145 = 0x141DE72A0i64;
		sub_1401A3130(14, 2, &v145, (unsigned int)v4);
		return sub_1402B1940(a1, v4);
	}
	v6 = *(_DWORD*)(a1 + 104);
	v7 = 0;
	v177[0] = 0i64;
	v177[1] = 0i64;
	v179 = 0i64;
	v180 = 0i64;
	if (v6 == 1)
	{
		v15 = *(_QWORD*)(a1 + 352);
		v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
		v17 = (char*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 32i64))(v15);
		if (v17)
		{
			v11 = sub_1402B5280(v17, v16, v171, (__int64)v177);
			if (v11 >= 0)
				goto LABEL_16;
		}
		else
		{
			v11 = -2147024809;
		}
		v149 = 0x141DE7290i64;
		sub_1401A3130(14, 2, &v149, (unsigned int)v11);
		goto LABEL_284;
	}
	if (v6 == 2)
	{
		v12 = *(_QWORD*)(a1 + 352);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
		v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 32i64))(v12);
		if (!v14)
		{
			v11 = -2147024809;
			v145 = 0x141DE7370i64;
			sub_1401A3130(14, 2, &v145, 2147942487i64);
			goto LABEL_284;
		}
		v11 = sub_1402B6D30(v14, v13, v171, v177);
		if (v11 < 0)
		{
			v145 = 0x141DE7370i64;
			sub_1401A3130(14, 2, &v145, (unsigned int)v11);
			goto LABEL_284;
		}
		goto LABEL_16;
	}
	if ((unsigned int)(v6 - 3) > 2)
		goto LABEL_16;
	v8 = *(_QWORD*)(a1 + 352);
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
	v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 32i64))(v8);
	if (!v10)
	{
		v11 = -2147024809;
		v145 = 0x141DE7360i64;
		sub_1401A3130(14, 2, &v145, 2147942487i64);
		goto LABEL_284;
	}
	v11 = sub_1402B7CA0(v10, v9, v171, v177);
	if (v11 >= 0)
	{
	LABEL_16:
		v18 = sub_14027A000(v176);
		v19 = *(_DWORD*)(a1 + 72);
		v20 = v171[0];
		v21 = v171[1];
		v22 = v174;
		v23 = v18;
		if (v19 == 2)
			v21 = v171[0];
		v24 = 1i64;
		v25 = 1i64;
		if (v19 == 1)
			v24 = v172;
		if (v19 == 2)
			v25 = 6i64;
		*(_DWORD*)(a1 + 88) = v23;
		v146 = v25;
		v26 = *(_DWORD*)(a1 + 84);
		if ((v26 & 0x100) != 0)
		{
			v27 = 1i64;
		}
		else if ((v26 & 0x200) != 0 || !*(_DWORD*)(a1 + 80))
		{
			v27 = v22;
		}
		else
		{
			v28 = ((((((((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1)) >> 8) | ((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1)) >> 4) | ((((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1)) >> 8) | ((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1)) >> 2) | ((((((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1)) >> 8) | ((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1)) >> 4) | ((((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1)) >> 8) | ((((v20 - 1) >> 32) | (v20 - 1)) >> 16) | ((v20 - 1) >> 32) | (v20 - 1);
			v20 = (v28 | (v28 >> 1)) + 1;
			v29 = (v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16) | (((v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16)) >> 8) | (((v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16) | (((v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16)) >> 8)) >> 4) | (((v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16) | (((v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16)) >> 8) | (((v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16) | (((v21 - 1) | ((v21 - 1) >> 32) | (((v21 - 1) | ((v21 - 1) >> 32)) >> 16)) >> 8)) >> 4)) >> 2);
			v21 = (v29 | (v29 >> 1)) + 1;
			v30 = (v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16) | (((v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16)) >> 8) | (((v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16) | (((v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16)) >> 8)) >> 4) | (((v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16) | (((v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16)) >> 8) | (((v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16) | (((v24 - 1) | ((v24 - 1) >> 32) | (((v24 - 1) | ((v24 - 1) >> 32)) >> 16)) >> 8)) >> 4)) >> 2);
			v31 = v30 | (v30 >> 1);
			v32 = 0;
			v24 = v31 + 1;
			v33 = v20 | v21 | v24;
			if ((v33 & 0xFFFFFFFF00000000ui64) != 0)
			{
				v32 = 32;
				v33 >>= 32;
			}
			if ((v33 & 0xFFFF0000) != 0)
			{
				v32 += 16;
				v33 >>= 16;
			}
			if ((v33 & 0xFF00) != 0)
			{
				v32 += 8;
				v33 >>= 8;
			}
			if ((v33 & 0xF0) != 0)
			{
				v32 += 4;
				v33 >>= 4;
			}
			if ((v33 & 0xC) != 0)
			{
				v32 += 2;
				v33 >>= 2;
			}
			if ((v33 & 2) != 0)
				++v32;
			v27 = v32 + 1;
		}
		v34 = v27 - 1;
		v35 = (unsigned int*)((char*)&unk_140AE5200 + 44 * v23);
		if (*v35 > 1)
		{
			v36 = v20 / *v35;
			v37 = v36;
			if (v36)
			{
				v38 = 0;
				if (!(_DWORD)v36)
				{
					v38 = 32;
					v37 = HIDWORD(v36);
				}
				if (!(_WORD)v37)
				{
					v38 += 16;
					v37 >>= 16;
				}
				if (!(_BYTE)v37)
				{
					v38 += 8;
					v37 >>= 8;
				}
				if ((v37 & 0xF) == 0)
				{
					v38 += 4;
					v37 >>= 4;
				}
				if ((v37 & 3) == 0)
				{
					v38 += 2;
					v37 >>= 2;
				}
				if ((v37 & 1) == 0)
					++v38;
			}
			else
			{
				v38 = -1;
			}
			if (v38 < v34)
				v34 = v38;
		}
		v39 = v35[3];
		if (v39 > 1)
		{
			v40 = v21 / v39;
			v41 = v40;
			if (v40)
			{
				v42 = 0;
				if (!(_DWORD)v40)
				{
					v42 = 32;
					v41 = HIDWORD(v40);
				}
				if (!(_WORD)v41)
				{
					v42 += 16;
					v41 >>= 16;
				}
				if (!(_BYTE)v41)
				{
					v42 += 8;
					v41 >>= 8;
				}
				if ((v41 & 0xF) == 0)
				{
					v42 += 4;
					v41 >>= 4;
				}
				if ((v41 & 3) == 0)
				{
					v42 += 2;
					v41 >>= 2;
				}
				if ((v41 & 1) == 0)
					++v42;
			}
			else
			{
				v42 = -1;
			}
			if (v42 < v34)
				v34 = v42;
		}
		v43 = v35[6];
		if (v43 > 1)
		{
			v44 = v24 / v43;
			v45 = v44;
			if (v44)
			{
				v46 = 0;
				if (!(_DWORD)v44)
				{
					v46 = 32;
					v45 = HIDWORD(v44);
				}
				if (!(_WORD)v45)
				{
					v46 += 16;
					v45 >>= 16;
				}
				if (!(_BYTE)v45)
				{
					v46 += 8;
					v45 >>= 8;
				}
				if ((v45 & 0xF) == 0)
				{
					v46 += 4;
					v45 >>= 4;
				}
				if ((v45 & 3) == 0)
				{
					v46 += 2;
					v45 >>= 2;
				}
				if ((v45 & 1) == 0)
					++v46;
			}
			else
			{
				v46 = -1;
			}
			if (v46 < v34)
				v34 = v46;
		}
		v47 = *(_DWORD*)(v157 + 76);
		if ((unsigned int)v34 < v47)
			v47 = v34;
		v48 = v47;
		v49 = v20 >> v47;
		if (!v49)
			v49 = 1i64;
		v50 = v21 >> v47;
		v155 = v49;
		if (!v50)
			v50 = 1i64;
		v51 = v24 >> v47;
		v156 = v50;
		if (!v51)
			v51 = 1i64;
		v144 = v51;
		if (*(_DWORD*)(v157 + 80))
		{
			v52 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v157 + 56) + 712i64))(*(_QWORD*)(v157 + 56));
			v53 = v155;
			v54 = *(unsigned int*)(v52 + 56);
			while (v53 > v54 || v50 > v54 || v51 > v54)
			{
				v53 >>= 1;
				v55 = ++v48;
				if (!v53)
					v53 = 1i64;
				v50 >>= 1;
				if (!v50)
					v50 = 1i64;
				v51 >>= 1;
				if (!v51)
					v51 = 1i64;
				if (v34 < v55)
					v48 = v34;
			}
			v155 = v53;
			v156 = v50;
			v144 = v51;
			v7 = 0;
		}
		v56 = v27 - v48;
		v57 = 0i64;
		v58 = 0i64;
		v59 = 0i64;
		v60 = 0i64;
		v147 = v56;
		if ((__int64)v56 >= 2)
		{
			do
			{
				v61 = v51 >> v60;
				v62 = v60 + 1;
				if (!(v51 >> v60))
					v61 = 1i64;
				v57 += v146 * v61;
				v63 = v51 >> v62;
				if (!(v51 >> v62))
					v63 = 1i64;
				v60 += 2i64;
				v58 += v146 * v63;
			} while (v60 < v56 - 1);
		}
		if (v60 < v56)
		{
			v64 = v51 >> v60;
			if (!(v51 >> v60))
				v64 = 1i64;
			v59 = v146 * v64;
		}
		v149 = v59 + v57 + v58;
		if (v149)
		{
			v65 = sub_14018B280(48 * (v59 + v57 + v58) + 16, 0);
			if (v65)
			{
				*(_QWORD*)v65 = &off_140B5F110;
				v148 = (__int64)(v65 + 4);
			}
			else
			{
				v148 = 16i64;
			}
		}
		else
		{
			v148 = 0i64;
		}
		v66 = v56;
		v165 = 0;
		if (v22 - 1 < v48)
			v48 = v22 - 1;
		v163 = 1i64;
		v164 = 1i64;
		v67 = v22 - v48;
		v166 = v175;
		v167 = v176;
		v68 = 0;
		if (v67 < v56)
			v66 = v67;
		v69 = *(_DWORD*)(v157 + 72) == 1;
		v170 = v48;
		LOBYTE(v68) = v69;
		v151 = v66;
		v168 = v68 + 3;
		v70 = v146 * v66;
		v169[1] = v146 * v66;
		if (v146 * v66)
		{
			v71 = sub_14018B280(88 * v70 + 16, 0);
			if (v71)
			{
				v72 = (__int64)(v71 + 4);
				*(_QWORD*)v71 = &off_140B5F110;
				v154 = (__int64)(v71 + 4);
				v169[0] = (__int64)(v71 + 4);
			}
			else
			{
				v72 = 16i64;
				v154 = 16i64;
				v169[0] = 16i64;
			}
		}
		else
		{
			v72 = 0i64;
			v154 = 0i64;
			v169[0] = 0i64;
		}
		if (v70)
		{
			v73 = (_QWORD*)(v72 + 72);
			do
			{
				if (v73 != (_QWORD*)72)
				{
					*(v73 - 9) = 0i64;
					*(v73 - 8) = 0i64;
					*v73 = 0i64;
					v73[1] = 0i64;
				}
				v73 += 11;
				--v70;
			} while (v70);
		}
		v74 = sub_14018B280(48 * v51 + 16, 0);
		if (v74)
		{
			*(_QWORD*)v74 = &off_140B5F110;
			v153 = (__int64)(v74 + 4);
		}
		else
		{
			v153 = 16i64;
		}
		v75 = v148;
		v76 = v146;
		v77 = 0i64;
		v78 = (int*)v148;
		v152 = (int*)v148;
		v145 = 0i64;
		if (v146)
		{
			v79 = v178;
			v80 = v66;
			v81 = v177[6];
			v82 = 88 * v80;
			v143 = 88 * v80;
			while (1)
			{
				v83 = v77 % v173;
				if (!v80)
					goto LABEL_192;
				v84 = v154;
				v85 = v170;
				v86 = -(__int64)v170;
				v150 = v154;
				v158 = -(__int64)v170;
				do
				{
					v87 = v85 + v86;
					v159[0] = v87;
					v88 = v144 >> v87;
					v89 = 0i64;
					if (!(v144 >> v87))
						v88 = 1i64;
					v90 = v172 >> v85;
					if (!(v172 >> v85))
						v90 = 1i64;
					if (v88)
					{
						v91 = v153;
						v92 = v179;
						while (1)
						{
							v93 = v89 ? v89 * (v90 - 1) / (v88 - 1) : 0i64;
							if (v85 >= v81)
								break;
							v94 = 0i64;
							if (v79 < 2)
								break;
							if (v79 <= 3)
							{
								if (v93 || v83 >= v177[5])
									break;
								v97 = (_QWORD*)(v92 + 48 * (v85 + v81 * v83));
							}
							else
							{
								if (v79 != 4 || v83)
									break;
								v95 = v177[4];
								if (v85)
								{
									v96 = v85;
									do
									{
										v94 += v95;
										if (v95 > 1)
											v95 >>= 1;
										--v96;
									} while (v96);
								}
								if (v93 >= v95)
									break;
								v97 = (_QWORD*)(v92 + 48 * (v93 + v94));
							}
						LABEL_175:
							v98 = 3 * v89++;
							v99 = (_QWORD*)(v91 + 16 * v98);
							*v99 = *v97;
							v99[1] = v97[1];
							v99[2] = v97[2];
							v99[3] = v97[3];
							v99[4] = v97[4];
							v99[5] = v97[5];
							if (v89 >= v88)
							{
								v84 = v150;
								v78 = v152;
								LOBYTE(v87) = v159[0];
								goto LABEL_177;
							}
						}
						v97 = 0i64;
						goto LABEL_175;
					}
				LABEL_177:
					v100 = v155 >> v87;
					v162 = v88;
					if (!(v155 >> v87))
						v100 = 1i64;
					v101 = v156 >> v87;
					v160 = v100;
					if (!v101)
						v101 = 1i64;
					v161 = v101;
					if (v100 == *(_QWORD*)v153 && v101 == *(_QWORD*)(v153 + 8))
					{
						if (v88 <= 1 || v88 == v90)
						{
							v104 = (int*)v153;
							goto LABEL_190;
						}
						v102 = sub_1402B3300(v84, v153, v88);
						if (v102 < 0)
						{
							v103 = 0x141DE7340i64;
							goto LABEL_211;
						}
					}
					else
					{
						v102 = sub_1402C0CF0(v153, v88, (__int64)&v160, v100, v101, v84);
						if (v102 < 0)
						{
							v103 = 0x141DE7350i64;
						LABEL_211:
							v143 = v103;
							sub_1401A3130(14, 2, &v143, (unsigned int)v102);
						LABEL_278:
							if (v153)
								(**(void(__fastcall***)(__int64))(v153 - 16))(v153 - 16);
							sub_1402B1EA0(v169);
							if (v148)
								(**(void(__fastcall***)(__int64))(v148 - 16))(v148 - 16);
							goto LABEL_285;
						}
					}
					v78 = v152;
					v104 = *(int**)(v150 + 72);
				LABEL_190:
					v105 = 48 * v88;
					sub_1407DB590(v78, v104, v105);
					v80 = v151;
					++v85;
					v78 = (int*)((char*)v78 + v105);
					v84 = v150 + 88;
					v152 = v78;
					v86 = v158;
					v150 += 88i64;
				} while (v85 + v158 < v151);
				v77 = v145;
				v82 = v143;
			LABEL_192:
				v56 = v147;
				v106 = 0i64;
				v107 = 0i64;
				v108 = v80;
				if (v80 < v147)
				{
					if ((__int64)(v147 - v80) >= 2)
					{
						do
						{
							v109 = v144 >> v108;
							v110 = v108 + 1;
							if (!(v144 >> v108))
								v109 = 1i64;
							v106 += 48 * v109;
							v111 = v144 >> v110;
							if (!(v144 >> v110))
								v111 = 1i64;
							v108 += 2i64;
							v107 += 48 * v111;
						} while (v108 < v147 - 1);
						v79 = v178;
					}
					if (v108 < v147)
					{
						v112 = v144 >> v108;
						if (!(v144 >> v108))
							v112 = 1i64;
						v78 += 12 * v112;
					}
					v80 = v151;
					v78 = (int*)((char*)v78 + v106 + v107);
					v152 = v78;
				}
				v76 = v146;
				v154 += v82;
				v145 = ++v77;
				if (v77 >= v146)
				{
					v51 = v144;
					v66 = v151;
					v75 = v148;
					break;
				}
			}
		}
		v159[1] = v76;
		if (v76)
		{
			v113 = sub_14018B280(88 * v76 + 16, 0);
			v76 = v146;
			if (v113)
			{
				v114 = (__int64)(v113 + 4);
				*(_QWORD*)v113 = &off_140B5F110;
				v159[0] = (__int64)(v113 + 4);
			}
			else
			{
				v114 = 16i64;
				v159[0] = 16i64;
			}
		}
		else
		{
			v114 = 0i64;
			v159[0] = 0i64;
		}
		if (v76)
		{
			v115 = (_QWORD*)(v114 + 72);
			v116 = v76;
			do
			{
				if (v115 != (_QWORD*)72)
				{
					*(v115 - 9) = 0i64;
					*(v115 - 8) = 0i64;
					*v115 = 0i64;
					v115[1] = 0i64;
				}
				v115 += 11;
				--v116;
			} while (v116);
		}
		v117 = v144;
		if (v66 < v56)
		{
			v118 = v66 - 1;
			v119 = 0i64;
			if (v76)
			{
				v120 = v51 >> v118;
				if (!v120)
					v120 = 1i64;
				v143 = v120;
				while (1)
				{
					v121 = 0i64;
					v122 = 0i64;
					v123 = 0i64;
					if (v118 >= 2)
					{
						do
						{
							v124 = v117 >> v123;
							v125 = v123 + 1;
							if (!(v117 >> v123))
								v124 = 1i64;
							v121 += 48 * v124;
							v126 = v117 >> v125;
							if (!(v117 >> v125))
								v126 = 1i64;
							v123 += 2i64;
							v122 += 48 * v126;
						} while (v123 < v118 - 1);
					}
					if (v123 < v118)
					{
						v127 = v117 >> v123;
						if (!(v117 >> v123))
							v127 = 1i64;
						v75 += 48 * v127;
					}
					v128 = v121 + v122 + v75;
					if (v120 == 1)
					{
						v102 = sub_1402C2090(v128, v123, v147 - v118, (_QWORD*)v114);
						if (v102 < 0)
						{
							v143 = 0x141DE7330i64;
							sub_1401A3130(14, 2, &v143, (unsigned int)v102);
							goto LABEL_277;
						}
					}
					else
					{
						v102 = sub_1402C2380(v128, v120, v121, v147 - v118, v114);
						if (v102 < 0)
						{
							v143 = 0x141DE7320i64;
							sub_1401A3130(14, 2, &v143, (unsigned int)v102);
							goto LABEL_277;
						}
					}
					v117 = v144;
					v129 = v147;
					v75 = 48 * v120 + v128;
					v130 = v151 - v118;
					do
					{
						v131 = 0i64;
						v132 = v117 >> ((unsigned __int8)v130 + (unsigned __int8)v118);
						if (!v132)
							v132 = 1i64;
						do
						{
							v133 = 0i64;
							if (v130 < *(_QWORD*)(v114 + 48))
							{
								v134 = *(_DWORD*)(v114 + 68);
								if (v134 >= 2)
								{
									if (v134 > 3)
									{
										if (v134 != 4)
											goto LABEL_257;
										v135 = *(_QWORD*)(v114 + 32);
										if (v130)
										{
											v136 = v130;
											do
											{
												v133 = (_QWORD*)((char*)v133 + v135);
												if (v135 > 1)
													v135 >>= 1;
												--v136;
											} while (v136);
										}
										if (v131 >= v135)
										{
											v133 = 0i64;
											goto LABEL_257;
										}
										v137 = (unsigned __int64)v133 + v131;
										goto LABEL_256;
									}
									if (!v131 && *(_QWORD*)(v114 + 40))
									{
										v137 = v130;
									LABEL_256:
										v133 = (_QWORD*)(*(_QWORD*)(v114 + 72) + 48 * v137);
									}
								}
							}
						LABEL_257:
							++v131;
							v75 += 48i64;
							*(_QWORD*)(v75 - 48) = *v133;
							*(_QWORD*)(v75 - 40) = v133[1];
							*(_QWORD*)(v75 - 32) = v133[2];
							*(_QWORD*)(v75 - 24) = v133[3];
							*(_QWORD*)(v75 - 16) = v133[4];
							*(_QWORD*)(v75 - 8) = v133[5];
						} while (v131 < v132);
						++v130;
					} while (v118 + v130 < v129);
					v76 = v146;
					v120 = v143;
					++v119;
					v114 += 88i64;
					if (v119 >= v146)
					{
						v56 = v129;
						goto LABEL_263;
					}
				}
			}
			v56 = v147;
		}
	LABEL_263:
		v69 = *(_DWORD*)(v157 + 72) == 2;
		v138 = *(int*)(v157 + 80);
		v160 = v155;
		v162 = v117;
		v163 = v76;
		v161 = v156;
		v139 = 0;
		v164 = v56;
		if (v69)
			v139 = 4;
		v69 = *(_DWORD*)(v157 + 72) == 1;
		v165 = v139;
		v166 = v175;
		v167 = v176;
		v168 = v69 + 3;
		if ((int)v138 > 0)
		{
			if ((int)v138 > 2)
			{
				if ((_DWORD)v138 == 3)
				{
				LABEL_270:
					v7 = 40;
					goto LABEL_272;
				}
				if ((_DWORD)v138 != 4)
				{
					if ((_DWORD)v138 != 5)
						goto LABEL_272;
					goto LABEL_270;
				}
			}
			v7 = 8;
		}
	LABEL_272:
		v140 = *(__int64**)(*(_QWORD*)(v157 + 56) + 6336i64);
		v141 = v138;
		v142 = dword_140AE7EE0[v138];
		if (v140)
		{
			v102 = sub_1402B3B70(v140, v148, v149, (__int64)&v160, dword_140AE7EC8[v141], v7, v142, v157 + 64);
			if (v102 >= 0)
			{
				v102 = sub_1402B1940(v157, 0);
			LABEL_277:
				sub_1402B1EA0(v159);
				goto LABEL_278;
			}
		}
		else
		{
			v102 = -2147024809;
		}
		v149 = 0x141DE7310i64;
		sub_1401A3130(14, 2, &v149, (unsigned int)v102);
		goto LABEL_277;
	}
	v145 = 0x141DE7360i64;
	sub_1401A3130(14, 2, &v145, (unsigned int)v11);
LABEL_284:
	v102 = sub_1402B1940(a1, v11);
LABEL_285:
	if (v179)
		sub_14018B900(v179, 0);
	if (v180)
		sub_14018B900(v180, 0);
	return (unsigned int)v102;
}
// 1402B10A3: conditional instruction was optimized away because r12.8!=0
// 1402B1667: conditional instruction was optimized away because r10.8!=0
// 140AE7EC8: using guessed type int dword_140AE7EC8[6];
// 140AE7EE0: using guessed type int dword_140AE7EE0[6];
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();

